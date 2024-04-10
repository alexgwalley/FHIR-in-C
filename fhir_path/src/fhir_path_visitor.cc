#include <stdexcept>

namespace native_fhir
{

 /////////////////// 
 // Helpers 

 String8
 String8FromIdentifier(Arena *arena, fhirpathParser::IdentifierContext *identifier)
 {
   antlr4::tree::TerminalNode* id = identifier->IDENTIFIER();
   antlr4::tree::TerminalNode* delim_id = identifier->DELIMITEDIDENTIFIER();
   if (id != NULL)
   {
    std::string str = id->getText();
    String8 str8 = Str8C((char*)str.c_str());
    return PushStr8Copy(arena, str8);
   }
   else if (delim_id != NULL)
   {
    std::string str = delim_id->getText();
    String8 str8 = Str8C((char*)str.c_str());
    return PushStr8Copy(arena, str8);
   }

   return {};
 }

 std::any
 FhirPathVisitor::visitIndexerExpression(fhirpathParser::IndexerExpressionContext *ctx)
 {
  Piece* piece = PushStruct(this->arena, Piece);
  piece->type = Piece_Index;

  std::vector<fhirpathParser::ExpressionContext*> expressions = ctx->expression();
  Assert(expressions.size() == 2);

  MakeBinary(piece, ctx->expression(0), ctx->expression(1));

  return piece;
 }

 /////////////////// 
 // Unary Expressions 

 std::any
 FhirPathVisitor::visitPolarityExpression(fhirpathParser::PolarityExpressionContext *ctx)
 {
  Piece* piece = PushStruct(this->arena, Piece);

  std::vector<antlr4::tree::ParseTree *> children = ctx->children;

  std::string str = children[0]->getText();

  if      (strcmp(str.c_str(), "+") == 0) { piece->type = Piece_Polarity_Positive; } 
  else if (strcmp(str.c_str(), "-") == 0) { piece->type = Piece_Polarity_Negative; }

  std::any res_any = ctx->expression()->accept(this);
  Piece* res_piece = std::any_cast <Piece*> (res_any);
  res_piece->parent = piece;
  piece->child[0] = res_piece;

  return piece;
 }

 /////////////////// 
 // Binary Expressions
 void
 FhirPathVisitor::MakeBinary(Piece* parent, antlr4::ParserRuleContext *left, antlr4::ParserRuleContext *right)
 {
  std::any res_left = left->accept(this);
  Piece *left_piece = std::any_cast<Piece*>(res_left);

  std::any res_right = right->accept(this);
  Piece *right_piece = std::any_cast<Piece*>(res_right);

  left_piece->parent = parent;
  right_piece->parent = parent;

  parent->child[0] = left_piece;
  parent->child[1] = right_piece;
 }

 std::any 
 FhirPathVisitor::visitOrExpression(fhirpathParser::OrExpressionContext *ctx)
 {
  Piece* piece = PushStruct(this->arena, Piece);
  piece->type = Piece_Or;

  std::vector<fhirpathParser::ExpressionContext*> expressions = ctx->expression();
  Assert(expressions.size() == 2);

  MakeBinary(piece, expressions[0], expressions[1]);

  return piece;
 }


 std::any 
 FhirPathVisitor::visitAndExpression(fhirpathParser::AndExpressionContext *ctx)
 {
  Piece* piece = PushStruct(this->arena, Piece);
  piece->type = Piece_And;

  std::vector<fhirpathParser::ExpressionContext*> expressions = ctx->expression();
  Assert(expressions.size() == 2);

  MakeBinary(piece, expressions[0], expressions[1]);

  return piece;
 }

 std::any
 FhirPathVisitor::visitAdditiveExpression(fhirpathParser::AdditiveExpressionContext *ctx)
 {
  Piece* piece = PushStruct(this->arena, Piece);

  // ~ Get Specific Type
  std::vector<antlr4::tree::ParseTree *> children = ctx->children;
  for (int i = 0; i < children.size(); i++)
  {
   std::string str = children[i]->getText();

   if      (strcmp(str.c_str(), "+") == 0) { piece->type = Piece_Plus; } 
   else if (strcmp(str.c_str(), "-") == 0) { piece->type = Piece_Minus; }
   else if (strcmp(str.c_str(), "&") == 0) { piece->type = Piece_Ampersand; }
  }

  Assert(piece->type != Piece_Unknown);

  // ~ Get Left/Right Sides
  std::vector<fhirpathParser::ExpressionContext*> expressions = ctx->expression();
  size_t size = expressions.size();

  Assert(size == 2);

  MakeBinary(piece, ctx->expression(0), ctx->expression(1));

  return piece;
 }

