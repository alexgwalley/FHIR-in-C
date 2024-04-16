#ifndef NF_DATA_TABLE_H
#define NF_DATA_TABLE_H

namespace native_fhir
{
 #define CHUNK_SIZE 64

 // ~ Data Table
 struct DataRow
 {
  int count;
  String8List column_names;
  Collection *data;
 };

 enum class ColumnValueType
 {
  Unknown,
  Null,
  String,
  Boolean,

  Int32,
  Int64,
  Double,

  ISO8601_Time,

  Array,
 };

 // TODO(agw): this could be made with metadesk
 size_t column_value_sizes[] = 
 {
  0,
  0,
  sizeof(NullableString8),
  sizeof(NullableBoolean),
  sizeof(S32),
  sizeof(S64),
  sizeof(F64),
  sizeof(ISO8601_Time),
  sizeof(void*),
 };


 struct DataChunkNode
 {
  DataChunkNode *next;
  ColumnValueType value_type;

  int count;
  int max_count;
  void *data;

  size_t MaxDataSize()
  {
   return max_count * column_value_sizes[(int)value_type];
  }

  size_t DataSize()
  {
   return count * column_value_sizes[(int)value_type];
  }
 };


 struct DataColumn;

 struct ColumnValue
 {
  ColumnValueType value_type;

  union
  {
   NullableString8 str;
   NullableBoolean b;
   S32 s32;
   S64 s64;
   F64 _double;
   ISO8601_Time time;

   // TODO(agw): other values
   DataColumn* array;
  };
 };

 struct DataColumn
 {
  DataColumn *next;
  String8 name;

  ColumnValueType value_type;

  DataChunkNode *first;
  DataChunkNode *last;
  int chunk_count;

  size_t num_values;

  DataChunkNode *AddChunk(Arena *arena)
  {
   DataChunkNode *ret = PushStruct(arena, DataChunkNode);

   ret->value_type = value_type; // TODO(agw): this probably isn't necessary

   ret->max_count = CHUNK_SIZE;
   size_t value_size = column_value_sizes[(int)value_type];
   ret->data = ArenaPush(arena, value_size * ret->max_count);

   SLLQueuePush(first, last, ret);
   chunk_count++;

   return ret;
  }

  void AddValue(Arena *arena, ColumnValue val);
  void AddAllValuesFromColumn(Arena *arena, DataColumn col);

  ColumnValue GetLastValue()
  {
   ColumnValue ret = {};
   if (!last || last->count == 0)
   {
    return ret;
   }

   ret.value_type = value_type;
   switch (value_type)
   {
    case ColumnValueType::String:
    {
     NullableString8* array = (NullableString8*)last->data;
     NullableString8 str = array[last->count-1];
     ret.str = str;
    } break;
    case ColumnValueType::Boolean:
    {
     NullableBoolean* array = (NullableBoolean*)last->data;
     NullableBoolean value = array[last->count-1];
     ret.b = value;
    } break;
   }

   return ret;
  }

 };

 struct DataColumnNode
 {
  DataColumnNode *next;
  DataColumn v;
 };

 struct DataTable
 {
  B32 execution_error;

  DataColumnNode *first;
  DataColumnNode *last;
  int column_count;

  DataColumnNode* AddColumn(Arena *arena, DataColumn column)
  {
   // TODO(agw): we _may_ want to copy the data over explicitly
   DataColumnNode *ret = PushStruct(arena, DataColumnNode);
   ret->v = column;
   SLLQueuePush(first, last, ret);
   column_count++;

   return ret;
  }

  // TODO(agw): this can be a hash map
  DataColumnNode* GetMatchingColumn(String8 name)
  {
   for (DataColumnNode *node = first; node; node = node->next)
   {
    if (Str8Match(name, node->v.name, 0))
    {
     return node;
    }
   }
   return 0;
  }

  size_t GetRowCount()
  {
   size_t row_count = 0;
   for (DataColumnNode *node = first; node; node = node->next)
   {
    size_t count = node->v.num_values;
    if (row_count == 0) row_count = count;
    else
    {
     Assert(row_count == count);
    }
   }

   return row_count;
  }

 };

 // ~ Correlates with View Definition
 enum class ViewType
 {
  Unknown,
  Select,
  Column,
 };

 struct View
 {
  ViewType type;
  ColumnValueType data_type;
  B32 is_union;

  View *parent;

  // Siblings
  View *next;

  // Children
  View *column_first;
  View *column_last;
  int column_count;

  View *select_first;
  View *select_last;
  int select_count;

  // Column Info
  NullableString8 path;
  NullableString8 name;
  NullableString8 description;
  NullableBoolean collection;

  NullableString8 for_each;
  B32 for_each_is_null;
 };

 struct Constant
 {
  ValueType type;
  union
  {
   NullableString8 base64_binary;
   NullableBoolean boolean;
   NullableString8 canonical;
   NullableString8 code;
   ISO8601_Time date;
   ISO8601_Time dateTime;
   Decimal decimal;
   NullableString8 id;
   ISO8601_Time instant;
   NullableInt32 integer;
   NullableInt64 integer64;
   NullableString8 oid;
   NullableString8 string;
   NullableInt32 positive_int;
   ISO8601_Time time;
   NullableInt32 unsigned_int;
   NullableString8 uri;
   NullableString8 url;
   NullableString8 uuid;
  };
 };

 struct ViewDefinition
 {
  View *first;
  View *last;
  int count;

  nf_fhir_r4::ResourceType resource_type;

  String8List where;

  int constant_count;
  Constant *constants;
 };

};

#endif