#include <string.h>
#include <stdarg.h>
#include <unordered_map>

#include "fhir_r4_types.h"
#include "native_deserializer.h"
// NOTE(agw): if we can assume every key is unique, then
// we don't need to do a string compare...
//#define strncmp(...) 0

namespace native_fhir
{
	namespace FHIR_VERSION
	{
		#include "generated/gperf-inc.cc"
		#include "generated/resource_types.cc"
	};
};
//#undef strncmp

using namespace native_fhir;
using namespace FHIR_VERSION;

// TODO(agw): this FHIR_VERSION should be a macro for which namespace to use
FHIR_VERSION::Resource*
Resource_Deserialize_Impl_SIMDJSON(ND_Context *context,
                                   Arena *arena,
                                   DeserializationOptions *options,
                                   ResourceType type,
                                   simdjson::ondemand::object simdjson_object);


/////////////////////////////////////
// NOTE (agw): Resource Type and String Conversion ===============================

static ResourceType
ResourceTypeFromString8(String8 str)
{
	const ResourceNameTypePair *pair = ResourceType_Gperf::ResourceTypeLookup((char*)str.str, str.size);
	return (ResourceType)pair->type;
}

inline String8
String8FromResourceType(ResourceType type)
{
	return resource_type_pairs[(int)type].str;
}

