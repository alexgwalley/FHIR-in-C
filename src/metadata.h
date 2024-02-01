#define METADATA_MEMBER_COUNT 150
#define POSSIBLE_TYPES_COUNT 100
// TODO(agw): this can be determined at compiletime
#define SIZE_T_BITS 64
//#define BIT_FIELD_COUNT (METADATA_MEMBER_COUNT + (SIZE_T_BITS - 1) / SIZE_T_BITS)
#define METADATA_MAGIC 0xEAC0

struct ClassMemberMetadata
{
	String8 name;
	Cardinality cardinality;
	ClassMemberType type;
	U16 offset;
	U16 size;
	ValueTypeAndName types[POSSIBLE_TYPES_COUNT];
};

struct ClassMetadata
{
	String8 name;
	U64 size;
	U64 members_count;
	BitField required_members;
	ClassMemberMetadata members[METADATA_MEMBER_COUNT];
};

struct MetadataHeader
{
    U32 magic;
    U16 num_classes;
    U16 version;
};

struct MetadataFile
{
    MetadataHeader header;
    ClassMetadata class_metadata[];
};

typedef enum class ResourceType {
	Unknown,
	Resource,
	Account,
	Account_Coverage,
	Account_Guarantor,
	ActivityDefinition,
	ActivityDefinition_Participant,
	ActivityDefinition_DynamicValue,
	AdverseEvent,
	AdverseEvent_SuspectEntity,
	AdverseEvent_SuspectEntity_Causality,
	AllergyIntolerance,
	AllergyIntolerance_Reaction,
	Appointment,
	Appointment_Participant,
	AppointmentResponse,
	AuditEvent,
	AuditEvent_Agent,
	AuditEvent_Agent_Network,
	AuditEvent_Source,
	AuditEvent_Entity,
	AuditEvent_Entity_Detail,
	Basic,
	Binary,
	BiologicallyDerivedProduct,
	BiologicallyDerivedProduct_Collection,
	BiologicallyDerivedProduct_Processing,
	BiologicallyDerivedProduct_Manipulation,
	BiologicallyDerivedProduct_Storage,
	BodyStructure,
	Bundle,
	Bundle_Link,
	Bundle_Entry,
	Bundle_Entry_Search,
	Bundle_Entry_Request,
	Bundle_Entry_Response,
	CapabilityStatement,
	CapabilityStatement_Software,
	CapabilityStatement_Implementation,
	CapabilityStatement_Rest,
	CapabilityStatement_Rest_Security,
	CapabilityStatement_Rest_Resource,
	CapabilityStatement_Rest_Resource_Interaction,
	CapabilityStatement_Rest_Resource_SearchParam,
	CapabilityStatement_Rest_Resource_Operation,
	CapabilityStatement_Rest_Interaction,
	CapabilityStatement_Messaging,
	CapabilityStatement_Messaging_Endpoint,
	CapabilityStatement_Messaging_SupportedMessage,
	CapabilityStatement_Document,
	CarePlan,
	CarePlan_Activity,
	CarePlan_Activity_Detail,
	CareTeam,
	CareTeam_Participant,
	CatalogEntry,
	CatalogEntry_RelatedEntry,
	ChargeItem,
	ChargeItem_Performer,
	ChargeItemDefinition,
	ChargeItemDefinition_Applicability,
	ChargeItemDefinition_PropertyGroup,
	ChargeItemDefinition_PropertyGroup_PriceComponent,
	Claim,
	Claim_Related,
	Claim_Payee,
	Claim_CareTeam,
	Claim_SupportingInfo,
	Claim_Diagnosis,
	Claim_Procedure,
	Claim_Insurance,
	Claim_Accident,
	Claim_Item,
	Claim_Item_Detail,
	Claim_Item_Detail_SubDetail,
	ClaimResponse,
	ClaimResponse_Item,
	ClaimResponse_Item_Adjudication,
	ClaimResponse_Item_Detail,
	ClaimResponse_Item_Detail_SubDetail,
	ClaimResponse_AddItem,
	ClaimResponse_AddItem_Detail,
	ClaimResponse_AddItem_Detail_SubDetail,
	ClaimResponse_Total,
	ClaimResponse_Payment,
	ClaimResponse_ProcessNote,
	ClaimResponse_Insurance,
	ClaimResponse_Error,
	ClinicalImpression,
	ClinicalImpression_Investigation,
	ClinicalImpression_Finding,
	CodeSystem,
	CodeSystem_Filter,
	CodeSystem_Property,
	CodeSystem_Concept,
	CodeSystem_Concept_Designation,
	CodeSystem_Concept_Property,
	Communication,
	Communication_Payload,
	CommunicationRequest,
	CommunicationRequest_Payload,
	CompartmentDefinition,
	CompartmentDefinition_Resource,
	Composition,
	Composition_Attester,
	Composition_RelatesTo,
	Composition_Event,
	Composition_Section,
	ConceptMap,
	ConceptMap_Group,
	ConceptMap_Group_Element,
	ConceptMap_Group_Element_Target,
	ConceptMap_Group_Element_Target_DependsOn,
	ConceptMap_Group_Unmapped,
	Condition,
	Condition_Stage,
	Condition_Evidence,
	Consent,
	Consent_Policy,
	Consent_Verification,
	Consent_Provision,
	Consent_Provision_Actor,
	Consent_Provision_Data,
	Contract,
	Contract_ContentDefinition,
	Contract_Term,
	Contract_Term_SecurityLabel,
	Contract_Term_Offer,
	Contract_Term_Offer_Party,
	Contract_Term_Offer_Answer,
	Contract_Term_Asset,
	Contract_Term_Asset_Context,
	Contract_Term_Asset_ValuedItem,
	Contract_Term_Action,
	Contract_Term_Action_Subject,
	Contract_Signer,
	Contract_Friendly,
	Contract_Legal,
	Contract_Rule,
	Coverage,
	Coverage_Class,
	Coverage_CostToBeneficiary,
	Coverage_CostToBeneficiary_Exception,
	CoverageEligibilityRequest,
	CoverageEligibilityRequest_SupportingInfo,
	CoverageEligibilityRequest_Insurance,
	CoverageEligibilityRequest_Item,
	CoverageEligibilityRequest_Item_Diagnosis,
	CoverageEligibilityResponse,
	CoverageEligibilityResponse_Insurance,
	CoverageEligibilityResponse_Insurance_Item,
	CoverageEligibilityResponse_Insurance_Item_Benefit,
	CoverageEligibilityResponse_Error,
	DetectedIssue,
	DetectedIssue_Evidence,
	DetectedIssue_Mitigation,
	Device,
	Device_UdiCarrier,
	Device_DeviceName,
	Device_Specialization,
	Device_Version,
	Device_Property,
	DeviceDefinition,
	DeviceDefinition_UdiDeviceIdentifier,
	DeviceDefinition_DeviceName,
	DeviceDefinition_Specialization,
	DeviceDefinition_Capability,
	DeviceDefinition_Property,
	DeviceDefinition_Material,
	DeviceMetric,
	DeviceMetric_Calibration,
	DeviceRequest,
	DeviceRequest_Parameter,
	DeviceUseStatement,
	DiagnosticReport,
	DiagnosticReport_Media,
	DocumentManifest,
	DocumentManifest_Related,
	DocumentReference,
	DocumentReference_RelatesTo,
	DocumentReference_Content,
	DocumentReference_Context,
	DomainResource,
	EffectEvidenceSynthesis,
	EffectEvidenceSynthesis_SampleSize,
	EffectEvidenceSynthesis_ResultsByExposure,
	EffectEvidenceSynthesis_EffectEstimate,
	EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate,
	EffectEvidenceSynthesis_Certainty,
	EffectEvidenceSynthesis_Certainty_CertaintySubcomponent,
	Encounter,
	Encounter_StatusHistory,
	Encounter_ClassHistory,
	Encounter_Participant,
	Encounter_Diagnosis,
	Encounter_Hospitalization,
	Encounter_Location,
	Endpoint,
	EnrollmentRequest,
	EnrollmentResponse,
	EpisodeOfCare,
	EpisodeOfCare_StatusHistory,
	EpisodeOfCare_Diagnosis,
	EventDefinition,
	Evidence,
	EvidenceVariable,
	EvidenceVariable_Characteristic,
	ExampleScenario,
	ExampleScenario_Actor,
	ExampleScenario_Instance,
	ExampleScenario_Instance_Version,
	ExampleScenario_Instance_ContainedInstance,
	ExampleScenario_Process,
	ExampleScenario_Process_Step,
	ExampleScenario_Process_Step_Operation,
	ExampleScenario_Process_Step_Alternative,
	ExplanationOfBenefit,
	ExplanationOfBenefit_Related,
	ExplanationOfBenefit_Payee,
	ExplanationOfBenefit_CareTeam,
	ExplanationOfBenefit_SupportingInfo,
	ExplanationOfBenefit_Diagnosis,
	ExplanationOfBenefit_Procedure,
	ExplanationOfBenefit_Insurance,
	ExplanationOfBenefit_Accident,
	ExplanationOfBenefit_Item,
	ExplanationOfBenefit_Item_Adjudication,
	ExplanationOfBenefit_Item_Detail,
	ExplanationOfBenefit_Item_Detail_SubDetail,
	ExplanationOfBenefit_AddItem,
	ExplanationOfBenefit_AddItem_Detail,
	ExplanationOfBenefit_AddItem_Detail_SubDetail,
	ExplanationOfBenefit_Total,
	ExplanationOfBenefit_Payment,
	ExplanationOfBenefit_ProcessNote,
	ExplanationOfBenefit_BenefitBalance,
	ExplanationOfBenefit_BenefitBalance_Financial,
	FamilyMemberHistory,
	FamilyMemberHistory_Condition,
	Flag,
	Goal,
	Goal_Target,
	GraphDefinition,
	GraphDefinition_Link,
	GraphDefinition_Link_Target,
	GraphDefinition_Link_Target_Compartment,
	Group,
	Group_Characteristic,
	Group_Member,
	GuidanceResponse,
	HealthcareService,
	HealthcareService_Eligibility,
	HealthcareService_AvailableTime,
	HealthcareService_NotAvailable,
	ImagingStudy,
	ImagingStudy_Series,
	ImagingStudy_Series_Performer,
	ImagingStudy_Series_Instance,
	Immunization,
	Immunization_Performer,
	Immunization_Education,
	Immunization_Reaction,
	Immunization_ProtocolApplied,
	ImmunizationEvaluation,
	ImmunizationRecommendation,
	ImmunizationRecommendation_Recommendation,
	ImmunizationRecommendation_Recommendation_DateCriterion,
	ImplementationGuide,
	ImplementationGuide_DependsOn,
	ImplementationGuide_Global,
	ImplementationGuide_Definition,
	ImplementationGuide_Definition_Grouping,
	ImplementationGuide_Definition_Resource,
	ImplementationGuide_Definition_Page,
	ImplementationGuide_Definition_Parameter,
	ImplementationGuide_Definition_Template,
	ImplementationGuide_Manifest,
	ImplementationGuide_Manifest_Resource,
	ImplementationGuide_Manifest_Page,
	InsurancePlan,
	InsurancePlan_Contact,
	InsurancePlan_Coverage,
	InsurancePlan_Coverage_Benefit,
	InsurancePlan_Coverage_Benefit_Limit,
	InsurancePlan_Plan,
	InsurancePlan_Plan_GeneralCost,
	InsurancePlan_Plan_SpecificCost,
	InsurancePlan_Plan_SpecificCost_Benefit,
	InsurancePlan_Plan_SpecificCost_Benefit_Cost,
	Invoice,
	Invoice_Participant,
	Invoice_LineItem,
	Invoice_LineItem_PriceComponent,
	Library,
	Linkage,
	Linkage_Item,
	List,
	List_Entry,
	Location,
	Location_Position,
	Location_HoursOfOperation,
	Measure,
	Measure_Group,
	Measure_Group_Population,
	Measure_Group_Stratifier,
	Measure_Group_Stratifier_Component,
	Measure_SupplementalData,
	MeasureReport,
	MeasureReport_Group,
	MeasureReport_Group_Population,
	MeasureReport_Group_Stratifier,
	MeasureReport_Group_Stratifier_Stratum,
	MeasureReport_Group_Stratifier_Stratum_Component,
	MeasureReport_Group_Stratifier_Stratum_Population,
	Media,
	Medication,
	Medication_Ingredient,
	Medication_Batch,
	MedicationAdministration,
	MedicationAdministration_Performer,
	MedicationAdministration_Dosage,
	MedicationDispense,
	MedicationDispense_Performer,
	MedicationDispense_Substitution,
	MedicationKnowledge,
	MedicationKnowledge_RelatedMedicationKnowledge,
	MedicationKnowledge_Monograph,
	MedicationKnowledge_Ingredient,
	MedicationKnowledge_Cost,
	MedicationKnowledge_MonitoringProgram,
	MedicationKnowledge_AdministrationGuidelines,
	MedicationKnowledge_AdministrationGuidelines_Dosage,
	MedicationKnowledge_AdministrationGuidelines_PatientCharacteristics,
	MedicationKnowledge_MedicineClassification,
	MedicationKnowledge_Packaging,
	MedicationKnowledge_DrugCharacteristic,
	MedicationKnowledge_Regulatory,
	MedicationKnowledge_Regulatory_Substitution,
	MedicationKnowledge_Regulatory_Schedule,
	MedicationKnowledge_Regulatory_MaxDispense,
	MedicationKnowledge_Kinetics,
	MedicationRequest,
	MedicationRequest_DispenseRequest,
	MedicationRequest_DispenseRequest_InitialFill,
	MedicationRequest_Substitution,
	MedicationStatement,
	MedicinalProduct,
	MedicinalProduct_Name,
	MedicinalProduct_Name_NamePart,
	MedicinalProduct_Name_CountryLanguage,
	MedicinalProduct_ManufacturingBusinessOperation,
	MedicinalProduct_SpecialDesignation,
	MedicinalProductAuthorization,
	MedicinalProductAuthorization_JurisdictionalAuthorization,
	MedicinalProductAuthorization_Procedure,
	MedicinalProductContraindication,
	MedicinalProductContraindication_OtherTherapy,
	MedicinalProductIndication,
	MedicinalProductIndication_OtherTherapy,
	MedicinalProductIngredient,
	MedicinalProductIngredient_SpecifiedSubstance,
	MedicinalProductIngredient_SpecifiedSubstance_Strength,
	MedicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength,
	MedicinalProductIngredient_Substance,
	MedicinalProductInteraction,
	MedicinalProductInteraction_Interactant,
	MedicinalProductManufactured,
	MedicinalProductPackaged,
	MedicinalProductPackaged_BatchIdentifier,
	MedicinalProductPackaged_PackageItem,
	MedicinalProductPharmaceutical,
	MedicinalProductPharmaceutical_Characteristics,
	MedicinalProductPharmaceutical_RouteOfAdministration,
	MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies,
	MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod,
	MedicinalProductUndesirableEffect,
	MessageDefinition,
	MessageDefinition_Focus,
	MessageDefinition_AllowedResponse,
	MessageHeader,
	MessageHeader_Destination,
	MessageHeader_Source,
	MessageHeader_Response,
	MolecularSequence,
	MolecularSequence_ReferenceSeq,
	MolecularSequence_Variant,
	MolecularSequence_Quality,
	MolecularSequence_Quality_Roc,
	MolecularSequence_Repository,
	MolecularSequence_StructureVariant,
	MolecularSequence_StructureVariant_Outer,
	MolecularSequence_StructureVariant_Inner,
	NamingSystem,
	NamingSystem_UniqueId,
	NutritionOrder,
	NutritionOrder_OralDiet,
	NutritionOrder_OralDiet_Nutrient,
	NutritionOrder_OralDiet_Texture,
	NutritionOrder_Supplement,
	NutritionOrder_EnteralFormula,
	NutritionOrder_EnteralFormula_Administration,
	Observation,
	Observation_ReferenceRange,
	Observation_Component,
	ObservationDefinition,
	ObservationDefinition_QuantitativeDetails,
	ObservationDefinition_QualifiedInterval,
	OperationDefinition,
	OperationDefinition_Parameter,
	OperationDefinition_Parameter_Binding,
	OperationDefinition_Parameter_ReferencedFrom,
	OperationDefinition_Overload,
	OperationOutcome,
	OperationOutcome_Issue,
	Organization,
	Organization_Contact,
	OrganizationAffiliation,
	Parameters,
	Parameters_Parameter,
	Patient,
	Patient_Contact,
	Patient_Communication,
	Patient_Link,
	PaymentNotice,
	PaymentReconciliation,
	PaymentReconciliation_Detail,
	PaymentReconciliation_ProcessNote,
	Person,
	Person_Link,
	PlanDefinition,
	PlanDefinition_Goal,
	PlanDefinition_Goal_Target,
	PlanDefinition_Action,
	PlanDefinition_Action_Condition,
	PlanDefinition_Action_RelatedAction,
	PlanDefinition_Action_Participant,
	PlanDefinition_Action_DynamicValue,
	Practitioner,
	Practitioner_Qualification,
	PractitionerRole,
	PractitionerRole_AvailableTime,
	PractitionerRole_NotAvailable,
	Procedure,
	Procedure_Performer,
	Procedure_FocalDevice,
	Provenance,
	Provenance_Agent,
	Provenance_Entity,
	Questionnaire,
	Questionnaire_Item,
	Questionnaire_Item_EnableWhen,
	Questionnaire_Item_AnswerOption,
	Questionnaire_Item_Initial,
	QuestionnaireResponse,
	QuestionnaireResponse_Item,
	QuestionnaireResponse_Item_Answer,
	RelatedPerson,
	RelatedPerson_Communication,
	RequestGroup,
	RequestGroup_Action,
	RequestGroup_Action_Condition,
	RequestGroup_Action_RelatedAction,
	ResearchDefinition,
	ResearchElementDefinition,
	ResearchElementDefinition_Characteristic,
	ResearchStudy,
	ResearchStudy_Arm,
	ResearchStudy_Objective,
	ResearchSubject,
	RiskAssessment,
	RiskAssessment_Prediction,
	RiskEvidenceSynthesis,
	RiskEvidenceSynthesis_SampleSize,
	RiskEvidenceSynthesis_RiskEstimate,
	RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate,
	RiskEvidenceSynthesis_Certainty,
	RiskEvidenceSynthesis_Certainty_CertaintySubcomponent,
	Schedule,
	SearchParameter,
	SearchParameter_Component,
	ServiceRequest,
	Slot,
	Specimen,
	Specimen_Collection,
	Specimen_Processing,
	Specimen_Container,
	SpecimenDefinition,
	SpecimenDefinition_TypeTested,
	SpecimenDefinition_TypeTested_Container,
	SpecimenDefinition_TypeTested_Container_Additive,
	SpecimenDefinition_TypeTested_Handling,
	StructureDefinition,
	StructureDefinition_Mapping,
	StructureDefinition_Context,
	StructureDefinition_Snapshot,
	StructureDefinition_Differential,
	StructureMap,
	StructureMap_Structure,
	StructureMap_Group,
	StructureMap_Group_Input,
	StructureMap_Group_Rule,
	StructureMap_Group_Rule_Source,
	StructureMap_Group_Rule_Target,
	StructureMap_Group_Rule_Target_Parameter,
	StructureMap_Group_Rule_Dependent,
	Subscription,
	Subscription_Channel,
	Substance,
	Substance_Instance,
	Substance_Ingredient,
	SubstanceNucleicAcid,
	SubstanceNucleicAcid_Subunit,
	SubstanceNucleicAcid_Subunit_Linkage,
	SubstanceNucleicAcid_Subunit_Sugar,
	SubstancePolymer,
	SubstancePolymer_MonomerSet,
	SubstancePolymer_MonomerSet_StartingMaterial,
	SubstancePolymer_Repeat,
	SubstancePolymer_Repeat_RepeatUnit,
	SubstancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation,
	SubstancePolymer_Repeat_RepeatUnit_StructuralRepresentation,
	SubstanceProtein,
	SubstanceProtein_Subunit,
	SubstanceReferenceInformation,
	SubstanceReferenceInformation_Gene,
	SubstanceReferenceInformation_GeneElement,
	SubstanceReferenceInformation_Classification,
	SubstanceReferenceInformation_Target,
	SubstanceSourceMaterial,
	SubstanceSourceMaterial_FractionDescription,
	SubstanceSourceMaterial_Organism,
	SubstanceSourceMaterial_Organism_Author,
	SubstanceSourceMaterial_Organism_Hybrid,
	SubstanceSourceMaterial_Organism_OrganismGeneral,
	SubstanceSourceMaterial_PartDescription,
	SubstanceSpecification,
	SubstanceSpecification_Moiety,
	SubstanceSpecification_Property,
	SubstanceSpecification_Structure,
	SubstanceSpecification_Structure_Isotope,
	SubstanceSpecification_Structure_Isotope_MolecularWeight,
	SubstanceSpecification_Structure_Representation,
	SubstanceSpecification_Code,
	SubstanceSpecification_Name,
	SubstanceSpecification_Name_Official,
	SubstanceSpecification_Relationship,
	SupplyDelivery,
	SupplyDelivery_SuppliedItem,
	SupplyRequest,
	SupplyRequest_Parameter,
	Task,
	Task_Restriction,
	Task_Input,
	Task_Output,
	TerminologyCapabilities,
	TerminologyCapabilities_Software,
	TerminologyCapabilities_Implementation,
	TerminologyCapabilities_CodeSystem,
	TerminologyCapabilities_CodeSystem_Version,
	TerminologyCapabilities_CodeSystem_Version_Filter,
	TerminologyCapabilities_Expansion,
	TerminologyCapabilities_Expansion_Parameter,
	TerminologyCapabilities_ValidateCode,
	TerminologyCapabilities_Translation,
	TerminologyCapabilities_Closure,
	TestReport,
	TestReport_Participant,
	TestReport_Setup,
	TestReport_Setup_Action,
	TestReport_Setup_Action_Operation,
	TestReport_Setup_Action_Assert,
	TestReport_Test,
	TestReport_Test_Action,
	TestReport_Teardown,
	TestReport_Teardown_Action,
	TestScript,
	TestScript_Origin,
	TestScript_Destination,
	TestScript_Metadata,
	TestScript_Metadata_Link,
	TestScript_Metadata_Capability,
	TestScript_Fixture,
	TestScript_Variable,
	TestScript_Setup,
	TestScript_Setup_Action,
	TestScript_Setup_Action_Operation,
	TestScript_Setup_Action_Operation_RequestHeader,
	TestScript_Setup_Action_Assert,
	TestScript_Test,
	TestScript_Test_Action,
	TestScript_Teardown,
	TestScript_Teardown_Action,
	ValueSet,
	ValueSet_Compose,
	ValueSet_Compose_Include,
	ValueSet_Compose_Include_Concept,
	ValueSet_Compose_Include_Concept_Designation,
	ValueSet_Compose_Include_Filter,
	ValueSet_Expansion,
	ValueSet_Expansion_Parameter,
	ValueSet_Expansion_Contains,
	VerificationResult,
	VerificationResult_PrimarySource,
	VerificationResult_Attestation,
	VerificationResult_Validator,
	VisionPrescription,
	VisionPrescription_LensSpecification,
	VisionPrescription_LensSpecification_Prism,
	MetadataResource,
	Element,
	BackboneElement,
	Integer,
	Xhtml,
	Address,
	Age,
	Annotation,
	Attachment,
	CodeableConcept,
	Coding,
	ContactDetail,
	ContactPoint,
	Contributor,
	Count,
	DataRequirement,
	DataRequirement_CodeFilter,
	DataRequirement_DateFilter,
	DataRequirement_Sort,
	Distance,
	Dosage,
	Dosage_DoseAndRate,
	Duration,
	ElementDefinition,
	ElementDefinition_Slicing,
	ElementDefinition_Slicing_Discriminator,
	ElementDefinition_Base,
	ElementDefinition_Type,
	ElementDefinition_Example,
	ElementDefinition_Constraint,
	ElementDefinition_Binding,
	ElementDefinition_Mapping,
	Expression,
	Extension,
	HumanName,
	Identifier,
	MarketingStatus,
	Meta,
	Money,
	Narrative,
	ParameterDefinition,
	Period,
	Population,
	ProdCharacteristic,
	ProductShelfLife,
	Quantity,
	Range,
	Ratio,
	Reference,
	RelatedArtifact,
	SampledData,
	Signature,
	SubstanceAmount,
	SubstanceAmount_ReferenceRange,
	Timing,
	Timing_Repeat,
	TriggerDefinition,
	UsageContext,
	MoneyQuantity,
	SimpleQuantity,
	Shareablemeasure,
	Servicerequest_genetics,
	Groupdefinition,
	Actualgroup,
	Familymemberhistory_genetic,
	Shareableactivitydefinition,
	Cdshooksrequestgroup,
	Provenance_relevant_history,
	Cqf_questionnaire,
	Shareablevalueset,
	Picoelement,
	Shareablecodesystem,
	Cdshooksguidanceresponse,
	Devicemetricobservation,
	Observation_genetics,
	Vitalsigns,
	Bodyweight,
	Vitalspanel,
	Bodyheight,
	Resprate,
	Heartrate,
	Bodytemp,
	Headcircum,
	Oxygensat,
	Bmi,
	Bp,
	Shareablelibrary,
	Cqllibrary,
	Lipidprofile,
	Cholesterol,
	Triglyceride,
	Hdlcholesterol,
	Ldlcholesterol,
	Diagnosticreport_genetics,
	Hlaresult,
	Synthesis,
	Clinicaldocument,
	Catalog,
	Shareableplandefinition,
	Computableplandefinition,
	Cdshooksserviceplandefinition,
	Elementdefinition_de,
	Ehrsrle_auditevent,
	Ehrsrle_provenance,
} ResourceType;