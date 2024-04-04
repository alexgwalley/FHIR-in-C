namespace native_fhir
{

 /*
  General Idea: Convert visit's -> Piece tree
 */
 std::any 
 FhirPathVisitor::visitOrExpression(fhirpathParser::OrExpressionContext *ctx)
 {
  // TODO(agw): this needs to be in an arena
  Piece piece = {};

  std::vector<fhirpathParser::ExpressionContext*> expressions = ctx->expression();

  return piece;
 }

 void
 FhirPathVisitor::MakeBinary(Piece* parent, fhirpathParser::ExpressionContext *left, fhirpathParser::ExpressionContext *right)
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

   if      (strcmp(str.c_str(), "*") == 0)   { ret->type = Piece_Asterisk; }
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
 FhirPathVisitor::visitNumberLiteral(fhirpathParser::NumberLiteralContext *ctx)
 {
  std::string str_text = ctx->getText();
  
  // TODO(agw): parse string to number
  S64 parsed_int = 10;

  Piece* piece = PushStruct(this->arena, Piece);
  piece->type = Piece_Number;
  piece->value.num.type = Number_Integer;
  piece->value.num.s64 = parsed_int;

  return piece;
 }

};