//////////////////
// ~ ANTLR - Parsing
#define ANTLR4CPP_STATIC
#include "third_party/antlr/antlr4-runtime.h"
#include "third_party/antlr_generated/fhirpathLexer.h"
#include "third_party/antlr_generated/fhirpathParser.h"
#include "third_party/antlr_generated/fhirpathBaseVisitor.h"

#include "third_party/antlr_generated/fhirpathLexer.cpp"
#include "third_party/antlr_generated/fhirpathParser.cpp"
#include "third_party/antlr_generated/fhirpathBaseVisitor.cpp"

#include "number/number.h"
#include "fhir_path.h"

#include "execution/path_execution.h"
#include "fhir_path_visitor/fhir_path_visitor.h"