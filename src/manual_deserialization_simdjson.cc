#include <string.h>
#include <stdarg.h>
#include <unordered_map>

#include "manual_deserialization.h"
#include "hash_table.cc"
// NOTE(agw): if we can assume every key is unique, then
// we don't need to do a string compare...
//#define strncmp(...) 0
#include "generated/gperf-inc.cc"
#include "resources-gperf.cc"
//#undef strncmp

// TODO(agw); the fhir_r4 nonesense should be a using statement


using namespace fhir_deserialize;

inline int
IsUnion(ClassMemberMetadata *meta)
{
	return meta->types[1].type != ValueType::Unknown;
}

typedef struct ClassMemberPtrAndUnionType ClassMemberPtrAndUnionType;
struct ClassMemberPtrAndUnionType
{
	ClassMemberMetadata *mem;
	ValueTypeAndName union_type;
	int mem_index;
};

void*
Resource_Deserialize(Arena *arena, ResourceType type, cJSON *json);

fhir_r4::Resource*
Resource_Deserialize_Impl_SIMDJSON(Arena *arena, 
                                   DeserializationOptions *options,
                                   ResourceType type,
                                   simdjson::ondemand::object simdjson_object);

static ResourceType
ResourceTypeFromString8(String8 str)
{
	const ResourceNameTypePair *pair = Perfect_Hash::in_word_set((char*)str.str, str.size);
	return (ResourceType)pair->type;
}

String8
String8FromResourceType(ResourceType type)
{
	return resource_type_pairs[(int)type].str;
}

//TODO(agw): this is a repeat function
//TODO(agw): we could store both names, not sure if worth it?
String8
GetClassNameFromUnionName(Arena* arena, String8 union_name, String8 member_name)
{
	String8 str = PushStr8Copy(arena, union_name);
	String8 result = Str8Skip(str, member_name.size);
	result.str[0] = CharToUpper(result.str[0]);
	return result;
}

// NOTE (agw): Memory Pointers and access ========================================================
typedef struct ValuesList
{
	ValueTypeAndName value_type;
    
	// NOTE(agw): is_array, value will be ptr to the array of values
	// NOTE(agw): else, value will be value, could be String8 could be ResourceType... 
	boolean is_array;
	String8 union_value_name;
    
	U64 value_count;
	U64 value_size;
    
	void *value;
} ValuesList;

int
NumTypesFull(ClassMemberMetadata *meta)
{
	int index = 0;
	while (meta->types[index].type != ValueType::Unknown &&
           index < ArrayCount(meta->types))
	{
		index++;
	}
	return index;
}

U64
ValuesListValueSize(ValueTypeAndName type, boolean is_array)
{
	return value_type_to_size[(int)type.type].size;
}

ValuesList
ValuesListFromMeta(Arena *arena, void* resource, ClassMemberMetadata *meta, U64 previous_value)
{
	ValuesList list = {};
	list.is_array = (meta->cardinality == Cardinality::ZeroToInf ||
                     meta->cardinality == Cardinality::OneToInf);
	list.value_count = 1;
	list.value_type = meta->types[0];
    
    
    
	int num_full_types = NumTypesFull(meta);
	if (num_full_types > 1) // Union
	{
		Assert(previous_value < num_full_types);
		list.union_value_name = meta->types[previous_value].name;
		list.value_type = meta->types[previous_value];
	}
    
	if (list.is_array)
	{
		list.value_count = previous_value;
	}
    
	if (list.value_type.type == ValueType::ClassReference)
	{
		ResourceType res_type = ResourceTypeFromString8(list.value_type.name);
		ClassMetadata *class_meta = &class_metadata[(int)res_type];
		list.value_size = class_meta->size;
	}
	else
	{
		list.value_size = value_type_to_size[(int)list.value_type.type].size;
	}
    
	// NOTE(alex): when deserializing, the value _must_ be a pointer or else you lose data...
	list.value = (char*)resource + meta->offset;
    
	if (resource == NULL)
	{
		list.value = NULL;
		list.value_count = 0;
		list.value_size = 0;
	}
    
	return list;
}

