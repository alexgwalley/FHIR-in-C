#ifndef FP_TEST_FRAMEWORK
#define FP_TEST_FRAMEWORK

namespace native_fhir
{

typedef struct VD_Where VD_Where;
struct VD_Where
{
 String8 full_path;
 String8 desc;
};

typedef struct ColumnDef ColumnDef;
struct ColumnDef
{
 String8 full_path;
 String8 name;
};

typedef struct ColumnNode ColumnNode;
struct ColumnNode
{
 ColumnNode* next;
 ColumnDef v;
};

typedef struct ColumnList ColumnList;
struct ColumnList
{
 ColumnNode* first;
 ColumnNode* last;
 size_t count;

 size_t where_count;
 VD_Where* wheres;
};

 struct FP_TestResult
 {
  String8List column_names;
  Collection values;
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