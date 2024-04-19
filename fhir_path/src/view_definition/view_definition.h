#ifndef NF_VIEW_DEFINITION_H
#define NF_VIEW_DEFINITION_H

namespace native_fhir
{


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