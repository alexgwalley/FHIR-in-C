
// Generated from .\fhirpath.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "fhirpathVisitor.h"


/**
 * This class provides an empty implementation of fhirpathVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  fhirpathBaseVisitor : public fhirpathVisitor {
public:

  virtual std::any visitEntireExpression(fhirpathParser::EntireExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndexerExpression(fhirpathParser::IndexerExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPolarityExpression(fhirpathParser::PolarityExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditiveExpression(fhirpathParser::AdditiveExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicativeExpression(fhirpathParser::MultiplicativeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnionExpression(fhirpathParser::UnionExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrExpression(fhirpathParser::OrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndExpression(fhirpathParser::AndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMembershipExpression(fhirpathParser::MembershipExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInequalityExpression(fhirpathParser::InequalityExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInvocationExpression(fhirpathParser::InvocationExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqualityExpression(fhirpathParser::EqualityExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImpliesExpression(fhirpathParser::ImpliesExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTermExpression(fhirpathParser::TermExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeExpression(fhirpathParser::TypeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInvocationTerm(fhirpathParser::InvocationTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteralTerm(fhirpathParser::LiteralTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternalConstantTerm(fhirpathParser::ExternalConstantTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenthesizedTerm(fhirpathParser::ParenthesizedTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullLiteral(fhirpathParser::NullLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanLiteral(fhirpathParser::BooleanLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringLiteral(fhirpathParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumberLiteral(fhirpathParser::NumberLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLongNumberLiteral(fhirpathParser::LongNumberLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDateLiteral(fhirpathParser::DateLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDateTimeLiteral(fhirpathParser::DateTimeLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTimeLiteral(fhirpathParser::TimeLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuantityLiteral(fhirpathParser::QuantityLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternalConstant(fhirpathParser::ExternalConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberInvocation(fhirpathParser::MemberInvocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionInvocation(fhirpathParser::FunctionInvocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThisInvocation(fhirpathParser::ThisInvocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndexInvocation(fhirpathParser::IndexInvocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTotalInvocation(fhirpathParser::TotalInvocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction(fhirpathParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamList(fhirpathParser::ParamListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuantity(fhirpathParser::QuantityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnit(fhirpathParser::UnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDateTimePrecision(fhirpathParser::DateTimePrecisionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPluralDateTimePrecision(fhirpathParser::PluralDateTimePrecisionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeSpecifier(fhirpathParser::TypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedIdentifier(fhirpathParser::QualifiedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier(fhirpathParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }


};

