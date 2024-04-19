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
    default: NotImplemented;
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

  bool
  Equal(DataColumn const& other) const
  {
   if (value_type != other.value_type) return false;

   DataChunkNode *other_node = other.first;
   for (DataChunkNode* node = first; 
    node;
    node = node->next, other_node = other_node->next)
   {
    if (node->count != other_node->count) return false;
    switch (value_type)
    {
     default: NotImplemented;
     case ColumnValueType::Null:
     {
      if (node->count != other_node->count) 
       return false;
     } break;
     case ColumnValueType::String:
     {
      for (int i = 0; i < node->count; i++)
      {
       NullableString8* strs = (NullableString8*)node->data;
       NullableString8* other_strs = (NullableString8*)other_node->data;
       if (strs[i].has_value != other_strs[i].has_value) return false;
       if (!Str8Match(strs[i].str8, other_strs[i].str8, 0)) return false;
      }
     } break;
     case ColumnValueType::Boolean:
     case ColumnValueType::Int32:
     case ColumnValueType::Int64:
     case ColumnValueType::Double:
     case ColumnValueType::ISO8601_Time:
     {
      B32 equal = memcmp(node->data, other_node->data, node->MaxDataSize()) == 0;
      if (!equal) return false;
     } break;
     case ColumnValueType::Array:
     {

      for (int i = 0; i < node->count; i++)
      {
       DataColumn** strs = (DataColumn**)node->data;
       DataColumn** other_strs = (DataColumn**)other_node->data;
       if (*strs[i] != *other_strs[i]) return false;
      }

     } break;
    }
   }

   return true;
  }


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

  DataColumnNode* AddColumn(Arena *arena, DataColumn column)
  {
   Assert(this->GetMatchingColumn(column.name) == NULL);

   // TODO(agw): we _may_ want to copy the data over explicitly
   DataColumnNode *ret = PushStruct(arena, DataColumnNode);
   ret->v = column;
   DLLPushBack(first, last, ret);
   column_count++;

   return ret;
  }

  DataColumnNode* AddColumnWithoutValues(Arena *arena, DataColumn column)
  {
   DataColumnNode *ret = PushStruct(arena, DataColumnNode);
   ret->v = column;
   ret->v.chunk_count = 0;
   ret->v.first = ret->v.last = NULL;
   DLLPushBack(first, last, ret);
   column_count++;

   return ret;
  }

  void AddAllColumnsWithoutValues(Arena *arena, DataTable table)
  {
   for (DataColumnNode *n = table.first; n; n = n->next)
   {
    if (this->GetMatchingColumn(n->v.name) == NULL)
    {
     AddColumnWithoutValues(arena, n->v);
    }
   }
  }

  DataRow
  GetRow(Arena *arena, int idx)
  {
   DataRow res = {};
   res.count = column_count;
   res.v = PushArray(arena, ColumnValue, res.count);

   int column_idx = 0;
   for (DataColumnNode* node = first; node; node = node->next, column_idx++)
   {
    res.v[column_idx] = node->v[idx];
   }

   return res;
  }

  void
  RemoveColumn(DataColumnNode *node)
  {
   DLLRemove(first, last, node);
   column_count--;
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

  // NOTE(agw): this is quite slow, but is only meant for unit test
  // checking...so I am going to keep it "simple" for now
  B32 
  HasMatchingRow(DataTable* o, size_t comparison_row)
  {
   if (o->column_count != column_count) return false;

   Temp temp = ScratchBegin(0, 0);
   ColumnValueNamePair *row = PushArray(temp.arena, ColumnValueNamePair, column_count);
   ColumnValueNamePair *other_row = PushArray(temp.arena, ColumnValueNamePair, column_count);

   // Fill Our Row
   int column_idx = 0;
   for (DataColumnNode* node = first; node; node = node->next, column_idx++)
   {
    row[column_idx].v = node->v[comparison_row];
    row[column_idx].name = node->v.name;
   }

   DataColumn col = o->first->v;
   // For each row
   for (int i = 0; i < col.num_values; i++)
   {
    // Fill other row
    int other_column_idx = 0;
    for (DataColumnNode* node = o->first; node; node = node->next, other_column_idx++)
    {
     other_row[other_column_idx].v = node->v[i];
     other_row[other_column_idx].name = node->v.name;
    }

    // Compare the two
    B32 row_equal = true;
    for (int idx = 0; idx < column_count; idx++)
    {
     B32 has_matching_value = false;
     for (int j = 0; j < column_count; j++)
     {
      if (row[idx].v == other_row[j].v && Str8Match(row[idx].name, other_row[j].name, 0))
      {
       has_matching_value = true;
      }
     }

     if (!has_matching_value)
     {
      row_equal = false;
      break;
     }
    }

    if (row_equal)
    {
     ScratchEnd(temp);
     return true;
    }

   }

   ScratchEnd(temp);
   return false;
  }


  S64 GetRowCount()
  {
   S64 row_count = 0;
   for (DataColumnNode *node = first; node; node = node->next)
   {
    S64 count = node->v.num_values;
    if (row_count == 0) row_count = count;
    else
    {
     Assert(row_count == count);
    }
   }

   return row_count;
  }

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



};

#endif