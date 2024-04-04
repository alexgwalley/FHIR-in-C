#ifndef NF_FHIR_PATH_LISTENER
#define NF_FHIR_PATH_LISTENER

namespace native_fhir
{

 class FhirPathVisitor : public fhirpathBaseVisitor
 {
 public:
  Arena *arena;

  FhirPathVisitor() 
  {
   arena = ArenaAlloc(Megabytes(64));
  };

  ~FhirPathVisitor() 
  {
   ArenaRelease(arena);
  }


  virtual std::any visitEntireExpression(fhirpathParser::EntireExpressionContext *ctx);

 };

}

#endif