
// Generated from .\fhirpath.g4 by ANTLR 4.13.0


#include "fhirpathVisitor.h"

#include "fhirpathParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct FhirpathParserStaticData final {
  FhirpathParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  FhirpathParserStaticData(const FhirpathParserStaticData&) = delete;
  FhirpathParserStaticData(FhirpathParserStaticData&&) = delete;
  FhirpathParserStaticData& operator=(const FhirpathParserStaticData&) = delete;
  FhirpathParserStaticData& operator=(FhirpathParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag fhirpathParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
FhirpathParserStaticData *fhirpathParserStaticData = nullptr;

void fhirpathParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (fhirpathParserStaticData != nullptr) {
    return;
  }
#else
  assert(fhirpathParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<FhirpathParserStaticData>(
    std::vector<std::string>{
      "entireExpression", "expression", "term", "literal", "externalConstant", 
      "invocation", "function", "paramList", "quantity", "unit", "dateTimePrecision", 
      "pluralDateTimePrecision", "typeSpecifier", "qualifiedIdentifier", 
      "identifier"
    },
    std::vector<std::string>{
      "", "'.'", "'['", "']'", "'+'", "'-'", "'*'", "'/'", "'div'", "'mod'", 
      "'&'", "'is'", "'as'", "'|'", "'<='", "'<'", "'>'", "'>='", "'='", 
      "'~'", "'!='", "'!~'", "'in'", "'contains'", "'and'", "'or'", "'xor'", 
      "'implies'", "'('", "')'", "'{'", "'}'", "'true'", "'false'", "'%'", 
      "'$this'", "'$index'", "'$total'", "','", "'year'", "'month'", "'week'", 
      "'day'", "'hour'", "'minute'", "'second'", "'millisecond'", "'years'", 
      "'months'", "'weeks'", "'days'", "'hours'", "'minutes'", "'seconds'", 
      "'milliseconds'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "DATE", "DATETIME", "TIME", "IDENTIFIER", "DELIMITEDIDENTIFIER", 
      "STRING", "NUMBER", "LONGNUMBER", "WS", "COMMENT", "LINE_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,65,156,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,1,0,1,0,1,0,1,1,1,1,1,1,1,1,3,1,38,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,78,8,1,10,1,
  	12,1,81,9,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,90,8,2,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,3,3,102,8,3,1,4,1,4,1,4,3,4,107,8,4,1,5,1,5,1,5,
  	1,5,1,5,3,5,114,8,5,1,6,1,6,1,6,3,6,119,8,6,1,6,1,6,1,7,1,7,1,7,5,7,126,
  	8,7,10,7,12,7,129,9,7,1,8,1,8,3,8,133,8,8,1,9,1,9,1,9,3,9,138,8,9,1,10,
  	1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,13,5,13,149,8,13,10,13,12,13,152,
  	9,13,1,14,1,14,1,14,0,1,2,15,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,
  	0,12,1,0,4,5,1,0,6,9,2,0,4,5,10,10,1,0,14,17,1,0,18,21,1,0,22,23,1,0,
  	25,26,1,0,11,12,1,0,32,33,1,0,39,46,1,0,47,54,3,0,11,12,22,23,58,59,175,
  	0,30,1,0,0,0,2,37,1,0,0,0,4,89,1,0,0,0,6,101,1,0,0,0,8,103,1,0,0,0,10,
  	113,1,0,0,0,12,115,1,0,0,0,14,122,1,0,0,0,16,130,1,0,0,0,18,137,1,0,0,
  	0,20,139,1,0,0,0,22,141,1,0,0,0,24,143,1,0,0,0,26,145,1,0,0,0,28,153,
  	1,0,0,0,30,31,3,2,1,0,31,32,5,0,0,1,32,1,1,0,0,0,33,34,6,1,-1,0,34,38,
  	3,4,2,0,35,36,7,0,0,0,36,38,3,2,1,11,37,33,1,0,0,0,37,35,1,0,0,0,38,79,
  	1,0,0,0,39,40,10,10,0,0,40,41,7,1,0,0,41,78,3,2,1,11,42,43,10,9,0,0,43,
  	44,7,2,0,0,44,78,3,2,1,10,45,46,10,7,0,0,46,47,5,13,0,0,47,78,3,2,1,8,
  	48,49,10,6,0,0,49,50,7,3,0,0,50,78,3,2,1,7,51,52,10,5,0,0,52,53,7,4,0,
  	0,53,78,3,2,1,6,54,55,10,4,0,0,55,56,7,5,0,0,56,78,3,2,1,5,57,58,10,3,
  	0,0,58,59,5,24,0,0,59,78,3,2,1,4,60,61,10,2,0,0,61,62,7,6,0,0,62,78,3,
  	2,1,3,63,64,10,1,0,0,64,65,5,27,0,0,65,78,3,2,1,2,66,67,10,13,0,0,67,
  	68,5,1,0,0,68,78,3,10,5,0,69,70,10,12,0,0,70,71,5,2,0,0,71,72,3,2,1,0,
  	72,73,5,3,0,0,73,78,1,0,0,0,74,75,10,8,0,0,75,76,7,7,0,0,76,78,3,24,12,
  	0,77,39,1,0,0,0,77,42,1,0,0,0,77,45,1,0,0,0,77,48,1,0,0,0,77,51,1,0,0,
  	0,77,54,1,0,0,0,77,57,1,0,0,0,77,60,1,0,0,0,77,63,1,0,0,0,77,66,1,0,0,
  	0,77,69,1,0,0,0,77,74,1,0,0,0,78,81,1,0,0,0,79,77,1,0,0,0,79,80,1,0,0,
  	0,80,3,1,0,0,0,81,79,1,0,0,0,82,90,3,10,5,0,83,90,3,6,3,0,84,90,3,8,4,
  	0,85,86,5,28,0,0,86,87,3,2,1,0,87,88,5,29,0,0,88,90,1,0,0,0,89,82,1,0,
  	0,0,89,83,1,0,0,0,89,84,1,0,0,0,89,85,1,0,0,0,90,5,1,0,0,0,91,92,5,30,
  	0,0,92,102,5,31,0,0,93,102,7,8,0,0,94,102,5,60,0,0,95,102,5,61,0,0,96,
  	102,5,62,0,0,97,102,5,55,0,0,98,102,5,56,0,0,99,102,5,57,0,0,100,102,
  	3,16,8,0,101,91,1,0,0,0,101,93,1,0,0,0,101,94,1,0,0,0,101,95,1,0,0,0,
  	101,96,1,0,0,0,101,97,1,0,0,0,101,98,1,0,0,0,101,99,1,0,0,0,101,100,1,
  	0,0,0,102,7,1,0,0,0,103,106,5,34,0,0,104,107,3,28,14,0,105,107,5,60,0,
  	0,106,104,1,0,0,0,106,105,1,0,0,0,107,9,1,0,0,0,108,114,3,28,14,0,109,
  	114,3,12,6,0,110,114,5,35,0,0,111,114,5,36,0,0,112,114,5,37,0,0,113,108,
  	1,0,0,0,113,109,1,0,0,0,113,110,1,0,0,0,113,111,1,0,0,0,113,112,1,0,0,
  	0,114,11,1,0,0,0,115,116,3,28,14,0,116,118,5,28,0,0,117,119,3,14,7,0,
  	118,117,1,0,0,0,118,119,1,0,0,0,119,120,1,0,0,0,120,121,5,29,0,0,121,
  	13,1,0,0,0,122,127,3,2,1,0,123,124,5,38,0,0,124,126,3,2,1,0,125,123,1,
  	0,0,0,126,129,1,0,0,0,127,125,1,0,0,0,127,128,1,0,0,0,128,15,1,0,0,0,
  	129,127,1,0,0,0,130,132,5,61,0,0,131,133,3,18,9,0,132,131,1,0,0,0,132,
  	133,1,0,0,0,133,17,1,0,0,0,134,138,3,20,10,0,135,138,3,22,11,0,136,138,
  	5,60,0,0,137,134,1,0,0,0,137,135,1,0,0,0,137,136,1,0,0,0,138,19,1,0,0,
  	0,139,140,7,9,0,0,140,21,1,0,0,0,141,142,7,10,0,0,142,23,1,0,0,0,143,
  	144,3,26,13,0,144,25,1,0,0,0,145,150,3,28,14,0,146,147,5,1,0,0,147,149,
  	3,28,14,0,148,146,1,0,0,0,149,152,1,0,0,0,150,148,1,0,0,0,150,151,1,0,
  	0,0,151,27,1,0,0,0,152,150,1,0,0,0,153,154,7,11,0,0,154,29,1,0,0,0,12,
  	37,77,79,89,101,106,113,118,127,132,137,150
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  fhirpathParserStaticData = staticData.release();
}

}

fhirpathParser::fhirpathParser(TokenStream *input) : fhirpathParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

fhirpathParser::fhirpathParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  fhirpathParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *fhirpathParserStaticData->atn, fhirpathParserStaticData->decisionToDFA, fhirpathParserStaticData->sharedContextCache, options);
}

