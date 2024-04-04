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

  void MakeBinary(Piece* parent, fhirpathParser::ExpressionContext *left, fhirpathParser::ExpressionContext *right);
  std::any visitOrExpression(fhirpathParser::OrExpressionContext *ctx);
  std::any visitAdditiveExpression(fhirpathParser::AdditiveExpressionContext *context);
  std::any visitMultiplicativeExpression(fhirpathParser::MultiplicativeExpressionContext *context);
  std::any visitNumberLiteral(fhirpathParser::NumberLiteralContext *ctx);
  std::any visitParent(fhirpathParser::NumberLiteralContext *ctx);

  std::any visitEntireExpression(fhirpathParser::EntireExpressionContext *ctx) {
    return ctx->expression()->accept(this);
  }
  std::any visitParenthesizedTerm(fhirpathParser::ParenthesizedTermContext *ctx) {
    return ctx->expression()->accept(this);
  }

 };

}

#endif