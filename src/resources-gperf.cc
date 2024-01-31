/* C++ code produced by gperf version 3.0.1 */
/* Command-line: 'W:\\gperf-3.0.1-bin\\bin\\gperf.exe' -t --output-file=resources-gperf.cc -CGD '.\\resources.txt'  */
/* Computed positions: -k'1,5,10,16,19,24,36,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 3 ".\resources.txt"
struct ResourceNameTypePair { char* name; int type; };

#define TOTAL_KEYWORDS 711
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 83
#define MIN_HASH_VALUE 14
#define MAX_HASH_VALUE 3004
/* maximum key range = 2991, duplicates = 0 */

class Perfect_Hash
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct ResourceNameTypePair *in_word_set (const char *str, unsigned int len);
};

inline unsigned int
Perfect_Hash::hash (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005,
      3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005,
      3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005,
      3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005,
      3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005,
      3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005,
      3005, 3005, 3005, 3005, 3005, 1334,  610,   60,  115,  310,
        60,  505,  555,  635, 3005, 3005,   10,   40,  125,  560,
         0,   15, 1000,   30,  315,    5,  720, 3005, 3005, 3005,
      3005, 3005, 3005, 3005, 3005,  695,    5,  165,  455,   45,
        15,   10,  410,  550,  590,   15,  200,  150,   50,  120,
        10,  300,  300,  310,    5,  175,    0,    0,  935,    0,
        30,   95,   50, 3005, 3005, 3005, 3005, 3005, 3005, 3005,
      3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005,
      3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005,
      3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005,
      3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005,
      3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005,
      3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005,
      3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005,
      3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005,
      3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005,
      3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005,
      3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005,
      3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005, 3005,
      3005, 3005, 3005, 3005, 3005, 3005, 3005
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[35]];
      /*FALLTHROUGH*/
      case 35:
      case 34:
      case 33:
      case 32:
      case 31:
      case 30:
      case 29:
      case 28:
      case 27:
      case 26:
      case 25:
      case 24:
        hval += asso_values[(unsigned char)str[23]];
      /*FALLTHROUGH*/
      case 23:
      case 22:
      case 21:
      case 20:
      case 19:
        hval += asso_values[(unsigned char)str[18]];
      /*FALLTHROUGH*/
      case 18:
      case 17:
      case 16:
        hval += asso_values[(unsigned char)str[15]];
      /*FALLTHROUGH*/
      case 15:
      case 14:
      case 13:
      case 12:
      case 11:
      case 10:
        hval += asso_values[(unsigned char)str[9]];
      /*FALLTHROUGH*/
      case 9:
      case 8:
      case 7:
      case 6:
      case 5:
        hval += asso_values[(unsigned char)str[4]+1];
      /*FALLTHROUGH*/
      case 4:
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct ResourceNameTypePair wordlist[] =
  {
#line 301 ".\resources.txt"
    {"List", 296},
#line 442 ".\resources.txt"
    {"Practitioner", 437},
#line 303 ".\resources.txt"
    {"Location", 298},
#line 486 ".\resources.txt"
    {"Slot", 481},
#line 444 ".\resources.txt"
    {"PractitionerRole", 439},
#line 512 ".\resources.txt"
    {"Substance", 507},
#line 519 ".\resources.txt"
    {"SubstancePolymer", 514},
#line 700 ".\resources.txt"
    {"Lipidprofile", 695},
#line 482 ".\resources.txt"
    {"Schedule", 477},
#line 527 ".\resources.txt"
    {"SubstanceProtein_Subunit", 522},
#line 626 ".\resources.txt"
    {"Count", 621},
#line 526 ".\resources.txt"
    {"SubstanceProtein", 521},
#line 522 ".\resources.txt"
    {"SubstancePolymer_Repeat", 517},
#line 351 ".\resources.txt"
    {"MedicinalProduct", 346},
#line 510 ".\resources.txt"
    {"Subscription", 505},
#line 320 ".\resources.txt"
    {"Medication", 315},
#line 704 ".\resources.txt"
    {"Ldlcholesterol", 699},
#line 369 ".\resources.txt"
    {"MedicinalProductInteraction", 364},
#line 55 ".\resources.txt"
    {"CarePlan", 50},
#line 370 ".\resources.txt"
    {"MedicinalProductInteraction_Interactant", 365},
#line 75 ".\resources.txt"
    {"Claim_Insurance", 70},
#line 613 ".\resources.txt"
    {"MetadataResource", 608},
#line 76 ".\resources.txt"
    {"Claim_Accident", 71},
#line 70 ".\resources.txt"
    {"Claim_Payee", 65},
#line 326 ".\resources.txt"
    {"MedicationDispense", 321},
#line 321 ".\resources.txt"
    {"Medication_Ingredient", 316},
#line 540 ".\resources.txt"
    {"SubstanceSpecification", 535},
#line 371 ".\resources.txt"
    {"MedicinalProductManufactured", 366},
#line 333 ".\resources.txt"
    {"MedicationKnowledge_Cost", 328},
#line 59 ".\resources.txt"
    {"CareTeam_Participant", 54},
#line 680 ".\resources.txt"
    {"Cqf_questionnaire", 675},
#line 329 ".\resources.txt"
    {"MedicationKnowledge", 324},
#line 360 ".\resources.txt"
    {"MedicinalProductContraindication", 355},
#line 657 ".\resources.txt"
    {"Quantity", 652},
#line 332 ".\resources.txt"
    {"MedicationKnowledge_Ingredient", 327},
#line 362 ".\resources.txt"
    {"MedicinalProductIndication", 357},
#line 502 ".\resources.txt"
    {"StructureMap_Structure", 497},
#line 323 ".\resources.txt"
    {"MedicationAdministration", 318},
#line 634 ".\resources.txt"
    {"Duration", 629},
#line 324 ".\resources.txt"
    {"MedicationAdministration_Performer", 319},
#line 325 ".\resources.txt"
    {"MedicationAdministration_Dosage", 320},
#line 342 ".\resources.txt"
    {"MedicationKnowledge_Regulatory_Substitution", 337},
#line 74 ".\resources.txt"
    {"Claim_Procedure", 69},
#line 176 ".\resources.txt"
    {"DeviceRequest", 171},
#line 357 ".\resources.txt"
    {"MedicinalProductAuthorization", 352},
#line 161 ".\resources.txt"
    {"Device", 156},
#line 543 ".\resources.txt"
    {"SubstanceSpecification_Structure", 538},
#line 343 ".\resources.txt"
    {"MedicationKnowledge_Regulatory_Schedule", 338},
#line 654 ".\resources.txt"
    {"Population", 649},
#line 344 ".\resources.txt"
    {"MedicationKnowledge_Regulatory_MaxDispense", 339},
#line 372 ".\resources.txt"
    {"MedicinalProductPackaged", 367},
#line 388 ".\resources.txt"
    {"MolecularSequence", 383},
#line 165 ".\resources.txt"
    {"Device_Version", 160},
#line 336 ".\resources.txt"
    {"MedicationKnowledge_AdministrationGuidelines_Dosage", 331},
#line 553 ".\resources.txt"
    {"SupplyRequest", 548},
#line 652 ".\resources.txt"
    {"ParameterDefinition", 647},
#line 627 ".\resources.txt"
    {"DataRequirement", 622},
#line 338 ".\resources.txt"
    {"MedicationKnowledge_MedicineClassification", 333},
#line 359 ".\resources.txt"
    {"MedicinalProductAuthorization_Procedure", 354},
#line 547 ".\resources.txt"
    {"SubstanceSpecification_Code", 542},
#line 373 ".\resources.txt"
    {"MedicinalProductPackaged_BatchIdentifier", 368},
#line 162 ".\resources.txt"
    {"Device_UdiCarrier", 157},
#line 167 ".\resources.txt"
    {"DeviceDefinition", 162},
#line 533 ".\resources.txt"
    {"SubstanceSourceMaterial", 528},
#line 358 ".\resources.txt"
    {"MedicinalProductAuthorization_JurisdictionalAuthorization", 353},
#line 178 ".\resources.txt"
    {"DeviceUseStatement", 173},
#line 650 ".\resources.txt"
    {"Money", 645},
#line 174 ".\resources.txt"
    {"DeviceMetric", 169},
#line 58 ".\resources.txt"
    {"CareTeam", 53},
#line 394 ".\resources.txt"
    {"MolecularSequence_StructureVariant", 389},
#line 68 ".\resources.txt"
    {"Claim", 63},
#line 498 ".\resources.txt"
    {"StructureDefinition_Context", 493},
#line 670 ".\resources.txt"
    {"MoneyQuantity", 665},
#line 496 ".\resources.txt"
    {"StructureDefinition", 491},
#line 542 ".\resources.txt"
    {"SubstanceSpecification_Property", 537},
#line 453 ".\resources.txt"
    {"Questionnaire", 448},
#line 350 ".\resources.txt"
    {"MedicationStatement", 345},
#line 183 ".\resources.txt"
    {"DocumentReference", 178},
#line 649 ".\resources.txt"
    {"Meta", 644},
#line 341 ".\resources.txt"
    {"MedicationKnowledge_Regulatory", 336},
#line 71 ".\resources.txt"
    {"Claim_CareTeam", 66},
#line 302 ".\resources.txt"
    {"List_Entry", 297},
#line 392 ".\resources.txt"
    {"MolecularSequence_Quality_Roc", 387},
#line 655 ".\resources.txt"
    {"ProdCharacteristic", 650},
#line 363 ".\resources.txt"
    {"MedicinalProductIndication_OtherTherapy", 358},
#line 707 ".\resources.txt"
    {"Synthesis", 702},
#line 483 ".\resources.txt"
    {"SearchParameter", 478},
#line 168 ".\resources.txt"
    {"DeviceDefinition_UdiDeviceIdentifier", 163},
#line 175 ".\resources.txt"
    {"DeviceMetric_Calibration", 170},
#line 164 ".\resources.txt"
    {"Device_Specialization", 159},
#line 548 ".\resources.txt"
    {"SubstanceSpecification_Name", 543},
#line 541 ".\resources.txt"
    {"SubstanceSpecification_Moiety", 536},
#line 128 ".\resources.txt"
    {"Contract", 123},
#line 487 ".\resources.txt"
    {"Specimen", 482},
#line 515 ".\resources.txt"
    {"SubstanceNucleicAcid", 510},
#line 352 ".\resources.txt"
    {"MedicinalProduct_Name", 347},
#line 144 ".\resources.txt"
    {"Coverage", 139},
#line 346 ".\resources.txt"
    {"MedicationRequest", 341},
#line 69 ".\resources.txt"
    {"Claim_Related", 64},
#line 391 ".\resources.txt"
    {"MolecularSequence_Quality", 386},
#line 380 ".\resources.txt"
    {"MedicinalProductUndesirableEffect", 375},
#line 671 ".\resources.txt"
    {"SimpleQuantity", 666},
#line 78 ".\resources.txt"
    {"Claim_Item_Detail", 73},
#line 551 ".\resources.txt"
    {"SupplyDelivery", 546},
#line 185 ".\resources.txt"
    {"DocumentReference_Content", 180},
#line 119 ".\resources.txt"
    {"Condition", 114},
#line 172 ".\resources.txt"
    {"DeviceDefinition_Property", 167},
#line 491 ".\resources.txt"
    {"SpecimenDefinition", 486},
#line 140 ".\resources.txt"
    {"Contract_Signer", 135},
#line 60 ".\resources.txt"
    {"CatalogEntry", 55},
#line 186 ".\resources.txt"
    {"DocumentReference_Context", 181},
#line 345 ".\resources.txt"
    {"MedicationKnowledge_Kinetics", 340},
#line 377 ".\resources.txt"
    {"MedicinalProductPharmaceutical_RouteOfAdministration", 372},
#line 511 ".\resources.txt"
    {"Subscription_Channel", 506},
#line 181 ".\resources.txt"
    {"DocumentManifest", 176},
#line 142 ".\resources.txt"
    {"Contract_Legal", 137},
#line 375 ".\resources.txt"
    {"MedicinalProductPharmaceutical", 370},
#line 79 ".\resources.txt"
    {"Claim_Item_Detail_SubDetail", 74},
#line 432 ".\resources.txt"
    {"Person", 427},
#line 454 ".\resources.txt"
    {"Questionnaire_Item", 449},
#line 335 ".\resources.txt"
    {"MedicationKnowledge_AdministrationGuidelines", 330},
#line 77 ".\resources.txt"
    {"Claim_Item", 72},
#line 653 ".\resources.txt"
    {"Period", 648},
#line 5 ".\resources.txt"
    {"Unknown", 0},
#line 490 ".\resources.txt"
    {"Specimen_Container", 485},
#line 349 ".\resources.txt"
    {"MedicationRequest_Substitution", 344},
#line 662 ".\resources.txt"
    {"SampledData", 657},
#line 169 ".\resources.txt"
    {"DeviceDefinition_DeviceName", 164},
#line 158 ".\resources.txt"
    {"DetectedIssue", 153},
#line 488 ".\resources.txt"
    {"Specimen_Collection", 483},
#line 557 ".\resources.txt"
    {"Task_Input", 552},
#line 558 ".\resources.txt"
    {"Task_Output", 553},
#line 355 ".\resources.txt"
    {"MedicinalProduct_ManufacturingBusinessOperation", 350},
#line 549 ".\resources.txt"
    {"SubstanceSpecification_Name_Official", 544},
#line 304 ".\resources.txt"
    {"Location_Position", 299},
#line 379 ".\resources.txt"
    {"MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod", 374},
#line 41 ".\resources.txt"
    {"CapabilityStatement", 36},
#line 423 ".\resources.txt"
    {"Parameters_Parameter", 418},
#line 337 ".\resources.txt"
    {"MedicationKnowledge_AdministrationGuidelines_PatientCharacteristics", 332},
#line 685 ".\resources.txt"
    {"Devicemetricobservation", 680},
#line 44 ".\resources.txt"
    {"CapabilityStatement_Rest", 39},
#line 208 ".\resources.txt"
    {"EventDefinition", 203},
#line 54 ".\resources.txt"
    {"CapabilityStatement_Document", 49},
#line 434 ".\resources.txt"
    {"PlanDefinition", 429},
#line 182 ".\resources.txt"
    {"DocumentManifest_Related", 177},
#line 570 ".\resources.txt"
    {"TestReport", 565},
#line 42 ".\resources.txt"
    {"CapabilityStatement_Software", 37},
#line 576 ".\resources.txt"
    {"TestReport_Test", 571},
#line 556 ".\resources.txt"
    {"Task_Restriction", 551},
#line 46 ".\resources.txt"
    {"CapabilityStatement_Rest_Resource", 41},
#line 61 ".\resources.txt"
    {"CatalogEntry_RelatedEntry", 56},
#line 520 ".\resources.txt"
    {"SubstancePolymer_MonomerSet", 515},
#line 422 ".\resources.txt"
    {"Parameters", 417},
#line 446 ".\resources.txt"
    {"PractitionerRole_NotAvailable", 441},
#line 50 ".\resources.txt"
    {"CapabilityStatement_Rest_Interaction", 45},
#line 47 ".\resources.txt"
    {"CapabilityStatement_Rest_Resource_Interaction", 42},
#line 374 ".\resources.txt"
    {"MedicinalProductPackaged_PackageItem", 369},
#line 80 ".\resources.txt"
    {"ClaimResponse", 75},
#line 458 ".\resources.txt"
    {"QuestionnaireResponse", 453},
#line 501 ".\resources.txt"
    {"StructureMap", 496},
#line 347 ".\resources.txt"
    {"MedicationRequest_DispenseRequest", 342},
#line 578 ".\resources.txt"
    {"TestReport_Teardown", 573},
#line 460 ".\resources.txt"
    {"QuestionnaireResponse_Item_Answer", 455},
#line 92 ".\resources.txt"
    {"ClaimResponse_Error", 87},
#line 43 ".\resources.txt"
    {"CapabilityStatement_Implementation", 38},
#line 353 ".\resources.txt"
    {"MedicinalProduct_Name_NamePart", 348},
#line 424 ".\resources.txt"
    {"Patient", 419},
#line 91 ".\resources.txt"
    {"ClaimResponse_Insurance", 86},
#line 90 ".\resources.txt"
    {"ClaimResponse_ProcessNote", 85},
#line 579 ".\resources.txt"
    {"TestReport_Teardown_Action", 574},
#line 334 ".\resources.txt"
    {"MedicationKnowledge_MonitoringProgram", 329},
#line 93 ".\resources.txt"
    {"ClinicalImpression", 88},
#line 447 ".\resources.txt"
    {"Procedure", 442},
#line 682 ".\resources.txt"
    {"Picoelement", 677},
#line 428 ".\resources.txt"
    {"PaymentNotice", 423},
#line 451 ".\resources.txt"
    {"Provenance_Agent", 446},
#line 669 ".\resources.txt"
    {"UsageContext", 664},
#line 450 ".\resources.txt"
    {"Provenance", 445},
#line 177 ".\resources.txt"
    {"DeviceRequest_Parameter", 172},
#line 45 ".\resources.txt"
    {"CapabilityStatement_Rest_Security", 40},
#line 356 ".\resources.txt"
    {"MedicinalProduct_SpecialDesignation", 351},
#line 544 ".\resources.txt"
    {"SubstanceSpecification_Structure_Isotope", 539},
#line 141 ".\resources.txt"
    {"Contract_Friendly", 136},
#line 699 ".\resources.txt"
    {"Cqllibrary", 694},
#line 545 ".\resources.txt"
    {"SubstanceSpecification_Structure_Isotope_MolecularWeight", 540},
#line 546 ".\resources.txt"
    {"SubstanceSpecification_Structure_Representation", 541},
#line 554 ".\resources.txt"
    {"SupplyRequest_Parameter", 549},
#line 148 ".\resources.txt"
    {"CoverageEligibilityRequest", 143},
#line 204 ".\resources.txt"
    {"EnrollmentResponse", 199},
#line 555 ".\resources.txt"
    {"Task", 550},
#line 348 ".\resources.txt"
    {"MedicationRequest_DispenseRequest_InitialFill", 343},
#line 433 ".\resources.txt"
    {"Person_Link", 428},
#line 702 ".\resources.txt"
    {"Triglyceride", 697},
#line 86 ".\resources.txt"
    {"ClaimResponse_AddItem_Detail", 81},
#line 179 ".\resources.txt"
    {"DiagnosticReport", 174},
#line 122 ".\resources.txt"
    {"Consent", 117},
#line 378 ".\resources.txt"
    {"MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies", 373},
#line 299 ".\resources.txt"
    {"Linkage", 294},
#line 145 ".\resources.txt"
    {"Coverage_Class", 140},
#line 398 ".\resources.txt"
    {"NamingSystem_UniqueId", 393},
#line 171 ".\resources.txt"
    {"DeviceDefinition_Capability", 166},
#line 48 ".\resources.txt"
    {"CapabilityStatement_Rest_Resource_SearchParam", 43},
#line 150 ".\resources.txt"
    {"CoverageEligibilityRequest_Insurance", 145},
#line 499 ".\resources.txt"
    {"StructureDefinition_Snapshot", 494},
#line 663 ".\resources.txt"
    {"Signature", 658},
#line 81 ".\resources.txt"
    {"ClaimResponse_Item", 76},
#line 459 ".\resources.txt"
    {"QuestionnaireResponse_Item", 454},
#line 714 ".\resources.txt"
    {"Ehrsrle_auditevent", 709},
#line 429 ".\resources.txt"
    {"PaymentReconciliation", 424},
#line 99 ".\resources.txt"
    {"CodeSystem_Concept", 94},
#line 85 ".\resources.txt"
    {"ClaimResponse_AddItem", 80},
#line 97 ".\resources.txt"
    {"CodeSystem_Filter", 92},
#line 715 ".\resources.txt"
    {"Ehrsrle_provenance", 710},
#line 246 ".\resources.txt"
    {"Goal_Target", 241},
#line 452 ".\resources.txt"
    {"Provenance_Entity", 447},
#line 431 ".\resources.txt"
    {"PaymentReconciliation_ProcessNote", 426},
#line 166 ".\resources.txt"
    {"Device_Property", 161},
#line 624 ".\resources.txt"
    {"ContactPoint", 619},
#line 170 ".\resources.txt"
    {"DeviceDefinition_Specialization", 165},
#line 52 ".\resources.txt"
    {"CapabilityStatement_Messaging_Endpoint", 47},
#line 625 ".\resources.txt"
    {"Contributor", 620},
#line 485 ".\resources.txt"
    {"ServiceRequest", 480},
#line 247 ".\resources.txt"
    {"GraphDefinition", 242},
#line 53 ".\resources.txt"
    {"CapabilityStatement_Messaging_SupportedMessage", 48},
#line 397 ".\resources.txt"
    {"NamingSystem", 392},
#line 245 ".\resources.txt"
    {"Goal", 240},
#line 173 ".\resources.txt"
    {"DeviceDefinition_Material", 168},
#line 89 ".\resources.txt"
    {"ClaimResponse_Payment", 84},
#line 298 ".\resources.txt"
    {"Library", 293},
#line 430 ".\resources.txt"
    {"PaymentReconciliation_Detail", 425},
#line 692 ".\resources.txt"
    {"Heartrate", 687},
#line 708 ".\resources.txt"
    {"Clinicaldocument", 703},
#line 623 ".\resources.txt"
    {"ContactDetail", 618},
#line 106 ".\resources.txt"
    {"CompartmentDefinition", 101},
#line 427 ".\resources.txt"
    {"Patient_Link", 422},
#line 631 ".\resources.txt"
    {"Distance", 626},
#line 684 ".\resources.txt"
    {"Cdshooksguidanceresponse", 679},
#line 151 ".\resources.txt"
    {"CoverageEligibilityRequest_Item", 146},
#line 672 ".\resources.txt"
    {"Shareablemeasure", 667},
#line 300 ".\resources.txt"
    {"Linkage_Item", 295},
#line 651 ".\resources.txt"
    {"Narrative", 646},
#line 107 ".\resources.txt"
    {"CompartmentDefinition_Resource", 102},
#line 330 ".\resources.txt"
    {"MedicationKnowledge_RelatedMedicationKnowledge", 325},
#line 244 ".\resources.txt"
    {"Flag", 239},
#line 376 ".\resources.txt"
    {"MedicinalProductPharmaceutical_Characteristics", 371},
#line 202 ".\resources.txt"
    {"Endpoint", 197},
#line 203 ".\resources.txt"
    {"EnrollmentRequest", 198},
#line 96 ".\resources.txt"
    {"CodeSystem", 91},
#line 696 ".\resources.txt"
    {"Bmi", 691},
#line 645 ".\resources.txt"
    {"Extension", 640},
#line 703 ".\resources.txt"
    {"Hdlcholesterol", 698},
#line 690 ".\resources.txt"
    {"Bodyheight", 685},
#line 443 ".\resources.txt"
    {"Practitioner_Qualification", 438},
#line 255 ".\resources.txt"
    {"HealthcareService", 250},
#line 187 ".\resources.txt"
    {"DomainResource", 182},
#line 580 ".\resources.txt"
    {"TestScript", 575},
#line 364 ".\resources.txt"
    {"MedicinalProductIngredient", 359},
#line 593 ".\resources.txt"
    {"TestScript_Test", 588},
#line 87 ".\resources.txt"
    {"ClaimResponse_AddItem_Detail_SubDetail", 82},
#line 688 ".\resources.txt"
    {"Bodyweight", 683},
#line 677 ".\resources.txt"
    {"Shareableactivitydefinition", 672},
#line 647 ".\resources.txt"
    {"Identifier", 642},
#line 180 ".\resources.txt"
    {"DiagnosticReport_Media", 175},
#line 586 ".\resources.txt"
    {"TestScript_Fixture", 581},
#line 500 ".\resources.txt"
    {"StructureDefinition_Differential", 495},
#line 319 ".\resources.txt"
    {"Media", 314},
#line 648 ".\resources.txt"
    {"MarketingStatus", 643},
#line 368 ".\resources.txt"
    {"MedicinalProductIngredient_Substance", 363},
#line 581 ".\resources.txt"
    {"TestScript_Origin", 576},
#line 49 ".\resources.txt"
    {"CapabilityStatement_Rest_Resource_Operation", 44},
#line 27 ".\resources.txt"
    {"Basic", 22},
#line 582 ".\resources.txt"
    {"TestScript_Destination", 577},
#line 384 ".\resources.txt"
    {"MessageHeader", 379},
#line 108 ".\resources.txt"
    {"Composition", 103},
#line 571 ".\resources.txt"
    {"TestReport_Participant", 566},
#line 130 ".\resources.txt"
    {"Contract_Term", 125},
#line 595 ".\resources.txt"
    {"TestScript_Teardown", 590},
#line 365 ".\resources.txt"
    {"MedicinalProductIngredient_SpecifiedSubstance", 360},
#line 111 ".\resources.txt"
    {"Composition_Event", 106},
#line 205 ".\resources.txt"
    {"EpisodeOfCare", 200},
#line 698 ".\resources.txt"
    {"Shareablelibrary", 693},
#line 516 ".\resources.txt"
    {"SubstanceNucleicAcid_Subunit", 511},
#line 112 ".\resources.txt"
    {"Composition_Section", 107},
#line 503 ".\resources.txt"
    {"StructureMap_Group", 498},
#line 109 ".\resources.txt"
    {"Composition_Attester", 104},
#line 596 ".\resources.txt"
    {"TestScript_Teardown_Action", 591},
#line 518 ".\resources.txt"
    {"SubstanceNucleicAcid_Subunit_Sugar", 513},
#line 98 ".\resources.txt"
    {"CodeSystem_Property", 93},
#line 705 ".\resources.txt"
    {"Diagnosticreport_genetics", 700},
#line 340 ".\resources.txt"
    {"MedicationKnowledge_DrugCharacteristic", 335},
#line 615 ".\resources.txt"
    {"BackboneElement", 610},
#line 632 ".\resources.txt"
    {"Dosage", 627},
#line 573 ".\resources.txt"
    {"TestReport_Setup_Action", 568},
#line 425 ".\resources.txt"
    {"Patient_Contact", 420},
#line 517 ".\resources.txt"
    {"SubstanceNucleicAcid_Subunit_Linkage", 512},
#line 614 ".\resources.txt"
    {"Element", 609},
#line 712 ".\resources.txt"
    {"Cdshooksserviceplandefinition", 707},
#line 709 ".\resources.txt"
    {"Catalog", 704},
#line 209 ".\resources.txt"
    {"Evidence", 204},
#line 135 ".\resources.txt"
    {"Contract_Term_Asset", 130},
#line 35 ".\resources.txt"
    {"Bundle", 30},
#line 644 ".\resources.txt"
    {"Expression", 639},
#line 136 ".\resources.txt"
    {"Contract_Term_Asset_Context", 131},
#line 129 ".\resources.txt"
    {"Contract_ContentDefinition", 124},
#line 513 ".\resources.txt"
    {"Substance_Instance", 508},
#line 395 ".\resources.txt"
    {"MolecularSequence_StructureVariant_Outer", 390},
#line 153 ".\resources.txt"
    {"CoverageEligibilityResponse", 148},
#line 157 ".\resources.txt"
    {"CoverageEligibilityResponse_Error", 152},
#line 514 ".\resources.txt"
    {"Substance_Ingredient", 509},
#line 523 ".\resources.txt"
    {"SubstancePolymer_Repeat_RepeatUnit", 518},
#line 243 ".\resources.txt"
    {"FamilyMemberHistory_Condition", 238},
#line 88 ".\resources.txt"
    {"ClaimResponse_Total", 83},
#line 149 ".\resources.txt"
    {"CoverageEligibilityRequest_SupportingInfo", 144},
#line 206 ".\resources.txt"
    {"EpisodeOfCare_StatusHistory", 201},
#line 426 ".\resources.txt"
    {"Patient_Communication", 421},
#line 125 ".\resources.txt"
    {"Consent_Provision", 120},
#line 361 ".\resources.txt"
    {"MedicinalProductContraindication_OtherTherapy", 356},
#line 131 ".\resources.txt"
    {"Contract_Term_SecurityLabel", 126},
#line 73 ".\resources.txt"
    {"Claim_Diagnosis", 68},
#line 328 ".\resources.txt"
    {"MedicationDispense_Substitution", 323},
#line 676 ".\resources.txt"
    {"Familymemberhistory_genetic", 671},
#line 339 ".\resources.txt"
    {"MedicationKnowledge_Packaging", 334},
#line 694 ".\resources.txt"
    {"Headcircum", 689},
#line 154 ".\resources.txt"
    {"CoverageEligibilityResponse_Insurance", 149},
#line 156 ".\resources.txt"
    {"CoverageEligibilityResponse_Insurance_Item_Benefit", 151},
#line 621 ".\resources.txt"
    {"CodeableConcept", 616},
#line 701 ".\resources.txt"
    {"Cholesterol", 696},
#line 284 ".\resources.txt"
    {"InsurancePlan", 279},
#line 587 ".\resources.txt"
    {"TestScript_Variable", 582},
#line 37 ".\resources.txt"
    {"Bundle_Entry", 32},
#line 525 ".\resources.txt"
    {"SubstancePolymer_Repeat_RepeatUnit_StructuralRepresentation", 520},
#line 396 ".\resources.txt"
    {"MolecularSequence_StructureVariant_Inner", 391},
#line 242 ".\resources.txt"
    {"FamilyMemberHistory", 237},
#line 536 ".\resources.txt"
    {"SubstanceSourceMaterial_Organism_Author", 531},
#line 674 ".\resources.txt"
    {"Groupdefinition", 669},
#line 294 ".\resources.txt"
    {"Invoice", 289},
#line 539 ".\resources.txt"
    {"SubstanceSourceMaterial_PartDescription", 534},
#line 630 ".\resources.txt"
    {"DataRequirement_Sort", 625},
#line 646 ".\resources.txt"
    {"HumanName", 641},
#line 137 ".\resources.txt"
    {"Contract_Term_Asset_ValuedItem", 132},
#line 629 ".\resources.txt"
    {"DataRequirement_DateFilter", 624},
#line 123 ".\resources.txt"
    {"Consent_Policy", 118},
#line 390 ".\resources.txt"
    {"MolecularSequence_Variant", 385},
#line 28 ".\resources.txt"
    {"Binary", 23},
#line 289 ".\resources.txt"
    {"InsurancePlan_Plan", 284},
#line 628 ".\resources.txt"
    {"DataRequirement_CodeFilter", 623},
#line 207 ".\resources.txt"
    {"EpisodeOfCare_Diagnosis", 202},
#line 419 ".\resources.txt"
    {"Organization", 414},
#line 62 ".\resources.txt"
    {"ChargeItem", 57},
#line 36 ".\resources.txt"
    {"Bundle_Link", 31},
#line 534 ".\resources.txt"
    {"SubstanceSourceMaterial_FractionDescription", 529},
#line 399 ".\resources.txt"
    {"NutritionOrder", 394},
#line 689 ".\resources.txt"
    {"Vitalspanel", 684},
#line 697 ".\resources.txt"
    {"Bp", 692},
#line 160 ".\resources.txt"
    {"DetectedIssue_Mitigation", 155},
#line 252 ".\resources.txt"
    {"Group_Characteristic", 247},
#line 622 ".\resources.txt"
    {"Coding", 617},
#line 693 ".\resources.txt"
    {"Bodytemp", 688},
#line 683 ".\resources.txt"
    {"Shareablecodesystem", 678},
#line 210 ".\resources.txt"
    {"EvidenceVariable", 205},
#line 524 ".\resources.txt"
    {"SubstancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation", 519},
#line 138 ".\resources.txt"
    {"Contract_Term_Action", 133},
#line 456 ".\resources.txt"
    {"Questionnaire_Item_AnswerOption", 451},
#line 667 ".\resources.txt"
    {"Timing_Repeat", 662},
#line 155 ".\resources.txt"
    {"CoverageEligibilityResponse_Insurance_Item", 150},
#line 258 ".\resources.txt"
    {"HealthcareService_NotAvailable", 253},
#line 259 ".\resources.txt"
    {"ImagingStudy", 254},
#line 212 ".\resources.txt"
    {"ExampleScenario", 207},
#line 40 ".\resources.txt"
    {"Bundle_Entry_Response", 35},
#line 34 ".\resources.txt"
    {"BodyStructure", 29},
#line 435 ".\resources.txt"
    {"PlanDefinition_Goal", 430},
#line 420 ".\resources.txt"
    {"Organization_Contact", 415},
#line 535 ".\resources.txt"
    {"SubstanceSourceMaterial_Organism", 530},
#line 572 ".\resources.txt"
    {"TestReport_Setup", 567},
#line 455 ".\resources.txt"
    {"Questionnaire_Item_EnableWhen", 450},
#line 457 ".\resources.txt"
    {"Questionnaire_Item_Initial", 452},
#line 263 ".\resources.txt"
    {"Immunization", 258},
#line 706 ".\resources.txt"
    {"Hlaresult", 701},
#line 124 ".\resources.txt"
    {"Consent_Verification", 119},
#line 695 ".\resources.txt"
    {"Oxygensat", 690},
#line 120 ".\resources.txt"
    {"Condition_Stage", 115},
#line 656 ".\resources.txt"
    {"ProductShelfLife", 651},
#line 265 ".\resources.txt"
    {"Immunization_Education", 260},
#line 521 ".\resources.txt"
    {"SubstancePolymer_MonomerSet_StartingMaterial", 516},
#line 264 ".\resources.txt"
    {"Immunization_Performer", 259},
#line 132 ".\resources.txt"
    {"Contract_Term_Offer", 127},
#line 306 ".\resources.txt"
    {"Measure", 301},
#line 121 ".\resources.txt"
    {"Condition_Evidence", 116},
#line 583 ".\resources.txt"
    {"TestScript_Metadata", 578},
#line 134 ".\resources.txt"
    {"Contract_Term_Offer_Answer", 129},
#line 387 ".\resources.txt"
    {"MessageHeader_Response", 382},
#line 331 ".\resources.txt"
    {"MedicationKnowledge_Monograph", 326},
#line 254 ".\resources.txt"
    {"GuidanceResponse", 249},
#line 589 ".\resources.txt"
    {"TestScript_Setup_Action", 584},
#line 309 ".\resources.txt"
    {"Measure_Group_Stratifier", 304},
#line 661 ".\resources.txt"
    {"RelatedArtifact", 656},
#line 29 ".\resources.txt"
    {"BiologicallyDerivedProduct", 24},
#line 102 ".\resources.txt"
    {"Communication", 97},
#line 310 ".\resources.txt"
    {"Measure_Group_Stratifier_Component", 305},
#line 385 ".\resources.txt"
    {"MessageHeader_Destination", 380},
#line 461 ".\resources.txt"
    {"RelatedPerson", 456},
#line 268 ".\resources.txt"
    {"ImmunizationEvaluation", 263},
#line 33 ".\resources.txt"
    {"BiologicallyDerivedProduct_Storage", 28},
#line 386 ".\resources.txt"
    {"MessageHeader_Source", 381},
#line 32 ".\resources.txt"
    {"BiologicallyDerivedProduct_Manipulation", 27},
#line 497 ".\resources.txt"
    {"StructureDefinition_Mapping", 492},
#line 262 ".\resources.txt"
    {"ImagingStudy_Series_Instance", 257},
#line 406 ".\resources.txt"
    {"Observation", 401},
#line 484 ".\resources.txt"
    {"SearchParameter_Component", 479},
#line 711 ".\resources.txt"
    {"Computableplandefinition", 706},
#line 577 ".\resources.txt"
    {"TestReport_Test_Action", 572},
#line 633 ".\resources.txt"
    {"Dosage_DoseAndRate", 628},
#line 51 ".\resources.txt"
    {"CapabilityStatement_Messaging", 46},
#line 127 ".\resources.txt"
    {"Consent_Provision_Data", 122},
#line 113 ".\resources.txt"
    {"ConceptMap", 108},
#line 133 ".\resources.txt"
    {"Contract_Term_Offer_Party", 128},
#line 421 ".\resources.txt"
    {"OrganizationAffiliation", 416},
#line 409 ".\resources.txt"
    {"ObservationDefinition", 404},
#line 585 ".\resources.txt"
    {"TestScript_Metadata_Capability", 580},
#line 407 ".\resources.txt"
    {"Observation_ReferenceRange", 402},
#line 327 ".\resources.txt"
    {"MedicationDispense_Performer", 322},
#line 504 ".\resources.txt"
    {"StructureMap_Group_Input", 499},
#line 63 ".\resources.txt"
    {"ChargeItem_Performer", 58},
#line 296 ".\resources.txt"
    {"Invoice_LineItem", 291},
#line 221 ".\resources.txt"
    {"ExplanationOfBenefit", 216},
#line 505 ".\resources.txt"
    {"StructureMap_Group_Rule", 500},
#line 64 ".\resources.txt"
    {"ChargeItemDefinition", 59},
#line 354 ".\resources.txt"
    {"MedicinalProduct_Name_CountryLanguage", 349},
#line 251 ".\resources.txt"
    {"Group", 246},
#line 82 ".\resources.txt"
    {"ClaimResponse_Item_Adjudication", 77},
#line 118 ".\resources.txt"
    {"ConceptMap_Group_Unmapped", 113},
#line 584 ".\resources.txt"
    {"TestScript_Metadata_Link", 579},
#line 147 ".\resources.txt"
    {"Coverage_CostToBeneficiary_Exception", 142},
#line 597 ".\resources.txt"
    {"ValueSet", 592},
#line 448 ".\resources.txt"
    {"Procedure_Performer", 443},
#line 115 ".\resources.txt"
    {"ConceptMap_Group_Element", 110},
#line 240 ".\resources.txt"
    {"ExplanationOfBenefit_BenefitBalance", 235},
#line 286 ".\resources.txt"
    {"InsurancePlan_Coverage", 281},
#line 116 ".\resources.txt"
    {"ConceptMap_Group_Element_Target", 111},
#line 411 ".\resources.txt"
    {"ObservationDefinition_QualifiedInterval", 406},
#line 83 ".\resources.txt"
    {"ClaimResponse_Item_Detail", 78},
#line 266 ".\resources.txt"
    {"Immunization_Reaction", 261},
#line 231 ".\resources.txt"
    {"ExplanationOfBenefit_Item_Adjudication", 226},
#line 229 ".\resources.txt"
    {"ExplanationOfBenefit_Accident", 224},
#line 84 ".\resources.txt"
    {"ClaimResponse_Item_Detail_SubDetail", 79},
#line 237 ".\resources.txt"
    {"ExplanationOfBenefit_Total", 232},
#line 412 ".\resources.txt"
    {"OperationDefinition", 407},
#line 666 ".\resources.txt"
    {"Timing", 661},
#line 117 ".\resources.txt"
    {"ConceptMap_Group_Element_Target_DependsOn", 112},
#line 232 ".\resources.txt"
    {"ExplanationOfBenefit_Item_Detail", 227},
#line 222 ".\resources.txt"
    {"ExplanationOfBenefit_Related", 217},
#line 416 ".\resources.txt"
    {"OperationDefinition_Overload", 411},
#line 235 ".\resources.txt"
    {"ExplanationOfBenefit_AddItem_Detail", 230},
#line 691 ".\resources.txt"
    {"Resprate", 686},
#line 660 ".\resources.txt"
    {"Reference", 655},
#line 710 ".\resources.txt"
    {"Shareableplandefinition", 705},
#line 687 ".\resources.txt"
    {"Vitalsigns", 682},
#line 146 ".\resources.txt"
    {"Coverage_CostToBeneficiary", 141},
#line 152 ".\resources.txt"
    {"CoverageEligibilityRequest_Item_Diagnosis", 147},
#line 260 ".\resources.txt"
    {"ImagingStudy_Series", 255},
#line 163 ".\resources.txt"
    {"Device_DeviceName", 158},
#line 238 ".\resources.txt"
    {"ExplanationOfBenefit_Payment", 233},
#line 223 ".\resources.txt"
    {"ExplanationOfBenefit_Payee", 218},
#line 188 ".\resources.txt"
    {"EffectEvidenceSynthesis", 183},
#line 598 ".\resources.txt"
    {"ValueSet_Compose", 593},
#line 381 ".\resources.txt"
    {"MessageDefinition", 376},
#line 39 ".\resources.txt"
    {"Bundle_Entry_Request", 34},
#line 616 ".\resources.txt"
    {"Integer", 611},
#line 610 ".\resources.txt"
    {"VisionPrescription", 605},
#line 678 ".\resources.txt"
    {"Cdshooksrequestgroup", 673},
#line 224 ".\resources.txt"
    {"ExplanationOfBenefit_CareTeam", 219},
#line 230 ".\resources.txt"
    {"ExplanationOfBenefit_Item", 225},
#line 588 ".\resources.txt"
    {"TestScript_Setup", 583},
#line 272 ".\resources.txt"
    {"ImplementationGuide", 267},
#line 403 ".\resources.txt"
    {"NutritionOrder_Supplement", 398},
#line 600 ".\resources.txt"
    {"ValueSet_Compose_Include_Concept", 595},
#line 234 ".\resources.txt"
    {"ExplanationOfBenefit_AddItem", 229},
#line 599 ".\resources.txt"
    {"ValueSet_Compose_Include", 594},
#line 602 ".\resources.txt"
    {"ValueSet_Compose_Include_Filter", 597},
#line 143 ".\resources.txt"
    {"Contract_Rule", 138},
#line 195 ".\resources.txt"
    {"Encounter", 190},
#line 322 ".\resources.txt"
    {"Medication_Batch", 317},
#line 281 ".\resources.txt"
    {"ImplementationGuide_Manifest", 276},
#line 449 ".\resources.txt"
    {"Procedure_FocalDevice", 444},
#line 249 ".\resources.txt"
    {"GraphDefinition_Link_Target", 244},
#line 393 ".\resources.txt"
    {"MolecularSequence_Repository", 388},
#line 273 ".\resources.txt"
    {"ImplementationGuide_DependsOn", 268},
#line 366 ".\resources.txt"
    {"MedicinalProductIngredient_SpecifiedSubstance_Strength", 361},
#line 275 ".\resources.txt"
    {"ImplementationGuide_Definition", 270},
#line 552 ".\resources.txt"
    {"SupplyDelivery_SuppliedItem", 547},
#line 283 ".\resources.txt"
    {"ImplementationGuide_Manifest_Page", 278},
#line 278 ".\resources.txt"
    {"ImplementationGuide_Definition_Page", 273},
#line 159 ".\resources.txt"
    {"DetectedIssue_Evidence", 154},
#line 277 ".\resources.txt"
    {"ImplementationGuide_Definition_Resource", 272},
#line 686 ".\resources.txt"
    {"Observation_genetics", 681},
#line 410 ".\resources.txt"
    {"ObservationDefinition_QuantitativeDetails", 405},
#line 253 ".\resources.txt"
    {"Group_Member", 248},
#line 312 ".\resources.txt"
    {"MeasureReport", 307},
#line 367 ".\resources.txt"
    {"MedicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength", 362},
#line 307 ".\resources.txt"
    {"Measure_Group", 302},
#line 285 ".\resources.txt"
    {"InsurancePlan_Contact", 280},
#line 673 ".\resources.txt"
    {"Servicerequest_genetics", 668},
#line 606 ".\resources.txt"
    {"VerificationResult", 601},
#line 478 ".\resources.txt"
    {"RiskEvidenceSynthesis_RiskEstimate", 473},
#line 228 ".\resources.txt"
    {"ExplanationOfBenefit_Insurance", 223},
#line 297 ".\resources.txt"
    {"Invoice_LineItem_PriceComponent", 292},
#line 94 ".\resources.txt"
    {"ClinicalImpression_Investigation", 89},
#line 481 ".\resources.txt"
    {"RiskEvidenceSynthesis_Certainty_CertaintySubcomponent", 476},
#line 492 ".\resources.txt"
    {"SpecimenDefinition_TypeTested", 487},
#line 269 ".\resources.txt"
    {"ImmunizationRecommendation", 264},
#line 537 ".\resources.txt"
    {"SubstanceSourceMaterial_Organism_Hybrid", 532},
#line 295 ".\resources.txt"
    {"Invoice_Participant", 290},
#line 305 ".\resources.txt"
    {"Location_HoursOfOperation", 300},
#line 110 ".\resources.txt"
    {"Composition_RelatesTo", 105},
#line 479 ".\resources.txt"
    {"RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate", 474},
#line 493 ".\resources.txt"
    {"SpecimenDefinition_TypeTested_Container", 488},
#line 282 ".\resources.txt"
    {"ImplementationGuide_Manifest_Resource", 277},
#line 101 ".\resources.txt"
    {"CodeSystem_Concept_Property", 96},
#line 280 ".\resources.txt"
    {"ImplementationGuide_Definition_Template", 275},
#line 30 ".\resources.txt"
    {"BiologicallyDerivedProduct_Collection", 25},
#line 494 ".\resources.txt"
    {"SpecimenDefinition_TypeTested_Container_Additive", 489},
#line 413 ".\resources.txt"
    {"OperationDefinition_Parameter", 408},
#line 270 ".\resources.txt"
    {"ImmunizationRecommendation_Recommendation", 265},
#line 462 ".\resources.txt"
    {"RelatedPerson_Communication", 457},
#line 21 ".\resources.txt"
    {"AuditEvent", 16},
#line 618 ".\resources.txt"
    {"Age", 613},
#line 22 ".\resources.txt"
    {"AuditEvent_Agent", 17},
#line 213 ".\resources.txt"
    {"ExampleScenario_Actor", 208},
#line 271 ".\resources.txt"
    {"ImmunizationRecommendation_Recommendation_DateCriterion", 266},
#line 594 ".\resources.txt"
    {"TestScript_Test_Action", 589},
#line 620 ".\resources.txt"
    {"Attachment", 615},
#line 619 ".\resources.txt"
    {"Annotation", 614},
#line 408 ".\resources.txt"
    {"Observation_Component", 403},
#line 308 ".\resources.txt"
    {"Measure_Group_Population", 303},
#line 139 ".\resources.txt"
    {"Contract_Term_Action_Subject", 134},
#line 664 ".\resources.txt"
    {"SubstanceAmount", 659},
#line 480 ".\resources.txt"
    {"RiskEvidenceSynthesis_Certainty", 475},
#line 114 ".\resources.txt"
    {"ConceptMap_Group", 109},
#line 10 ".\resources.txt"
    {"ActivityDefinition", 5},
#line 250 ".\resources.txt"
    {"GraphDefinition_Link_Target_Compartment", 245},
#line 279 ".\resources.txt"
    {"ImplementationGuide_Definition_Parameter", 274},
#line 681 ".\resources.txt"
    {"Shareablevalueset", 676},
#line 248 ".\resources.txt"
    {"GraphDefinition_Link", 243},
#line 24 ".\resources.txt"
    {"AuditEvent_Source", 19},
#line 550 ".\resources.txt"
    {"SubstanceSpecification_Relationship", 545},
#line 575 ".\resources.txt"
    {"TestReport_Setup_Action_Assert", 570},
#line 658 ".\resources.txt"
    {"Range", 653},
#line 574 ".\resources.txt"
    {"TestReport_Setup_Action_Operation", 569},
#line 227 ".\resources.txt"
    {"ExplanationOfBenefit_Procedure", 222},
#line 239 ".\resources.txt"
    {"ExplanationOfBenefit_ProcessNote", 234},
#line 67 ".\resources.txt"
    {"ChargeItemDefinition_PropertyGroup_PriceComponent", 62},
#line 476 ".\resources.txt"
    {"RiskEvidenceSynthesis", 471},
#line 25 ".\resources.txt"
    {"AuditEvent_Entity", 20},
#line 601 ".\resources.txt"
    {"ValueSet_Compose_Include_Concept_Designation", 596},
#line 445 ".\resources.txt"
    {"PractitionerRole_AvailableTime", 440},
#line 477 ".\resources.txt"
    {"RiskEvidenceSynthesis_SampleSize", 472},
#line 538 ".\resources.txt"
    {"SubstanceSourceMaterial_Organism_OrganismGeneral", 533},
#line 436 ".\resources.txt"
    {"PlanDefinition_Goal_Target", 431},
#line 635 ".\resources.txt"
    {"ElementDefinition", 630},
#line 261 ".\resources.txt"
    {"ImagingStudy_Series_Performer", 256},
#line 226 ".\resources.txt"
    {"ExplanationOfBenefit_Diagnosis", 221},
#line 382 ".\resources.txt"
    {"MessageDefinition_Focus", 377},
#line 473 ".\resources.txt"
    {"ResearchSubject", 468},
#line 713 ".\resources.txt"
    {"Elementdefinition_de", 708},
#line 679 ".\resources.txt"
    {"Provenance_relevant_history", 674},
#line 415 ".\resources.txt"
    {"OperationDefinition_Parameter_ReferencedFrom", 410},
#line 389 ".\resources.txt"
    {"MolecularSequence_ReferenceSeq", 384},
#line 603 ".\resources.txt"
    {"ValueSet_Expansion", 598},
#line 103 ".\resources.txt"
    {"Communication_Payload", 98},
#line 256 ".\resources.txt"
    {"HealthcareService_Eligibility", 251},
#line 104 ".\resources.txt"
    {"CommunicationRequest", 99},
#line 311 ".\resources.txt"
    {"Measure_SupplementalData", 306},
#line 467 ".\resources.txt"
    {"ResearchDefinition", 462},
#line 65 ".\resources.txt"
    {"ChargeItemDefinition_Applicability", 60},
#line 184 ".\resources.txt"
    {"DocumentReference_RelatesTo", 179},
#line 400 ".\resources.txt"
    {"NutritionOrder_OralDiet", 395},
#line 56 ".\resources.txt"
    {"CarePlan_Activity", 51},
#line 641 ".\resources.txt"
    {"ElementDefinition_Constraint", 636},
#line 489 ".\resources.txt"
    {"Specimen_Processing", 484},
#line 13 ".\resources.txt"
    {"AdverseEvent", 8},
#line 214 ".\resources.txt"
    {"ExampleScenario_Instance", 209},
#line 16 ".\resources.txt"
    {"AllergyIntolerance", 11},
#line 215 ".\resources.txt"
    {"ExampleScenario_Instance_Version", 210},
#line 18 ".\resources.txt"
    {"Appointment", 13},
#line 211 ".\resources.txt"
    {"EvidenceVariable_Characteristic", 206},
#line 470 ".\resources.txt"
    {"ResearchStudy", 465},
#line 216 ".\resources.txt"
    {"ExampleScenario_Instance_ContainedInstance", 211},
#line 26 ".\resources.txt"
    {"AuditEvent_Entity_Detail", 21},
#line 405 ".\resources.txt"
    {"NutritionOrder_EnteralFormula_Administration", 400},
#line 19 ".\resources.txt"
    {"Appointment_Participant", 14},
#line 31 ".\resources.txt"
    {"BiologicallyDerivedProduct_Processing", 26},
#line 290 ".\resources.txt"
    {"InsurancePlan_Plan_GeneralCost", 285},
#line 471 ".\resources.txt"
    {"ResearchStudy_Arm", 466},
#line 291 ".\resources.txt"
    {"InsurancePlan_Plan_SpecificCost", 286},
#line 659 ".\resources.txt"
    {"Ratio", 654},
#line 417 ".\resources.txt"
    {"OperationOutcome", 412},
#line 105 ".\resources.txt"
    {"CommunicationRequest_Payload", 100},
#line 292 ".\resources.txt"
    {"InsurancePlan_Plan_SpecificCost_Benefit", 287},
#line 314 ".\resources.txt"
    {"MeasureReport_Group_Population", 309},
#line 293 ".\resources.txt"
    {"InsurancePlan_Plan_SpecificCost_Benefit_Cost", 288},
#line 267 ".\resources.txt"
    {"Immunization_ProtocolApplied", 262},
#line 668 ".\resources.txt"
    {"TriggerDefinition", 663},
#line 233 ".\resources.txt"
    {"ExplanationOfBenefit_Item_Detail_SubDetail", 228},
#line 57 ".\resources.txt"
    {"CarePlan_Activity_Detail", 52},
#line 72 ".\resources.txt"
    {"Claim_SupportingInfo", 67},
#line 23 ".\resources.txt"
    {"AuditEvent_Agent_Network", 18},
#line 637 ".\resources.txt"
    {"ElementDefinition_Slicing_Discriminator", 632},
#line 95 ".\resources.txt"
    {"ClinicalImpression_Finding", 90},
#line 404 ".\resources.txt"
    {"NutritionOrder_EnteralFormula", 399},
#line 592 ".\resources.txt"
    {"TestScript_Setup_Action_Assert", 587},
#line 437 ".\resources.txt"
    {"PlanDefinition_Action", 432},
#line 590 ".\resources.txt"
    {"TestScript_Setup_Action_Operation", 585},
#line 66 ".\resources.txt"
    {"ChargeItemDefinition_PropertyGroup", 61},
#line 225 ".\resources.txt"
    {"ExplanationOfBenefit_SupportingInfo", 220},
#line 439 ".\resources.txt"
    {"PlanDefinition_Action_RelatedAction", 434},
#line 591 ".\resources.txt"
    {"TestScript_Setup_Action_Operation_RequestHeader", 586},
#line 559 ".\resources.txt"
    {"TerminologyCapabilities", 554},
#line 464 ".\resources.txt"
    {"RequestGroup_Action", 459},
#line 274 ".\resources.txt"
    {"ImplementationGuide_Global", 269},
#line 287 ".\resources.txt"
    {"InsurancePlan_Coverage_Benefit", 282},
#line 288 ".\resources.txt"
    {"InsurancePlan_Coverage_Benefit_Limit", 283},
#line 189 ".\resources.txt"
    {"EffectEvidenceSynthesis_SampleSize", 184},
#line 465 ".\resources.txt"
    {"RequestGroup_Action_Condition", 460},
#line 639 ".\resources.txt"
    {"ElementDefinition_Type", 634},
#line 315 ".\resources.txt"
    {"MeasureReport_Group_Stratifier", 310},
#line 194 ".\resources.txt"
    {"EffectEvidenceSynthesis_Certainty_CertaintySubcomponent", 189},
#line 100 ".\resources.txt"
    {"CodeSystem_Concept_Designation", 95},
#line 418 ".\resources.txt"
    {"OperationOutcome_Issue", 413},
#line 317 ".\resources.txt"
    {"MeasureReport_Group_Stratifier_Stratum_Component", 312},
#line 474 ".\resources.txt"
    {"RiskAssessment", 469},
#line 318 ".\resources.txt"
    {"MeasureReport_Group_Stratifier_Stratum_Population", 313},
#line 507 ".\resources.txt"
    {"StructureMap_Group_Rule_Target", 502},
#line 509 ".\resources.txt"
    {"StructureMap_Group_Rule_Dependent", 504},
#line 441 ".\resources.txt"
    {"PlanDefinition_Action_DynamicValue", 436},
#line 506 ".\resources.txt"
    {"StructureMap_Group_Rule_Source", 501},
#line 217 ".\resources.txt"
    {"ExampleScenario_Process", 212},
#line 640 ".\resources.txt"
    {"ElementDefinition_Example", 635},
#line 532 ".\resources.txt"
    {"SubstanceReferenceInformation_Target", 527},
#line 528 ".\resources.txt"
    {"SubstanceReferenceInformation", 523},
#line 529 ".\resources.txt"
    {"SubstanceReferenceInformation_Gene", 524},
#line 193 ".\resources.txt"
    {"EffectEvidenceSynthesis_Certainty", 188},
#line 531 ".\resources.txt"
    {"SubstanceReferenceInformation_Classification", 526},
#line 495 ".\resources.txt"
    {"SpecimenDefinition_TypeTested_Handling", 490},
#line 440 ".\resources.txt"
    {"PlanDefinition_Action_Participant", 435},
#line 14 ".\resources.txt"
    {"AdverseEvent_SuspectEntity", 9},
#line 20 ".\resources.txt"
    {"AppointmentResponse", 15},
#line 530 ".\resources.txt"
    {"SubstanceReferenceInformation_GeneElement", 525},
#line 241 ".\resources.txt"
    {"ExplanationOfBenefit_BenefitBalance_Financial", 236},
#line 236 ".\resources.txt"
    {"ExplanationOfBenefit_AddItem_Detail_SubDetail", 231},
#line 313 ".\resources.txt"
    {"MeasureReport_Group", 308},
#line 414 ".\resources.txt"
    {"OperationDefinition_Parameter_Binding", 409},
#line 316 ".\resources.txt"
    {"MeasureReport_Group_Stratifier_Stratum", 311},
#line 617 ".\resources.txt"
    {"Address", 612},
#line 466 ".\resources.txt"
    {"RequestGroup_Action_RelatedAction", 461},
#line 191 ".\resources.txt"
    {"EffectEvidenceSynthesis_EffectEstimate", 186},
#line 508 ".\resources.txt"
    {"StructureMap_Group_Rule_Target_Parameter", 503},
#line 192 ".\resources.txt"
    {"EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate", 187},
#line 6 ".\resources.txt"
    {"Resource", 1},
#line 468 ".\resources.txt"
    {"ResearchElementDefinition", 463},
#line 15 ".\resources.txt"
    {"AdverseEvent_SuspectEntity_Causality", 10},
#line 201 ".\resources.txt"
    {"Encounter_Location", 196},
#line 472 ".\resources.txt"
    {"ResearchStudy_Objective", 467},
#line 611 ".\resources.txt"
    {"VisionPrescription_LensSpecification", 606},
#line 438 ".\resources.txt"
    {"PlanDefinition_Action_Condition", 433},
#line 463 ".\resources.txt"
    {"RequestGroup", 458},
#line 609 ".\resources.txt"
    {"VerificationResult_Validator", 604},
#line 469 ".\resources.txt"
    {"ResearchElementDefinition_Characteristic", 464},
#line 636 ".\resources.txt"
    {"ElementDefinition_Slicing", 631},
#line 643 ".\resources.txt"
    {"ElementDefinition_Mapping", 638},
#line 190 ".\resources.txt"
    {"EffectEvidenceSynthesis_ResultsByExposure", 185},
#line 638 ".\resources.txt"
    {"ElementDefinition_Base", 633},
#line 38 ".\resources.txt"
    {"Bundle_Entry_Search", 33},
#line 11 ".\resources.txt"
    {"ActivityDefinition_Participant", 6},
#line 675 ".\resources.txt"
    {"Actualgroup", 670},
#line 612 ".\resources.txt"
    {"VisionPrescription_LensSpecification_Prism", 607},
#line 276 ".\resources.txt"
    {"ImplementationGuide_Definition_Grouping", 271},
#line 475 ".\resources.txt"
    {"RiskAssessment_Prediction", 470},
#line 126 ".\resources.txt"
    {"Consent_Provision_Actor", 121},
#line 257 ".\resources.txt"
    {"HealthcareService_AvailableTime", 252},
#line 198 ".\resources.txt"
    {"Encounter_Participant", 193},
#line 607 ".\resources.txt"
    {"VerificationResult_PrimarySource", 602},
#line 608 ".\resources.txt"
    {"VerificationResult_Attestation", 603},
#line 12 ".\resources.txt"
    {"ActivityDefinition_DynamicValue", 7},
#line 401 ".\resources.txt"
    {"NutritionOrder_OralDiet_Nutrient", 396},
#line 402 ".\resources.txt"
    {"NutritionOrder_OralDiet_Texture", 397},
#line 17 ".\resources.txt"
    {"AllergyIntolerance_Reaction", 12},
#line 569 ".\resources.txt"
    {"TerminologyCapabilities_Closure", 564},
#line 560 ".\resources.txt"
    {"TerminologyCapabilities_Software", 555},
#line 565 ".\resources.txt"
    {"TerminologyCapabilities_Expansion", 560},
#line 568 ".\resources.txt"
    {"TerminologyCapabilities_Translation", 563},
#line 7 ".\resources.txt"
    {"Account", 2},
#line 567 ".\resources.txt"
    {"TerminologyCapabilities_ValidateCode", 562},
#line 200 ".\resources.txt"
    {"Encounter_Hospitalization", 195},
#line 561 ".\resources.txt"
    {"TerminologyCapabilities_Implementation", 556},
#line 604 ".\resources.txt"
    {"ValueSet_Expansion_Parameter", 599},
#line 219 ".\resources.txt"
    {"ExampleScenario_Process_Step_Operation", 214},
#line 562 ".\resources.txt"
    {"TerminologyCapabilities_CodeSystem", 557},
#line 196 ".\resources.txt"
    {"Encounter_StatusHistory", 191},
#line 566 ".\resources.txt"
    {"TerminologyCapabilities_Expansion_Parameter", 561},
#line 605 ".\resources.txt"
    {"ValueSet_Expansion_Contains", 600},
#line 220 ".\resources.txt"
    {"ExampleScenario_Process_Step_Alternative", 215},
#line 665 ".\resources.txt"
    {"SubstanceAmount_ReferenceRange", 660},
#line 9 ".\resources.txt"
    {"Account_Guarantor", 4},
#line 383 ".\resources.txt"
    {"MessageDefinition_AllowedResponse", 378},
#line 8 ".\resources.txt"
    {"Account_Coverage", 3},
#line 199 ".\resources.txt"
    {"Encounter_Diagnosis", 194},
#line 197 ".\resources.txt"
    {"Encounter_ClassHistory", 192},
#line 642 ".\resources.txt"
    {"ElementDefinition_Binding", 637},
#line 218 ".\resources.txt"
    {"ExampleScenario_Process_Step", 213},
#line 563 ".\resources.txt"
    {"TerminologyCapabilities_CodeSystem_Version", 558},
#line 564 ".\resources.txt"
    {"TerminologyCapabilities_CodeSystem_Version_Filter", 559}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,   0,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,   1,   2,  -1,
     -1,  -1,  -1,  -1,   3,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,   4,  -1,  -1,   5,
     -1,  -1,  -1,  -1,  -1,  -1,   6,   7,   8,  -1,
     -1,  -1,  -1,  -1,   9,  10,  11,  -1,  12,  -1,
     -1,  13,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  14,  -1,  -1,  15,  -1,  -1,  -1,  16,
     -1,  -1,  17,  18,  19,  20,  21,  -1,  -1,  22,
     -1,  23,  -1,  24,  -1,  -1,  25,  26,  27,  28,
     29,  -1,  30,  -1,  31,  -1,  -1,  32,  33,  -1,
     34,  35,  36,  -1,  -1,  -1,  -1,  -1,  -1,  37,
     -1,  -1,  -1,  38,  39,  -1,  40,  -1,  41,  -1,
     42,  -1,  -1,  43,  44,  -1,  45,  46,  -1,  47,
     48,  -1,  49,  -1,  50,  -1,  -1,  51,  -1,  52,
     -1,  53,  -1,  54,  55,  56,  -1,  57,  -1,  58,
     -1,  -1,  59,  -1,  -1,  60,  -1,  61,  -1,  -1,
     -1,  62,  -1,  63,  -1,  -1,  -1,  64,  65,  -1,
     66,  -1,  67,  68,  69,  70,  -1,  71,  72,  73,
     -1,  74,  -1,  75,  76,  -1,  -1,  77,  -1,  78,
     79,  -1,  -1,  -1,  80,  81,  -1,  -1,  -1,  82,
     -1,  -1,  -1,  83,  84,  -1,  -1,  -1,  -1,  85,
     86,  87,  -1,  -1,  88,  -1,  89,  90,  -1,  91,
     -1,  -1,  -1,  92,  -1,  -1,  -1,  -1,  93,  -1,
     94,  95,  -1,  96,  -1,  -1,  -1,  97,  -1,  -1,
     -1,  -1,  -1,  98,  -1,  99,  -1,  -1, 100, 101,
     -1,  -1, 102,  -1, 103, 104,  -1,  -1,  -1, 105,
    106,  -1,  -1, 107,  -1, 108,  -1, 109,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 110,  -1,  -1, 111,  -1,
     -1,  -1, 112,  -1,  -1, 113, 114,  -1,  -1, 115,
    116,  -1, 117,  -1,  -1,  -1, 118,  -1, 119, 120,
    121, 122, 123, 124,  -1, 125, 126, 127, 128, 129,
    130, 131, 132,  -1,  -1,  -1, 133, 134, 135, 136,
    137,  -1, 138, 139, 140, 141,  -1,  -1, 142, 143,
     -1,  -1,  -1,  -1, 144, 145,  -1,  -1, 146,  -1,
    147, 148,  -1, 149,  -1, 150,  -1, 151,  -1,  -1,
    152,  -1,  -1,  -1, 153,  -1, 154,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 155,  -1,  -1,  -1,  -1,
     -1, 156,  -1, 157,  -1,  -1, 158, 159, 160, 161,
     -1,  -1,  -1, 162, 163,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 164, 165,  -1, 166, 167,  -1,
    168, 169, 170, 171,  -1,  -1,  -1,  -1,  -1, 172,
     -1, 173,  -1, 174,  -1,  -1, 175, 176,  -1,  -1,
    177,  -1,  -1, 178,  -1,  -1,  -1,  -1, 179,  -1,
    180,  -1,  -1,  -1,  -1, 181,  -1, 182,  -1,  -1,
    183, 184, 185, 186,  -1,  -1, 187,  -1, 188, 189,
    190, 191, 192, 193,  -1,  -1, 194, 195,  -1,  -1,
     -1, 196, 197,  -1, 198,  -1, 199,  -1,  -1,  -1,
     -1,  -1, 200,  -1,  -1, 201, 202,  -1, 203,  -1,
     -1,  -1,  -1,  -1, 204,  -1,  -1,  -1, 205,  -1,
     -1, 206,  -1, 207,  -1,  -1, 208,  -1,  -1,  -1,
     -1,  -1,  -1, 209,  -1,  -1, 210, 211, 212,  -1,
     -1, 213, 214, 215,  -1,  -1,  -1,  -1,  -1,  -1,
    216,  -1, 217,  -1,  -1,  -1, 218,  -1, 219,  -1,
     -1, 220,  -1,  -1, 221, 222, 223, 224,  -1, 225,
    226,  -1,  -1,  -1,  -1,  -1, 227, 228,  -1,  -1,
     -1,  -1,  -1, 229, 230,  -1, 231,  -1, 232,  -1,
     -1, 233,  -1,  -1,  -1,  -1,  -1, 234, 235, 236,
     -1, 237,  -1,  -1,  -1,  -1, 238, 239,  -1, 240,
    241,  -1,  -1,  -1,  -1,  -1, 242,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 243,  -1, 244,  -1, 245,  -1,
     -1,  -1, 246,  -1,  -1, 247,  -1,  -1, 248, 249,
     -1,  -1,  -1,  -1, 250, 251, 252, 253,  -1, 254,
    255, 256,  -1,  -1,  -1, 257,  -1,  -1, 258,  -1,
    259,  -1, 260,  -1,  -1, 261,  -1, 262, 263,  -1,
     -1,  -1, 264,  -1,  -1, 265,  -1,  -1,  -1,  -1,
    266, 267, 268, 269,  -1, 270,  -1, 271, 272,  -1,
     -1, 273, 274, 275, 276, 277,  -1, 278,  -1,  -1,
     -1,  -1,  -1, 279,  -1,  -1, 280,  -1, 281, 282,
     -1,  -1,  -1, 283,  -1, 284, 285,  -1,  -1, 286,
     -1,  -1,  -1,  -1, 287, 288,  -1,  -1, 289,  -1,
    290, 291,  -1, 292,  -1, 293, 294, 295,  -1, 296,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 297, 298,  -1,
     -1,  -1,  -1,  -1, 299,  -1, 300,  -1,  -1,  -1,
    301,  -1, 302,  -1,  -1,  -1, 303,  -1,  -1,  -1,
     -1,  -1,  -1, 304,  -1, 305,  -1, 306, 307,  -1,
    308,  -1,  -1,  -1, 309,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 310,  -1,  -1,  -1,  -1, 311,
     -1, 312, 313,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 314, 315,  -1,  -1, 316,  -1, 317,  -1,  -1,
    318, 319, 320,  -1, 321,  -1,  -1,  -1,  -1,  -1,
    322,  -1, 323,  -1,  -1, 324,  -1,  -1,  -1,  -1,
    325, 326,  -1, 327, 328,  -1,  -1, 329,  -1, 330,
    331,  -1,  -1,  -1, 332,  -1,  -1,  -1,  -1, 333,
    334,  -1, 335,  -1, 336,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    337,  -1,  -1,  -1, 338, 339, 340,  -1,  -1, 341,
     -1,  -1,  -1,  -1,  -1, 342, 343,  -1, 344,  -1,
     -1, 345,  -1, 346,  -1,  -1,  -1, 347,  -1,  -1,
    348, 349,  -1, 350, 351,  -1,  -1,  -1,  -1,  -1,
     -1, 352, 353,  -1, 354, 355, 356,  -1, 357, 358,
     -1, 359, 360,  -1,  -1, 361, 362,  -1, 363,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 364,  -1,  -1,
    365,  -1, 366,  -1,  -1, 367, 368,  -1, 369, 370,
    371,  -1,  -1,  -1,  -1,  -1,  -1, 372,  -1,  -1,
     -1, 373,  -1,  -1, 374,  -1, 375,  -1,  -1,  -1,
     -1,  -1, 376,  -1, 377, 378,  -1,  -1,  -1, 379,
    380, 381, 382,  -1, 383,  -1,  -1, 384,  -1, 385,
     -1,  -1, 386, 387, 388,  -1, 389,  -1,  -1,  -1,
     -1,  -1, 390,  -1, 391,  -1, 392,  -1, 393,  -1,
     -1,  -1,  -1,  -1, 394, 395, 396,  -1, 397, 398,
    399,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 400,  -1,
     -1,  -1, 401,  -1, 402, 403,  -1,  -1,  -1, 404,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 405,  -1,  -1,
     -1,  -1,  -1, 406,  -1,  -1, 407,  -1,  -1,  -1,
    408,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 409,
     -1,  -1, 410, 411, 412,  -1,  -1, 413,  -1,  -1,
    414,  -1,  -1,  -1,  -1, 415,  -1,  -1, 416,  -1,
     -1, 417,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    418, 419,  -1, 420, 421, 422, 423,  -1,  -1,  -1,
    424,  -1,  -1, 425,  -1, 426,  -1, 427,  -1,  -1,
    428, 429,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    430,  -1,  -1,  -1, 431,  -1, 432,  -1, 433, 434,
     -1,  -1,  -1,  -1, 435, 436,  -1, 437,  -1,  -1,
     -1, 438,  -1,  -1, 439, 440,  -1,  -1,  -1,  -1,
     -1, 441,  -1, 442, 443, 444, 445,  -1,  -1, 446,
     -1, 447,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 448, 449, 450,  -1,  -1,  -1,  -1, 451,  -1,
    452,  -1,  -1, 453, 454,  -1,  -1,  -1, 455,  -1,
    456, 457,  -1,  -1,  -1,  -1, 458,  -1,  -1, 459,
     -1,  -1, 460, 461,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 462,  -1, 463,  -1,  -1, 464,  -1,  -1,  -1,
     -1,  -1, 465,  -1,  -1, 466,  -1, 467, 468,  -1,
    469,  -1,  -1,  -1, 470, 471, 472,  -1,  -1, 473,
    474,  -1, 475, 476, 477,  -1, 478,  -1, 479, 480,
     -1, 481,  -1, 482,  -1,  -1, 483, 484, 485, 486,
     -1,  -1,  -1,  -1, 487, 488,  -1, 489, 490,  -1,
    491,  -1, 492,  -1, 493, 494, 495, 496, 497,  -1,
     -1,  -1, 498, 499,  -1,  -1, 500,  -1, 501,  -1,
     -1,  -1,  -1, 502, 503, 504, 505, 506, 507, 508,
     -1, 509,  -1,  -1, 510,  -1,  -1,  -1,  -1, 511,
    512, 513, 514,  -1, 515,  -1,  -1, 516,  -1,  -1,
     -1,  -1, 517,  -1, 518,  -1,  -1, 519, 520, 521,
     -1, 522, 523,  -1, 524,  -1,  -1, 525,  -1,  -1,
    526, 527,  -1,  -1,  -1, 528,  -1, 529,  -1, 530,
     -1,  -1,  -1,  -1, 531,  -1, 532,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 533,  -1,  -1,  -1, 534, 535,
     -1, 536,  -1,  -1,  -1,  -1, 537, 538,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 539,
    540,  -1, 541,  -1,  -1, 542, 543,  -1,  -1,  -1,
    544,  -1,  -1,  -1,  -1, 545,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 546,  -1,  -1, 547,  -1,
    548,  -1, 549,  -1, 550,  -1,  -1,  -1,  -1,  -1,
     -1, 551,  -1,  -1,  -1,  -1, 552,  -1,  -1, 553,
    554,  -1, 555, 556,  -1,  -1, 557, 558,  -1, 559,
    560,  -1,  -1, 561,  -1,  -1,  -1,  -1,  -1,  -1,
    562,  -1,  -1,  -1,  -1, 563,  -1, 564,  -1, 565,
    566,  -1,  -1, 567,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 568,  -1,  -1, 569,
    570,  -1,  -1,  -1, 571,  -1,  -1,  -1, 572,  -1,
     -1,  -1,  -1,  -1, 573,  -1,  -1, 574, 575,  -1,
     -1, 576,  -1, 577, 578,  -1,  -1,  -1,  -1,  -1,
     -1, 579,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 580,  -1,  -1, 581,  -1,  -1,
     -1,  -1, 582,  -1,  -1, 583,  -1,  -1,  -1,  -1,
     -1, 584,  -1, 585,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 586, 587, 588,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 589,  -1,  -1,  -1,  -1, 590,  -1,  -1,
    591,  -1,  -1,  -1,  -1,  -1,  -1, 592,  -1,  -1,
     -1, 593,  -1,  -1,  -1, 594,  -1,  -1,  -1,  -1,
     -1, 595,  -1,  -1,  -1,  -1,  -1,  -1, 596, 597,
    598,  -1,  -1,  -1, 599,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 600,  -1,
     -1,  -1, 601,  -1,  -1,  -1,  -1, 602, 603,  -1,
    604,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 605,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 606,
     -1, 607,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 608,
    609,  -1,  -1,  -1,  -1, 610,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 611,  -1,  -1,  -1,  -1,  -1, 612,
     -1,  -1,  -1,  -1,  -1, 613,  -1,  -1,  -1, 614,
     -1,  -1, 615, 616,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 617,
     -1, 618,  -1,  -1,  -1, 619,  -1,  -1,  -1,  -1,
     -1, 620,  -1,  -1, 621,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 622,  -1,  -1, 623,  -1,  -1,
    624,  -1,  -1,  -1,  -1, 625,  -1,  -1,  -1,  -1,
    626,  -1, 627, 628,  -1,  -1,  -1,  -1,  -1, 629,
     -1,  -1,  -1,  -1, 630, 631,  -1,  -1, 632,  -1,
     -1,  -1,  -1, 633,  -1, 634,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 635,  -1, 636,  -1,  -1,  -1,  -1,
     -1, 637,  -1,  -1, 638,  -1,  -1,  -1,  -1, 639,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 640,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 641,  -1,  -1,  -1, 642,  -1,
     -1,  -1, 643,  -1,  -1, 644,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 645,  -1,  -1, 646,  -1,  -1,  -1,
    647,  -1,  -1,  -1,  -1, 648,  -1,  -1,  -1, 649,
     -1,  -1, 650, 651,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 652,  -1, 653,  -1,
     -1,  -1,  -1, 654,  -1,  -1,  -1,  -1,  -1,  -1,
    655,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 656,  -1, 657,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    658,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    659,  -1,  -1, 660,  -1,  -1,  -1,  -1, 661,  -1,
     -1, 662,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 663,  -1,  -1,  -1,  -1,
     -1,  -1, 664,  -1,  -1,  -1,  -1,  -1, 665,  -1,
     -1,  -1,  -1,  -1,  -1, 666,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 667,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 668,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 669, 670,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 671,  -1,  -1,  -1,  -1, 672,
    673,  -1,  -1,  -1,  -1,  -1,  -1, 674,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 675,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 676,  -1, 677,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    678,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 679,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 680,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 681,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 682,  -1,  -1,  -1,  -1,
     -1,  -1, 683,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 684,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 685,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 686, 687, 688,  -1, 689, 690,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 691,  -1,  -1,  -1,
    692,  -1,  -1, 693,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 694,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 695, 696,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 697,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 698,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 699,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 700,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 701,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 702, 703,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 704,  -1,  -1,  -1, 705,
     -1,  -1, 706,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 707,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 708,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 709,  -1, 710
  };

const struct ResourceNameTypePair *
Perfect_Hash::in_word_set (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &wordlist[index];
            }
        }
    }
  return 0;
}