fhirpathParser::~fhirpathParser() {
  delete _interpreter;
}

const atn::ATN& fhirpathParser::getATN() const {
  return *fhirpathParserStaticData->atn;
}

std::string fhirpathParser::getGrammarFileName() const {
  return "fhirpath.g4";
}

const std::vector<std::string>& fhirpathParser::getRuleNames() const {
  return fhirpathParserStaticData->ruleNames;
}

const dfa::Vocabulary& fhirpathParser::getVocabulary() const {
  return fhirpathParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView fhirpathParser::getSerializedATN() const {
  return fhirpathParserStaticData->serializedATN;
}


//----------------- EntireExpressionContext ------------------------------------------------------------------

fhirpathParser::EntireExpressionContext::EntireExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fhirpathParser::ExpressionContext* fhirpathParser::EntireExpressionContext::expression() {
  return getRuleContext<fhirpathParser::ExpressionContext>(0);
}

tree::TerminalNode* fhirpathParser::EntireExpressionContext::EOF() {
  return getToken(fhirpathParser::EOF, 0);
}


size_t fhirpathParser::EntireExpressionContext::getRuleIndex() const {
  return fhirpathParser::RuleEntireExpression;
}


std::any fhirpathParser::EntireExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitEntireExpression(this);
  else
    return visitor->visitChildren(this);
}

