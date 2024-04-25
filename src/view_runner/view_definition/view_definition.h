#ifndef NF_VIEW_DEFINITION_H
#define NF_VIEW_DEFINITION_H

namespace native_fhir
{


 struct ViewDefinition
 {
  ViewElem *first;
  ViewElem *last;
  int count;

  FHIR_VERSION::ResourceType resource_type;

  String8List where;

  int constant_count;
  Constant *constants;
 };

 struct ViewDefinitionNode
 {
  ViewDefinitionNode *next;
  ViewDefinition v;
 };

 struct ViewDefinitionList
 {
  ViewDefinitionNode *first;
  ViewDefinitionNode *last;
  int count;
 };


 DataTable
 ExecuteViewDefinition(Arena *arena, 
                       ViewDefinition vd,
                       ResourceStringProvider resources,
                       int stopping_count = 0);
};

#endif