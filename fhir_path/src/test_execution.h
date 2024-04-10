#ifndef FP_TEST_FRAMEWORK
#define FP_TEST_FRAMEWORK

namespace native_fhir
{

 struct FP_TestResult
 {
  S64 value_count;

  String8 *column_names;
  CollectionEntry *values;
 };

 struct FP_TestResultNode
 {
  FP_TestResultNode *next;
  FP_TestResult v;
 };

 struct FP_Test
 {
  String8 title;

  nf_fhir_r4::ViewDefinition *vd;
  ND_ContextNode* ctx;

  
  S64 expect_count;
  FP_TestResult *expectations;
 };

 struct FP_TestNode
 {
  FP_TestNode *next;
  FP_Test v;
 };

 struct FP_TestCollection
 {
  String8 title;
  String8 desc;

  S64 res_count;
  nf_fhir_r4::Resource** res;
  ND_ContextNode *ctx_first;
  ND_ContextNode *ctx_last;

  S64 test_count;
  FP_Test *tests;
 };

 void
 ReadAndExecuteTests(String8 test_folder);

};


#endif