#ifndef NF_DATA_TABLE_H
#define NF_DATA_TABLE_H

namespace native_fhir
{
 #define CHUNK_SIZE 64 


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
  sizeof(NullableInt32),
  sizeof(NullableInt64),
  sizeof(NullableDouble),
  sizeof(ISO8601_Time),
  sizeof(void*),
 };


 String8 column_value_type_names[] = 
 {
  Str8Lit("Unknown"),
  Str8Lit("Null"),
  Str8Lit("String"),
  Str8Lit("Boolean"),
  Str8Lit("Int32"),
  Str8Lit("Int64"),
  Str8Lit("Double"),
  Str8Lit("ISO8601_Time"),
  Str8Lit("Array"),
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
   NullableInt32 s32;
   NullableInt64 s64;
   NullableDouble _double;
   ISO8601_Time time;

   // TODO(agw): other values
   DataColumn* array;

   struct {} v;
  };

  B32 Equal(ColumnValue& o);

  bool operator==(ColumnValue& o);
  bool operator!=(ColumnValue& o);
 };

 struct ColumnValueNamePair
 {
  String8 name;
  ColumnValue v;
 };

 // ~ Data Table
 struct DataRow
 {
  int count;
  ColumnValue *v;
 };

 struct DataColumn
 {
  DataColumn *next;
  String8 name;

  ColumnValueType value_type;

  DataChunkNode *first;
  DataChunkNode *last;
  int chunk_count;

  S64 num_values;

  DataChunkNode *AddChunk(Arena *arena);

  void
  SetValueType(Arena *arena, ColumnValueType type)
  {
   Assert(value_type == ColumnValueType::Unknown);
   int count = last ? last->count : 0;

   first = 0; last = 0; chunk_count = 0;

   value_type = type;
   this->AddChunk(arena);
   last->count = count;
  }

  void AddValue(Arena *arena, ColumnValue val);
  void AddAllValuesFromColumn(Arena *arena, DataColumn col);

  ColumnValue GetLastValue()
  {
   ColumnValue val = Index(num_values-1);
   return val;
  }

  ColumnValue
  operator[](int i)
  {
   ColumnValue val = Index(i);
   return val;
  }

  // WARNING(agw): This function is _only_ meant for testing equality in unit tests.
  // This is not meant for iteration in a for loop, that would be wasteful.

  ColumnValue
  Index(int i)
  {
   ColumnValue ret = {};
   if (!last || last->count == 0)
   {
    return ret;
   }

   DataChunkNode *curr = first;
   size_t curr_index = 0;

   while (i > curr_index + curr->max_count)
   {
    curr = curr->next;
    curr_index += curr->max_count;
   }

   size_t index_in_chunk = i % curr->max_count;

   ret.value_type = value_type;
   switch (value_type)
   {
    default: NF_NotImplemented;
    case ColumnValueType::Unknown:
    {
     ret.value_type = ColumnValueType::Null;
    } break;
    case ColumnValueType::Null: { } break;
    case ColumnValueType::String:
    {
     NullableString8* array = (NullableString8*)curr->data;
     ret.str = array[index_in_chunk];
    } break;
    case ColumnValueType::Boolean:
    {
     NullableBoolean* array = (NullableBoolean*)curr->data;
     ret.b = array[index_in_chunk];
    } break;
    case ColumnValueType::ISO8601_Time:
    {
     ISO8601_Time* array = (ISO8601_Time*)curr->data;
     ret.time = array[index_in_chunk];
    } break;
    case ColumnValueType::Int32:
    {
     NullableInt32* array = (NullableInt32*)curr->data;
     ret.s32 = array[index_in_chunk];
    } break;
    case ColumnValueType::Int64:
    {
     NullableInt64* array = (NullableInt64*)curr->data;
     ret.s64 = array[index_in_chunk];
    } break;
    case ColumnValueType::Double:
    {
     NullableDouble* array = (NullableDouble*)curr->data;
     ret._double = array[index_in_chunk];
    } break;
    case ColumnValueType::Array:
    {
     DataColumn** array = (DataColumn**)curr->data;
     ret.array = array[index_in_chunk];
    } break;
   }

   return ret;
  }

  B32 Equal(DataColumn const& other) const;

  bool
  operator!=(DataColumn const& other) const
  {
   B32 equal = Equal(other);
   return !equal;
  }

  bool
  operator==(DataColumn const& other) const
  {
   B32 equal = Equal(other);
   return equal;
  }

 };

 struct DataColumnNode
 {
  DataColumnNode *next;
  DataColumnNode *prev;
  DataColumn v;
 };

 struct DataTable
 {
  B32 execution_error;

  DataColumnNode *first;
  DataColumnNode *last;
  int column_count;

  DataColumnNode* AddColumn(Arena *arena, DataColumn column);
  DataColumnNode* AddColumnWithoutValues(Arena *arena, DataColumn column);
  void AddAllColumnsWithoutValues(Arena *arena, DataTable table);

  DataRow GetRow(Arena *arena, int idx);
  S64 GetRowCount();

  DataColumnNode* GetMatchingColumn(String8 name);

  // NOTE(agw): this is quite slow, and is only meant for unit test verification
  B32 HasMatchingRow(DataTable* o, size_t comparison_row);
 };

 struct DataTableNode
 {
  DataTableNode *next;
  DataTable table;
 };

 struct DataTableList
 {
  DataTableNode *first;
  DataTableNode *last;
  int count;

  // TODO(agw): can add free lists here


  void AddTable(Arena *arena, DataTable table)
  {
   DataTableNode* node = PushStruct(arena, DataTableNode);
   node->table = table;
   SLLQueuePush(first, last, node);
   count++;
  }

 };

 // ~ Correlates with View Definition
 enum class ViewDefinitionValidationError
 {
  Unknown,
  Success,
  NoResourceType,
  InvalidFhirPath,
  Count
 };

 enum class ViewElemType
 {
  Unknown,
  Select,
  Column,
 };

 struct ViewElem
 {
  ViewElemType type;
  ColumnValueType data_type;
  B32 is_union;

  ViewDefinitionValidationError error;

  ViewElem *parent;

  // Siblings
  ViewElem *next;

  // Children
  ViewElem *column_first;
  ViewElem *column_last;
  int column_count;

  ViewElem *select_first;
  ViewElem *select_last;
  int select_count;

  ViewElem *union_first;
  ViewElem *union_last;
  int union_count;

  // Column Info
  NullableString8 path;
  Piece *root_piece;
  NullableString8 name;
  NullableString8 description;
  NullableBoolean collection;

  NullableString8 column_data_type;

  NullableString8 for_each;
  Piece *for_each_piece;
  B32 for_each_is_null;
 };

 struct ColumnIterator
 {
  // NOTE(agw): must be set by caller
  DataColumn *col;
  U16 stride;
  U16 offset;

  // NOTE(agw): internal state
  int curr_count_in_chunk;
  DataChunkNode *curr_chunk;
  void* curr_pos;

  void Init(DataColumn *col, U16 off)
  {
   if (col->chunk_count > 0)
   {
    curr_chunk = col->first;
    curr_pos = (void*)((U8 *)curr_chunk->data + off);
   }

   stride = column_value_sizes[(int)col->value_type];
   offset = off;
  }

  void Init(const DataColumn *col, U16 off)
  {
   if (col->chunk_count > 0)
   {
    curr_chunk = col->first;
    curr_pos = (void*)((U8 *)curr_chunk->data + off);
   }

   stride = column_value_sizes[(int)col->value_type];
   offset = off;
  }

  void* Next()
  {
   if (curr_count_in_chunk < curr_chunk->count)
   {
    void* ret = curr_pos;
    curr_count_in_chunk++;
    curr_pos = (void*)((U8*)curr_pos + stride);
    return ret;
   } else if (curr_chunk->next)
   {
    curr_chunk = curr_chunk->next;
    void* ret = (void*)((U8*)curr_chunk->data + offset);

    curr_count_in_chunk = 1;
    curr_pos = (void*)((U8*)ret + stride);
    return ret;
   }

   return 0;
  }

 };


 /*
  In most cases, we can memcpy values from one table to the next,
  however in other cases (ex. String8) views are at play, so we need to copy
  the actual values over to the new arena.
 */
 void DataTable_CopyValuesToArena(Arena *arena, DataTable *table);

 String8List ReverseColumns(Arena *arena, DataTable *order);
 void SortColumns(Arena *arena, DataTable *table, String8List order_reversed);

};


#endif