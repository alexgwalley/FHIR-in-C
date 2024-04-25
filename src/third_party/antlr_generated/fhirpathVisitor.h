
// Generated from .\fhirpath.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "fhirpathParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by fhirpathParser.
 */
class  fhirpathVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by fhirpathParser.
   */
    virtual std::any visitEntireExpression(fhirpathParser::EntireExpressionContext *context) = 0;

    virtual std::any visitIndexerExpression(fhirpathParser::IndexerExpressionContext *context) = 0;

    virtual std::any visitPolarityExpression(fhirpathParser::PolarityExpressionContext *context) = 0;

    virtual std::any visitAdditiveExpression(fhirpathParser::AdditiveExpressionContext *context) = 0;

    virtual std::any visitMultiplicativeExpression(fhirpathParser::MultiplicativeExpressionContext *context) = 0;

    virtual std::any visitUnionExpression(fhirpathParser::UnionExpressionContext *context) = 0;

    virtual std::any visitOrExpression(fhirpathParser::OrExpressionContext *context) = 0;

    virtual std::any visitAndExpression(fhirpathParser::AndExpressionContext *context) = 0;

    virtual std::any visitMembershipExpression(fhirpathParser::MembershipExpressionContext *context) = 0;

    virtual std::any visitInequalityExpression(fhirpathParser::InequalityExpressionContext *context) = 0;

    virtual std::any visitInvocationExpression(fhirpathParser::InvocationExpressionContext *context) = 0;

    virtual std::any visitEqualityExpression(fhirpathParser::EqualityExpressionContext *context) = 0;

    virtual std::any visitImpliesExpression(fhirpathParser::ImpliesExpressionContext *context) = 0;

    virtual std::any visitTermExpression(fhirpathParser::TermExpressionContext *context) = 0;

    virtual std::any visitTypeExpression(fhirpathParser::TypeExpressionContext *context) = 0;

    virtual std::any visitInvocationTerm(fhirpathParser::InvocationTermContext *context) = 0;

    virtual std::any visitLiteralTerm(fhirpathParser::LiteralTermContext *context) = 0;

    virtual std::any visitExternalConstantTerm(fhirpathParser::ExternalConstantTermContext *context) = 0;

    virtual std::any visitParenthesizedTerm(fhirpathParser::ParenthesizedTermContext *context) = 0;

    virtual std::any visitNullLiteral(fhirpathParser::NullLiteralContext *context) = 0;

    virtual std::any visitBooleanLiteral(fhirpathParser::BooleanLiteralContext *context) = 0;

    virtual std::any visitStringLiteral(fhirpathParser::StringLiteralContext *context) = 0;

    virtual std::any visitNumberLiteral(fhirpathParser::NumberLiteralContext *context) = 0;

    virtual std::any visitLongNumberLiteral(fhirpathParser::LongNumberLiteralContext *context) = 0;

    virtual std::any visitDateLiteral(fhirpathParser::DateLiteralContext *context) = 0;

    virtual std::any visitDateTimeLiteral(fhirpathParser::DateTimeLiteralContext *context) = 0;

    virtual std::any visitTimeLiteral(fhirpathParser::TimeLiteralContext *context) = 0;

    virtual std::any visitQuantityLiteral(fhirpathParser::QuantityLiteralContext *context) = 0;

    virtual std::any visitExternalConstant(fhirpathParser::ExternalConstantContext *context) = 0;

    virtual std::any visitMemberInvocation(fhirpathParser::MemberInvocationContext *context) = 0;

    virtual std::any visitFunctionInvocation(fhirpathParser::FunctionInvocationContext *context) = 0;

    virtual std::any visitThisInvocation(fhirpathParser::ThisInvocationContext *context) = 0;

    virtual std::any visitIndexInvocation(fhirpathParser::IndexInvocationContext *context) = 0;

    virtual std::any visitTotalInvocation(fhirpathParser::TotalInvocationContext *context) = 0;

    virtual std::any visitFunction(fhirpathParser::FunctionContext *context) = 0;

    virtual std::any visitParamList(fhirpathParser::ParamListContext *context) = 0;

    virtual std::any visitQuantity(fhirpathParser::QuantityContext *context) = 0;

    virtual std::any visitUnit(fhirpathParser::UnitContext *context) = 0;

    virtual std::any visitDateTimePrecision(fhirpathParser::DateTimePrecisionContext *context) = 0;

    virtual std::any visitPluralDateTimePrecision(fhirpathParser::PluralDateTimePrecisionContext *context) = 0;

    virtual std::any visitTypeSpecifier(fhirpathParser::TypeSpecifierContext *context) = 0;

    virtual std::any visitQualifiedIdentifier(fhirpathParser::QualifiedIdentifierContext *context) = 0;

    virtual std::any visitIdentifier(fhirpathParser::IdentifierContext *context) = 0;


};

