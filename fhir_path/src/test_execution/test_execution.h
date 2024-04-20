#ifndef FP_TEST_FRAMEWORK
#define FP_TEST_FRAMEWORK

namespace native_fhir
{

 struct FP_TestResultNode
 {
  FP_TestResultNode *next;
  DataRow v;
 };

 struct FP_Test
 {
  String8 title;

  //FHIR_VERSION::ViewDefinition *vd;
  native_fhir::ViewDefinition vd;
  ND_ContextNode* ctx;

  B32 expect_error;
  DataTable expectations;
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
  FHIR_VERSION::Resource** res;
  ND_ContextNode *ctx_first;
  ND_ContextNode *ctx_last;

  S64 test_count;
  FP_Test *tests;
 };

 void
 ReadAndExecuteTests(String8 test_folder);

};


#endif