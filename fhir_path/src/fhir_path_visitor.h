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


  std::any visitPolarityExpression(fhirpathParser::PolarityExpressionContext *ctx);

  // Binary Expressions
  void MakeBinary(Piece* parent, antlr4::ParserRuleContext *left, antlr4::ParserRuleContext *right);
  std::any visitOrExpression(fhirpathParser::OrExpressionContext *ctx);
  std::any visitAndExpression(fhirpathParser::AndExpressionContext *ctx);

  std::any visitAdditiveExpression(fhirpathParser::AdditiveExpressionContext *context);
  std::any visitMultiplicativeExpression(fhirpathParser::MultiplicativeExpressionContext *context);

  std::any visitTypeExpression(fhirpathParser::TypeExpressionContext *ctx);
  std::any visitTypeSpecifier(fhirpathParser::TypeSpecifierContext *ctx);

  // Equality
  std::any visitEqualityExpression(fhirpathParser::EqualityExpressionContext *ctx);
  std::any visitInequalityExpression(fhirpathParser::InequalityExpressionContext *ctx);
  
  std::any visitParent(fhirpathParser::NumberLiteralContext *ctx);

  // Literals 
  std::any visitNumberLiteral(fhirpathParser::NumberLiteralContext *ctx);
  std::any visitStringLiteral(fhirpathParser::StringLiteralContext *ctx);

  // Invocations
  std::any visitInvocationExpression(fhirpathParser::InvocationExpressionContext *ctx);
  std::any visitMemberInvocation(fhirpathParser::MemberInvocationContext *ctx);
  std::any visitFunctionInvocation(fhirpathParser::FunctionInvocationContext *ctx);
  std::any visitThisInvocation(fhirpathParser::ThisInvocationContext *ctx);

  std::any visitEntireExpression(fhirpathParser::EntireExpressionContext *ctx) {
    return ctx->expression()->accept(this);
  }
  std::any visitParenthesizedTerm(fhirpathParser::ParenthesizedTermContext *ctx) {
    return ctx->expression()->accept(this);
  }

 };

}

#endif