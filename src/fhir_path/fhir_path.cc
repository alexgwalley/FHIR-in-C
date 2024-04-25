namespace native_fhir
{

 FHIR_VERSION::Resource nil_resource = {};

 Piece*
 Antlr_ParseExpression(String8 str)
 {
  TimeFunction;
  ANTLRInputStream input((const char*)str.str, str.size);
  fhirpathLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  fhirpathParser parser(&tokens);

  native_fhir::FhirPathVisitor visitor;
  fhirpathParser::EntireExpressionContext* entireExpression = parser.entireExpression();
  std::any visit_result = visitor.visitEntireExpression(entireExpression);
  Piece* root = std::any_cast < Piece* > (visit_result);
  return root;
 }

};