enum ValuePtrType
{
	Pointer,
	StartOfValue
};
typedef struct ValuePtr
{
	ValuePtrType ptr_type;
	ValueTypeAndName type;
	String8 union_value_name;
	void *ptr;
} ValuePtr;

ValuePtr
GetValuePtr(ValuesList list, int member_index)
{
	ValuePtr mem_ptr = {};
	Assert(member_index < list.value_count);
	mem_ptr.type = list.value_type;
	mem_ptr.union_value_name = list.union_value_name;
	mem_ptr.ptr = (char*)list.value + list.value_size * member_index;
	return mem_ptr;
}

ValuePtr
GetSerializationValuePtr(ValuesList list, int member_index)
{
	ValuePtr ptr = GetValuePtr(list, member_index);
	if (list.is_array)
	{
		void* resource_array_ptr = (void*)*(size_t*)list.value;
		ptr.ptr = (char*)resource_array_ptr + list.value_size * member_index;
		ptr.ptr_type = ValuePtrType::StartOfValue;
	}
	return ptr;
}

// NOTE (agw): Error Logging ========================================================
enum class LogType
{
	Unknown,
	Information,
	Warning,
	Error
};


struct LogNode
{
	LogNode* next;
	LogType type;
	String8 log_message;
};

struct LogList 
{
	LogNode* first;
	LogNode* last;
	size_t node_count;
};

struct Log
{
	Arena *arena;
	LogList logs;
};

// TODO(agw): have a log per thread (ThreadCtx)
static Log global_log = {};

void
AddError(Log *log, LogType type, char* format, ...)
{
    return;
	va_list args = 0;
	va_start(args, format);
	String8 log_message = PushStr8FV(log->arena, format, args);
	va_end(args);
    
	LogNode *node = PushStruct(log->arena, LogNode);
	node->type = type;
	node->log_message = log_message;
	QueuePush(log->logs.first, log->logs.last, node);
}

void
PrintLog(Log *log)
{
	for (LogNode *node = log->logs.first; node; node = node->next)
	{
		switch (node->type)
		{
			case LogType::Error:
            printf("LOG_ERROR: ");
            break;
			case LogType::Information:
            printf("LOG_INFORMATION: ");
            break;
			case LogType::Warning:
            printf("LOG_WARNING: ");
            break;
		}
		printf("%.*s\n", (int)node->log_message.size, node->log_message.str);
	}
}

// NOTE (agw): Deserialization ========================================================

inline const MemberNameAndOffset*
GetMemberMetadata(ClassMetadata *in_class_metadata,
                  ResourceType type, 
                  String8 unvalidated_key)
{
	const MemberNameAndOffset *mem_and_offset = ClassMemberLookup(type, unvalidated_key);
    
	if (mem_and_offset == NULL)
	{
		AddError(&global_log, LogType::Error, "Could not find key \"%S\" on resource type \"%S\"",
		         unvalidated_key, String8FromResourceType(type));
		return NULL;
	}

	return mem_and_offset;
}

inline void*
PushResource(Arena *arena, ResourceType type)
{
	return ArenaPush(arena, class_metadata[(int)type].size);
}


inline NullableInt32
Deserialize_NullableInt32( double _double,
                          ValueType type,
                          String8 file_name,
                          String8 class_name,
                          String8 member_name)
{				// TODO(agw): this may need to be casted to int...need
    NullableInt32 ret = { 0 };

    if (type == ValueType::Integer)
    {
        ret = { true, (int32_t)_double };
    }
    else if (type == ValueType::PositiveInt)
    {
        if ((int32_t)_double <= 0) {
            AddError(&global_log, 
                     LogType::Error,
                     "File: %S Class \"%S\" field: \"%S\" must be greater than 0.",
                     file_name,
                     class_name,
                     member_name);
        }

        ret = { true, (int32_t)_double };
    }
    else if(type == ValueType::UnsignedInt)
    {
        if ((int32_t)_double < 0) {
            AddError(&global_log, 
                     LogType::Error,
                     "File: %S Class \"%S\" field: \"%S\" must be 0 or greater.",
                     file_name,
                     class_name,
                     member_name);
        }
        ret = { true, (int32_t)_double };
    }

    return ret;
}