fhirpathParser::EntireExpressionContext* fhirpathParser::entireExpression() {
  EntireExpressionContext *_localctx = _tracker.createInstance<EntireExpressionContext>(_ctx, getState());
  enterRule(_localctx, 0, fhirpathParser::RuleEntireExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(30);
    expression(0);
    setState(31);
    match(fhirpathParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

fhirpathParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fhirpathParser::ExpressionContext::getRuleIndex() const {
  return fhirpathParser::RuleExpression;
}

void fhirpathParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IndexerExpressionContext ------------------------------------------------------------------

std::vector<fhirpathParser::ExpressionContext *> fhirpathParser::IndexerExpressionContext::expression() {
  return getRuleContexts<fhirpathParser::ExpressionContext>();
}

fhirpathParser::ExpressionContext* fhirpathParser::IndexerExpressionContext::expression(size_t i) {
  return getRuleContext<fhirpathParser::ExpressionContext>(i);
}

fhirpathParser::IndexerExpressionContext::IndexerExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::IndexerExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitIndexerExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PolarityExpressionContext ------------------------------------------------------------------

fhirpathParser::ExpressionContext* fhirpathParser::PolarityExpressionContext::expression() {
  return getRuleContext<fhirpathParser::ExpressionContext>(0);
}

fhirpathParser::PolarityExpressionContext::PolarityExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::PolarityExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitPolarityExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AdditiveExpressionContext ------------------------------------------------------------------

std::vector<fhirpathParser::ExpressionContext *> fhirpathParser::AdditiveExpressionContext::expression() {
  return getRuleContexts<fhirpathParser::ExpressionContext>();
}

fhirpathParser::ExpressionContext* fhirpathParser::AdditiveExpressionContext::expression(size_t i) {
  return getRuleContext<fhirpathParser::ExpressionContext>(i);
}

fhirpathParser::AdditiveExpressionContext::AdditiveExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::AdditiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

std::vector<fhirpathParser::ExpressionContext *> fhirpathParser::MultiplicativeExpressionContext::expression() {
  return getRuleContexts<fhirpathParser::ExpressionContext>();
}

fhirpathParser::ExpressionContext* fhirpathParser::MultiplicativeExpressionContext::expression(size_t i) {
  return getRuleContext<fhirpathParser::ExpressionContext>(i);
}

fhirpathParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::MultiplicativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnionExpressionContext ------------------------------------------------------------------

std::vector<fhirpathParser::ExpressionContext *> fhirpathParser::UnionExpressionContext::expression() {
  return getRuleContexts<fhirpathParser::ExpressionContext>();
}

fhirpathParser::ExpressionContext* fhirpathParser::UnionExpressionContext::expression(size_t i) {
  return getRuleContext<fhirpathParser::ExpressionContext>(i);
}

fhirpathParser::UnionExpressionContext::UnionExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::UnionExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitUnionExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrExpressionContext ------------------------------------------------------------------

std::vector<fhirpathParser::ExpressionContext *> fhirpathParser::OrExpressionContext::expression() {
  return getRuleContexts<fhirpathParser::ExpressionContext>();
}

fhirpathParser::ExpressionContext* fhirpathParser::OrExpressionContext::expression(size_t i) {
  return getRuleContext<fhirpathParser::ExpressionContext>(i);
}

fhirpathParser::OrExpressionContext::OrExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::OrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitOrExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndExpressionContext ------------------------------------------------------------------

std::vector<fhirpathParser::ExpressionContext *> fhirpathParser::AndExpressionContext::expression() {
  return getRuleContexts<fhirpathParser::ExpressionContext>();
}

fhirpathParser::ExpressionContext* fhirpathParser::AndExpressionContext::expression(size_t i) {
  return getRuleContext<fhirpathParser::ExpressionContext>(i);
}

fhirpathParser::AndExpressionContext::AndExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::AndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitAndExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MembershipExpressionContext ------------------------------------------------------------------

std::vector<fhirpathParser::ExpressionContext *> fhirpathParser::MembershipExpressionContext::expression() {
  return getRuleContexts<fhirpathParser::ExpressionContext>();
}

fhirpathParser::ExpressionContext* fhirpathParser::MembershipExpressionContext::expression(size_t i) {
  return getRuleContext<fhirpathParser::ExpressionContext>(i);
}

fhirpathParser::MembershipExpressionContext::MembershipExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::MembershipExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitMembershipExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InequalityExpressionContext ------------------------------------------------------------------

std::vector<fhirpathParser::ExpressionContext *> fhirpathParser::InequalityExpressionContext::expression() {
  return getRuleContexts<fhirpathParser::ExpressionContext>();
}

fhirpathParser::ExpressionContext* fhirpathParser::InequalityExpressionContext::expression(size_t i) {
  return getRuleContext<fhirpathParser::ExpressionContext>(i);
}

fhirpathParser::InequalityExpressionContext::InequalityExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::InequalityExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitInequalityExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InvocationExpressionContext ------------------------------------------------------------------

fhirpathParser::ExpressionContext* fhirpathParser::InvocationExpressionContext::expression() {
  return getRuleContext<fhirpathParser::ExpressionContext>(0);
}

fhirpathParser::InvocationContext* fhirpathParser::InvocationExpressionContext::invocation() {
  return getRuleContext<fhirpathParser::InvocationContext>(0);
}

fhirpathParser::InvocationExpressionContext::InvocationExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::InvocationExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitInvocationExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualityExpressionContext ------------------------------------------------------------------

std::vector<fhirpathParser::ExpressionContext *> fhirpathParser::EqualityExpressionContext::expression() {
  return getRuleContexts<fhirpathParser::ExpressionContext>();
}

fhirpathParser::ExpressionContext* fhirpathParser::EqualityExpressionContext::expression(size_t i) {
  return getRuleContext<fhirpathParser::ExpressionContext>(i);
}

fhirpathParser::EqualityExpressionContext::EqualityExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::EqualityExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitEqualityExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ImpliesExpressionContext ------------------------------------------------------------------

std::vector<fhirpathParser::ExpressionContext *> fhirpathParser::ImpliesExpressionContext::expression() {
  return getRuleContexts<fhirpathParser::ExpressionContext>();
}

fhirpathParser::ExpressionContext* fhirpathParser::ImpliesExpressionContext::expression(size_t i) {
  return getRuleContext<fhirpathParser::ExpressionContext>(i);
}

fhirpathParser::ImpliesExpressionContext::ImpliesExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::ImpliesExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitImpliesExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TermExpressionContext ------------------------------------------------------------------

fhirpathParser::TermContext* fhirpathParser::TermExpressionContext::term() {
  return getRuleContext<fhirpathParser::TermContext>(0);
}

fhirpathParser::TermExpressionContext::TermExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::TermExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitTermExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeExpressionContext ------------------------------------------------------------------

fhirpathParser::ExpressionContext* fhirpathParser::TypeExpressionContext::expression() {
  return getRuleContext<fhirpathParser::ExpressionContext>(0);
}

fhirpathParser::TypeSpecifierContext* fhirpathParser::TypeExpressionContext::typeSpecifier() {
  return getRuleContext<fhirpathParser::TypeSpecifierContext>(0);
}

fhirpathParser::TypeExpressionContext::TypeExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::TypeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitTypeExpression(this);
  else
    return visitor->visitChildren(this);
}

fhirpathParser::ExpressionContext* fhirpathParser::expression() {
   return expression(0);
}

fhirpathParser::ExpressionContext* fhirpathParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  fhirpathParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  fhirpathParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, fhirpathParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(37);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fhirpathParser::T__10:
      case fhirpathParser::T__11:
      case fhirpathParser::T__21:
      case fhirpathParser::T__22:
      case fhirpathParser::T__27:
      case fhirpathParser::T__29:
      case fhirpathParser::T__31:
      case fhirpathParser::T__32:
      case fhirpathParser::T__33:
      case fhirpathParser::T__34:
      case fhirpathParser::T__35:
      case fhirpathParser::T__36:
      case fhirpathParser::DATE:
      case fhirpathParser::DATETIME:
      case fhirpathParser::TIME:
      case fhirpathParser::IDENTIFIER:
      case fhirpathParser::DELIMITEDIDENTIFIER:
      case fhirpathParser::STRING:
      case fhirpathParser::NUMBER:
      case fhirpathParser::LONGNUMBER: {
        _localctx = _tracker.createInstance<TermExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(34);
        term();
        break;
      }

      case fhirpathParser::T__3:
      case fhirpathParser::T__4: {
        _localctx = _tracker.createInstance<PolarityExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(35);
        _la = _input->LA(1);
        if (!(_la == fhirpathParser::T__3

        || _la == fhirpathParser::T__4)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(36);
        expression(11);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(79);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(77);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultiplicativeExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(39);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(40);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 960) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(41);
          expression(11);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AdditiveExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(42);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(43);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 1072) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(44);
          expression(10);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<UnionExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(45);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(46);
          match(fhirpathParser::T__12);
          setState(47);
          expression(8);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<InequalityExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(48);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(49);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 245760) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(50);
          expression(7);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<EqualityExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(51);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(52);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 3932160) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(53);
          expression(6);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<MembershipExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(54);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(55);
          _la = _input->LA(1);
          if (!(_la == fhirpathParser::T__21

          || _la == fhirpathParser::T__22)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(56);
          expression(5);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<AndExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(57);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(58);
          match(fhirpathParser::T__23);
          setState(59);
          expression(4);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<OrExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(60);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(61);
          _la = _input->LA(1);
          if (!(_la == fhirpathParser::T__24

          || _la == fhirpathParser::T__25)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(62);
          expression(3);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<ImpliesExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(63);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(64);
          match(fhirpathParser::T__26);
          setState(65);
          expression(2);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<InvocationExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(66);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(67);
          match(fhirpathParser::T__0);
          setState(68);
          invocation();
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<IndexerExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(69);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(70);
          match(fhirpathParser::T__1);
          setState(71);
          expression(0);
          setState(72);
          match(fhirpathParser::T__2);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<TypeExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(74);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(75);
          _la = _input->LA(1);
          if (!(_la == fhirpathParser::T__10

          || _la == fhirpathParser::T__11)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(76);
          typeSpecifier();
          break;
        }

        default:
          break;
        } 
      }
      setState(81);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

fhirpathParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fhirpathParser::TermContext::getRuleIndex() const {
  return fhirpathParser::RuleTerm;
}

void fhirpathParser::TermContext::copyFrom(TermContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExternalConstantTermContext ------------------------------------------------------------------

fhirpathParser::ExternalConstantContext* fhirpathParser::ExternalConstantTermContext::externalConstant() {
  return getRuleContext<fhirpathParser::ExternalConstantContext>(0);
}

fhirpathParser::ExternalConstantTermContext::ExternalConstantTermContext(TermContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::ExternalConstantTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitExternalConstantTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LiteralTermContext ------------------------------------------------------------------

fhirpathParser::LiteralContext* fhirpathParser::LiteralTermContext::literal() {
  return getRuleContext<fhirpathParser::LiteralContext>(0);
}

fhirpathParser::LiteralTermContext::LiteralTermContext(TermContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::LiteralTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitLiteralTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesizedTermContext ------------------------------------------------------------------

fhirpathParser::ExpressionContext* fhirpathParser::ParenthesizedTermContext::expression() {
  return getRuleContext<fhirpathParser::ExpressionContext>(0);
}

fhirpathParser::ParenthesizedTermContext::ParenthesizedTermContext(TermContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::ParenthesizedTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitParenthesizedTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InvocationTermContext ------------------------------------------------------------------

fhirpathParser::InvocationContext* fhirpathParser::InvocationTermContext::invocation() {
  return getRuleContext<fhirpathParser::InvocationContext>(0);
}

fhirpathParser::InvocationTermContext::InvocationTermContext(TermContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::InvocationTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitInvocationTerm(this);
  else
    return visitor->visitChildren(this);
}
fhirpathParser::TermContext* fhirpathParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 4, fhirpathParser::RuleTerm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(89);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fhirpathParser::T__10:
      case fhirpathParser::T__11:
      case fhirpathParser::T__21:
      case fhirpathParser::T__22:
      case fhirpathParser::T__34:
      case fhirpathParser::T__35:
      case fhirpathParser::T__36:
      case fhirpathParser::IDENTIFIER:
      case fhirpathParser::DELIMITEDIDENTIFIER: {
        _localctx = _tracker.createInstance<fhirpathParser::InvocationTermContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(82);
        invocation();
        break;
      }

      case fhirpathParser::T__29:
      case fhirpathParser::T__31:
      case fhirpathParser::T__32:
      case fhirpathParser::DATE:
      case fhirpathParser::DATETIME:
      case fhirpathParser::TIME:
      case fhirpathParser::STRING:
      case fhirpathParser::NUMBER:
      case fhirpathParser::LONGNUMBER: {
        _localctx = _tracker.createInstance<fhirpathParser::LiteralTermContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(83);
        literal();
        break;
      }

      case fhirpathParser::T__33: {
        _localctx = _tracker.createInstance<fhirpathParser::ExternalConstantTermContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(84);
        externalConstant();
        break;
      }

      case fhirpathParser::T__27: {
        _localctx = _tracker.createInstance<fhirpathParser::ParenthesizedTermContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(85);
        match(fhirpathParser::T__27);
        setState(86);
        expression(0);
        setState(87);
        match(fhirpathParser::T__28);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

fhirpathParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fhirpathParser::LiteralContext::getRuleIndex() const {
  return fhirpathParser::RuleLiteral;
}

void fhirpathParser::LiteralContext::copyFrom(LiteralContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TimeLiteralContext ------------------------------------------------------------------

tree::TerminalNode* fhirpathParser::TimeLiteralContext::TIME() {
  return getToken(fhirpathParser::TIME, 0);
}

fhirpathParser::TimeLiteralContext::TimeLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::TimeLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitTimeLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NullLiteralContext ------------------------------------------------------------------

fhirpathParser::NullLiteralContext::NullLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::NullLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitNullLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DateTimeLiteralContext ------------------------------------------------------------------

tree::TerminalNode* fhirpathParser::DateTimeLiteralContext::DATETIME() {
  return getToken(fhirpathParser::DATETIME, 0);
}

fhirpathParser::DateTimeLiteralContext::DateTimeLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::DateTimeLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitDateTimeLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringLiteralContext ------------------------------------------------------------------

tree::TerminalNode* fhirpathParser::StringLiteralContext::STRING() {
  return getToken(fhirpathParser::STRING, 0);
}

fhirpathParser::StringLiteralContext::StringLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DateLiteralContext ------------------------------------------------------------------

tree::TerminalNode* fhirpathParser::DateLiteralContext::DATE() {
  return getToken(fhirpathParser::DATE, 0);
}

fhirpathParser::DateLiteralContext::DateLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::DateLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitDateLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanLiteralContext ------------------------------------------------------------------

fhirpathParser::BooleanLiteralContext::BooleanLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::BooleanLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitBooleanLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberLiteralContext ------------------------------------------------------------------

tree::TerminalNode* fhirpathParser::NumberLiteralContext::NUMBER() {
  return getToken(fhirpathParser::NUMBER, 0);
}

fhirpathParser::NumberLiteralContext::NumberLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::NumberLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitNumberLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LongNumberLiteralContext ------------------------------------------------------------------

tree::TerminalNode* fhirpathParser::LongNumberLiteralContext::LONGNUMBER() {
  return getToken(fhirpathParser::LONGNUMBER, 0);
}

fhirpathParser::LongNumberLiteralContext::LongNumberLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::LongNumberLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitLongNumberLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- QuantityLiteralContext ------------------------------------------------------------------

fhirpathParser::QuantityContext* fhirpathParser::QuantityLiteralContext::quantity() {
  return getRuleContext<fhirpathParser::QuantityContext>(0);
}

fhirpathParser::QuantityLiteralContext::QuantityLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::QuantityLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitQuantityLiteral(this);
  else
    return visitor->visitChildren(this);
}
fhirpathParser::LiteralContext* fhirpathParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 6, fhirpathParser::RuleLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(101);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<fhirpathParser::NullLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(91);
      match(fhirpathParser::T__29);
      setState(92);
      match(fhirpathParser::T__30);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<fhirpathParser::BooleanLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(93);
      _la = _input->LA(1);
      if (!(_la == fhirpathParser::T__31

      || _la == fhirpathParser::T__32)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<fhirpathParser::StringLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(94);
      match(fhirpathParser::STRING);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<fhirpathParser::NumberLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(95);
      match(fhirpathParser::NUMBER);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<fhirpathParser::LongNumberLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(96);
      match(fhirpathParser::LONGNUMBER);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<fhirpathParser::DateLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(97);
      match(fhirpathParser::DATE);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<fhirpathParser::DateTimeLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(98);
      match(fhirpathParser::DATETIME);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<fhirpathParser::TimeLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(99);
      match(fhirpathParser::TIME);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<fhirpathParser::QuantityLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(100);
      quantity();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExternalConstantContext ------------------------------------------------------------------

fhirpathParser::ExternalConstantContext::ExternalConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fhirpathParser::IdentifierContext* fhirpathParser::ExternalConstantContext::identifier() {
  return getRuleContext<fhirpathParser::IdentifierContext>(0);
}

tree::TerminalNode* fhirpathParser::ExternalConstantContext::STRING() {
  return getToken(fhirpathParser::STRING, 0);
}


size_t fhirpathParser::ExternalConstantContext::getRuleIndex() const {
  return fhirpathParser::RuleExternalConstant;
}


std::any fhirpathParser::ExternalConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitExternalConstant(this);
  else
    return visitor->visitChildren(this);
}

fhirpathParser::ExternalConstantContext* fhirpathParser::externalConstant() {
  ExternalConstantContext *_localctx = _tracker.createInstance<ExternalConstantContext>(_ctx, getState());
  enterRule(_localctx, 8, fhirpathParser::RuleExternalConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(fhirpathParser::T__33);
    setState(106);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fhirpathParser::T__10:
      case fhirpathParser::T__11:
      case fhirpathParser::T__21:
      case fhirpathParser::T__22:
      case fhirpathParser::IDENTIFIER:
      case fhirpathParser::DELIMITEDIDENTIFIER: {
        setState(104);
        identifier();
        break;
      }

      case fhirpathParser::STRING: {
        setState(105);
        match(fhirpathParser::STRING);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InvocationContext ------------------------------------------------------------------

fhirpathParser::InvocationContext::InvocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fhirpathParser::InvocationContext::getRuleIndex() const {
  return fhirpathParser::RuleInvocation;
}

void fhirpathParser::InvocationContext::copyFrom(InvocationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TotalInvocationContext ------------------------------------------------------------------

fhirpathParser::TotalInvocationContext::TotalInvocationContext(InvocationContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::TotalInvocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitTotalInvocation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ThisInvocationContext ------------------------------------------------------------------

fhirpathParser::ThisInvocationContext::ThisInvocationContext(InvocationContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::ThisInvocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitThisInvocation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IndexInvocationContext ------------------------------------------------------------------

fhirpathParser::IndexInvocationContext::IndexInvocationContext(InvocationContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::IndexInvocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitIndexInvocation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionInvocationContext ------------------------------------------------------------------

fhirpathParser::FunctionContext* fhirpathParser::FunctionInvocationContext::function() {
  return getRuleContext<fhirpathParser::FunctionContext>(0);
}

fhirpathParser::FunctionInvocationContext::FunctionInvocationContext(InvocationContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::FunctionInvocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitFunctionInvocation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MemberInvocationContext ------------------------------------------------------------------

fhirpathParser::IdentifierContext* fhirpathParser::MemberInvocationContext::identifier() {
  return getRuleContext<fhirpathParser::IdentifierContext>(0);
}

fhirpathParser::MemberInvocationContext::MemberInvocationContext(InvocationContext *ctx) { copyFrom(ctx); }


std::any fhirpathParser::MemberInvocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitMemberInvocation(this);
  else
    return visitor->visitChildren(this);
}
fhirpathParser::InvocationContext* fhirpathParser::invocation() {
  InvocationContext *_localctx = _tracker.createInstance<InvocationContext>(_ctx, getState());
  enterRule(_localctx, 10, fhirpathParser::RuleInvocation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(113);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<fhirpathParser::MemberInvocationContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(108);
      identifier();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<fhirpathParser::FunctionInvocationContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(109);
      function();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<fhirpathParser::ThisInvocationContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(110);
      match(fhirpathParser::T__34);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<fhirpathParser::IndexInvocationContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(111);
      match(fhirpathParser::T__35);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<fhirpathParser::TotalInvocationContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(112);
      match(fhirpathParser::T__36);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

fhirpathParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fhirpathParser::IdentifierContext* fhirpathParser::FunctionContext::identifier() {
  return getRuleContext<fhirpathParser::IdentifierContext>(0);
}

fhirpathParser::ParamListContext* fhirpathParser::FunctionContext::paramList() {
  return getRuleContext<fhirpathParser::ParamListContext>(0);
}


size_t fhirpathParser::FunctionContext::getRuleIndex() const {
  return fhirpathParser::RuleFunction;
}


std::any fhirpathParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

fhirpathParser::FunctionContext* fhirpathParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 12, fhirpathParser::RuleFunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    identifier();
    setState(116);
    match(fhirpathParser::T__27);
    setState(118);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 9187343511773517872) != 0)) {
      setState(117);
      paramList();
    }
    setState(120);
    match(fhirpathParser::T__28);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamListContext ------------------------------------------------------------------

fhirpathParser::ParamListContext::ParamListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<fhirpathParser::ExpressionContext *> fhirpathParser::ParamListContext::expression() {
  return getRuleContexts<fhirpathParser::ExpressionContext>();
}

fhirpathParser::ExpressionContext* fhirpathParser::ParamListContext::expression(size_t i) {
  return getRuleContext<fhirpathParser::ExpressionContext>(i);
}


size_t fhirpathParser::ParamListContext::getRuleIndex() const {
  return fhirpathParser::RuleParamList;
}


std::any fhirpathParser::ParamListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitParamList(this);
  else
    return visitor->visitChildren(this);
}

fhirpathParser::ParamListContext* fhirpathParser::paramList() {
  ParamListContext *_localctx = _tracker.createInstance<ParamListContext>(_ctx, getState());
  enterRule(_localctx, 14, fhirpathParser::RuleParamList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    expression(0);
    setState(127);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fhirpathParser::T__37) {
      setState(123);
      match(fhirpathParser::T__37);
      setState(124);
      expression(0);
      setState(129);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantityContext ------------------------------------------------------------------

fhirpathParser::QuantityContext::QuantityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fhirpathParser::QuantityContext::NUMBER() {
  return getToken(fhirpathParser::NUMBER, 0);
}

fhirpathParser::UnitContext* fhirpathParser::QuantityContext::unit() {
  return getRuleContext<fhirpathParser::UnitContext>(0);
}


size_t fhirpathParser::QuantityContext::getRuleIndex() const {
  return fhirpathParser::RuleQuantity;
}


std::any fhirpathParser::QuantityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitQuantity(this);
  else
    return visitor->visitChildren(this);
}

fhirpathParser::QuantityContext* fhirpathParser::quantity() {
  QuantityContext *_localctx = _tracker.createInstance<QuantityContext>(_ctx, getState());
  enterRule(_localctx, 16, fhirpathParser::RuleQuantity);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(fhirpathParser::NUMBER);
    setState(132);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(131);
      unit();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnitContext ------------------------------------------------------------------

fhirpathParser::UnitContext::UnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fhirpathParser::DateTimePrecisionContext* fhirpathParser::UnitContext::dateTimePrecision() {
  return getRuleContext<fhirpathParser::DateTimePrecisionContext>(0);
}

fhirpathParser::PluralDateTimePrecisionContext* fhirpathParser::UnitContext::pluralDateTimePrecision() {
  return getRuleContext<fhirpathParser::PluralDateTimePrecisionContext>(0);
}

tree::TerminalNode* fhirpathParser::UnitContext::STRING() {
  return getToken(fhirpathParser::STRING, 0);
}


size_t fhirpathParser::UnitContext::getRuleIndex() const {
  return fhirpathParser::RuleUnit;
}


std::any fhirpathParser::UnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitUnit(this);
  else
    return visitor->visitChildren(this);
}

fhirpathParser::UnitContext* fhirpathParser::unit() {
  UnitContext *_localctx = _tracker.createInstance<UnitContext>(_ctx, getState());
  enterRule(_localctx, 18, fhirpathParser::RuleUnit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(137);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fhirpathParser::T__38:
      case fhirpathParser::T__39:
      case fhirpathParser::T__40:
      case fhirpathParser::T__41:
      case fhirpathParser::T__42:
      case fhirpathParser::T__43:
      case fhirpathParser::T__44:
      case fhirpathParser::T__45: {
        enterOuterAlt(_localctx, 1);
        setState(134);
        dateTimePrecision();
        break;
      }

      case fhirpathParser::T__46:
      case fhirpathParser::T__47:
      case fhirpathParser::T__48:
      case fhirpathParser::T__49:
      case fhirpathParser::T__50:
      case fhirpathParser::T__51:
      case fhirpathParser::T__52:
      case fhirpathParser::T__53: {
        enterOuterAlt(_localctx, 2);
        setState(135);
        pluralDateTimePrecision();
        break;
      }

      case fhirpathParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(136);
        match(fhirpathParser::STRING);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DateTimePrecisionContext ------------------------------------------------------------------

fhirpathParser::DateTimePrecisionContext::DateTimePrecisionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fhirpathParser::DateTimePrecisionContext::getRuleIndex() const {
  return fhirpathParser::RuleDateTimePrecision;
}


std::any fhirpathParser::DateTimePrecisionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitDateTimePrecision(this);
  else
    return visitor->visitChildren(this);
}

fhirpathParser::DateTimePrecisionContext* fhirpathParser::dateTimePrecision() {
  DateTimePrecisionContext *_localctx = _tracker.createInstance<DateTimePrecisionContext>(_ctx, getState());
  enterRule(_localctx, 20, fhirpathParser::RuleDateTimePrecision);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 140187732541440) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PluralDateTimePrecisionContext ------------------------------------------------------------------

fhirpathParser::PluralDateTimePrecisionContext::PluralDateTimePrecisionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fhirpathParser::PluralDateTimePrecisionContext::getRuleIndex() const {
  return fhirpathParser::RulePluralDateTimePrecision;
}


std::any fhirpathParser::PluralDateTimePrecisionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitPluralDateTimePrecision(this);
  else
    return visitor->visitChildren(this);
}

fhirpathParser::PluralDateTimePrecisionContext* fhirpathParser::pluralDateTimePrecision() {
  PluralDateTimePrecisionContext *_localctx = _tracker.createInstance<PluralDateTimePrecisionContext>(_ctx, getState());
  enterRule(_localctx, 22, fhirpathParser::RulePluralDateTimePrecision);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 35888059530608640) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecifierContext ------------------------------------------------------------------

fhirpathParser::TypeSpecifierContext::TypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fhirpathParser::QualifiedIdentifierContext* fhirpathParser::TypeSpecifierContext::qualifiedIdentifier() {
  return getRuleContext<fhirpathParser::QualifiedIdentifierContext>(0);
}


size_t fhirpathParser::TypeSpecifierContext::getRuleIndex() const {
  return fhirpathParser::RuleTypeSpecifier;
}


std::any fhirpathParser::TypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

fhirpathParser::TypeSpecifierContext* fhirpathParser::typeSpecifier() {
  TypeSpecifierContext *_localctx = _tracker.createInstance<TypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 24, fhirpathParser::RuleTypeSpecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    qualifiedIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedIdentifierContext ------------------------------------------------------------------

fhirpathParser::QualifiedIdentifierContext::QualifiedIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<fhirpathParser::IdentifierContext *> fhirpathParser::QualifiedIdentifierContext::identifier() {
  return getRuleContexts<fhirpathParser::IdentifierContext>();
}

fhirpathParser::IdentifierContext* fhirpathParser::QualifiedIdentifierContext::identifier(size_t i) {
  return getRuleContext<fhirpathParser::IdentifierContext>(i);
}


size_t fhirpathParser::QualifiedIdentifierContext::getRuleIndex() const {
  return fhirpathParser::RuleQualifiedIdentifier;
}


std::any fhirpathParser::QualifiedIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitQualifiedIdentifier(this);
  else
    return visitor->visitChildren(this);
}

fhirpathParser::QualifiedIdentifierContext* fhirpathParser::qualifiedIdentifier() {
  QualifiedIdentifierContext *_localctx = _tracker.createInstance<QualifiedIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 26, fhirpathParser::RuleQualifiedIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(145);
    identifier();
    setState(150);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(146);
        match(fhirpathParser::T__0);
        setState(147);
        identifier(); 
      }
      setState(152);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

fhirpathParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fhirpathParser::IdentifierContext::IDENTIFIER() {
  return getToken(fhirpathParser::IDENTIFIER, 0);
}

tree::TerminalNode* fhirpathParser::IdentifierContext::DELIMITEDIDENTIFIER() {
  return getToken(fhirpathParser::DELIMITEDIDENTIFIER, 0);
}


size_t fhirpathParser::IdentifierContext::getRuleIndex() const {
  return fhirpathParser::RuleIdentifier;
}


std::any fhirpathParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fhirpathVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

fhirpathParser::IdentifierContext* fhirpathParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 28, fhirpathParser::RuleIdentifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 864691128467724288) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool fhirpathParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool fhirpathParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 10);
    case 1: return precpred(_ctx, 9);
    case 2: return precpred(_ctx, 7);
    case 3: return precpred(_ctx, 6);
    case 4: return precpred(_ctx, 5);
    case 5: return precpred(_ctx, 4);
    case 6: return precpred(_ctx, 3);
    case 7: return precpred(_ctx, 2);
    case 8: return precpred(_ctx, 1);
    case 9: return precpred(_ctx, 13);
    case 10: return precpred(_ctx, 12);
    case 11: return precpred(_ctx, 8);

  default:
    break;
  }
  return true;
}

void fhirpathParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  fhirpathParserInitialize();
#else
  ::antlr4::internal::call_once(fhirpathParserOnceFlag, fhirpathParserInitialize);
#endif
}
