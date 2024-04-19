#ifndef NF_VIEW_DEFINITION_H
#define NF_VIEW_DEFINITION_H

namespace native_fhir
{

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
  ViewElem *first;
  ViewElem *last;
  int count;

  nf_fhir_r4::ResourceType resource_type;

  String8List where;

  int constant_count;
  Constant *constants;
 };

 DataTable
 ExecuteViewDefinition(Arena *arena, ViewDefinition vd, Collection resources);
};

#endif