ISO8601_Time
Deserialize_ISO8601(String8 str,
                    ValueType type)
{

    U32 required, optional, exclude = 0;
    switch (type) {
        case ValueType::Date:
            required = ISO_YEAR;
            optional = ISO_MONTH | ISO_DAY;
            exclude = ISO_TIME | ISO_TIME_OFFSET;
            break;

        case ValueType::DateTime:
            required = ISO_YEAR;
            optional = ISO_MONTH | ISO_DAY | ISO_TIME | ISO_TIME_OFFSET;
            exclude = ISO_TIME;
            break;

        case ValueType::Instant:
            required = ISO_YEAR | ISO_MONTH | ISO_DAY | ISO_TIME | ISO_MILLISECOND | ISO_TIME_OFFSET;
            optional = 0;
            exclude = 0;
            break;

        case ValueType::Time:
            required = ISO_TIME;
            optional = 0;
            exclude = ISO_TIME_OFFSET;
            break;
    }

    return Deserialize_ISO8601_Impl(str,
                         required,
                         optional,
                         exclude);
}


typedef struct ArrayValue ArrayValue;
struct ArrayValue
{
	void *data;
	U64 size;
};


typedef struct ArrayValueNode ArrayValueNode;
struct ArrayValueNode
{
	ArrayValueNode *next;
	ArrayValue v;
};

typedef struct ArrayValueList ArrayValueList;
struct ArrayValueList
{
	ArrayValueNode *first;
	ArrayValueNode *last;
	U64 node_count;
	U64 total_size;
};


void
ArrayValueListPush(Arena *arena, ArrayValueList *list, ArrayValue array_value)
{
	ArrayValueNode *node = PushStructNoZero(arena, ArrayValueNode);
	node->v = array_value;
	QueuePush(list->first, list->last, node);
	list->node_count += 1;
	list->total_size += array_value.size;
}

