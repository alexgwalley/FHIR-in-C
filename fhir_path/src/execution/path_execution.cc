namespace native_fhir
{
 using namespace nf_fhir_r4;
 CollectionEntryNode nil_entry_node = { 0 };

 Collection ExecuteExpression(Arena *arena, FP_ExecutionContext *context, Piece* node);

 ///////////////////
 // Empty Bool Helpers 

 enum class EmptyBoolOperationType
 {
  And,
  Or
 };

 EmptyBool
 EmptyBoolOperation(EmptyBool a, EmptyBool b, EmptyBoolOperationType type)
 {
  // NOTE(agw): see https://hl7.org/fhirpath/#and
  EmptyBool and_table[3][3] = {
   {EmptyBool::True,  EmptyBool::False, EmptyBool::Empty},
   {EmptyBool::False, EmptyBool::False, EmptyBool::False},
   {EmptyBool::Empty, EmptyBool::False, EmptyBool::Empty}
  };

  EmptyBool or_table[3][3] = {
   {EmptyBool::True, EmptyBool::True,  EmptyBool::True},
   {EmptyBool::True, EmptyBool::False, EmptyBool::Empty},
   {EmptyBool::True, EmptyBool::Empty, EmptyBool::Empty}
  };

  if (type == EmptyBoolOperationType::Or)
  {
   return or_table[(int)a][(int)b];
  }
  else if (type == EmptyBoolOperationType::And) 
  {
   return and_table[(int)a][(int)b];
  }

  Assert(FALSE);
 }

 EmptyBool
 EmptyBoolFromBool(B32 b)
 {
  return b ? EmptyBool::True : EmptyBool::False;
 }

 EmptyBool
 EmptyBoolNegate(EmptyBool a)
 {
  if (a == EmptyBool::True) return EmptyBool::False;
  if (a == EmptyBool::False) return EmptyBool::True;
  return EmptyBool::Empty;
 }


 ///////////////////
 // Collection Helpers

 B32 IsNilCollectionEntry(CollectionEntry *entry) { return entry == NULL; }
 B32 IsNilCollectionEntryNode(CollectionEntryNode *node) { return node == NULL || node == &nil_entry_node; }

 local_function void
 CollectionPushEntry(Arena *arena, Collection *collection, CollectionEntry entry)
 {
  CollectionEntryNode *node = PushStruct(arena, CollectionEntryNode);
  node->v = entry;
  DLLPushBack(collection->first, collection->last, node);
  collection->count++;
 }

 Collection
 CollectionFromEntry(Arena *arena, CollectionEntry entry)
 {
  Collection ret = {};
  CollectionPushEntry(arena, &ret, entry);
  return ret;
 }

 CollectionEntry
 CollectionEntryFromString(String8 str)
 {
  CollectionEntry entry = {};
  entry.type = EntryType::String;
  NullableString8 nstr = {};
  nstr.has_value = 1;
  nstr.str8 = str;
  entry.str = nstr;
  return entry;
 }

 Collection
 CollectionFromString(Arena *arena, NullableString8 str)
 {
  CollectionEntry entry = {};
  entry.type = EntryType::String;
  entry.str = str;
  return CollectionFromEntry(arena, entry);
 }

 CollectionEntry
 CollectionEntryFromNumber(Number num)
 {
  CollectionEntry entry = {};
  entry.type = EntryType::Number;
  entry.number = num;
  return entry;
 }

 Collection
 CollectionFromNumber(Arena *arena, Number num)
 {
  CollectionEntry entry = {};
  entry.type = EntryType::Number;
  entry.number = num;
  return CollectionFromEntry(arena, entry);
 }

 Collection
 CollectionFromInteger(Arena *arena, S64 num)
 {
  CollectionEntry entry = {};
  entry.type = EntryType::Number;
  entry.number.type = Number_Integer;
  entry.number.s64 = num;
  return CollectionFromEntry(arena, entry);
 }

 Collection
 CollectionFromDate(Arena *arena, ISO8601_Time time)
 {
  CollectionEntry entry = {};
  entry.type = EntryType::Iso8601;
  entry.time = time;
  return CollectionFromEntry(arena, entry);
 }

 CollectionEntry
 CollectionEntryFromBoolean(B32 b)
 {
  CollectionEntry entry = {};
  entry.type = EntryType::Boolean;
  entry.b = b;
  return entry;
 }

 Collection
 CollectionFromBoolean(Arena *arena, B32 b)
 {
  CollectionEntry entry = {};
  entry.type = EntryType::Boolean;
  entry.b = b;
  return CollectionFromEntry(arena, entry);
 }

 local_function void
 MergeCollections(Collection *dst, Collection *src)
 {
  if (dst->last)
  {
   dst->last->next = src->first;
   dst->last = src->first;
  }
  else
  {
   dst->first = src->first;
   dst->last = src->last;
  }

  dst->count += src->count;
 }

 B32
 CollectionEqual(Collection a, Collection b)
 {
  if (a.count != b.count) return false;

  for (CollectionEntryNode *a_node = a.first, *b_node = b.first;
   a_node && b_node;
   a_node = a_node->next, b_node = b_node->next)
  {
   if (a_node->v.type != b_node->v.type) return false;

   B32 equal = false;
   switch (a_node->v.type)
   {
    case EntryType::String:
    {
     equal = Str8Match(a_node->v.str.str8, b_node->v.str.str8, 0);
    } break;
    default:
    {
     equal = memcmp(&a_node->v, &b_node->v, sizeof(a_node->v)) == 0;
    };
   }

   if (!equal) return false;
  }

  return true;
 }


 local_function Collection
 GetResourcesOfType(Arena *arena, int res_count, nf_fhir_r4::Resource **resources, ResourceType type)
 {
  Collection ret = { 0 };

  for (int i = 0; i < res_count; i++)
  {
   nf_fhir_r4::Resource* res = resources[i];
   if(res->resourceType == type || type == ResourceType::Unknown)
   {
    CollectionEntry entry = {};
    entry.resource = res;
    entry.type = EntryType::Resource;
    CollectionPushEntry(arena, &ret, entry);
   }
  }

  return ret;
 }

 local_function Collection
 GetMembersFromCollection(Arena *arena, FP_ExecutionContext* context, Collection collection, String8 member_name)
 {
  Collection ret = { 0 };

  for (CollectionEntryNode *node = collection.first; !IsNilCollectionEntryNode(node);
  node = node->next)
  {

   FP_Assert(node->v.type == EntryType::Resource, context, Str8Lit("Cannot get members on non-resource entry"));
   CollectionEntry entry = node->v;
   const MemberNameAndOffset *mem = NF_ClassMemberLookup((ResourceType) entry.resource->resourceType, member_name);
   FP_Assert(mem, context, PushStr8F(context->arena, "Could not find member \"%S\" in resource type: %S", member_name, resource_type_pairs[(int)entry.resource->resourceType].str));
   Assert(mem);


   // TODO(agw): this type may change based on build
   SerializedClassMetadata *class_meta = M_GetClassMetadata(context->meta_file, (int)entry.resource->resourceType);
   SerializedClassMemberMetadata *member_meta = M_GetClassMemberMetadata(class_meta, mem->member_index);

   void* mem_ptr = (U8*)entry.resource + mem->offset;
		
   // ~ Single Cardinality
   if (IS_SINGLE_CARDINALITY(mem->cardinality))
   {
    // ~ Non-union
    ValueType value_type = ValueType::Unknown;
    if (member_meta->type == ClassMemberType::Single)
    {
     value_type = M_GetClassMemberType(member_meta, 0).type;
    }
    else if (member_meta->type == ClassMemberType::Union)
    {
     // Desired ValueType
     value_type = (ValueType)mem->union_type_type;

     // NOTE(agw): Unknown type...
     SerializedClassMemberMetadata *enum_meta = M_GetClassMemberMetadata(class_meta, mem->member_index + 1);
     U32 enum_value = DEREF_VALUE(entry.resource, enum_meta->offset, U32);
     SerializedValueTypeAndName tan = M_GetClassMemberType(member_meta, enum_value);
     ValueType actual_value_type = tan.type;

     if (value_type != (ValueType)actual_value_type && value_type != ValueType::Choice)
     {
      value_type = ValueType::Unknown;
     }
     else
     {
      value_type = actual_value_type;
     }

    }
    CollectionEntry ent = {};

    switch (value_type)
    {
     case VALUE_TYPE_STRING_CASES:
     {
      NullableString8 str = *(NullableString8*)mem_ptr;
      if (str.has_value) { ent.str = str; ent.type = EntryType::String; }
      CollectionPushEntry(arena, &ret, ent);
     } break;
     case ValueType::ClassReference:
     { 
      nf_fhir_r4::Resource* ptr = DEREF_STRUCT(entry.resource, mem->offset, nf_fhir_r4::Resource);
      if (ptr)
      {
       ent.resource = ptr;
       ent.type = EntryType::Resource;
       CollectionPushEntry(arena, &ret, ent); 
      }
      else 
      { 
       Collection empty = {};
       return empty;
      }
     } break;
     case VALUE_TYPE_TIME_CASES:
     {
      ISO8601_Time time = *(ISO8601_Time*)mem_ptr;
      if (time.precision != Precision::Unknown) { ent.time = time; ent.type = EntryType::Iso8601; }
      CollectionPushEntry(arena, &ret, ent);
     } break;
     case ValueType::Decimal:
     {
      NullableString8 str = *(NullableString8*)mem_ptr;
      if (str.has_value) { 
       Decimal decimal = DecimalFromString(Str8(str.str, str.size));
       ent.number.decimal = decimal;
       ent.number.type = Number_Decimal;
       ent.type = EntryType::Number;
      }
      CollectionPushEntry(arena, &ret, ent);
     } break;
     case ValueType::Integer:
     {
      NullableInt32 int_val = *(NullableInt32*)mem_ptr;
      if (int_val.has_value) { 
       ent.number.s64 = int_val.value;
       ent.number.type = Number_Integer;
       ent.type = EntryType::Number;
       CollectionPushEntry(arena, &ret, ent);
      }
     } break;
     case ValueType::Boolean:
     {
      NullableBoolean b_val = *(NullableBoolean*)mem_ptr;
      if (b_val.has_value) { 
       ent.b = b_val.value;
       ent.type = EntryType::Boolean;
       CollectionPushEntry(arena, &ret, ent);
      }
     } break;
     case ValueType::Unknown: break;
     default: NotImplemented;
    }
   }
   else if (IS_MULTIPLE_CARDINALITY(mem->cardinality))
   {

    // ~ Non-union
    if (member_meta->type == ClassMemberType::Single)
    {
     ValueType value_type = M_GetClassMemberType(member_meta, 0).type;
     SerializedClassMemberMetadata *count_meta = M_GetClassMemberMetadata(class_meta, mem->member_index - 1);
     size_t count = DEREF_COUNT(entry.resource, count_meta->offset);

     switch (value_type)
     {
      case ValueType::ClassReference:
      {
       Resource** resources = DEREF_STRUCT_ARRAY(entry.resource, mem->offset, Resource);
       for (int i = 0; i < count; i++)
       {
        CollectionEntry ent = {};
        Assert(resources[i]);
        ent.resource = resources[i];
        ent.type = EntryType::Resource;
        CollectionPushEntry(arena, &ret, ent);
       }
      } break;
      case ValueType::String:
      {
       NullableString8* strings = DEREF_VALUE_ARRAY(entry.resource, mem->offset, NullableString8);
       for (int i = 0; i < count; i++)
       {
        CollectionEntry ent = {};
        ent.str = strings[i];
        ent.type = EntryType::String;
        CollectionPushEntry(arena, &ret, ent);
       }
      } break;

      default: NotImplemented; // TODO(agw): fill out all types
     }

    }
   }
  }
	
  return ret;
 }

 local_function EmptyBool 
 EqualCompareCollectionEntries(FP_ExecutionContext *context, CollectionEntry *ent, CollectionEntry* ent2, CompareTypeFlags flags)
 {
  EmptyBool result = EmptyBool::False;

  // TODO(agw): this may need to change for implicit conversion
  FP_Assert(ent->type == ent2->type, context, Str8Lit("Entries must have the same type to compare"));
  switch (ent->type)
  {
   case EntryType::String:
   {

    if(ent->str.size != ent->str.size) result = EmptyBool::False;
    else if (ent->str.has_value != ent2->str.has_value) result = EmptyBool::False;
    else
    {
     MatchFlags match_flags = (flags & CompareType_Equivalent) ? MatchFlag_CaseInsensitive : 0;
     result = Str8Match(ent->str.str8, ent2->str.str8, match_flags) ? EmptyBool::True : EmptyBool::False;
    }

   } break;
   case EntryType::Iso8601:
   {
    ISO8601_Time a = ent->time;
    ISO8601_Time b = ent2->time;
    b.precision = a.precision;
    B32 equal_without_precision = memcmp(&a, &b, sizeof(b)) == 0;

    B32 precision_equal = (ent->time.precision == ent2->time.precision) ||
    (ent->time.precision == Precision::Second         && ent2->time.precision == Precision::Millisecond) ||
    (ent->time.precision == Precision::Millisecond    && ent2->time.precision == Precision::Second) ||
    (ent->time.precision == Precision::TimezoneMinute && ent2->time.precision == Precision::TimezoneHour) ||
    (ent->time.precision == Precision::TimezoneHour   && ent2->time.precision == Precision::TimezoneMinute);


    if      (!precision_equal && flags & CompareType_Equal)      { result = EmptyBool::Empty; }
    else if (!precision_equal && flags & CompareType_Equivalent) { result = EmptyBool::False; }
    else                                                         { result = EmptyBoolFromBool(equal_without_precision);
    }
   } break;

   case EntryType::Number:
   {
    // TODO(agw): need to check units if any present
    result = ent->number == ent2->number ? EmptyBool::True : EmptyBool::False;
   } break;
   case EntryType::Boolean:
   {
    result = EmptyBoolFromBool(ent->b == ent2->b);
   } break;
   default: NotImplemented;
  }

  if (flags & CompareType_Negate)
  {
   result = EmptyBoolNegate(result);
  }

  return result;
 }

 local_function EmptyBool 
 QuantityCompareCollectionEntries(FP_ExecutionContext *context, CollectionEntry *ent, CollectionEntry* ent2, QuantityCompareFlags flags)
 {
  EmptyBool result = EmptyBool::False;

  // TODO(agw): this may need to change for implicit conversion
  FP_Assert(ent->type == ent2->type, context, Str8Lit("Entries must have the same type to compare"));

  EmptyBool ent_greater_or_equal = EmptyBool::False;
  switch (ent->type)
  {
   case EntryType::String:
   {
    if      (ent->str.size != ent->str.size)            result = EmptyBool::False;
    else if (ent->str.has_value != ent2->str.has_value) result = EmptyBool::False;
    else { NotImplemented; }
   } break;

   case EntryType::Number:
   {
    FP_Assert(ent->number.type == ent2->number.type, context, Str8Lit("Number types must match"));
    ent_greater_or_equal = EmptyBoolFromBool(ent->number > ent2->number);
   } break;

   case EntryType::Iso8601:
   {
    Precision min_precision = (Precision)Min((int)ent->time.precision, (int)ent2->time.precision);

    ent_greater_or_equal = EmptyBool::False;
    if (min_precision >= Precision::Year        && ent->time.year   > ent2->time.year)   { ent_greater_or_equal = EmptyBool::True; }
    else if (min_precision >= Precision::Month  && ent->time.month  > ent2->time.month)  { ent_greater_or_equal = EmptyBool::True; }
    else if (min_precision >= Precision::Day    && ent->time.day    > ent2->time.day)    { ent_greater_or_equal = EmptyBool::True; }
    else if (min_precision >= Precision::Hour   && ent->time.hour   > ent2->time.hour)   { ent_greater_or_equal = EmptyBool::True; }
    else if (min_precision >= Precision::Minute && ent->time.minute > ent2->time.minute) { ent_greater_or_equal = EmptyBool::True; }
    else if (min_precision >= Precision::Second && ent->time.second > ent2->time.second) { ent_greater_or_equal = EmptyBool::True; }
    else if (min_precision >= Precision::Millisecond && ent->time.millisecond > ent2->time.millisecond) { ent_greater_or_equal = EmptyBool::True; }
   } break;

   default: NotImplemented;
  }

  EmptyBool equal = EqualCompareCollectionEntries(context, ent, ent2, CompareType_Equal);

  if (flags & QuantityCompare_Less) { 
   result = EmptyBoolOperation(EmptyBoolNegate(ent_greater_or_equal), 
                               EmptyBoolNegate(equal),
                               EmptyBoolOperationType::And); 
  }
  else if (flags & QuantityCompare_Greater) { 
   result = EmptyBoolFromBool(ent_greater_or_equal == EmptyBool::True && equal != EmptyBool::True);
  }

  if (flags & QuantityCompare_Equal)
  {
   result = EmptyBoolOperation(result, 
                               equal,
                               EmptyBoolOperationType::Or);
  }

  return result;
 }


 local_function Collection
 CollectionFromLiteralPiece(Arena *arena, FP_ExecutionContext *context,  Piece* expr)
 {
  Collection ret = { 0 };
  switch (expr->type)
  {
   case Piece_Literal:
   {
    CollectionEntry entry {};
    const ResourceNameTypePair* pair = NF_ResourceNameTypePairFromString8(expr->slice);
    FP_Assert(pair, context, PushStr8F(context->arena, "Could not find resource with name: %S", expr->slice));
    entry.type = EntryType::ResourceType;
    entry.resource_type = (ResourceType)pair->type;
    CollectionPushEntry(arena, &ret, entry);
   } break;
  }
  return ret;
 }


 local_function Collection
 CollectionFromResourceMember(Arena *arena, FP_ExecutionContext* context,  CollectionEntry *ent, String8 member_name)
 {
  Assert(ent->type == EntryType::Resource);

  Temp temp = ScratchBegin(&arena, 1);
  // NOTE(agw): we don't need to keep this temp collection, only to feed to function
  Collection temp_col = { 0 };
  CollectionPushEntry(temp.arena, &temp_col, *ent);
  Collection ret = GetMembersFromCollection(arena, context, temp_col, member_name);
  ScratchEnd(temp);
  return ret;
 }

 local_function EmptyBool
 ExecuteBooleanExpressionOnCollectionEntry(Arena* arena, FP_ExecutionContext* context, CollectionEntry *ent, Piece* expr)
 {
  EmptyBool result = EmptyBool::False;

  Collection left_col = ExecuteExpression(arena, context, expr->child[0]);
  Collection right_col = ExecuteExpression(arena, context, expr->child[1]);

  Assert(left_col.count == 1);
  Assert(right_col.count == 1);

  switch (expr->type) {
   case Piece_EqualCompare:
   {
    result = EqualCompareCollectionEntries(context, &left_col.first->v,  &right_col.first->v, expr->meta.equal_compare_data);
   } break;
   case Piece_QuantityCompare:
   {
    result = QuantityCompareCollectionEntries(context, &left_col.first->v,  &right_col.first->v, expr->meta.quantity_compare_data);
   } break;
   case Piece_Is:
   {
    ResourceType col_first_type = ResourceType::Unknown;
    if(right_col.first->v.type == EntryType::Resource) col_first_type = right_col.first->v.resource->resourceType;
    else if (right_col.first->v.type == EntryType::ResourceType) col_first_type = right_col.first->v.resource_type;
    else Assert(false);

    result = EmptyBoolFromBool(col_first_type == ent->resource->resourceType);
   } break;
   default: Assert(false);
  }

  return result;
 }

 typedef U8 NF_SubsettingFlags;
 enum
 {
  NF_Subsetting_FailOnMultiple = (1 << 0)
 };

 // NOTE(agw): indices are inclusive
 local_function Collection
 ExecuteSubsetting(Arena *arena, FP_ExecutionContext *context, Piece *node, S64 min_index, S64 max_index, NF_SubsettingFlags flags)
 {
  Collection ret = { 0 };
  Temp temp = ScratchBegin(&arena, 1);
  Collection left_col = ExecuteExpression(temp.arena, context, node->child[0]);

  if (min_index >= left_col.count)
  {
   ScratchEnd(temp);
   return ret;
  }

  // Convert negative indices
  S64 min = min_index < 0 ? left_col.count + min_index : min_index;
  S64 max = max_index < 0 ? left_col.count + max_index : max_index;

  min = Min(min, max);
  max = Max(min, max);

  max = Min(max, left_col.count - 1);

  Assert(min >= 0);
  Assert(max >= 0);

  CollectionEntryNode *entry_node = left_col.first;
  int index = 0;
  while (index < min)
  {
   FP_Assert(node, context, Str8Lit("Error Evaluating Subset, entry node is null"));
   entry_node = entry_node->next;
   index++;
  }

  for (; index <= max; index++)
  {
   CollectionPushEntry(arena, &ret, entry_node->v);
  }

  if (flags & NF_Subsetting_FailOnMultiple && ret.count > 1)
  {
   FP_Assert(false, context, Str8Lit("Cardinality error, more than one entry in collection"));
  }

  ScratchEnd(temp);

  return ret;
 }

 local_function Collection
 ExecuteFunction(Arena *arena, FP_ExecutionContext *context, Piece* node)
 {
  Collection ret = { 0 };

  Temp temp = ScratchBegin(&arena, 1);

  // ~ Get Function Type
  Function function_type = Function::Unknown;
  for (int i = 0; i < ArrayCount(pe_functions); i++)
  {
   if (Str8Match(pe_functions[i].name, node->child[1]->slice, 0))
   {
    function_type = pe_functions[i].func;
   }
  }

  // ~ Execute Function
  Piece *func_node = node->child[1];
  switch (function_type)
  {
   case Function::Count:
   case Function::Exists:
   case Function::Empty:
   {
    Temp temp = ScratchBegin(&arena, 1);

    Collection left_col = ExecuteExpression(temp.arena, context, node->child[0]);
    if (function_type == Function::Empty)
    {
     ret = CollectionFromBoolean(arena, left_col.count == 0);
    }
    else if (function_type == Function::Exists)
    {
     ret = CollectionFromBoolean(arena, left_col.count > 0);
    }
    else if (function_type == Function::Count)
    {
     ret = CollectionFromInteger(arena, left_col.count);
    }

    ScratchEnd(temp);
   } break;
   case Function::Join:
   {
    Temp temp = ScratchBegin(&arena, 1);
    Collection left_col = ExecuteExpression(temp.arena, context, node->child[0]);

    FP_Assert(left_col.first->v.type == EntryType::String, context, Str8Lit("Join() only works on string types"));

    String8List str_list = {};
    for (CollectionEntryNode *n = left_col.first;
     !IsNilCollectionEntryNode(n);
     n = n->next)
    {
     Str8ListPush(temp.arena, &str_list, n->v.str.str8);
    }

    StringJoin join_params = {};

    if (node->child[1]->params.count > 0)
    {
     FP_Assert(node->child[1]->params.first->v->type == Piece_String, context, Str8Lit("Expected string separator in function join()"));
     join_params.sep = node->child[1]->params.first->v->value.str.str8;
    }

    String8 str = Str8ListJoin(arena, str_list, &join_params);
    NullableString8 nullable_str = {};
    nullable_str.str8 = str;
    nullable_str.has_value = TRUE;
    ret = CollectionFromString(arena, nullable_str);

    ScratchEnd(temp);

   } break;
   case Function::Not:
   {
    Temp temp = ScratchBegin(&arena, 1);
    Collection left_col = ExecuteExpression(temp.arena, context, node->child[0]);

    if (left_col.count != 0)
    {
     FP_Assert(left_col.first->v.type == EntryType::Boolean, context, Str8Lit("Not function operates on a boolean"));
     ret = CollectionFromBoolean(arena, !left_col.first->v.b);
    }

    ScratchEnd(temp);
   } break;
   case Function::Where:
   {
    Collection left_col = ExecuteExpression(arena, context, node->child[0]);
    FP_Assert(func_node->params.first, context, Str8Lit("Where must have parameters"));

    for (CollectionEntryNode *n = left_col.first; !IsNilCollectionEntryNode(n); n = n->next)
    {
     //NOTE(agw): need to make a copy so that we don't overwrite the "next" value
     CollectionEntryNode *cpy = PushStruct(temp.arena, CollectionEntryNode);
     MemoryCopy(cpy, n, sizeof(*n));

     SLLStackPush(context->entry_stack_first, cpy);

     Collection col = ExecuteExpression(temp.arena, context, func_node->params.first->v);
     FP_Assert(col.count == 0 || col.first->v.type == EntryType::Boolean, context, Str8Lit("Where expression needs a boolean to test upon."));
     
     EmptyBool result = (col.count == 0) ? EmptyBool::Empty : EmptyBoolFromBool(col.first->v.b);
//     EmptyBool result = ExecuteBooleanExpressionOnCollectionEntry(temp.arena, context, &n->v, func_node->params.first->v);

     if (result != EmptyBool::True)
     {
      // TODO(agw): we _may_ want to have some type of collection entry free list for speed
      DLLRemove(left_col.first, left_col.last, n);
      left_col.count--;
     }

     SLLStackPop(context->entry_stack_first);
    }

    ScratchEnd(temp);

    ret = left_col;
   } break;
   case Function::Select:
   {
    Assert(func_node->params.first);

    Temp temp = ScratchBegin(&arena, 1);
    Collection left_col = ExecuteExpression(temp.arena, context, node->child[0]);

    for (CollectionEntryNode *n = left_col.first; !IsNilCollectionEntryNode(n); n = n->next)
    {
     CollectionEntryNode *cpy = PushStruct(temp.arena, CollectionEntryNode);
     MemoryCopy(cpy, n, sizeof(*n));
     SLLStackPush(context->entry_stack_first, cpy);

     Collection child_col = ExecuteExpression(arena, context, func_node->params.first->v);
     if (child_col.count > 0)
     {
      MergeCollections(&ret, &child_col);
     }

     SLLStackPop(context->entry_stack_first);
    }
    ScratchEnd(temp);
   } break;
   case Function::OfType:
   {
    Temp temp = ScratchBegin(&arena, 1);

    Piece* type_piece = func_node->params.first->v;
    FP_Assert(type_piece->type == Piece_MemberInvocation, context, Str8Lit("Function \"OfType\" expects a parameter of type Identifier"));

    const ResourceNameTypePair* pair = NF_ResourceNameTypePairFromString8(type_piece->slice);
    ValueType value_type = ValueType::Unknown;

    // NOTE(agw): type_piece->slice can be _any_ fhir type.
    if (!pair)
    {
     for (int i = 0; i < ArrayCount(native_fhir::value_type_meta); i++)
     {
      for (int j = 0; j < ArrayCount(native_fhir::value_type_meta[i].fhir_names); j++)
      {
       if (Str8Match(native_fhir::value_type_meta[i].fhir_names[j], type_piece->slice, 0))
       {
         value_type = native_fhir::value_type_meta[i].type;
         break;
       }
      }
      if (value_type != ValueType::Unknown) break;
     }
    }
    else
    {
     value_type = ValueType::ClassReference;
    }

    Collection left_col = ExecuteExpression(temp.arena, context, node->child[0]);
    EntryType correct_entry_type = EntryType::Unknown;

    switch (value_type)
    {
     case VALUE_TYPE_STRING_CASES: 
     {
      for (CollectionEntryNode *n = left_col.first; !IsNilCollectionEntryNode(n); n = n->next)
      {
       B32 correct_type = n->v.type == EntryType::String;
       if (correct_type) { CollectionPushEntry(arena, &ret, n->v); }
      }
     } break;
     case VALUE_TYPE_TIME_CASES: 
     {
      for (CollectionEntryNode *n = left_col.first; !IsNilCollectionEntryNode(n); n = n->next)
      {
       B32 correct_type = n->v.type == EntryType::Iso8601;
       if (correct_type) { CollectionPushEntry(arena, &ret, n->v); }
      }
     } break;
     case ValueType::Integer:
     case ValueType::Integer64:
     case ValueType::Decimal:
     {
      for (CollectionEntryNode *n = left_col.first; !IsNilCollectionEntryNode(n); n = n->next)
      {
       NumberType num_type = value_type == ValueType::Decimal ? Number_Decimal : Number_Integer;
       B32 correct_type = n->v.type == EntryType::Number && n->v.number.type == num_type;
       if (correct_type) { CollectionPushEntry(arena, &ret, n->v); }
      }
     } break;
     case ValueType::ClassReference:
     {
      for (CollectionEntryNode *n = left_col.first; !IsNilCollectionEntryNode(n); n = n->next)
      {
       B32 correct_type = n->v.type == EntryType::Resource && (int)n->v.resource->resourceType == pair->type;
       if (correct_type) { CollectionPushEntry(arena, &ret, n->v); }
      }
     } break;
    }

    ScratchEnd(temp);

   } break;
   case Function::First:  { ret = ExecuteSubsetting(arena, context, node, 0, 0, 0); } break;
   case Function::Last:   { ret = ExecuteSubsetting(arena, context, node, -1, -1, 0); } break;
   case Function::Tail:   { ret = ExecuteSubsetting(arena, context, node, 1, -1, 0); } break;
   case Function::Single: { ret = ExecuteSubsetting(arena, context, node, 0, -1, NF_Subsetting_FailOnMultiple); } break;

   case Function::Skip:
   case Function::Take:
   {
    FP_Assert(func_node->params.count > 0, context, Str8Lit("Skip/Take function requires a parameter of type integer"));
    FP_Assert(func_node->params.first, context, Str8Lit("Skip/Take function first parameter is null"));
    FP_Assert(func_node->params.first->v->type == Piece_Number, context, Str8Lit("Skip/Take function parameter must be an integer"));
    FP_Assert(func_node->params.first->v->value.num.type == Number_Integer, context, Str8Lit("Skip/Take function parameter must be an integer"));

    S64 num = func_node->params.first->v->value.num.s64;

    S64 min = (function_type == Function::Skip) ? num : 0;
    S64 max = (function_type == Function::Skip) ? -1  : num - 1;
    min = Max(0, min);

    // NOTE(agw): due to rule on "take" function: 
    // "If num is less than or equal to 0,
    // or if the input collection is empty ({ }) take returns an empty collection."
    if (num <= 0 && function_type == Function::Take) ret = { 0 };
    else ret = ExecuteSubsetting(arena, context, node, min, max, 0);
   } break;
   default:
   {
    FP_Assert(false, context, PushStr8F(context->arena, "No known function with name: \"%S\"", func_node->slice))
   } break;
  }

  ScratchEnd(temp);
  return ret;
 }

 local_function Collection
 ExecuteExpression(Arena *arena, FP_ExecutionContext *context, Piece* node)
 {
  // TODO(agw): eventually we may want to make this a loop and manage the stack on our own...

  Collection next_ret = { 0 };
  switch (node->type)
  {
   case Piece_Identifier:
   {
    const native_fhir::ResourceNameTypePair* pair = NF_ResourceNameTypePairFromString8(node->slice);
    FP_Assert(pair, context, PushStr8F(context->arena, "Could not find resource type \"%S\"", node->slice));

    CollectionEntry entry = {};
    entry.type = EntryType::ResourceType;
    entry.resource_type = (ResourceType)pair->type;
    return CollectionFromEntry(arena, entry);
   } break;
   case Piece_ThisInvocation:
   {
    return CollectionFromEntry(arena, context->entry_stack_first->v);
   } break;
   case Piece_As:
   case Piece_Is:
   {
    Temp temp = ScratchBegin(&arena, 1);
    Collection left_res = ExecuteExpression(temp.arena, context, node->child[0]);
    Collection right_res = ExecuteExpression(temp.arena, context, node->child[1]);

    Assert(left_res.count == 1);
    Assert(right_res.count == 1 && right_res.first->v.type == EntryType::ResourceType);

    ResourceType col_first_type = right_res.first->v.resource_type;
    B32 types_equal = col_first_type == left_res.first->v.resource->resourceType;

    Collection col = { 0 };
    if(node->type == Piece_Is)
    {
     CollectionEntry ent = {};
     ent.type = EntryType::Boolean;
     ent.b = types_equal;
     CollectionPushEntry(arena, &col, ent);
    }
    else if(node->type == Piece_As && types_equal)
    {
     CollectionEntry ent = left_res.first->v;
     CollectionPushEntry(arena, &col, ent);
    }

    ScratchEnd(temp);

    return col;
   } break;
   case Piece_MemberInvocation:
   {
    // NOTE(agw): we are in some function like "select"
    if (!IsNilCollectionEntryNode(context->entry_stack_first))
    {
     String8 member_name = node->slice;
     Assert(context->entry_stack_first->v.type == EntryType::Resource);
     nf_fhir_r4::Resource* resource = context->entry_stack_first->v.resource;

     Temp temp = ScratchBegin(&arena, 1);

     Collection col = CollectionFromEntry(temp.arena, context->entry_stack_first->v);
     Collection ret = GetMembersFromCollection(arena, context, col, member_name);

     ScratchEnd(temp);

     return ret;
    }
    // NOTE(agw): we are at the beginning of the first expression, collect resources
    else
    {
     const ResourceNameTypePair *pair = NF_ResourceNameTypePairFromString8(node->slice);
     ResourceType type = ResourceType::Unknown;
     if (pair)
     {
      type = (ResourceType)pair->type;
      return GetResourcesOfType(arena, context->res_count, context->resources, type);
     }

     Temp temp = ScratchBegin(&arena, 1);
     Collection col = GetResourcesOfType(arena, context->res_count, context->resources, type);
     Collection ret = GetMembersFromCollection(arena, context, col, node->slice);
     ScratchEnd(temp);
     return ret;
    }
   } break;

   case Piece_Dot:
   {
    FP_Assert(!IsNilPiece(node->child[1]) && node->child[1]->type != Piece_Unknown, context, Str8Lit("Must have right hand side"));
    // ~ NOTE(agw): Parse Invokation
    if (node->child[1]->type != Piece_FunctionInvocation)
    {
     Temp temp = ScratchBegin(&arena, 1);
     Collection left_col = ExecuteExpression(temp.arena, context, node->child[0]);
     String8 member_name = node->child[1]->slice;
     Collection ret = GetMembersFromCollection(arena, context, left_col, member_name);
     ScratchEnd(temp);
     return ret;
    }
    else
    {
     Collection ret = ExecuteFunction(arena, context, node);
     return ret;
    }

   } break;
   case Piece_Index:
   {
    Temp temp = ScratchBegin(&arena, 1);

    Collection left = ExecuteExpression(temp.arena, context,  node->child[0]);
    Collection right = ExecuteExpression(temp.arena, context, node->child[1]);

    FP_Assert(right.first->v.type == EntryType::Number, context, Str8Lit("Must use an integer literal to index collection"));
    FP_Assert(right.first->v.number.type == Number_Integer, context, Str8Lit("Must use an integer literal to index collection"));

    S64 index = right.first->v.number.s64;

    if (index < 0 || index >= left.count)
    {
     Collection col = {};
     return col;
    }

    CollectionEntryNode *node = left.first;
    for (int i = 0; i < index; i++)
    {
     node = node->next;
    }

    Collection ret = CollectionFromEntry(arena, node->v);
    ScratchEnd(temp);

    return ret;
   } break;
   case Piece_Union:
   {
    Collection left = ExecuteExpression(arena, context,  node->child[0]);
    Collection right = ExecuteExpression(arena, context, node->child[1]);

    MergeCollections(&left, &right);
    return left;
   } break;
   case Piece_EqualCompare:
   case Piece_QuantityCompare:
   {
    Temp temp = ScratchBegin(&arena, 1);

    Collection left = ExecuteExpression(temp.arena, context,  node->child[0]);
    Collection right = ExecuteExpression(temp.arena, context, node->child[1]);
    if (left.count == 0 || right.count == 0) return { 0 };

    FP_Assert(left.count == 1, context, Str8Lit("Comparisons (=, !=, ~, !~, >, <, >=, <=) must have cardinality of 1 on left side"));
    FP_Assert(right.count == 1, context, Str8Lit("Comparisons (=, !=, ~, !~, >, <, >=, <=) must have cardinality of 1 on right side"));

    EmptyBool result = (node->type == Piece_EqualCompare) 
    ?
    EqualCompareCollectionEntries(context, &left.first->v,  &right.first->v, node->meta.equal_compare_data)
    :
    QuantityCompareCollectionEntries(context, &left.first->v, &right.first->v, node->meta.quantity_compare_data);

    ScratchEnd(temp);

    if (result == EmptyBool::Empty)
    {
     Collection col = {};
     return col;
    }

    return CollectionFromBoolean(arena, result == EmptyBool::True);
   } break;

   case Piece_Multiply:
   case Piece_Divide:
   case Piece_Mod:
   case Piece_Minus:
   case Piece_Plus:
   {
    Temp temp = ScratchBegin(&arena, 1);
    Collection left = ExecuteExpression(temp.arena, context, node->child[0]);
    Collection right = ExecuteExpression(temp.arena, context, node->child[1]);

    FP_Assert(left.count == 1,  context, Str8Lit("Addition must have cardinality of 1 on left side"));
    FP_Assert(right.count == 1, context, Str8Lit("Addition must have cardinality of 1 on right side"));

    if (node->type == Piece_Plus &&
     left.first->v.type  == EntryType::String &&
     right.first->v.type == EntryType::String)
    {

     String8 concatted = PushStr8F(arena, "%S%S", left.first->v.str.str8, right.first->v.str.str8);
     NullableString8 ns = {};
     ns.str8 = concatted;
     ns.has_value = TRUE;
     Collection ret = CollectionFromString(arena, ns);
     ScratchEnd(temp);
     return ret;
    }

    FP_Assert(left.first->v.type == EntryType::Number,  context, Str8Lit("Addition can only occur between two numbers"));
    FP_Assert(right.first->v.type == EntryType::Number, context, Str8Lit("Addition can only occur between two numbers"));

    Number value = {};
    Number l_val = left.first->v.number;
    Number r_val = right.first->v.number;

    if      (node->type == Piece_Minus)    { value = l_val - r_val; }
    else if (node->type == Piece_Plus)     { value = l_val + r_val; }
    else if (node->type == Piece_Multiply) { value = l_val * r_val; }
    else if (node->type == Piece_Divide)   { value = l_val / r_val; }
    else if (node->type == Piece_Mod)      { value = l_val % r_val; }


    ScratchEnd(temp);

    Collection ret = {};
    CollectionEntry ent = {};
    ent.type = EntryType::Number;
    ent.number = value;
    CollectionPushEntry(arena, &ret, ent);

    return ret;
   } break;
   //  case Piece_Polarity_Positive:
   case Piece_Polarity_Negative:
   {
    Collection col = ExecuteExpression(arena, context, node->child[0]);
    FP_Assert(col.count == 1, context, Str8Lit("Negate Polarity Expression works on collection of cardinality 1"));
    FP_Assert(col.first->v.type == EntryType::Number, context, Str8Lit("Negate Polarity Expression works on a number"));

    CollectionEntry entry = col.first->v;
    if (entry.number.type == Number_Integer)
    {
     entry.number.s64 *= -1;
    }
    else if(entry.number.type == Number_Decimal)
    {
     entry.number.decimal = DecimalMul(entry.number.decimal, DecimalFromString(Str8Lit("-1")));
    }
    else
    {
     FP_Assert(false, context, Str8Lit("Unknown number type"));
    }

    col.first->v = entry;
    return col;
   } break;

   case Piece_Or:
   case Piece_And:
   {
    Temp temp = ScratchBegin(&arena, 1);

    Collection left = ExecuteExpression(temp.arena, context, node->child[0]);
    Collection right = ExecuteExpression(temp.arena, context, node->child[1]);

    if (left.count > 0)
    {
     FP_Assert(left.first->v.type == EntryType::Boolean,  context, Str8Lit("left of \"and\" operator must be of type boolean if not empty"));
    }

    if(right.count > 0)
    {
     FP_Assert(right.first->v.type == EntryType::Boolean, context, Str8Lit("right of \"and\" operator must be of type boolean if not empty"));
    }

    Collection ret = { 0 };
    B32 l_empty = left.count == 0;
    B32 r_empty = right.count == 0;

    B32 l_true = !l_empty && left.first->v.b;
    B32 r_true = !r_empty && right.first->v.b;

    EmptyBool l_val = (l_empty) ? EmptyBool::Empty : EmptyBool::False;
    l_val = (l_val == EmptyBool::False && l_true) ? EmptyBool::True : EmptyBool::False;

    EmptyBool r_val = (r_empty) ? EmptyBool::Empty : EmptyBool::False;
    r_val = (r_val == EmptyBool::False && r_true) ? EmptyBool::True : EmptyBool::False;

    EmptyBool res = EmptyBool::Empty;
    if (node->type == Piece_Or)
    {
     res = EmptyBoolOperation(l_val, r_val, EmptyBoolOperationType::Or);
    }
    else if (node->type == Piece_And) 
    {
     res = EmptyBoolOperation(l_val, r_val, EmptyBoolOperationType::And);
    }

    if (res == EmptyBool::True)
    {
     ret = CollectionFromBoolean(arena, TRUE);
    }
    else if (res == EmptyBool::False)
    {
     ret = CollectionFromBoolean(arena, FALSE);
    }

    ScratchEnd(temp);

    return ret;
   } break;

   case Piece_Not:
   {
   } break;

   case Piece_String: { return CollectionFromString(arena, node->value.str); } break;
   case Piece_Number: { return CollectionFromNumber(arena, node->value.num); } break;
   case Piece_Date:   { return CollectionFromDate(arena, node->value.time); } break;
   case Piece_Boolean:   { return CollectionFromBoolean(arena, node->value.b); } break;
  }

  return { 0 };
 }

 Collection
 ExecutePieces(Arena *arena, FP_ExecutionContext* context)
 {
  TimeFunction;
  Collection ret = { 0 };
  Piece* node = context->root_node;
  return ExecuteExpression(arena, context, node);
 }
};