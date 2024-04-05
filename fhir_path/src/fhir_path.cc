namespace native_fhir
{
 namespace nf_fhir_r4
 {
  Resource nil_resource = {};

  read_only PrecedenceEntry g_binary_ops[] = {
   { Str8Lit("."), P_Dot, Piece_Dot },
   { Str8Lit("+"), P_Plus_Minus_Ampersand, Piece_Plus },
   { Str8Lit("-"), P_Plus_Minus_Ampersand, Piece_Minus },
   { Str8Lit("&"), P_Plus_Minus_Ampersand, Piece_Ampersand },

   { Str8Lit("*"), P_Mul_Divide, Piece_Multiply },
   { Str8Lit("/"), P_Mul_Divide, Piece_ForwardSlash },
   { Str8Lit("%"), P_Mul_Divide, Piece_Percent },

   { Str8Lit("("), P_None, Piece_OpenParen },
   { Str8Lit(")"), P_None, Piece_CloseParen },

   // NOTE(agw): ordering here matters since we don't want a false positive with '='
   { Str8Lit("=="),  P_Greater, Piece_QuantityCompare, { QuantityCompare_Equal } },

   { Str8Lit("!="),  P_Equal, Piece_EqualCompare, { CompareType_Equal | CompareType_Negate } },
   { Str8Lit("="),   P_Equal, Piece_EqualCompare, { CompareType_Equal } },
   { Str8Lit("!~"), 	P_Equal, Piece_EqualCompare, { CompareType_Equivalent | CompareType_Negate } },
   { Str8Lit("~"),  	P_Equal, Piece_EqualCompare, { CompareType_Equivalent } },

   { Str8Lit("<="),  P_Greater, Piece_QuantityCompare, { QuantityCompare_Less | QuantityCompare_Equal } },
   { Str8Lit("<"),  	P_Greater, Piece_QuantityCompare, { QuantityCompare_Less } },
   { Str8Lit(">="), 	P_Greater, Piece_QuantityCompare, { QuantityCompare_Greater | QuantityCompare_Equal } },
   { Str8Lit(">"),  	P_Greater, Piece_QuantityCompare, { QuantityCompare_Greater } },

   // TODO(agw): these are kind of the same
   { Str8Lit("as"), 	P_Is_As, Piece_As },
   { Str8Lit("is"), 	P_Is_As, Piece_Is },
   { Str8Lit("|"), 	 P_Pipe, Piece_Union },
  };


  typedef U32 GetTokenFlags;
  enum
  {
   GetPiece_Move = (1 << 0),
  };

  // ~ Literal Parsing
  typedef struct SkipWhitespaceResult SkipWhitespaceResult;
  struct SkipWhitespaceResult
  {
   U8* pos;
   size_t count;
  };

  local_function SkipWhitespaceResult
  SkipWhitespace(U8* start, U8* end)
  {
   U8* pos = start;
   size_t count = 0;

   while (pos < end)
   {
    if (!CharIsSpace(*pos)) { break; }

    pos++;
    count++;
   }

   return { pos, count };
  }
  
  local_function NullableString8
  ParseString(Tokenizer *tokenizer, size_t *off)
  {
   NullableString8 str = { 0 };
   size_t offset = *off;

   U8* pos = tokenizer->pos + 1;

   str.str = pos;
   while (*pos != '\'' && pos < tokenizer->max_pos)
   {
    pos++;
    offset++;
   }
   str.size = offset;
   str.has_value = TRUE;


   // NOTE(agw); for \' (2x)
   offset += 2;

   *off = offset;

   return str;
  }

  Number
  ParseNumber(U8 *start, U8* end_ptr, size_t *off)
  {
   Number ret = { 0 };

   U8* pos = start;
   size_t offset = *off;

   B32 negative = FALSE;
   if (*pos == '-')
   {
    negative = TRUE;
    pos++;
   }

   B32 is_decimal = FALSE;
   int num_after_period = 0;
   while ((CharIsDigit(*pos) || *pos == '.') && pos < end_ptr)
   {
    pos++;
    if (*pos == '.')
    {
     if (is_decimal)
     {
      Assert(false);
     }
     else
     {
      is_decimal = TRUE;
     }
    }

    if (is_decimal) num_after_period++;

   }

   U8* number_end = pos;
   pos = start;

   if (is_decimal)
   {
    String8 str = { 0 };
    str.str = start;
    str.size = number_end - pos;
    Decimal decimal = DecimalFromString(str);
    decimal.precision = num_after_period;
    offset += str.size;


    ret.decimal = decimal;
    ret.type = Number_Decimal;
   }
   else
   {
    S64 val = 0;
    while (CharIsDigit(*pos))
    {
     val *= 10;
     val += (S32)(*pos - '0');

     pos++; offset++;
    }

    ret.s64 = negative ? -val : val;
    ret.type = Number_Integer;
   }

   SkipWhitespaceResult skip = SkipWhitespace(pos, end_ptr);
   offset += skip.count;
   pos = skip.pos;

   // ~ Parse unit
   // TODO(agw): add support for precision(s)

   if (*pos == '\'')
   {
    String8 unit = { 0 };
    pos++;
    unit.str = pos;
    while (*pos != '\'' && pos < end_ptr)
    {
     pos++;
    }
    if (pos >= end_ptr) { Assert(false); }

    // NOTE(agw): eat ending '
    pos++;

    offset += pos - (skip.pos + offset);

    unit.size = pos - unit.str;
    ret.unit = unit;
   }

   *off = offset;

   return ret;
  }

  local_function ISO8601_Time
  ParseDate(Tokenizer *tokenizer, U8 *start, U8 *end, size_t *offset)
  {
   ISO8601_Time time = { 0 };

   U8* ptr = start;
   FP_Assert(*ptr == '@', tokenizer, Str8Lit("Dates must start with an @ symbol"));

   ptr++;

   String8 str = Str8(ptr, end - ptr);

   ////////////////////////
   // YEAR
   time.year += (U8)CharToInt(*ptr) * 1000;
   ptr++;
   time.year += (U8)CharToInt(*ptr) * 100;
   ptr++;
   time.year += (U8)CharToInt(*ptr) * 10;
   ptr++;
   time.year += (U8)CharToInt(*ptr);
   ptr++;

   time.precision = Precision::Year;
    
   if (ptr >= end) { return time; }

   // TODO(agw): complete rest
   *offset = *offset + (ptr - start);
   return time;

   Assert(*ptr == '-');
   ptr++;
    
   ////////////////////////
   // MONTH 
   time.month += (U8)CharToInt(*ptr) * 10;
   ptr++;
   time.month += (U8)CharToInt(*ptr);
   ptr++;
   time.precision = Precision::Month;
    
   if (ptr - str.str >= (ptrdiff_t)str.size)
   {
    return time;
   }
    
   // TODO(agw): this is _technically_ optional
   Assert(*ptr == '-');
   ptr++;
    
   ////////////////////////
   // DAY 
   time.day += (U8)CharToInt(*ptr) * 10;
   ptr++;
   time.day += (U8)CharToInt(*ptr);
   ptr++;
   time.precision = Precision::Day;

   if (ptr - str.str >= (ptrdiff_t)str.size)
   {
    return time;
   }

   Assert(*ptr == 'T');
   ptr++;

   // NOTE(agw): should have HH:MM:SS <- 8 chars
   Assert(ptr - str.str >= 8);

   ////////////////////////
   // HOUR 
   time.hour += (U8)CharToInt(*ptr) * 10;
   ptr++;
   time.hour += (U8)CharToInt(*ptr);
   ptr++;
   Assert(time.hour >= 0 && time.hour <= 23);
        
   time.precision = Precision::Hour;
        
   Assert(*ptr == ':');
   ptr++;

   ////////////////////////
   // MINUTE 
   time.minute += (U8)CharToInt(*ptr) * 10;
   ptr++;
   time.minute += (U8)CharToInt(*ptr);
   ptr++;
   Assert(time.minute >= 0 && time.minute < 60);

   time.precision = Precision::Minute;

   Assert(*ptr == ':');
   ptr++;
    
   ////////////////////////
   // SECOND
   time.second += (U8)CharToInt(*ptr) * 10;
   ptr++;
   time.second += (U8)CharToInt(*ptr);
   ptr++;
   Assert(time.second >= 0 && time.second < 60);

   time.precision = Precision::Second;

   ////////////////////////
   // MILLISECOND

   //.sss
   Assert(ptr - str.str >= 4);
   Assert(*ptr == '.');
   ptr++;

   ////////////////////////
   // SECOND
   time.millisecond += (U8)CharToInt(*ptr) * 100;
   ptr++;
   time.millisecond += (U8)CharToInt(*ptr) * 10;
   ptr++;
   time.millisecond += (U8)CharToInt(*ptr);
   ptr++;

   time.precision = Precision::Millisecond;
   Assert(time.millisecond >= 0 && time.millisecond < 1000);

   char offset_char = *ptr;
   ptr++;

   time.timezone_char = offset_char;

   if (offset_char == 'Z')
   {
    Assert(ptr - str.str >= (ptrdiff_t)str.size);
    return time;
   }

   // NOTE(agw): should have MM:SS <- 5 chars
   Assert(ptr - str.str >= 5);

   ////////////////////////
   // TIMEZONE_MINUTE 
   time.timezone_hour += (U8)CharToInt(*ptr) * 10;
   ptr++;
   time.timezone_hour += (U8)CharToInt(*ptr);
   ptr++;
   Assert(time.timezone_hour >= 0 && time.timezone_hour < 60);

   time.precision = Precision::TimezoneMinute;

   Assert(*ptr == ':');
   ptr++;

   ////////////////////////
   // TIMEZONE_SECOND
   time.timezone_minute += (U8)CharToInt(*ptr) * 10;
   ptr++;
   time.timezone_minute += (U8)CharToInt(*ptr);
   ptr++;
   Assert(time.timezone_minute >= 0 && time.timezone_minute < 60);
   time.precision = Precision::TimezoneSecond;

   Assert(ptr - str.str >= (ptrdiff_t)str.size);

   ptr++;
   return time;
  }


  local_function Piece*
  GetNextPiece(Tokenizer *tokenizer, GetTokenFlags flags)
  {
   Piece *ret = PushStruct(tokenizer->arena, Piece);
   ret->child[0] = &nil_piece;
   ret->child[1] = &nil_piece;

   tokenizer->pos = SkipWhitespace(tokenizer->pos, tokenizer->max_pos).pos;

   if (tokenizer->pos >= tokenizer->max_pos) return ret;

   size_t offset = 0;

   B32 is_binary_op = FALSE;

   for (int i = 0; i < ArrayCount(g_binary_ops); i++)
   {
    PrecedenceEntry op = g_binary_ops[i];

    U8* tmp_pos = tokenizer->pos;
    B32 is_match = TRUE;
    for (int j = 0; j < op.c.size; j++, tmp_pos++)
    {
     if (tmp_pos >= tokenizer->max_pos || *tmp_pos != op.c.str[j])
     {
      is_match = FALSE;
      break;
     }
    }

    if (!is_match) continue;

    ret->type = op.type;
    ret->precedence = op.prescedence;
    ret->meta = op.meta;
    offset += op.c.size;
    is_binary_op = TRUE;
    break;
   }

   if (!is_binary_op && ret->type == Piece_Unknown)
   {
    // ~ Try Parse Number
    if (CharIsDigit(*tokenizer->pos))
    {
     Number num = ParseNumber(tokenizer->pos, tokenizer->max_pos, &offset);
     ret->value.num = num;
     ret->type = Piece_Number;
    }
    else if (*tokenizer->pos == '\'')
    {
     NullableString8 str = ParseString(tokenizer, &offset);
     ret->value.str = str;
     ret->type = Piece_String;
    }
    // ~ Assume it is an identifier
    else if (*tokenizer->pos == '@')
    {
     ISO8601_Time date = ParseDate(tokenizer, tokenizer->pos, tokenizer->max_pos, &offset);
     ret->type = Piece_Date;
     ret->value.time = date;
    }
    else
    {
     U8* pos = tokenizer->pos;

     B32 delim = FALSE;
     if (*pos == '`')
     {
      delim = TRUE;
      pos++;
     }
     else if (*pos != '_' && !CharIsAlpha(*pos) && *pos != '$') { Assert(false); }

     while (pos < tokenizer->max_pos)
     {
      if (*pos == '`') {
       if (delim) break;
       Assert(false);
      }

      if (!delim && *pos == ' ') break;
      if (!delim && *pos != '$' && CharIsSymbol(*pos)) break;
      // TODO(agw): check for invalid symbols
      if (!delim && *pos == '(') break;
      if (!delim && *pos == ')') break;
      if (!delim && *pos == '\n') break;

      pos++;
      offset++;
     }

     ret->type = Piece_Literal;
     ret->flags |= delim ? PieceFlag_IsBackTick : 0;
    }
   }

   ret->slice = Str8(tokenizer->pos, offset);

   if (flags & GetPiece_Move)
   {
    tokenizer->pos += offset;
   }

   return ret;
  }

  // ~ Direct Parsing
  Piece* _ParseExpression(Tokenizer *tokenizer, FP_Precedence min_prec);

  local_function void
  TokenizerAdvanceByPiece(Tokenizer *tokenizer, Piece* piece)
  {
   tokenizer->pos += piece->slice.size;
  }

  local_function Piece*
  MakeBinary(Piece *left, Piece *mid, Piece *right)
  {
   mid->child[0] = left;
   mid->child[1] = right;
   return mid;
  }

  local_function PieceList
  ParseParamList(Tokenizer *tokenizer, size_t *offset)
  {
   PieceList list = { 0 };

   U8* start_pos = tokenizer->pos;
   while (true)
   {

    // ~ TODO(agw): Try get prefix

    Piece *expr = _ParseExpression(tokenizer, P_None);
    if (expr->type == Piece_CloseParen) break;

    PieceNode *node = PushStruct(tokenizer->arena, PieceNode);
    node->v = expr;
    QueuePush(list.first, list.last, node);
    list.count++;

    if (*tokenizer->pos != ',') break;
   }

   Piece* next = GetNextPiece(tokenizer, 0);
   FP_Assert(next->type == Piece_CloseParen, tokenizer, Str8Lit("Missing closing ')'"));
   TokenizerAdvanceByPiece(tokenizer, next);

   *offset = tokenizer->pos - start_pos;
   return list;
  }

  local_function Piece *
  ParseIncreasingPrecedence(Tokenizer *tokenizer, Piece *left, FP_Precedence min_prec)
  {
   // ~ Do a couple of checks on next token...
   Piece *next = GetNextPiece(tokenizer, 0);

   if (next->precedence == FP_Precedence::P_None) { return left; }
   if ((S32)next->precedence <= (S32)min_prec) { return left; }

   // ~ If it works for us, eat it
   GetNextPiece(tokenizer, GetPiece_Move);

   Piece *right = _ParseExpression(tokenizer, next->precedence);
   Piece *ret = MakeBinary(left, next, right);
   return ret;
  }

  local_function Piece*
  ParsePolarityExpression(Tokenizer *tokenizer)
  {
   B32 negate = *tokenizer->pos == '-';
   tokenizer->pos++;
   Piece *ret = _ParseExpression(tokenizer, FP_Precedence::P_None);
   if (negate)
   {
    switch (ret->value.num.type)
    {
     case Number_Integer:
     {
      ret->value.num.s64 = -ret->value.num.s64;
     } break;
     default: { NotImplemented; } break;
    }
   }
   else NotImplemented;

   return ret;
  }

  local_function Piece*
  _ParseExpression(Tokenizer *tokenizer, FP_Precedence _min_prec)
  {
   if (*tokenizer->pos == '-' || *tokenizer->pos == '+')
   {
    return ParsePolarityExpression(tokenizer);
   }

   FP_Precedence min_prec = _min_prec;
   Piece *left = GetNextPiece(tokenizer, 0);
			
   // ~ Deal with leading parens
   if (left->type == Piece_OpenParen)
   {
    left = GetNextPiece(tokenizer, GetPiece_Move);
    min_prec = P_None; // Reset precedence
    tokenizer->parens_depth++;
   }
   if (left->type == Piece_CloseParen)
   {
    return left;
   }
   else
   {
    TokenizerAdvanceByPiece(tokenizer, left);
   }

   while (true)
   {
    Piece *node = ParseIncreasingPrecedence(tokenizer, left, min_prec);
    if (node == left)
    {
     Piece *next = GetNextPiece(tokenizer, 0);
     if (next->type == Piece_OpenParen)
     {
      TokenizerAdvanceByPiece(tokenizer, next);

      // Here we know we are expecting a function
      if (left->type == Piece_Literal)
      {
       size_t offset = 0;
       PieceList list = ParseParamList(tokenizer, &offset);
       node->type = Piece_FunctionInvocation;
       node->params = list;

       // NOTE(agw): +1 for the open param
       node->slice.size += offset + 1;
      }
      else break; // Otherwise we are just starting a new expression
     }
     else if (next->type == Piece_CloseParen && tokenizer->parens_depth > 0)
     {
      // we are done this expression
      TokenizerAdvanceByPiece(tokenizer, next);
      tokenizer->parens_depth--;
      return left;
     } else break;
    }

    left = node;
   }

   return left;
  }

  Piece*
  ParseExpression(Tokenizer *tokenizer)
  {
   TimeFunction;
   Piece *tok = _ParseExpression(tokenizer, P_None);
   return tok;
  }

  Piece*
  Antlr_ParseExpression(String8 str)
  {
   ANTLRInputStream input((const char*)str.str, str.size);
   fhirpathLexer lexer(&input);
   CommonTokenStream tokens(&lexer);
   fhirpathParser parser(&tokens);

  // fhirpathParser::EntireExpressionContext* entire = parser.entireExpression();
   // TODO(agw): need to make some type of "walker" that will
   // execute the expressions 

   native_fhir::FhirPathVisitor visitor; 
   fhirpathParser::EntireExpressionContext* entireExpression = parser.entireExpression();
   std::any visit_result = visitor.visitEntireExpression(entireExpression);
   Piece* root = std::any_cast < Piece* > (visit_result);
   return root;
  }

 };
};