void*
Deserialize_Array(Arena *arena,
                  DeserializationOptions *options,
                  const MemberNameAndOffset *mem_info,
                  ClassMetadata *meta,
                  simdjson::ondemand::array array,
                  U64 *count)
{
	Temp temp = ScratchBegin(&arena, 1);
	ArrayValueList list = {};
    ValueType value_type = meta->members[mem_info->member_index].types[mem_info->type_index].type;
    
	int field_count = 0;
	for (auto field : array)
	{
		field_count++;
		simdjson::ondemand::value value = field.value();
		switch (value.type())
		{
            
			case simdjson::ondemand::json_type::string: // copy into dest
			{
				std::string_view str_view;
				auto res = value.get(str_view);
				Assert(res == simdjson::error_code::SUCCESS);

                if (value_type == ValueType::Time ||
                    value_type == ValueType::DateTime ||
                    value_type == ValueType::Date ||
                    value_type == ValueType::Instant)
                {

                    String8 str = {};
                    str.size = str_view.size();
                    str.str = (U8*)str_view.data();

                    ISO8601_Time *time_ptr = (ISO8601_Time*)ArenaPushNoZero(arena, sizeof(ISO8601_Time));

                    *time_ptr = Deserialize_ISO8601(str, value_type);
                
                    ArrayValue value;
                    value.data = (void*)time_ptr;
                    value.size = sizeof(ISO8601_Time);
                    ArrayValueListPush(temp.arena, &list, value);
                }
                else if (value_type == ValueType::Integer64)
                {
                    // TODO(agw): parse integer64
                    //*(NullableInt64*)dest = { true, (int64_t)_double };
                }
                else
                {
                    String8 str = {};
                    str.size = str_view.size();
                    str.str = (U8*)ArenaPushNoZero(arena, str_view.size());
                    MemoryCopy(str.str, str_view.data(), str.size);

                    String8 *str_ptr = (String8*)ArenaPushNoZero(arena, sizeof(String8));
                    *str_ptr = str;
                
                    ArrayValue value;
                    value.data = (void*)str_ptr;
                    value.size = sizeof(String8);
                    ArrayValueListPush(temp.arena, &list, value);
                }
			} break;
			case simdjson::ondemand::json_type::number: // copy into dest
			{
				// TODO(agw): this may need to be casted to int...
				double double_value;
				auto res = value.get(double_value);
				Assert(res == simdjson::error_code::SUCCESS);
				if (value_type == ValueType::Integer ||
                    value_type == ValueType::UnsignedInt ||
                    value_type == ValueType::PositiveInt)
				{

                    NullableInt32 integer_value = Deserialize_NullableInt32(double_value, 
                                                                            value_type,
                                                                            options->file_name,
                                                                            meta->name,
                                                                            meta->members[mem_info->member_index].name);

                    NullableInt32* arena_integer_value = (NullableInt32*)ArenaPushNoZero(arena, sizeof(NullableInt32));
                    *arena_integer_value = integer_value;

					ArrayValue value;
                    value.data = arena_integer_value;
					value.size = sizeof(NullableInt32);
					ArrayValueListPush(temp.arena, &list, value);
				}
				else
				{
                    auto raw_value = field.value().raw_json();
                    Assert(raw_value.error() == simdjson::error_code::SUCCESS);

                    std::string_view view = raw_value.value_unsafe();

					String8 str = {};
                    str.size = view.size();
					str.str = (U8*)ArenaPushNoZero(arena, str.size);
                    MemoryCopy(str.str, view.data(), str.size);

                    String8 *str_ptr = (String8*)ArenaPushNoZero(arena, sizeof(String8));
                    *str_ptr = str;
                    
                    ArrayValue value;
                    value.data = (void*)str_ptr;
                    value.size = sizeof(String8);
                    ArrayValueListPush(temp.arena, &list, value);
				}
			} break;
			case simdjson::ondemand::json_type::boolean: 
			{
                NullableBoolean* _boolean = (NullableBoolean*)ArenaPushNoZero(arena, sizeof(NullableBoolean));
				auto res = value.get(*(bool*)(&_boolean->value));
				// TODO(agw): this should be linked to fhir classes
				Assert(res == simdjson::error_code::SUCCESS);
				ArrayValue value;
				value.data = _boolean;
				value.size = sizeof(_boolean);
				ArrayValueListPush(temp.arena, &list, value);
			} break;
			case simdjson::ondemand::json_type::object: // copy into dest
			{
				simdjson::ondemand::object child;
				auto res = value.get(child);
                
				ResourceType res_type = (ResourceType)mem_info->member_first_type_class_type;
				U64 size = 0;
				fhir_r4::Resource *resource = Resource_Deserialize_Impl_SIMDJSON(arena,
				                                                    options,
																	res_type,
																	child);
				// TODO(agw): we don't want to have to do this copy
				size_t *resource_ptr = (size_t*)ArenaPushNoZero(arena, sizeof(size_t));
				*resource_ptr = (size_t)resource;

				ArrayValue value;
				value.data = (void*)resource_ptr;
				value.size = sizeof(size_t);
				ArrayValueListPush(temp.arena, &list, value);
			} break;
			case simdjson::ondemand::json_type::array: // copy into dest
			{
				// NOTE(agw): assuming we would never have this option
				AddError(&global_log, LogType::Error, "Array of arrays");
				Assert(false);
			} break;
		}
	}

	void *output_array;
	size_t size_allocated = temp.arena->pos - temp.pos;
	output_array = ArenaPushNoZero(arena, list.total_size);
	char* output_array_ptr = (char*)output_array;
    
	for (ArrayValueNode *node = list.first; node; node = node->next)
	{
		MemoryCopy(output_array_ptr, node->v.data, node->v.size);
		output_array_ptr += node->v.size;
	}

	ScratchEnd(temp);
    
	*count = field_count;
	return output_array;
}

