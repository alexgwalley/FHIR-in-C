#ifndef NF_FHIR_PATH_LISTENER
#define NF_FHIR_PATH_LISTENER
#include <any>

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

  std::any visitIndexerExpression(fhirpathParser::IndexerExpressionContext *ctx);

  std::any visitEntireExpression(fhirpathParser::EntireExpressionContext *ctx) {
    return ctx->expression()->accept(this);
  }
  std::any visitParenthesizedTerm(fhirpathParser::ParenthesizedTermContext *ctx) {
    return ctx->expression()->accept(this);
  }

  // Unary Expressions
  std::any visitPolarityExpression(fhirpathParser::PolarityExpressionContext *ctx);

  // Binary Expressions
  void MakeBinary(Piece* parent, antlr4::ParserRuleContext *left, antlr4::ParserRuleContext *right);
  std::any visitOrExpression(fhirpathParser::OrExpressionContext *ctx);
  std::any visitAndExpression(fhirpathParser::AndExpressionContext *ctx);

  std::any visitAdditiveExpression(fhirpathParser::AdditiveExpressionContext *context);
  std::any visitMultiplicativeExpression(fhirpathParser::MultiplicativeExpressionContext *context);

  std::any visitUnionExpression(fhirpathParser::UnionExpressionContext *ctx);

  std::any visitTypeExpression(fhirpathParser::TypeExpressionContext *ctx);
  std::any visitTypeSpecifier(fhirpathParser::TypeSpecifierContext *ctx);

  // Equality
  std::any visitEqualityExpression(fhirpathParser::EqualityExpressionContext *ctx);
  std::any visitInequalityExpression(fhirpathParser::InequalityExpressionContext *ctx);
  

  // Invocations
  std::any visitInvocationExpression(fhirpathParser::InvocationExpressionContext *ctx);
  std::any visitFunctionInvocation(fhirpathParser::FunctionInvocationContext *ctx);
  std::any visitMemberInvocation(fhirpathParser::MemberInvocationContext *ctx);
  std::any visitThisInvocation(fhirpathParser::ThisInvocationContext *ctx);

  // Literals 
  std::any visitNumberLiteral(fhirpathParser::NumberLiteralContext *ctx);
  std::any visitStringLiteral(fhirpathParser::StringLiteralContext *ctx);
  std::any visitDateLiteral(fhirpathParser::DateLiteralContext *ctx);
  std::any visitDateTimeLiteral(fhirpathParser::DateTimeLiteralContext *ctx);
  std::any visitTimeLiteral(fhirpathParser::TimeLiteralContext *ctx);
  std::any visitBooleanLiteral(fhirpathParser::BooleanLiteralContext *ctx);


  // Constant
  std::any visitExternalConstantTerm(fhirpathParser::ExternalConstantTermContext *ctx);


 };

}

#endif