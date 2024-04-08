namespace native_fhir
{

 /*
  General Idea: Convert visit's -> Piece tree
 */

 std::any
 FhirPathVisitor::visitPolarityExpression(fhirpathParser::PolarityExpressionContext *ctx)
 {
  Piece* ret = PushStruct(this->arena, Piece);

  std::vector<antlr4::tree::ParseTree *> children = ctx->children;

  std::string str = children[0]->getText();

  if      (strcmp(str.c_str(), "+") == 0) { ret->type = Piece_Polarity_Positive; } 
  else if (strcmp(str.c_str(), "-") == 0) { ret->type = Piece_Polarity_Negative; }

  std::any res_any = ctx->expression()->accept(this);
  Piece* res_piece = std::any_cast <Piece*> (res_any);
  res_piece->parent = ret;
  ret->child[0] = res_piece;

  return ret;
 }

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
  Piece* ret = PushStruct(this->arena, Piece);

  // ~ Get Specific Type
  std::vector<antlr4::tree::ParseTree *> children = ctx->children;
  for (int i = 0; i < children.size(); i++)
  {
   std::string str = children[i]->getText();

   if      (strcmp(str.c_str(), "+") == 0) { ret->type = Piece_Plus; } 
   else if (strcmp(str.c_str(), "-") == 0) { ret->type = Piece_Minus; }
   else if (strcmp(str.c_str(), "&") == 0) { ret->type = Piece_Ampersand; }
  }

  Assert(ret->type != Piece_Unknown);

  // ~ Get Left/Right Sides
  std::vector<fhirpathParser::ExpressionContext*> expressions = ctx->expression();
  size_t size = expressions.size();

  Assert(size == 2);

  MakeBinary(ret, ctx->expression(0), ctx->expression(1));

  return ret;
 }

 std::any
 FhirPathVisitor::visitMultiplicativeExpression(fhirpathParser::MultiplicativeExpressionContext *ctx)
 {
  Piece* ret = PushStruct(this->arena, Piece);

  // ~ Get Specific Type
  std::vector<antlr4::tree::ParseTree *> children = ctx->children;
  for (int i = 0; i < children.size(); i++)
  {
   std::string str = children[i]->getText();

   if      (strcmp(str.c_str(), "*") == 0)   { ret->type = Piece_Multiply; }
   else if (strcmp(str.c_str(), "/") == 0)   { ret->type = Piece_Divide; }
   else if (strcmp(str.c_str(), "div") == 0) { ret->type = Piece_Divide; }
   else if (strcmp(str.c_str(), "mod") == 0) { ret->type = Piece_Mod; }
  }

  Assert(ret->type != Piece_Unknown);

  // ~ Get Left/Right Sides
  std::vector<fhirpathParser::ExpressionContext*> expressions = ctx->expression();
  size_t size = expressions.size();
  Assert(size == 2);

  MakeBinary(ret, ctx->expression(0), ctx->expression(1));

  return ret;
 }

 std::any
 FhirPathVisitor::visitTypeExpression(fhirpathParser::TypeExpressionContext *ctx)
 {
  Piece* ret = PushStruct(this->arena, Piece);
  std::vector<antlr4::tree::ParseTree *> children = ctx->children;
  Assert(children.size() > 0);
  for (int i = 1; i < children.size(); i++)
  {
   std::string str = children[i]->getText();
   if      (strcmp(str.c_str(), "is") == 0)   { ret->type = Piece_Is; }
   else if (strcmp(str.c_str(), "as") == 0)   { ret->type = Piece_As; }
  }

  MakeBinary(ret, ctx->expression(), ctx->typeSpecifier());

  return ret;
 }


 std::any
 FhirPathVisitor::visitEqualityExpression(fhirpathParser::EqualityExpressionContext *ctx)
 {
  Piece* ret = PushStruct(this->arena, Piece);
  ret->type = Piece_EqualCompare;

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

  ret->meta.equal_compare_data = compare_flags;

  MakeBinary(ret, ctx->expression(0), ctx->expression(1));

  return ret;
 }


 std::any
 FhirPathVisitor::visitInequalityExpression(fhirpathParser::InequalityExpressionContext *ctx)
 {
  Piece* ret = PushStruct(this->arena, Piece);
  ret->type = Piece_QuantityCompare;

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

  ret->meta.quantity_compare_data = compare_flags;

  MakeBinary(ret, ctx->expression(0), ctx->expression(1));

  return ret;
 }
 

 std::any
 FhirPathVisitor::visitTypeSpecifier(fhirpathParser::TypeSpecifierContext *ctx)
 {
  Piece* ret = PushStruct(this->arena, Piece);
  ret->type = Piece_Identifier;

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
  ret->slice = PushStr8Copy(this->arena, strc);

  return ret;
 }


 /////////////////
 // ~ Invocations

 std::any 
 FhirPathVisitor::visitInvocationExpression(fhirpathParser::InvocationExpressionContext *ctx)
 {
  Piece* ret = PushStruct(this->arena, Piece);
  ret->type = Piece_Dot;

  MakeBinary(ret, ctx->expression(), ctx->invocation());

  return ret;
 }

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
 FhirPathVisitor::visitFunctionInvocation(fhirpathParser::FunctionInvocationContext *ctx)
 {
  Piece* ret = PushStruct(this->arena, Piece);
  ret->type = Piece_FunctionInvocation;

  fhirpathParser::FunctionContext *func = ctx->function();

  String8 name = String8FromIdentifier(this->arena, func->identifier());
  ret->slice = name;

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

   ret->params = list;
  }

  return ret;
 }

 std::any 
 FhirPathVisitor::visitMemberInvocation(fhirpathParser::MemberInvocationContext *ctx)
 {
  Piece* ret = PushStruct(this->arena, Piece);
  ret->type = Piece_MemberInvocation;

  fhirpathParser::IdentifierContext *identifier = ctx->identifier();
  antlr4::tree::TerminalNode* id = identifier->IDENTIFIER();
  antlr4::tree::TerminalNode* delim_id = identifier->DELIMITEDIDENTIFIER();

  // TODO(agw): add slice
  if (id != NULL)
  {
   std::string str = id->getText();
   String8 str8 = Str8C((char*)str.c_str());
   ret->slice = PushStr8Copy(this->arena, str8);
  }
  else if (delim_id != NULL)
  {
   std::string str = delim_id->getText();
   String8 str8 = Str8C((char*)str.c_str());
   ret->slice = PushStr8Copy(this->arena, str8);
  }
  else
  {
   // TODO(agw): throw error
  }

  return ret;
 }

 std::any
 FhirPathVisitor::visitThisInvocation(fhirpathParser::ThisInvocationContext *ctx)
 {
  Piece* ret = PushStruct(this->arena, Piece);
  ret->type = Piece_ThisInvocation;

  return ret;
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

};