 std::any
 FhirPathVisitor::visitMultiplicativeExpression(fhirpathParser::MultiplicativeExpressionContext *ctx)
 {
  Piece* piece = PushStruct(this->arena, Piece);

  // ~ Get Specific Type
  std::vector<antlr4::tree::ParseTree *> children = ctx->children;
  for (int i = 0; i < children.size(); i++)
  {
   std::string str = children[i]->getText();

   if      (strcmp(str.c_str(), "*") == 0)   { piece->type = Piece_Multiply; }
   else if (strcmp(str.c_str(), "/") == 0)   { piece->type = Piece_Divide; }
   else if (strcmp(str.c_str(), "div") == 0) { piece->type = Piece_Divide; }
   else if (strcmp(str.c_str(), "mod") == 0) { piece->type = Piece_Mod; }
  }

  Assert(piece->type != Piece_Unknown);

  // ~ Get Left/Right Sides
  std::vector<fhirpathParser::ExpressionContext*> expressions = ctx->expression();
  size_t size = expressions.size();
  Assert(size == 2);

  MakeBinary(piece, ctx->expression(0), ctx->expression(1));

  return piece;
 }

 std::any
 FhirPathVisitor::visitUnionExpression(fhirpathParser::UnionExpressionContext *ctx)
 {
  Piece* piece = PushStruct(this->arena, Piece);
  piece->type = Piece_Union;
  MakeBinary(piece, ctx->expression(0), ctx->expression(1));

  return piece;
 }

 std::any
 FhirPathVisitor::visitTypeExpression(fhirpathParser::TypeExpressionContext *ctx)
 {
  Piece* piece = PushStruct(this->arena, Piece);
  std::vector<antlr4::tree::ParseTree *> children = ctx->children;
  Assert(children.size() > 0);
  for (int i = 1; i < children.size(); i++)
  {
   std::string str = children[i]->getText();
   if      (strcmp(str.c_str(), "is") == 0)   { piece->type = Piece_Is; }
   else if (strcmp(str.c_str(), "as") == 0)   { piece->type = Piece_As; }
  }

  MakeBinary(piece, ctx->expression(), ctx->typeSpecifier());

  return piece;
 }

 std::any
 FhirPathVisitor::visitTypeSpecifier(fhirpathParser::TypeSpecifierContext *ctx)
 {
  Piece* piece = PushStruct(this->arena, Piece);
  piece->type = Piece_Identifier;

  /* 
   TODO(agw): this one is a little different...
   Ex.
    Patient
    FHIR.Patient

   I am not sure how to handle this yet, so I will just error when there is a dot
  */

  std::vector<fhirpathParser::IdentifierContext *> ids = ctx->qualifiedIdentifier()->identifier();
  Assert(ids.size() == 1);
  std::string id_str = ids[0]->getText();

  String8 strc = Str8C((char*)id_str.c_str());
  piece->slice = PushStr8Copy(this->arena, strc);

  return piece;
 }

 /////////////////// 
 // Equality Expressions
 
 std::any
 FhirPathVisitor::visitEqualityExpression(fhirpathParser::EqualityExpressionContext *ctx)
 {
  Piece* piece = PushStruct(this->arena, Piece);
  piece->type = Piece_EqualCompare;

  CompareTypeFlags compare_flags = CompareType_Unknown;

  std::vector<antlr4::tree::ParseTree *> children = ctx->children;
  Assert(children.size() > 0);
  for (int i = 1; i < children.size(); i++)
  {
   std::string str = children[i]->getText();
   if      (strcmp(str.c_str(), "=")  == 0)  { compare_flags = CompareType_Equal; }
   else if (strcmp(str.c_str(), "!=") == 0)  { compare_flags = CompareType_Equal | CompareType_Negate; }
   else if (strcmp(str.c_str(), "~")  == 0)  { compare_flags = CompareType_Equivalent; }
   else if (strcmp(str.c_str(), "!~") == 0)  { compare_flags = CompareType_Equivalent | CompareType_Negate; }
  }

  piece->meta.equal_compare_data = compare_flags;

  MakeBinary(piece, ctx->expression(0), ctx->expression(1));

  return piece;
 }