inline NullableInt32
Deserialize_NullableInt32(ND_Context *context,
                          double _double,
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
			AddError(&context->log,
			         LogType::Error,
			         "File: %S Class \"%S\" field: \"%S\" must be greater than 0.",
			         file_name,
			         class_name,
			         member_name);
		}

		ret = { true, (int32_t)_double };
	}
	else if (type == ValueType::UnsignedInt)
	{
		if ((int32_t)_double < 0) {
			AddError(&context->log,
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

/////////////////////////////////////
// NOTE (agw): ISO8601 Time ========================================================

ISO8601_Time
Deserializer_Deserialize_ISO8601(String8 str,
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
			optional = ISO_MONTH | ISO_DAY | ISO_TIME | ISO_MILLISECOND | ISO_TIME_OFFSET;
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

/////////////////////////////////////
// NOTE (agw): ArrayValues ========================================================

#define ArrayValueLit(ptr, type) { (void*)(ptr), sizeof(type) }

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

/////////////////////////////////////
// NOTE (agw): String View Conversion ========================================================

inline String8
Str8FromStringView(std::string_view view)
{
	String8 str = {};
	str.size = view.size();
	str.str = (U8*)view.data();
	return str;
}

inline NullableString8
NullableStr8FromStringView(std::string_view view)
{
	NullableString8 str = {};
	str.size = view.size();
	str.str = (U8*)view.data();
	str.has_value = TRUE;
	return str;
}

inline NullableString8
PushStr8FromStringView(Arena *arena,
                       std::string_view view)
{
	NullableString8 str = {};
	str.size = view.size();
	str.str = (U8*)ArenaPushNoZero(arena, str.size);
	MemoryCopy(str.str, view.data(), str.size);
	return str;
}

inline NullableString8
PushNullableStr8FromStringView(Arena *arena,
                               std::string_view view)
{
	NullableString8 str = {};
	str.size = view.size();
	str.str = (U8*)ArenaPushNoZero(arena, str.size);
	str.has_value = TRUE;
	MemoryCopy(str.str, view.data(), str.size);
	return str;
}

/////////////////////////////////////
// NOTE (agw): Deserialization ========================================================

void*
Deserialize_Array(ND_Context *context,
                  Arena *arena,
                  DeserializationOptions *options,
                  const MemberNameAndOffset *mem_info,
                  SerializedClassMetadata *meta,
                  simdjson::ondemand::array array,
                  U64 *count)
{
	Temp temp = DLL_Scratch_Begin(context, &arena, 1);
	ArrayValueList list = {};
	SerializedClassMemberMetadata *mem_meta = M_GetClassMemberMetadata(meta, mem_info->member_index);
	SerializedValueTypeAndName vt = M_GetClassMemberType(mem_meta, mem_info->type_index);
	ValueType value_type = vt.type;
    
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
					String8 str = Str8FromStringView(str_view);
					ISO8601_Time *time_ptr = PushStructNoZero(arena, ISO8601_Time);
					*time_ptr = Deserializer_Deserialize_ISO8601(str, value_type);
                
					ArrayValue value = ArrayValueLit(time_ptr, ISO8601_Time);
					ArrayValueListPush(temp.arena, &list, value);
				}
				else if (value_type == ValueType::Integer64)
				{
					// TODO(agw): parse integer64
					//*(NullableInt64*)dest = { true, (int64_t)_double };
				}
				else
				{
					NullableString8 str = PushNullableStr8FromStringView(arena, str_view);

					NullableString8 *str_ptr = PushStructNoZero(arena, NullableString8);
					*str_ptr = str;

					ArrayValue value = ArrayValueLit(str_ptr, NullableString8);
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

					M_StringHandle name = mem_meta->name;
					String8 mem_name = M_GetStringFromHandle(options->meta_file, name);
					String8 meta_name = M_GetStringFromHandle(options->meta_file, meta->name);
					NullableInt32 integer_value = Deserialize_NullableInt32(context,
					                                                        double_value,
					                                                        value_type,
					                                                        options->file_name,
					                                                        meta_name,
					                                                        mem_name);

					NullableInt32* int_ptr = PushStructNoZero(arena, NullableInt32);
					*int_ptr = integer_value;

					ArrayValue value = ArrayValueLit(int_ptr, NullableInt32);
					ArrayValueListPush(temp.arena, &list, value);
				}
				else
				{
					auto raw_value = field.value().raw_json();
					Assert(raw_value.error() == simdjson::error_code::SUCCESS);

					std::string_view view = raw_value.value_unsafe();

					NullableString8 str = PushNullableStr8FromStringView(arena, view);

					NullableString8 *str_ptr = PushStructNoZero(arena, NullableString8);
					*str_ptr = str;
                    
					ArrayValue value = ArrayValueLit(str_ptr, NullableString8);
					ArrayValueListPush(temp.arena, &list, value);
				}
			} break;
			case simdjson::ondemand::json_type::boolean:
			{
				NullableBoolean* _boolean = (NullableBoolean*)ArenaPushNoZero(arena, sizeof(NullableBoolean));
				auto res = value.get(*(bool*)(&_boolean->value));
				// TODO(agw): this should be linked to fhir classes
				Assert(res == simdjson::error_code::SUCCESS);

				ArrayValue value = ArrayValueLit(_boolean, NullableBoolean);
				ArrayValueListPush(temp.arena, &list, value);
			} break;
			case simdjson::ondemand::json_type::object: // copy into dest
			{
				simdjson::ondemand::object child;
				auto res = value.get(child);
                
				ResourceType res_type = (ResourceType)mem_info->member_first_type_class_type;
				U64 size = 0;
				FHIR_VERSION::Resource *resource = Resource_Deserialize_Impl_SIMDJSON(
					context,
					arena,
					options,
					res_type,
					child);
				// TODO(agw): we don't want to have to do this copy
				size_t *resource_ptr = PushStructNoZero(arena, size_t);
				*resource_ptr = (size_t)resource;

				ArrayValue value = ArrayValueLit(resource_ptr, size_t);
				ArrayValueListPush(temp.arena, &list, value);
			} break;
			case simdjson::ondemand::json_type::array: // copy into dest
			{
				// NOTE(agw): assuming we would never have this option
				AddError(&context->log, LogType::Error, "Array of arrays");
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

inline const MemberNameAndOffset*
GetMemberMetadata(ND_Context *context,
                  ResourceType type,
                  String8 unvalidated_key)
{
	const MemberNameAndOffset *mem_and_offset = ClassMemberLookup(type, unvalidated_key);
    
	if (mem_and_offset == NULL)
	{
		AddError(&context->log, LogType::Error, "Could not find key \"%S\" on resource type \"%S\"",
		         unvalidated_key, String8FromResourceType(type));
		return NULL;
	}

	return mem_and_offset;
}

FHIR_VERSION::Resource*
Resource_Deserialize_Impl_SIMDJSON(ND_Context *context,
                                   Arena *arena,
                                   DeserializationOptions *options,
                                   ResourceType type,
                                   simdjson::ondemand::object simdjson_object)
{
	ResourceType resource_type = type;
    
	FHIR_VERSION::Resource* out;
	
	/////////////////////
	// ~ Get resource type if unknown
	{
		if (resource_type == ResourceType::Unknown ||
			resource_type == ResourceType::Resource)
		{
			std::string_view resource_type_value;
			simdjson::error_code error = simdjson_object["resourceType"].get(resource_type_value);
			if (error != simdjson::error_code::SUCCESS)
			{
				const char *msg = simdjson::error_message(error);
				printf("%s\n", msg);
				return nullptr;
			}

			String8 res_type_str = Str8FromStringView(resource_type_value);
			resource_type = ResourceTypeFromString8(res_type_str);

			simdjson_object.reset();
		}
	}

	SerializedClassMetadata *meta = M_GetClassMetadata(options->meta_file, (int)resource_type);
	out = (FHIR_VERSION::Resource*)ArenaPush(arena, meta->size);
	out->resourceType = (ResourceType)resource_type;

    
	int index = -1;
	for (auto field : simdjson_object)
	{
		index++;
        
		String8 key = Str8FromStringView(field.unescaped_key());
        
		const MemberNameAndOffset *mem_info = GetMemberMetadata(context,
		                                                        resource_type,
		                                                        key);

		// NOTE(agw): the first index is resourceType, let's skip that
		B32 is_first_member = mem_info == NULL || mem_info->member_index == 0;
		if (is_first_member) continue;

		void *member_field_ptr = (char*)out + mem_info->offset;
        
		/////////////////////
		// ~ Set enum type if member is union 
		{
			if ((ValueType)mem_info->union_type_type != ValueType::Unknown)
			{
				// NOTE(agw): get union_type offset in struct
				SerializedClassMemberMetadata *enum_type_meta = M_GetClassMemberMetadata(meta, mem_info->member_index + 1);
				U32 *enum_type = (U32*)((U8*)out + enum_type_meta->offset);
				*enum_type = (U32)mem_info->type_index;
			}
		}
        
		simdjson::ondemand::value value = field.value();
		switch (value.type())
		{
			case simdjson::ondemand::json_type::string: // copy into dest
			{
				std::string_view str_view;
				auto res = value.get(str_view);
				Assert(res == simdjson::error_code::SUCCESS);

				// TODO(agw): could possibly be a switch statement for each type of time
				SerializedClassMemberMetadata *mem_meta = M_GetClassMemberMetadata(meta, mem_info->member_index);
				ValueType value_type = M_GetClassMemberType(mem_meta, mem_info->type_index).type;

				// TODO(agw): could be cached?
				if (value_type == ValueType::Time ||
					value_type == ValueType::DateTime ||
					value_type == ValueType::Date ||
					value_type == ValueType::Instant)
				{

					String8 str = Str8FromStringView(str_view);
					*(ISO8601_Time*)member_field_ptr = Deserializer_Deserialize_ISO8601(str, value_type);
				}
				else
				{
					// NOTE(agw): this is most common case...way to remove some branch misses?
					NullableString8 str = PushNullableStr8FromStringView(arena, str_view);
					*(NullableString8*)member_field_ptr = str;
				}

			} break;
			case simdjson::ondemand::json_type::number:
			{
				SerializedClassMemberMetadata *mem_meta = M_GetClassMemberMetadata(meta, mem_info->member_index);
				ValueType value_type = M_GetClassMemberType(mem_meta, mem_info->type_index).type;
				if (value_type == ValueType::Integer ||
					value_type == ValueType::PositiveInt ||
					value_type == ValueType::UnsignedInt
				)
				{
					String8 mem_meta_name = M_GetStringFromHandle(options->meta_file, mem_meta->name);
					String8 meta_name = M_GetStringFromHandle(options->meta_file, meta->name);
					double _double;
					auto res = value.get(_double);
					Assert(res == simdjson::error_code::SUCCESS);
					*(NullableInt32*)member_field_ptr = Deserialize_NullableInt32(context,
                                                                   _double,
                                                                   value_type,
                                                                   options->file_name,
                                                                   meta_name,
                                                                   mem_meta_name);
				}
				else
				{
					auto raw_value = field.value().raw_json();
					Assert(raw_value.error() == simdjson::error_code::SUCCESS);

					std::string_view view = raw_value.value_unsafe();

					NullableString8 str = PushNullableStr8FromStringView(arena, view);
					*(NullableString8*)member_field_ptr = str;
				}

			} break;
			case simdjson::ondemand::json_type::boolean: // copy into dest
			{
				bool _boolean;
				auto res = value.get(_boolean);
				Assert(res == simdjson::error_code::SUCCESS);

				*(NullableBoolean*)member_field_ptr = { true, (B32)_boolean };
			} break;
			case simdjson::ondemand::json_type::object: // copy into dest
			{
				simdjson::ondemand::object child;
				auto res = value.get(child);
                
				// TODO(agw): check if it would be faster if inside an "else" clause
				ResourceType type = (ResourceType)mem_info->member_first_type_class_type;
				if ((ValueType)mem_info->union_type_type == ValueType::ClassReference)
				{
					type = (ResourceType)mem_info->union_resource_type;
				}
                
				void *resource = Resource_Deserialize_Impl_SIMDJSON(context,
				                                                    arena,
				                                                    options,
				                                                    type,
				                                                    child);
				*(size_t*)member_field_ptr = (size_t)resource;
			} break;
			case simdjson::ondemand::json_type::array:
			{
				simdjson::ondemand::array arr;
				auto res = value.get(arr);

				U64 count = 0;
				void *array_result = Deserialize_Array(context,
				                                       arena,
				                                       options,
				                                       mem_info,
				                                       meta,
				                                       arr,
				                                       &count);
				*(size_t*)member_field_ptr = (size_t)array_result;
                
				SerializedClassMemberMetadata *prev_mem = M_GetClassMemberMetadata(meta, mem_info->member_index - 1);
				void *count_dest = (char*)out + prev_mem->offset;

				*(size_t*)count_dest = count;

			} break;
		}

		BitField_ResetIndex(&meta->required_members, mem_info->member_index);
	}

	/////////////////////
	// ~ Error checking for missing member fields
	{
		BitField required_members = meta->required_members;
		for (int i = 0; i < ArrayCount(required_members.values); i++)
		{
			if (required_members.values[i] == 0)
			{
				continue;
			}
   size_t required = required_members.values[i];
   int index = 0;
   while (required > 0)
   {
    if (required & 1)
    {
     SerializedClassMemberMetadata *mem_meta = M_GetClassMemberMetadata(meta, index);
     String8 meta_name = M_GetStringFromHandle(options->meta_file, meta->name);
     String8 field_name = M_GetStringFromHandle(options->meta_file, mem_meta->name);
     AddError(&context->log,
              LogType::Error,
              "File: %S Class \"%S\" is missing field: \"%S\"",
              options->file_name,
              meta_name,
              field_name);
    }

    required >>= 1;
    index++;
   }
		}
	}
    
	return out;
}

FHIR_VERSION::Resource*
Resource_Deserialize_SIMDJSON(ND_Context *context,
                              Arena *arena,
                              DeserializationOptions *options,
                              ResourceType assumed_type,
                              simdjson::ondemand::object simdjson_object)
{
	TimeFunction;
	return Resource_Deserialize_Impl_SIMDJSON(context,
	                                          arena,
	                                          options,
	                                          assumed_type,
	                                          simdjson_object);
}