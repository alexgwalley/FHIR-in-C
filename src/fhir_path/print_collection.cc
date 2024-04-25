namespace native_fhir
{
 //////////////////
 // ~ Printing
 void
 PrintIndent(int indent)
 {
  for (int i = 0; i < indent; i++)
  {
   printf(" ");
  }
 }

 void
 PrintISO8601_Time(ISO8601_Time time)
 {
  if (time.precision >= Precision::Year) { printf("%04d", time.year); }
  if (time.precision >= Precision::Month) { printf("-%02d", time.month); }
  if (time.precision >= Precision::Day) { printf("-%02d", time.day); }
  if (time.precision >= Precision::Hour) { printf(":%02d", time.hour); }
  if (time.precision >= Precision::Minute) { printf(":%02d", time.minute); }
  if (time.precision >= Precision::Second) { printf(":%02d", time.second); }
  if (time.precision >= Precision::Millisecond) { printf(":%03d", time.millisecond); }

  if (time.timezone_char) { printf("%c", time.timezone_char); }

  if (time.precision >= Precision::TimezoneHour) { printf("%02d", time.timezone_hour); }
  if (time.precision >= Precision::TimezoneMinute) { printf(":%02d", time.timezone_minute); }
 }

 void PrintSingleResourceMember(FHIR_VERSION::Resource *resource, int indent);

 void
 PrintResourceMember(FHIR_VERSION::Resource *resource,
                     SerializedClassMemberMetadata *mem,
                     SerializedValueTypeAndName tan,
                     int indent)
 {
  String8 mem_name = M_GetStringFromHandle(g_meta_file, mem->name);
  switch (tan.type)
  {
   case ValueType::ClassReference:
   {
    FHIR_VERSION::Resource* child = DEREF_STRUCT(resource, mem->offset, FHIR_VERSION::Resource);
    if (child)
    {
     PrintIndent(indent + 1);
     printf("%.*s\n", PRINT_STR8(mem_name));
    }
    PrintSingleResourceMember(child, indent + 2);
   } break;
   case VALUE_TYPE_STRING_CASES:
   case ValueType::Decimal:
   {
    NullableString8 str = DEREF_VALUE(resource, mem->offset, NullableString8);
    if (str.has_value)
    {
     PrintIndent(indent);
     printf(" - %10.*s: %.*s\n", PRINT_STR8(mem_name), PRINT_STR8(str));
    }
   } break;
   case ValueType::Boolean:
   {
    NullableBoolean b_value = DEREF_VALUE(resource, mem->offset, NullableBoolean);
    if (b_value.has_value)
    {
     PrintIndent(indent);
     if (b_value.value) { printf("true\n"); }
     else { printf("false\n"); }
    }
   } break;

   case VALUE_TYPE_TIME_CASES:
   {
    ISO8601_Time time = DEREF_VALUE(resource, mem->offset, ISO8601_Time);
    if (time.precision != Precision::Unknown)
    {
     printf(" - %10.*s: ", PRINT_STR8(mem_name));
     PrintIndent(indent);
     PrintISO8601_Time(time);
     printf("\n");
    }
   } break;
  }
 }

 void
 PrintIndexedResourceMember(FHIR_VERSION::Resource *resource,
                            SerializedClassMemberMetadata *mem,
                            SerializedValueTypeAndName tan,
                            int indent,
                            int index)
 {
  String8 mem_name = M_GetStringFromHandle(g_meta_file, mem->name);
  switch (tan.type)
  {
   case ValueType::ClassReference:
   {
    FHIR_VERSION::Resource** resources = DEREF_STRUCT_ARRAY(resource, mem->offset, FHIR_VERSION::Resource);
    FHIR_VERSION::Resource* child = resources[index];
    if (child)
    {
     PrintIndent(indent + 1);
     printf("%.*s\n", PRINT_STR8(mem_name));
    }
    PrintSingleResourceMember(child, indent + 2);
   } break;
   case VALUE_TYPE_STRING_CASES:
   case ValueType::Decimal:
   {
    NullableString8* strs = DEREF_VALUE_ARRAY(resource, mem->offset, NullableString8);
    NullableString8 str = strs[index];
    if (str.has_value)
    {
     PrintIndent(indent);
     printf(" - %10.*s: %.*s\n", PRINT_STR8(mem_name), PRINT_STR8(str));
    }
   } break;
   case ValueType::Boolean:
   {
    NullableBoolean* bools = DEREF_VALUE_ARRAY(resource, mem->offset, NullableBoolean);
    NullableBoolean b_value = bools[index];
    if (b_value.has_value)
    {
     PrintIndent(indent);
     if (b_value.value) { printf("true\n"); }
     else { printf("false\n"); }
    }
   } break;

   case VALUE_TYPE_TIME_CASES:
   {
    ISO8601_Time* times = DEREF_VALUE_ARRAY(resource, mem->offset, ISO8601_Time);
    ISO8601_Time time = times[index];
    if (time.precision != Precision::Unknown)
    {
     printf(" - %10.*s: ", PRINT_STR8(mem_name));
     PrintIndent(indent);
     PrintISO8601_Time(time);
     printf("\n");
    }
   } break;
  }
 }

 void
 PrintSingleResourceMember(FHIR_VERSION::Resource *resource, int indent)
 {
  if (!resource) return;

  SerializedClassMetadata *meta = M_GetClassMetadata(g_meta_file, (int)resource->resourceType);
  String8 meta_name = M_GetStringFromHandle(g_meta_file, meta->name);

  PrintIndent(indent);
  printf("%.*s\n", PRINT_STR8(meta_name));

  for (int i = 0; i < meta->members_count; i++)
  {
   SerializedClassMemberMetadata *mem = M_GetClassMemberMetadata(meta, i);
   switch (mem->cardinality)
   {
    case Cardinality::ZeroToOne:
    case Cardinality::OneToOne:
    {
     if (mem->type == ClassMemberType::Single)
     {
      SerializedValueTypeAndName tan = M_GetClassMemberType(mem, 0);
      PrintResourceMember(resource, mem, tan, indent);
     } else if (mem->type == ClassMemberType::Union)
     {
      SerializedClassMemberMetadata *enum_mem = M_GetClassMemberMetadata(meta, i + 1);

      U32 type_index = DEREF_VALUE(resource, enum_mem->offset, U32);

      SerializedValueTypeAndName tan = M_GetClassMemberType(mem, type_index);
      PrintResourceMember(resource, mem, tan, indent);
     }
    } break;
    case Cardinality::OneToInf:
    case Cardinality::ZeroToInf:
    {
     if (mem->type == ClassMemberType::Single)
     {
      SerializedClassMemberMetadata *count_mem = M_GetClassMemberMetadata(meta, i - 1);
      size_t count = DEREF_COUNT(resource, count_mem->offset);
      for (int j = 0; j < count; j++)
      {
       printf("[%d]: ", j);
       SerializedValueTypeAndName tan = M_GetClassMemberType(mem, 0);
       PrintIndexedResourceMember(resource, mem, tan, indent, j);
      }
     }
    } break;
   }
  }
 }

 void
 PrintCollection(Collection col)
 {
  printf("Collection: -----------------\n");
  TimeFunction;
  for (CollectionEntryNode *node = col.first; !IsNilCollectionEntryNode(node); node = node->next)
  {
   switch (node->v.type)
   {
    case EntryType::Resource:
    {
     PrintSingleResourceMember(node->v.resource, 0);
    } break;
    case EntryType::String:
    {
     PrintIndent(0);
     printf("%.*s\n", PRINT_STR8(node->v.str));
    } break;
    case EntryType::Number:
    {
     switch (node->v.number.type)
     {
      case NumberType::Integer:
      {
       printf("%lld\n", node->v.number.s64);
      } break;
      case NumberType::Decimal:
      {
       Temp temp = ScratchBegin(0, 0);
       String8 str = Str8FromDecimal(temp.arena, node->v.number.decimal);
       printf("%.*s\n", PRINT_STR8(str));
       ScratchEnd(temp);
      } break;
     }
    } break;
    case EntryType::Boolean:
    {
     if (node->v.b) { printf("true\n"); }
     else { printf("false\n"); }
    } break;
    case EntryType::Iso8601:
    {
     PrintISO8601_Time(node->v.time);
     printf("\n");
    } break;
   }
  }

  printf("-------------------------------- ");
  printf("Collection Count: %llu\n", col.count);
 }
};