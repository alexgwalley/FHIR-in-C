
// Generated from .\fhirpath.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "fhirpathListener.h"


/**
 * This class provides an empty implementation of fhirpathListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  fhirpathBaseListener : public fhirpathListener {
public:

  virtual void enterEntireExpression(fhirpathParser::EntireExpressionContext * /*ctx*/) override { }
  virtual void exitEntireExpression(fhirpathParser::EntireExpressionContext * /*ctx*/) override { }

  virtual void enterIndexerExpression(fhirpathParser::IndexerExpressionContext * /*ctx*/) override { }
  virtual void exitIndexerExpression(fhirpathParser::IndexerExpressionContext * /*ctx*/) override { }

  virtual void enterPolarityExpression(fhirpathParser::PolarityExpressionContext * /*ctx*/) override { }
  virtual void exitPolarityExpression(fhirpathParser::PolarityExpressionContext * /*ctx*/) override { }

  virtual void enterAdditiveExpression(fhirpathParser::AdditiveExpressionContext * /*ctx*/) override { }
  virtual void exitAdditiveExpression(fhirpathParser::AdditiveExpressionContext * /*ctx*/) override { }

  virtual void enterMultiplicativeExpression(fhirpathParser::MultiplicativeExpressionContext * /*ctx*/) override { }
  virtual void exitMultiplicativeExpression(fhirpathParser::MultiplicativeExpressionContext * /*ctx*/) override { }

  virtual void enterUnionExpression(fhirpathParser::UnionExpressionContext * /*ctx*/) override { }
  virtual void exitUnionExpression(fhirpathParser::UnionExpressionContext * /*ctx*/) override { }

  virtual void enterOrExpression(fhirpathParser::OrExpressionContext * /*ctx*/) override { }
  virtual void exitOrExpression(fhirpathParser::OrExpressionContext * /*ctx*/) override { }

  virtual void enterAndExpression(fhirpathParser::AndExpressionContext * /*ctx*/) override { }
  virtual void exitAndExpression(fhirpathParser::AndExpressionContext * /*ctx*/) override { }

  virtual void enterMembershipExpression(fhirpathParser::MembershipExpressionContext * /*ctx*/) override { }
  virtual void exitMembershipExpression(fhirpathParser::MembershipExpressionContext * /*ctx*/) override { }

  virtual void enterInequalityExpression(fhirpathParser::InequalityExpressionContext * /*ctx*/) override { }
  virtual void exitInequalityExpression(fhirpathParser::InequalityExpressionContext * /*ctx*/) override { }

  virtual void enterInvocationExpression(fhirpathParser::InvocationExpressionContext * /*ctx*/) override { }
  virtual void exitInvocationExpression(fhirpathParser::InvocationExpressionContext * /*ctx*/) override { }

  virtual void enterEqualityExpression(fhirpathParser::EqualityExpressionContext * /*ctx*/) override { }
  virtual void exitEqualityExpression(fhirpathParser::EqualityExpressionContext * /*ctx*/) override { }

  virtual void enterImpliesExpression(fhirpathParser::ImpliesExpressionContext * /*ctx*/) override { }
  virtual void exitImpliesExpression(fhirpathParser::ImpliesExpressionContext * /*ctx*/) override { }

  virtual void enterTermExpression(fhirpathParser::TermExpressionContext * /*ctx*/) override { }
  virtual void exitTermExpression(fhirpathParser::TermExpressionContext * /*ctx*/) override { }

  virtual void enterTypeExpression(fhirpathParser::TypeExpressionContext * /*ctx*/) override { }
  virtual void exitTypeExpression(fhirpathParser::TypeExpressionContext * /*ctx*/) override { }

  virtual void enterInvocationTerm(fhirpathParser::InvocationTermContext * /*ctx*/) override { }
  virtual void exitInvocationTerm(fhirpathParser::InvocationTermContext * /*ctx*/) override { }

  virtual void enterLiteralTerm(fhirpathParser::LiteralTermContext * /*ctx*/) override { }
  virtual void exitLiteralTerm(fhirpathParser::LiteralTermContext * /*ctx*/) override { }

  virtual void enterExternalConstantTerm(fhirpathParser::ExternalConstantTermContext * /*ctx*/) override { }
  virtual void exitExternalConstantTerm(fhirpathParser::ExternalConstantTermContext * /*ctx*/) override { }

  virtual void enterParenthesizedTerm(fhirpathParser::ParenthesizedTermContext * /*ctx*/) override { }
  virtual void exitParenthesizedTerm(fhirpathParser::ParenthesizedTermContext * /*ctx*/) override { }

  virtual void enterNullLiteral(fhirpathParser::NullLiteralContext * /*ctx*/) override { }
  virtual void exitNullLiteral(fhirpathParser::NullLiteralContext * /*ctx*/) override { }

  virtual void enterBooleanLiteral(fhirpathParser::BooleanLiteralContext * /*ctx*/) override { }
  virtual void exitBooleanLiteral(fhirpathParser::BooleanLiteralContext * /*ctx*/) override { }

  virtual void enterStringLiteral(fhirpathParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(fhirpathParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterNumberLiteral(fhirpathParser::NumberLiteralContext * /*ctx*/) override { }
  virtual void exitNumberLiteral(fhirpathParser::NumberLiteralContext * /*ctx*/) override { }

  virtual void enterLongNumberLiteral(fhirpathParser::LongNumberLiteralContext * /*ctx*/) override { }
  virtual void exitLongNumberLiteral(fhirpathParser::LongNumberLiteralContext * /*ctx*/) override { }

  virtual void enterDateLiteral(fhirpathParser::DateLiteralContext * /*ctx*/) override { }
  virtual void exitDateLiteral(fhirpathParser::DateLiteralContext * /*ctx*/) override { }

  virtual void enterDateTimeLiteral(fhirpathParser::DateTimeLiteralContext * /*ctx*/) override { }
  virtual void exitDateTimeLiteral(fhirpathParser::DateTimeLiteralContext * /*ctx*/) override { }

  virtual void enterTimeLiteral(fhirpathParser::TimeLiteralContext * /*ctx*/) override { }
  virtual void exitTimeLiteral(fhirpathParser::TimeLiteralContext * /*ctx*/) override { }

  virtual void enterQuantityLiteral(fhirpathParser::QuantityLiteralContext * /*ctx*/) override { }
  virtual void exitQuantityLiteral(fhirpathParser::QuantityLiteralContext * /*ctx*/) override { }

  virtual void enterExternalConstant(fhirpathParser::ExternalConstantContext * /*ctx*/) override { }
  virtual void exitExternalConstant(fhirpathParser::ExternalConstantContext * /*ctx*/) override { }

  virtual void enterMemberInvocation(fhirpathParser::MemberInvocationContext * /*ctx*/) override { }
  virtual void exitMemberInvocation(fhirpathParser::MemberInvocationContext * /*ctx*/) override { }

  virtual void enterFunctionInvocation(fhirpathParser::FunctionInvocationContext * /*ctx*/) override { }
  virtual void exitFunctionInvocation(fhirpathParser::FunctionInvocationContext * /*ctx*/) override { }

  virtual void enterThisInvocation(fhirpathParser::ThisInvocationContext * /*ctx*/) override { }
  virtual void exitThisInvocation(fhirpathParser::ThisInvocationContext * /*ctx*/) override { }

  virtual void enterIndexInvocation(fhirpathParser::IndexInvocationContext * /*ctx*/) override { }
  virtual void exitIndexInvocation(fhirpathParser::IndexInvocationContext * /*ctx*/) override { }

  virtual void enterTotalInvocation(fhirpathParser::TotalInvocationContext * /*ctx*/) override { }
  virtual void exitTotalInvocation(fhirpathParser::TotalInvocationContext * /*ctx*/) override { }

  virtual void enterFunction(fhirpathParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(fhirpathParser::FunctionContext * /*ctx*/) override { }

  virtual void enterParamList(fhirpathParser::ParamListContext * /*ctx*/) override { }
  virtual void exitParamList(fhirpathParser::ParamListContext * /*ctx*/) override { }

  virtual void enterQuantity(fhirpathParser::QuantityContext * /*ctx*/) override { }
  virtual void exitQuantity(fhirpathParser::QuantityContext * /*ctx*/) override { }

  virtual void enterUnit(fhirpathParser::UnitContext * /*ctx*/) override { }
  virtual void exitUnit(fhirpathParser::UnitContext * /*ctx*/) override { }

  virtual void enterDateTimePrecision(fhirpathParser::DateTimePrecisionContext * /*ctx*/) override { }
  virtual void exitDateTimePrecision(fhirpathParser::DateTimePrecisionContext * /*ctx*/) override { }

  virtual void enterPluralDateTimePrecision(fhirpathParser::PluralDateTimePrecisionContext * /*ctx*/) override { }
  virtual void exitPluralDateTimePrecision(fhirpathParser::PluralDateTimePrecisionContext * /*ctx*/) override { }

  virtual void enterTypeSpecifier(fhirpathParser::TypeSpecifierContext * /*ctx*/) override { }
  virtual void exitTypeSpecifier(fhirpathParser::TypeSpecifierContext * /*ctx*/) override { }

  virtual void enterQualifiedIdentifier(fhirpathParser::QualifiedIdentifierContext * /*ctx*/) override { }
  virtual void exitQualifiedIdentifier(fhirpathParser::QualifiedIdentifierContext * /*ctx*/) override { }

  virtual void enterIdentifier(fhirpathParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(fhirpathParser::IdentifierContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