 std::any
 FhirPathVisitor::visitInequalityExpression(fhirpathParser::InequalityExpressionContext *ctx)
 {
  Piece* piece = PushStruct(this->arena, Piece);
  piece->type = Piece_QuantityCompare;

  QuantityCompareFlags compare_flags = 0;

  std::vector<antlr4::tree::ParseTree *> children = ctx->children;
  Assert(children.size() > 0);
  for (int i = 1; i < children.size(); i++)
  {
   std::string str = children[i]->getText();
   if      (strcmp(str.c_str(), ">")  == 0)  { compare_flags = QuantityCompare_Greater; }
   else if (strcmp(str.c_str(), ">=") == 0)  { compare_flags = QuantityCompare_Equal | QuantityCompare_Greater; }
   else if (strcmp(str.c_str(), "<")  == 0)  { compare_flags = QuantityCompare_Less; }
   else if (strcmp(str.c_str(), "<=") == 0)  { compare_flags = QuantityCompare_Equal | QuantityCompare_Less; }
  }

  piece->meta.quantity_compare_data = compare_flags;

  MakeBinary(piece, ctx->expression(0), ctx->expression(1));

  return piece;
 }
 

 /////////////////
 // ~ Invocations

 std::any 
 FhirPathVisitor::visitInvocationExpression(fhirpathParser::InvocationExpressionContext *ctx)
 {
  Piece* piece = PushStruct(this->arena, Piece);
  piece->type = Piece_Dot;

  MakeBinary(piece, ctx->expression(), ctx->invocation());

  return piece;
 }


 std::any
 FhirPathVisitor::visitFunctionInvocation(fhirpathParser::FunctionInvocationContext *ctx)
 {
  Piece* piece = PushStruct(this->arena, Piece);
  piece->type = Piece_FunctionInvocation;

  fhirpathParser::FunctionContext *func = ctx->function();

  String8 name = String8FromIdentifier(this->arena, func->identifier());
  piece->slice = name;

  PieceList list = {};

  fhirpathParser::ParamListContext* paramList = func->paramList();
  if (paramList)
  {
   std::vector<fhirpathParser::ExpressionContext *> expressions = paramList->expression();
   for (int i = 0; i < expressions.size(); i++)
   {
    std::any any_res = expressions[i]->accept(this);
    Piece* param_piece = std::any_cast < Piece* > (any_res);
    PieceNode *node = PushStruct(this->arena, PieceNode);
    node->v = param_piece;
    QueuePush(list.first, list.last, node);
    list.count++;
   }

   piece->params = list;
  }

  return piece;
 }

 std::any 
 FhirPathVisitor::visitMemberInvocation(fhirpathParser::MemberInvocationContext *ctx)
 {
  Piece* piece = PushStruct(this->arena, Piece);
  piece->type = Piece_MemberInvocation;

  fhirpathParser::IdentifierContext *identifier = ctx->identifier();
  antlr4::tree::TerminalNode* id = identifier->IDENTIFIER();
  antlr4::tree::TerminalNode* delim_id = identifier->DELIMITEDIDENTIFIER();

  // TODO(agw): add slice
  if (id != NULL)
  {
   std::string str = id->getText();
   String8 str8 = Str8C((char*)str.c_str());
   piece->slice = PushStr8Copy(this->arena, str8);
  }
  else if (delim_id != NULL)
  {
   std::string str = delim_id->getText();
   String8 str8 = Str8C((char*)str.c_str());
   piece->slice = PushStr8Copy(this->arena, str8);
  }
  else
  {
   // TODO(agw): throw error
   NotImplemented;
  }

  return piece;
 }

 std::any
 FhirPathVisitor::visitThisInvocation(fhirpathParser::ThisInvocationContext *ctx)
 {
  Piece* piece = PushStruct(this->arena, Piece);
  piece->type = Piece_ThisInvocation;
  return piece;
 }

 ///////////////
 // ~ Literals

 std::any
 FhirPathVisitor::visitNumberLiteral(fhirpathParser::NumberLiteralContext *ctx)
 {
  std::string str_text = ctx->getText();
  
  // TODO(agw): parse string to number
  S64 parsed_int = 0;

  B32 is_decimal = FALSE;
  for (int i = 0; i < str_text.length(); i++)
  {
   if (str_text[i] == '.')
   {
    is_decimal = TRUE;
   }
  }

  Piece* piece = PushStruct(this->arena, Piece);
  piece->type = Piece_Number;

  if (is_decimal)
  {
   piece->value.num.type = Number_Decimal;
   Temp temp = ScratchBegin(0, 0);

   String8 str8 = Str8C((char*)str_text.c_str());
   Decimal decimal = DecimalFromString(str8);
   piece->value.num.decimal = decimal;

   ScratchEnd(temp);
  }
  else
  {
   piece->value.num.type = Number_Integer;
   for (int i = 0; i < str_text.length(); i++)
   {
    Assert(CharIsDigit(str_text[i]));

    parsed_int *= 10;
    parsed_int += str_text[i] - '0';
   }

   piece->value.num.s64 = parsed_int;
  }

  return piece;
 }