fhir_r4::Resource*
Resource_Deserialize_Impl_SIMDJSON(Arena *arena, 
                                   DeserializationOptions *options,
                                   ResourceType type,
                                   simdjson::ondemand::object simdjson_object)
{
	ResourceType resource_type = type;
    
	fhir_r4::Resource* out;
	
	// TODO(alex): this may be a little hack-y...idk
	if (resource_type == ResourceType::Unknown ||
		resource_type == ResourceType::Resource)
	{
		std::string_view resource_type_value;
		simdjson::error_code error = simdjson_object["resourceType"].get(resource_type_value);
		if (error != simdjson::error_code::SUCCESS)
		{
			return nullptr;
		}

		String8 res_type_str = {};
		res_type_str.str = (U8*)resource_type_value.data();
		res_type_str.size = resource_type_value.size();
		resource_type = ResourceTypeFromString8(res_type_str);

		simdjson_object.reset();
	}

	out = (fhir_r4::Resource*)PushResource(arena, resource_type);
	out->resourceType = (fhir_r4::ResourceType)resource_type;

	ClassMetadata *meta = &class_metadata[(int)resource_type];


	// TODO(agw) handle the case where we don't know the type ahead of time
	BitField required_members = meta->required_members;
    
	bool type_found = resource_type != ResourceType::Unknown && resource_type != ResourceType::Resource;
	int index = -1;
	for (auto field : simdjson_object)
	{
		index++;
        
		std::string_view key_view = field.unescaped_key();
		String8 key = {};
		key.str = (U8*)key_view.data();
		key.size = key_view.size();
        
        const MemberNameAndOffset *mem_info = GetMemberMetadata(options->class_metadata,
                                                                resource_type,
                                                                key);

		if (mem_info == NULL)
			continue;

		// NOTE(agw): the first index is resourceType, let's skip that
		if (mem_info->member_index == 0)
			continue;
        
		if ((ValueType)mem_info->union_type_type != ValueType::Unknown)
		{
			// NOTE(agw): get union_type offset in struct

			ClassMemberMetadata *enum_type_meta = &meta->members[mem_info->member_index + 1];
			U32 *enum_type = (U32*)((char*)out + enum_type_meta->offset);
			*enum_type = (U32)mem_info->type_index;
		}
        
		void *dest = (char*)out + mem_info->offset;
		simdjson::ondemand::value value = field.value();
		switch (value.type())
		{
			case simdjson::ondemand::json_type::string: // copy into dest
			{
				std::string_view str_view;
				auto res = value.get(str_view);
				Assert(res == simdjson::error_code::SUCCESS);

                // TODO(agw): could possibly be a switch statement for each type of time
                ClassMemberMetadata *mem_meta = &meta->members[mem_info->member_index];
                ValueType value_type = mem_meta->types[mem_info->type_index].type;
                if (value_type == ValueType::Time ||
                    value_type == ValueType::DateTime ||
                    value_type == ValueType::Date ||
                    value_type == ValueType::Instant)
                {

                    String8 str = {};
                    str.size = str_view.size();
                    str.str = (U8*)str_view.data();
                    *(ISO8601_Time*)dest = Deserialize_ISO8601(str, mem_meta->types[mem_info->type_index].type);
                }
                else if (mem_meta->types[mem_info->type_index].type == ValueType::Integer64)
                {
                    // TODO(agw): parse integer64
                    //*(NullableInt64*)dest = { true, (int64_t)_double };
                }
                else
                {
                    String8 str = {};
                    str.size = str_view.size();
                    str.str = (U8*)ArenaPushNoZero(arena, str.size);
                    MemoryCopy(str.str, str_view.data(), str.size);
                    *(String8*)dest = str;
                }

                BitField_ResetIndex(&required_members, mem_info->member_index);
			} break;
			case simdjson::ondemand::json_type::number:
			{
                ClassMemberMetadata *mem_meta = &meta->members[mem_info->member_index];
                ValueType value_type = mem_meta->types[mem_info->type_index].type;
                if (value_type == ValueType::Integer ||
                    value_type == ValueType::PositiveInt ||
                    value_type == ValueType::UnsignedInt
                )
                {
                    double _double;
                    auto res = value.get(_double);
                    Assert(res == simdjson::error_code::SUCCESS);
                    *(NullableInt32*)dest = Deserialize_NullableInt32(_double,
                                                                    value_type,
                                                                    options->file_name,
                                                                    meta->name,
                                                                    meta->members[mem_info->member_index].name);
                }
                else
                {
                    auto raw_value = field.value().raw_json();
                    Assert(raw_value.error() == simdjson::error_code::SUCCESS);

                    std::string_view view = raw_value.value_unsafe();

                    String8 str = {};
                    str.size = view.size();
                    str.str = (U8*)ArenaPushNoZero(arena, str.size);
                    MemoryCopy(str.str, view.data(), str.size);
                    *(String8*)dest = str;

                    //*(NullableDouble*)dest = { true, _double };
                }

                BitField_ResetIndex(&required_members, mem_info->member_index);
			} break;
			case simdjson::ondemand::json_type::boolean: // copy into dest
			{
				bool _boolean;
				auto res = value.get(_boolean);
				Assert(res == simdjson::error_code::SUCCESS);
                *(NullableBoolean*)dest = { true, (B32)_boolean };
                BitField_ResetIndex(&required_members, mem_info->member_index);
			} break;
			case simdjson::ondemand::json_type::object: // copy into dest
			{
				simdjson::ondemand::object child;
				auto res = value.get(child);
                
				// TODO(agw): check if it would be faster if inside an "else" clause
				ResourceType type;
				if ((ValueType)mem_info->union_type_type == ValueType::ClassReference)
				{
					type = (ResourceType)mem_info->union_resource_type;
				}
				else
				{
					type = (ResourceType)mem_info->member_first_type_class_type;
				}
                
				void *resource = Resource_Deserialize_Impl_SIMDJSON(arena, options, type, child);
				*(size_t*)dest = (size_t)resource;
				BitField_ResetIndex(&required_members, mem_info->member_index);
			} break;
			case simdjson::ondemand::json_type::array:
			{
				simdjson::ondemand::array arr;
				auto res = value.get(arr);
				U64 count = 0;

				void *array_result = Deserialize_Array(arena, 
				                                       options,
				                                       mem_info,
				                                       meta,
				                                       arr,
				                                       &count);
				*(size_t*)dest = (size_t)array_result;
                
				ClassMemberMetadata *prev_mem = &meta->members[mem_info->member_index-1];
				void *count_dest = (char*)out + prev_mem->offset;
				// TODO(agw): need to link this 
				Assert(sizeof(count) == prev_mem->size);
				*(size_t*)count_dest = count;

				BitField_ResetIndex(&required_members, mem_info->member_index);
			} break;
		}
	}

	// TODO(agw): simd compare? 
	for (int i = 0; i < ArrayCount(required_members.values); i++)
	{
		if (required_members.values[i] != 0)
		{
			size_t copy = required_members.values[i];
			int index = 0;
			while (copy > 0)
			{
				if (copy & 1)
				{
					String8 field_name = meta->members[index].name;
					AddError(&global_log, 
					         LogType::Error,
					         "File: %S Class \"%S\" is missing field: \"%S\"",
					         options->file_name,
					         meta->name,
					         field_name);
				}

				copy >>= 1;
				index++;
			}
		}
	}
    
	return out;
}

fhir_r4::Resource*
Resource_Deserialize_SIMDJSON(Arena *arena, 
                              DeserializationOptions *options,
                              ResourceType assumed_type,
                              simdjson::ondemand::object simdjson_object)
{
	TimeFunction;
	return Resource_Deserialize_Impl_SIMDJSON(arena,
	                                          options,
	                                          assumed_type,
	                                          simdjson_object);
}