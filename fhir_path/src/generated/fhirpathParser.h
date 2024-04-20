
// Generated from .\fhirpath.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  fhirpathParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, DATE = 55, DATETIME = 56, 
    TIME = 57, IDENTIFIER = 58, DELIMITEDIDENTIFIER = 59, STRING = 60, NUMBER = 61, 
    LONGNUMBER = 62, WS = 63, COMMENT = 64, LINE_COMMENT = 65
  };

  enum {
    RuleEntireExpression = 0, RuleExpression = 1, RuleTerm = 2, RuleLiteral = 3, 
    RuleExternalConstant = 4, RuleInvocation = 5, RuleFunction = 6, RuleParamList = 7, 
    RuleQuantity = 8, RuleUnit = 9, RuleDateTimePrecision = 10, RulePluralDateTimePrecision = 11, 
    RuleTypeSpecifier = 12, RuleQualifiedIdentifier = 13, RuleIdentifier = 14
  };

  explicit fhirpathParser(antlr4::TokenStream *input);

  fhirpathParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~fhirpathParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class EntireExpressionContext;
  class ExpressionContext;
  class TermContext;
  class LiteralContext;
  class ExternalConstantContext;
  class InvocationContext;
  class FunctionContext;
  class ParamListContext;
  class QuantityContext;
  class UnitContext;
  class DateTimePrecisionContext;
  class PluralDateTimePrecisionContext;
  class TypeSpecifierContext;
  class QualifiedIdentifierContext;
  class IdentifierContext; 

  class  EntireExpressionContext : public antlr4::ParserRuleContext {
  public:
    EntireExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EntireExpressionContext* entireExpression();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IndexerExpressionContext : public ExpressionContext {
  public:
    IndexerExpressionContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PolarityExpressionContext : public ExpressionContext {
  public:
    PolarityExpressionContext(ExpressionContext *ctx);

    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AdditiveExpressionContext : public ExpressionContext {
  public:
    AdditiveExpressionContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultiplicativeExpressionContext : public ExpressionContext {
  public:
    MultiplicativeExpressionContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnionExpressionContext : public ExpressionContext {
  public:
    UnionExpressionContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OrExpressionContext : public ExpressionContext {
  public:
    OrExpressionContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndExpressionContext : public ExpressionContext {
  public:
    AndExpressionContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MembershipExpressionContext : public ExpressionContext {
  public:
    MembershipExpressionContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InequalityExpressionContext : public ExpressionContext {
  public:
    InequalityExpressionContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InvocationExpressionContext : public ExpressionContext {
  public:
    InvocationExpressionContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    InvocationContext *invocation();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqualityExpressionContext : public ExpressionContext {
  public:
    EqualityExpressionContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ImpliesExpressionContext : public ExpressionContext {
  public:
    ImpliesExpressionContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TermExpressionContext : public ExpressionContext {
  public:
    TermExpressionContext(ExpressionContext *ctx);

    TermContext *term();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeExpressionContext : public ExpressionContext {
  public:
    TypeExpressionContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    TypeSpecifierContext *typeSpecifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TermContext() = default;
    void copyFrom(TermContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExternalConstantTermContext : public TermContext {
  public:
    ExternalConstantTermContext(TermContext *ctx);

    ExternalConstantContext *externalConstant();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LiteralTermContext : public TermContext {
  public:
    LiteralTermContext(TermContext *ctx);

    LiteralContext *literal();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenthesizedTermContext : public TermContext {
  public:
    ParenthesizedTermContext(TermContext *ctx);

    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InvocationTermContext : public TermContext {
  public:
    InvocationTermContext(TermContext *ctx);

    InvocationContext *invocation();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TermContext* term();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LiteralContext() = default;
    void copyFrom(LiteralContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TimeLiteralContext : public LiteralContext {
  public:
    TimeLiteralContext(LiteralContext *ctx);

    antlr4::tree::TerminalNode *TIME();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NullLiteralContext : public LiteralContext {
  public:
    NullLiteralContext(LiteralContext *ctx);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DateTimeLiteralContext : public LiteralContext {
  public:
    DateTimeLiteralContext(LiteralContext *ctx);

    antlr4::tree::TerminalNode *DATETIME();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringLiteralContext : public LiteralContext {
  public:
    StringLiteralContext(LiteralContext *ctx);

    antlr4::tree::TerminalNode *STRING();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DateLiteralContext : public LiteralContext {
  public:
    DateLiteralContext(LiteralContext *ctx);

    antlr4::tree::TerminalNode *DATE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanLiteralContext : public LiteralContext {
  public:
    BooleanLiteralContext(LiteralContext *ctx);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumberLiteralContext : public LiteralContext {
  public:
    NumberLiteralContext(LiteralContext *ctx);

    antlr4::tree::TerminalNode *NUMBER();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LongNumberLiteralContext : public LiteralContext {
  public:
    LongNumberLiteralContext(LiteralContext *ctx);

    antlr4::tree::TerminalNode *LONGNUMBER();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  QuantityLiteralContext : public LiteralContext {
  public:
    QuantityLiteralContext(LiteralContext *ctx);

    QuantityContext *quantity();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LiteralContext* literal();

  class  ExternalConstantContext : public antlr4::ParserRuleContext {
  public:
    ExternalConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExternalConstantContext* externalConstant();

  class  InvocationContext : public antlr4::ParserRuleContext {
  public:
    InvocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InvocationContext() = default;
    void copyFrom(InvocationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TotalInvocationContext : public InvocationContext {
  public:
    TotalInvocationContext(InvocationContext *ctx);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ThisInvocationContext : public InvocationContext {
  public:
    ThisInvocationContext(InvocationContext *ctx);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IndexInvocationContext : public InvocationContext {
  public:
    IndexInvocationContext(InvocationContext *ctx);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionInvocationContext : public InvocationContext {
  public:
    FunctionInvocationContext(InvocationContext *ctx);

    FunctionContext *function();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MemberInvocationContext : public InvocationContext {
  public:
    MemberInvocationContext(InvocationContext *ctx);

    IdentifierContext *identifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InvocationContext* invocation();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ParamListContext *paramList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionContext* function();

  class  ParamListContext : public antlr4::ParserRuleContext {
  public:
    ParamListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamListContext* paramList();

  class  QuantityContext : public antlr4::ParserRuleContext {
  public:
    QuantityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    UnitContext *unit();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuantityContext* quantity();

  class  UnitContext : public antlr4::ParserRuleContext {
  public:
    UnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DateTimePrecisionContext *dateTimePrecision();
    PluralDateTimePrecisionContext *pluralDateTimePrecision();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnitContext* unit();

  class  DateTimePrecisionContext : public antlr4::ParserRuleContext {
  public:
    DateTimePrecisionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DateTimePrecisionContext* dateTimePrecision();

  class  PluralDateTimePrecisionContext : public antlr4::ParserRuleContext {
  public:
    PluralDateTimePrecisionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PluralDateTimePrecisionContext* pluralDateTimePrecision();

  class  TypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSpecifierContext* typeSpecifier();

  class  QualifiedIdentifierContext : public antlr4::ParserRuleContext {
  public:
    QualifiedIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedIdentifierContext* qualifiedIdentifier();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *DELIMITEDIDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