 std::any
 FhirPathVisitor::visitStringLiteral(fhirpathParser::StringLiteralContext *ctx)
 {
  Piece* piece = PushStruct(this->arena, Piece);
  piece->type = Piece_String;

  std::string str = ctx->STRING()->getText();

  String8 c_str = Str8C((char*)str.c_str());
  // NOTE(agw): remove \'
  c_str.str++;
  c_str.size -= 2;
  piece->value.str.str8 = PushStr8Copy(this->arena, c_str);
  piece->value.str.has_value = TRUE;


  return piece;
 }

 /*
  Date Examples:
  @2014-01-25
  @2014-01
  @2014
 */

 /*
  Time Examples:
  @T12:00
  @T14:30:14.559
 */

 /*
  DateTime Examples:
  @2014-01-25T14:30:14.559
  @2014-01-25T14:30:14.559Z // A date time with UTC timezone offset
  @2014-01-25T14:30 // A partial DateTime with year, month, day, hour, and minute
  @2014-03-25T // A partial DateTime with year, month, and day
  @2014-01T // A partial DateTime with year and month
  @2014T // A partial DateTime with only the year
 */

 #define SKIP(c, ptr, len_remaining) if (*(ptr) != (c)) { throw std::invalid_argument("invalid date/time/datetime"); } (ptr)++; (len_remaining)--;
 #define CHECK_LESS(a, b) if ((a) < (b)) { throw std::invalid_argument("invalid date/time/datetime"); }

 local_function ISO8601_Time
 Deserialize_TimeZoneSection(ISO8601_Time *in_time, String8 str)
 {
  ISO8601_Time time = {};
  if (in_time) { time = *in_time; }

  char* start = (char*)str.str;
  char* ptr = (char*)str.str;
  ptrdiff_t len_remaining = str.size;

  if (len_remaining == 0) return time;

  time.timezone_char = *ptr;

  ptr++; len_remaining--;

  if (time.timezone_char == 'Z') return time;

  CHECK_LESS(len_remaining, 2)

  time.timezone_hour += (U8)CharToInt(*ptr) * 10; ptr++; len_remaining--;
  time.timezone_hour += (U8)CharToInt(*ptr);      ptr++; len_remaining--;
  time.precision = Precision::TimezoneHour;

  SKIP(':', ptr, len_remaining);
  CHECK_LESS(len_remaining, 2)

  time.timezone_minute += (U8)CharToInt(*ptr) * 10; ptr++; len_remaining--;
  time.timezone_minute += (U8)CharToInt(*ptr);      ptr++; len_remaining--;
  time.precision = Precision::TimezoneMinute;

  return time;
 }

 local_function ISO8601_Time
 Deserialize_TimeSection(ISO8601_Time *in_time, String8 str)
 {
  ISO8601_Time time = {};
  if (in_time) { time = *in_time; }

  char* start = (char*)str.str;
  char* ptr = (char*)str.str;
  ptrdiff_t len_remaining = str.size;

  CHECK_LESS(len_remaining, 2)

  time.hour += (U8)CharToInt(*ptr) * 10; ptr++; len_remaining--;
  time.hour += (U8)CharToInt(*ptr);      ptr++; len_remaining--;

  {
   time.precision = Precision::Hour;
   if (len_remaining == 0) return time;
   if (*ptr == 'Z' || *ptr == '+' || *ptr == '-') return Deserialize_TimeZoneSection(&time, Str8((U8*)(ptr), len_remaining));
  }

  SKIP(':', ptr, len_remaining);
  CHECK_LESS(len_remaining, 2)

  time.minute += (U8)CharToInt(*ptr) * 10; ptr++; len_remaining--;
  time.minute += (U8)CharToInt(*ptr);      ptr++; len_remaining--;

  {
   time.precision = Precision::Minute;
   if (len_remaining == 0) return time;
   if (*ptr == 'Z' || *ptr == '+' || *ptr == '-') return Deserialize_TimeZoneSection(&time, Str8((U8*)(ptr), len_remaining));
  }

  SKIP(':', ptr, len_remaining);
  CHECK_LESS(len_remaining, 2)

  time.second += (U8)CharToInt(*ptr) * 10; ptr++; len_remaining--;
  time.second += (U8)CharToInt(*ptr);      ptr++; len_remaining--;

  {
   time.precision = Precision::Second;
   if (len_remaining == 0) return time;
   if (*ptr == 'Z' || *ptr == '+' || *ptr == '-') return Deserialize_TimeZoneSection(&time, Str8((U8*)(ptr), len_remaining));
  }

  if (*ptr == '.')
  {
   SKIP('.', ptr, len_remaining);

   while (*ptr != 'Z' && *ptr != '+' && *ptr != '-' && len_remaining > 0)
   {
    time.millisecond *= 10;
    time.millisecond += (U16)CharToInt(*ptr);

    ptr++; len_remaining--;
   }

   time.precision = Precision::Millisecond;
  }

  if (*ptr == 'Z' || *ptr == '+' || *ptr == '-') return Deserialize_TimeZoneSection(&time, Str8((U8*)(ptr), len_remaining));

  return time;
 }

 ISO8601_Time
 Deserialize_ISO8601(String8 str,
                     ValueType type)
 {
  if (type == ValueType::Time) { return Deserialize_TimeSection(0, str); }

  char* start = (char*)str.str;
  char* ptr   = (char*)str.str;
  ptrdiff_t len_remaining = str.size;

  ISO8601_Time time = {};
  CHECK_LESS(len_remaining, 4)

  time.year += (U16)CharToInt(*ptr) * 1000; ptr++; len_remaining--;
  time.year += (U16)CharToInt(*ptr) * 100;  ptr++; len_remaining--;
  time.year += (U16)CharToInt(*ptr) * 10;   ptr++; len_remaining--;
  time.year += (U16)CharToInt(*ptr);        ptr++; len_remaining--;

  {
   time.precision = Precision::Year;
   if (*ptr == 'T') return Deserialize_TimeSection(&time, Str8((U8*)(ptr + 1), len_remaining - 1));
   if (len_remaining == 0) return time;
  }

  SKIP('-', ptr, len_remaining);
  CHECK_LESS(len_remaining, 2)

  time.month += (U8)CharToInt(*ptr) * 10; ptr++; len_remaining--;
  time.month += (U8)CharToInt(*ptr);      ptr++; len_remaining--;

  {
   time.precision = Precision::Month;
   if (*ptr == 'T') return Deserialize_TimeSection(&time, Str8((U8*)(ptr + 1), len_remaining - 1));
   if (len_remaining == 0) return time;
  }

  SKIP('-', ptr, len_remaining);
  CHECK_LESS(len_remaining, 2)

  time.day += (U8)CharToInt(*ptr) * 10; ptr++; len_remaining--;
  time.day += (U8)CharToInt(*ptr);      ptr++; len_remaining--;

  {
   time.precision = Precision::Day;
   if (*ptr == 'T') return Deserialize_TimeSection(&time, Str8((U8*)(ptr + 1), len_remaining - 1));
   if (len_remaining == 0) return time;
  }

  return time;
 }

 #undef SKIP
 #undef CHECK_LESS

 // TODO(agw): Fill these in
 std::any
 FhirPathVisitor::visitDateLiteral(fhirpathParser::DateLiteralContext *ctx)
 {
  Piece* piece = PushStruct(this->arena, Piece);
  piece->type = Piece_Date;

  std::string str = ctx->DATE()->getText();
  String8 str8 = Str8C((char*)str.c_str());

  // NOTE(agw): remove @ symbol

  str8.str++;
  str8.size--;
  ISO8601_Time time = Deserialize_ISO8601(str8, ValueType::Date);

  piece->value.time = time;
  return piece;
 }

 std::any
 FhirPathVisitor::visitDateTimeLiteral(fhirpathParser::DateTimeLiteralContext *ctx)
 {  
  Piece* piece = PushStruct(this->arena, Piece);
  piece->type = Piece_Date;

  std::string str = ctx->DATETIME()->getText();
  String8 str8 = Str8C((char*)str.c_str());

  // NOTE(agw): remove @ symbol

  str8.str++;
  str8.size--;
  ISO8601_Time time = Deserialize_ISO8601(str8, ValueType::DateTime);

  piece->value.time = time;
  return piece;
 }

 std::any
 FhirPathVisitor::visitTimeLiteral(fhirpathParser::TimeLiteralContext *ctx)
 {
  Piece* piece = PushStruct(this->arena, Piece);

  return piece;
 }

 std::any
 FhirPathVisitor::visitBooleanLiteral(fhirpathParser::BooleanLiteralContext *ctx)
 {
  Piece* piece = PushStruct(this->arena, Piece);
  piece->type = Piece_Boolean;
  std::string text = ctx->getText();
  B32 value = text == "true";
  piece->value.b = value;
  return piece;
 }


};