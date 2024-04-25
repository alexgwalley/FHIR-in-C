#include "native_fhir/iso8601_time/iso8601_time.h"
namespace native_fhir { 
namespace fhir_r4 {
struct Resource;
struct Account;
struct Account_Coverage;
struct Account_Guarantor;
struct ActivityDefinition;
struct ActivityDefinition_Participant;
struct ActivityDefinition_DynamicValue;
struct AdverseEvent;
struct AdverseEvent_SuspectEntity;
struct AdverseEvent_SuspectEntity_Causality;
struct AllergyIntolerance;
struct AllergyIntolerance_Reaction;
struct Appointment;
struct Appointment_Participant;
struct AppointmentResponse;
struct AuditEvent;
struct AuditEvent_Agent;
struct AuditEvent_Agent_Network;
struct AuditEvent_Source;
struct AuditEvent_Entity;
struct AuditEvent_Entity_Detail;
struct Basic;
struct Binary;
struct BiologicallyDerivedProduct;
struct BiologicallyDerivedProduct_Collection;
struct BiologicallyDerivedProduct_Processing;
struct BiologicallyDerivedProduct_Manipulation;
struct BiologicallyDerivedProduct_Storage;
struct BodyStructure;
struct Bundle;
struct Bundle_Link;
struct Bundle_Entry;
struct Bundle_Entry_Search;
struct Bundle_Entry_Request;
struct Bundle_Entry_Response;
struct CapabilityStatement;
struct CapabilityStatement_Software;
struct CapabilityStatement_Implementation;
struct CapabilityStatement_Rest;
struct CapabilityStatement_Rest_Security;
struct CapabilityStatement_Rest_Resource;
struct CapabilityStatement_Rest_Resource_Interaction;
struct CapabilityStatement_Rest_Resource_SearchParam;
struct CapabilityStatement_Rest_Resource_Operation;
struct CapabilityStatement_Rest_Interaction;
struct CapabilityStatement_Messaging;
struct CapabilityStatement_Messaging_Endpoint;
struct CapabilityStatement_Messaging_SupportedMessage;
struct CapabilityStatement_Document;
struct CarePlan;
struct CarePlan_Activity;
struct CarePlan_Activity_Detail;
struct CareTeam;
struct CareTeam_Participant;
struct CatalogEntry;
struct CatalogEntry_RelatedEntry;
struct ChargeItem;
struct ChargeItem_Performer;
struct ChargeItemDefinition;
struct ChargeItemDefinition_Applicability;
struct ChargeItemDefinition_PropertyGroup;
struct ChargeItemDefinition_PropertyGroup_PriceComponent;
struct Claim;
struct Claim_Related;
struct Claim_Payee;
struct Claim_CareTeam;
struct Claim_SupportingInfo;
struct Claim_Diagnosis;
struct Claim_Procedure;
struct Claim_Insurance;
struct Claim_Accident;
struct Claim_Item;
struct Claim_Item_Detail;
struct Claim_Item_Detail_SubDetail;
struct ClaimResponse;
struct ClaimResponse_Item;
struct ClaimResponse_Item_Adjudication;
struct ClaimResponse_Item_Detail;
struct ClaimResponse_Item_Detail_SubDetail;
struct ClaimResponse_AddItem;
struct ClaimResponse_AddItem_Detail;
struct ClaimResponse_AddItem_Detail_SubDetail;
struct ClaimResponse_Total;
struct ClaimResponse_Payment;
struct ClaimResponse_ProcessNote;
struct ClaimResponse_Insurance;
struct ClaimResponse_Error;
struct ClinicalImpression;
struct ClinicalImpression_Investigation;
struct ClinicalImpression_Finding;
struct CodeSystem;
struct CodeSystem_Filter;
struct CodeSystem_Property;
struct CodeSystem_Concept;
struct CodeSystem_Concept_Designation;
struct CodeSystem_Concept_Property;
struct Communication;
struct Communication_Payload;
struct CommunicationRequest;
struct CommunicationRequest_Payload;
struct CompartmentDefinition;
struct CompartmentDefinition_Resource;
struct Composition;
struct Composition_Attester;
struct Composition_RelatesTo;
struct Composition_Event;
struct Composition_Section;
struct ConceptMap;
struct ConceptMap_Group;
struct ConceptMap_Group_Element;
struct ConceptMap_Group_Element_Target;
struct ConceptMap_Group_Element_Target_DependsOn;
struct ConceptMap_Group_Unmapped;
struct Condition;
struct Condition_Stage;
struct Condition_Evidence;
struct Consent;
struct Consent_Policy;
struct Consent_Verification;
struct Consent_Provision;
struct Consent_Provision_Actor;
struct Consent_Provision_Data;
struct Contract;
struct Contract_ContentDefinition;
struct Contract_Term;
struct Contract_Term_SecurityLabel;
struct Contract_Term_Offer;
struct Contract_Term_Offer_Party;
struct Contract_Term_Offer_Answer;
struct Contract_Term_Asset;
struct Contract_Term_Asset_Context;
struct Contract_Term_Asset_ValuedItem;
struct Contract_Term_Action;
struct Contract_Term_Action_Subject;
struct Contract_Signer;
struct Contract_Friendly;
struct Contract_Legal;
struct Contract_Rule;
struct Coverage;
struct Coverage_Class;
struct Coverage_CostToBeneficiary;
struct Coverage_CostToBeneficiary_Exception;
struct CoverageEligibilityRequest;
struct CoverageEligibilityRequest_SupportingInfo;
struct CoverageEligibilityRequest_Insurance;
struct CoverageEligibilityRequest_Item;
struct CoverageEligibilityRequest_Item_Diagnosis;
struct CoverageEligibilityResponse;
struct CoverageEligibilityResponse_Insurance;
struct CoverageEligibilityResponse_Insurance_Item;
struct CoverageEligibilityResponse_Insurance_Item_Benefit;
struct CoverageEligibilityResponse_Error;
struct DetectedIssue;
struct DetectedIssue_Evidence;
struct DetectedIssue_Mitigation;
struct Device;
struct Device_UdiCarrier;
struct Device_DeviceName;
struct Device_Specialization;
struct Device_Version;
struct Device_Property;
struct DeviceDefinition;
struct DeviceDefinition_UdiDeviceIdentifier;
struct DeviceDefinition_DeviceName;
struct DeviceDefinition_Specialization;
struct DeviceDefinition_Capability;
struct DeviceDefinition_Property;
struct DeviceDefinition_Material;
struct DeviceMetric;
struct DeviceMetric_Calibration;
struct DeviceRequest;
struct DeviceRequest_Parameter;
struct DeviceUseStatement;
struct DiagnosticReport;
struct DiagnosticReport_Media;
struct DocumentManifest;
struct DocumentManifest_Related;
struct DocumentReference;
struct DocumentReference_RelatesTo;
struct DocumentReference_Content;
struct DocumentReference_Context;
struct DomainResource;
struct EffectEvidenceSynthesis;
struct EffectEvidenceSynthesis_SampleSize;
struct EffectEvidenceSynthesis_ResultsByExposure;
struct EffectEvidenceSynthesis_EffectEstimate;
struct EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate;
struct EffectEvidenceSynthesis_Certainty;
struct EffectEvidenceSynthesis_Certainty_CertaintySubcomponent;
struct Encounter;
struct Encounter_StatusHistory;
struct Encounter_ClassHistory;
struct Encounter_Participant;
struct Encounter_Diagnosis;
struct Encounter_Hospitalization;
struct Encounter_Location;
struct Endpoint;
struct EnrollmentRequest;
struct EnrollmentResponse;
struct EpisodeOfCare;
struct EpisodeOfCare_StatusHistory;
struct EpisodeOfCare_Diagnosis;
struct EventDefinition;
struct Evidence;
struct EvidenceVariable;
struct EvidenceVariable_Characteristic;
struct ExampleScenario;
struct ExampleScenario_Actor;
struct ExampleScenario_Instance;
struct ExampleScenario_Instance_Version;
struct ExampleScenario_Instance_ContainedInstance;
struct ExampleScenario_Process;
struct ExampleScenario_Process_Step;
struct ExampleScenario_Process_Step_Operation;
struct ExampleScenario_Process_Step_Alternative;
struct ExplanationOfBenefit;
struct ExplanationOfBenefit_Related;
struct ExplanationOfBenefit_Payee;
struct ExplanationOfBenefit_CareTeam;
struct ExplanationOfBenefit_SupportingInfo;
struct ExplanationOfBenefit_Diagnosis;
struct ExplanationOfBenefit_Procedure;
struct ExplanationOfBenefit_Insurance;
struct ExplanationOfBenefit_Accident;
struct ExplanationOfBenefit_Item;
struct ExplanationOfBenefit_Item_Adjudication;
struct ExplanationOfBenefit_Item_Detail;
struct ExplanationOfBenefit_Item_Detail_SubDetail;
struct ExplanationOfBenefit_AddItem;
struct ExplanationOfBenefit_AddItem_Detail;
struct ExplanationOfBenefit_AddItem_Detail_SubDetail;
struct ExplanationOfBenefit_Total;
struct ExplanationOfBenefit_Payment;
struct ExplanationOfBenefit_ProcessNote;
struct ExplanationOfBenefit_BenefitBalance;
struct ExplanationOfBenefit_BenefitBalance_Financial;
struct FamilyMemberHistory;
struct FamilyMemberHistory_Condition;
struct Flag;
struct Goal;
struct Goal_Target;
struct GraphDefinition;
struct GraphDefinition_Link;
struct GraphDefinition_Link_Target;
struct GraphDefinition_Link_Target_Compartment;
struct Group;
struct Group_Characteristic;
struct Group_Member;
struct GuidanceResponse;
struct HealthcareService;
struct HealthcareService_Eligibility;
struct HealthcareService_AvailableTime;
struct HealthcareService_NotAvailable;
struct ImagingStudy;
struct ImagingStudy_Series;
struct ImagingStudy_Series_Performer;
struct ImagingStudy_Series_Instance;
struct Immunization;
struct Immunization_Performer;
struct Immunization_Education;
struct Immunization_Reaction;
struct Immunization_ProtocolApplied;
struct ImmunizationEvaluation;
struct ImmunizationRecommendation;
struct ImmunizationRecommendation_Recommendation;
struct ImmunizationRecommendation_Recommendation_DateCriterion;
struct ImplementationGuide;
struct ImplementationGuide_DependsOn;
struct ImplementationGuide_Global;
struct ImplementationGuide_Definition;
struct ImplementationGuide_Definition_Grouping;
struct ImplementationGuide_Definition_Resource;
struct ImplementationGuide_Definition_Page;
struct ImplementationGuide_Definition_Parameter;
struct ImplementationGuide_Definition_Template;
struct ImplementationGuide_Manifest;
struct ImplementationGuide_Manifest_Resource;
struct ImplementationGuide_Manifest_Page;
struct InsurancePlan;
struct InsurancePlan_Contact;
struct InsurancePlan_Coverage;
struct InsurancePlan_Coverage_Benefit;
struct InsurancePlan_Coverage_Benefit_Limit;
struct InsurancePlan_Plan;
struct InsurancePlan_Plan_GeneralCost;
struct InsurancePlan_Plan_SpecificCost;
struct InsurancePlan_Plan_SpecificCost_Benefit;
struct InsurancePlan_Plan_SpecificCost_Benefit_Cost;
struct Invoice;
struct Invoice_Participant;
struct Invoice_LineItem;
struct Invoice_LineItem_PriceComponent;
struct Library;
struct Linkage;
struct Linkage_Item;
struct List;
struct List_Entry;
struct Location;
struct Location_Position;
struct Location_HoursOfOperation;
struct Measure;
struct Measure_Group;
struct Measure_Group_Population;
struct Measure_Group_Stratifier;
struct Measure_Group_Stratifier_Component;
struct Measure_SupplementalData;
struct MeasureReport;
struct MeasureReport_Group;
struct MeasureReport_Group_Population;
struct MeasureReport_Group_Stratifier;
struct MeasureReport_Group_Stratifier_Stratum;
struct MeasureReport_Group_Stratifier_Stratum_Component;
struct MeasureReport_Group_Stratifier_Stratum_Population;
struct Media;
struct Medication;
struct Medication_Ingredient;
struct Medication_Batch;
struct MedicationAdministration;
struct MedicationAdministration_Performer;
struct MedicationAdministration_Dosage;
struct MedicationDispense;
struct MedicationDispense_Performer;
struct MedicationDispense_Substitution;
struct MedicationKnowledge;
struct MedicationKnowledge_RelatedMedicationKnowledge;
struct MedicationKnowledge_Monograph;
struct MedicationKnowledge_Ingredient;
struct MedicationKnowledge_Cost;
struct MedicationKnowledge_MonitoringProgram;
struct MedicationKnowledge_AdministrationGuidelines;
struct MedicationKnowledge_AdministrationGuidelines_Dosage;
struct MedicationKnowledge_AdministrationGuidelines_PatientCharacteristics;
struct MedicationKnowledge_MedicineClassification;
struct MedicationKnowledge_Packaging;
struct MedicationKnowledge_DrugCharacteristic;
struct MedicationKnowledge_Regulatory;
struct MedicationKnowledge_Regulatory_Substitution;
struct MedicationKnowledge_Regulatory_Schedule;
struct MedicationKnowledge_Regulatory_MaxDispense;
struct MedicationKnowledge_Kinetics;
struct MedicationRequest;
struct MedicationRequest_DispenseRequest;
struct MedicationRequest_DispenseRequest_InitialFill;
struct MedicationRequest_Substitution;
struct MedicationStatement;
struct MedicinalProduct;
struct MedicinalProduct_Name;
struct MedicinalProduct_Name_NamePart;
struct MedicinalProduct_Name_CountryLanguage;
struct MedicinalProduct_ManufacturingBusinessOperation;
struct MedicinalProduct_SpecialDesignation;
struct MedicinalProductAuthorization;
struct MedicinalProductAuthorization_JurisdictionalAuthorization;
struct MedicinalProductAuthorization_Procedure;
struct MedicinalProductContraindication;
struct MedicinalProductContraindication_OtherTherapy;
struct MedicinalProductIndication;
struct MedicinalProductIndication_OtherTherapy;
struct MedicinalProductIngredient;
struct MedicinalProductIngredient_SpecifiedSubstance;
struct MedicinalProductIngredient_SpecifiedSubstance_Strength;
struct MedicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength;
struct MedicinalProductIngredient_Substance;
struct MedicinalProductInteraction;
struct MedicinalProductInteraction_Interactant;
struct MedicinalProductManufactured;
struct MedicinalProductPackaged;
struct MedicinalProductPackaged_BatchIdentifier;
struct MedicinalProductPackaged_PackageItem;
struct MedicinalProductPharmaceutical;
struct MedicinalProductPharmaceutical_Characteristics;
struct MedicinalProductPharmaceutical_RouteOfAdministration;
struct MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies;
struct MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod;
struct MedicinalProductUndesirableEffect;
struct MessageDefinition;
struct MessageDefinition_Focus;
struct MessageDefinition_AllowedResponse;
struct MessageHeader;
struct MessageHeader_Destination;
struct MessageHeader_Source;
struct MessageHeader_Response;
struct MolecularSequence;
struct MolecularSequence_ReferenceSeq;
struct MolecularSequence_Variant;
struct MolecularSequence_Quality;
struct MolecularSequence_Quality_Roc;
struct MolecularSequence_Repository;
struct MolecularSequence_StructureVariant;
struct MolecularSequence_StructureVariant_Outer;
struct MolecularSequence_StructureVariant_Inner;
struct NamingSystem;
struct NamingSystem_UniqueId;
struct NutritionOrder;
struct NutritionOrder_OralDiet;
struct NutritionOrder_OralDiet_Nutrient;
struct NutritionOrder_OralDiet_Texture;
struct NutritionOrder_Supplement;
struct NutritionOrder_EnteralFormula;
struct NutritionOrder_EnteralFormula_Administration;
struct Observation;
struct Observation_ReferenceRange;
struct Observation_Component;
struct ObservationDefinition;
struct ObservationDefinition_QuantitativeDetails;
struct ObservationDefinition_QualifiedInterval;
struct OperationDefinition;
struct OperationDefinition_Parameter;
struct OperationDefinition_Parameter_Binding;
struct OperationDefinition_Parameter_ReferencedFrom;
struct OperationDefinition_Overload;
struct OperationOutcome;
struct OperationOutcome_Issue;
struct Organization;
struct Organization_Contact;
struct OrganizationAffiliation;
struct Parameters;
struct Parameters_Parameter;
struct Patient;
struct Patient_Contact;
struct Patient_Communication;
struct Patient_Link;
struct PaymentNotice;
struct PaymentReconciliation;
struct PaymentReconciliation_Detail;
struct PaymentReconciliation_ProcessNote;
struct Person;
struct Person_Link;
struct PlanDefinition;
struct PlanDefinition_Goal;
struct PlanDefinition_Goal_Target;
struct PlanDefinition_Action;
struct PlanDefinition_Action_Condition;
struct PlanDefinition_Action_RelatedAction;
struct PlanDefinition_Action_Participant;
struct PlanDefinition_Action_DynamicValue;
struct Practitioner;
struct Practitioner_Qualification;
struct PractitionerRole;
struct PractitionerRole_AvailableTime;
struct PractitionerRole_NotAvailable;
struct Procedure;
struct Procedure_Performer;
struct Procedure_FocalDevice;
struct Provenance;
struct Provenance_Agent;
struct Provenance_Entity;
struct Questionnaire;
struct Questionnaire_Item;
struct Questionnaire_Item_EnableWhen;
struct Questionnaire_Item_AnswerOption;
struct Questionnaire_Item_Initial;
struct QuestionnaireResponse;
struct QuestionnaireResponse_Item;
struct QuestionnaireResponse_Item_Answer;
struct RelatedPerson;
struct RelatedPerson_Communication;
struct RequestGroup;
struct RequestGroup_Action;
struct RequestGroup_Action_Condition;
struct RequestGroup_Action_RelatedAction;
struct ResearchDefinition;
struct ResearchElementDefinition;
struct ResearchElementDefinition_Characteristic;
struct ResearchStudy;
struct ResearchStudy_Arm;
struct ResearchStudy_Objective;
struct ResearchSubject;
struct RiskAssessment;
struct RiskAssessment_Prediction;
struct RiskEvidenceSynthesis;
struct RiskEvidenceSynthesis_SampleSize;
struct RiskEvidenceSynthesis_RiskEstimate;
struct RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate;
struct RiskEvidenceSynthesis_Certainty;
struct RiskEvidenceSynthesis_Certainty_CertaintySubcomponent;
struct Schedule;
struct SearchParameter;
struct SearchParameter_Component;
struct ServiceRequest;
struct Slot;
struct Specimen;
struct Specimen_Collection;
struct Specimen_Processing;
struct Specimen_Container;
struct SpecimenDefinition;
struct SpecimenDefinition_TypeTested;
struct SpecimenDefinition_TypeTested_Container;
struct SpecimenDefinition_TypeTested_Container_Additive;
struct SpecimenDefinition_TypeTested_Handling;
struct StructureDefinition;
struct StructureDefinition_Mapping;
struct StructureDefinition_Context;
struct StructureDefinition_Snapshot;
struct StructureDefinition_Differential;
struct StructureMap;
struct StructureMap_Structure;
struct StructureMap_Group;
struct StructureMap_Group_Input;
struct StructureMap_Group_Rule;
struct StructureMap_Group_Rule_Source;
struct StructureMap_Group_Rule_Target;
struct StructureMap_Group_Rule_Target_Parameter;
struct StructureMap_Group_Rule_Dependent;
struct Subscription;
struct Subscription_Channel;
struct Substance;
struct Substance_Instance;
struct Substance_Ingredient;
struct SubstanceNucleicAcid;
struct SubstanceNucleicAcid_Subunit;
struct SubstanceNucleicAcid_Subunit_Linkage;
struct SubstanceNucleicAcid_Subunit_Sugar;
struct SubstancePolymer;
struct SubstancePolymer_MonomerSet;
struct SubstancePolymer_MonomerSet_StartingMaterial;
struct SubstancePolymer_Repeat;
struct SubstancePolymer_Repeat_RepeatUnit;
struct SubstancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation;
struct SubstancePolymer_Repeat_RepeatUnit_StructuralRepresentation;
struct SubstanceProtein;
struct SubstanceProtein_Subunit;
struct SubstanceReferenceInformation;
struct SubstanceReferenceInformation_Gene;
struct SubstanceReferenceInformation_GeneElement;
struct SubstanceReferenceInformation_Classification;
struct SubstanceReferenceInformation_Target;
struct SubstanceSourceMaterial;
struct SubstanceSourceMaterial_FractionDescription;
struct SubstanceSourceMaterial_Organism;
struct SubstanceSourceMaterial_Organism_Author;
struct SubstanceSourceMaterial_Organism_Hybrid;
struct SubstanceSourceMaterial_Organism_OrganismGeneral;
struct SubstanceSourceMaterial_PartDescription;
struct SubstanceSpecification;
struct SubstanceSpecification_Moiety;
struct SubstanceSpecification_Property;
struct SubstanceSpecification_Structure;
struct SubstanceSpecification_Structure_Isotope;
struct SubstanceSpecification_Structure_Isotope_MolecularWeight;
struct SubstanceSpecification_Structure_Representation;
struct SubstanceSpecification_Code;
struct SubstanceSpecification_Name;
struct SubstanceSpecification_Name_Official;
struct SubstanceSpecification_Relationship;
struct SupplyDelivery;
struct SupplyDelivery_SuppliedItem;
struct SupplyRequest;
struct SupplyRequest_Parameter;
struct Task;
struct Task_Restriction;
struct Task_Input;
struct Task_Output;
struct TerminologyCapabilities;
struct TerminologyCapabilities_Software;
struct TerminologyCapabilities_Implementation;
struct TerminologyCapabilities_CodeSystem;
struct TerminologyCapabilities_CodeSystem_Version;
struct TerminologyCapabilities_CodeSystem_Version_Filter;
struct TerminologyCapabilities_Expansion;
struct TerminologyCapabilities_Expansion_Parameter;
struct TerminologyCapabilities_ValidateCode;
struct TerminologyCapabilities_Translation;
struct TerminologyCapabilities_Closure;
struct TestReport;
struct TestReport_Participant;
struct TestReport_Setup;
struct TestReport_Setup_Action;
struct TestReport_Setup_Action_Operation;
struct TestReport_Setup_Action_Assert;
struct TestReport_Test;
struct TestReport_Test_Action;
struct TestReport_Teardown;
struct TestReport_Teardown_Action;
struct TestScript;
struct TestScript_Origin;
struct TestScript_Destination;
struct TestScript_Metadata;
struct TestScript_Metadata_Link;
struct TestScript_Metadata_Capability;
struct TestScript_Fixture;
struct TestScript_Variable;
struct TestScript_Setup;
struct TestScript_Setup_Action;
struct TestScript_Setup_Action_Operation;
struct TestScript_Setup_Action_Operation_RequestHeader;
struct TestScript_Setup_Action_Assert;
struct TestScript_Test;
struct TestScript_Test_Action;
struct TestScript_Teardown;
struct TestScript_Teardown_Action;
struct ValueSet;
struct ValueSet_Compose;
struct ValueSet_Compose_Include;
struct ValueSet_Compose_Include_Concept;
struct ValueSet_Compose_Include_Concept_Designation;
struct ValueSet_Compose_Include_Filter;
struct ValueSet_Expansion;
struct ValueSet_Expansion_Parameter;
struct ValueSet_Expansion_Contains;
struct VerificationResult;
struct VerificationResult_PrimarySource;
struct VerificationResult_Attestation;
struct VerificationResult_Validator;
struct VisionPrescription;
struct VisionPrescription_LensSpecification;
struct VisionPrescription_LensSpecification_Prism;
struct MetadataResource;
struct Element;
struct BackboneElement;
struct Address;
struct Age;
struct Annotation;
struct Attachment;
struct CodeableConcept;
struct Coding;
struct ContactDetail;
struct ContactPoint;
struct Contributor;
struct Count;
struct DataRequirement;
struct DataRequirement_CodeFilter;
struct DataRequirement_DateFilter;
struct DataRequirement_Sort;
struct Distance;
struct Dosage;
struct Dosage_DoseAndRate;
struct Duration;
struct ElementDefinition;
struct ElementDefinition_Slicing;
struct ElementDefinition_Slicing_Discriminator;
struct ElementDefinition_Base;
struct ElementDefinition_Type;
struct ElementDefinition_Example;
struct ElementDefinition_Constraint;
struct ElementDefinition_Binding;
struct ElementDefinition_Mapping;
struct Expression;
struct Extension;
struct HumanName;
struct Identifier;
struct MarketingStatus;
struct Meta;
struct Money;
struct Narrative;
struct ParameterDefinition;
struct Period;
struct Population;
struct ProdCharacteristic;
struct ProductShelfLife;
struct Quantity;
struct Range;
struct Ratio;
struct Reference;
struct RelatedArtifact;
struct SampledData;
struct Signature;
struct SubstanceAmount;
struct SubstanceAmount_ReferenceRange;
struct Timing;
struct Timing_Repeat;
struct TriggerDefinition;
struct UsageContext;
struct MoneyQuantity;
struct SimpleQuantity;
struct Shareablemeasure;
struct Servicerequest_genetics;
struct Groupdefinition;
struct Actualgroup;
struct Familymemberhistory_genetic;
struct Shareableactivitydefinition;
struct Cdshooksrequestgroup;
struct Provenance_relevant_history;
struct Cqf_questionnaire;
struct Shareablevalueset;
struct Picoelement;
struct Shareablecodesystem;
struct Cdshooksguidanceresponse;
struct Devicemetricobservation;
struct Observation_genetics;
struct Vitalsigns;
struct Bodyweight;
struct Vitalspanel;
struct Bodyheight;
struct Resprate;
struct Heartrate;
struct Bodytemp;
struct Headcircum;
struct Oxygensat;
struct Bmi;
struct Bp;
struct Shareablelibrary;
struct Cqllibrary;
struct Lipidprofile;
struct Cholesterol;
struct Triglyceride;
struct Hdlcholesterol;
struct Ldlcholesterol;
struct Diagnosticreport_genetics;
struct Hlaresult;
struct Synthesis;
struct Clinicaldocument;
struct Catalog;
struct Shareableplandefinition;
struct Computableplandefinition;
struct Cdshooksserviceplandefinition;
struct Elementdefinition_de;
struct Ehrsrle_auditevent;
struct Ehrsrle_provenance;
struct ViewDefinition;
struct ViewDefinition_Constant;
struct ViewDefinition_Select;
struct ViewDefinition_Select_Column;
struct ViewDefinition_Select_Column_Tag;
struct ViewDefinition_Where;
struct Resource {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
};
struct Account {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	CodeableConcept* _type;
	NullableString8 _name;
	size_t _subject_count;
	Reference** _subject;
	Period* _servicePeriod;
	size_t _coverage_count;
	Account_Coverage** _coverage;
	Reference* _owner;
	NullableString8 _description;
	size_t _guarantor_count;
	Account_Guarantor** _guarantor;
	Reference* _partOf;
};
struct Account_Coverage {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _coverage;
	NullableInt32 _priority;
};
struct Account_Guarantor {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _party;
	NullableBoolean _onHold;
	Period* _period;
};
struct ActivityDefinition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _subtitle;
	NullableString8 _status;
	NullableBoolean _experimental;
	union {
		CodeableConcept* _subjectCodeableConcept;
		Reference* _subjectReference;
	} _subject;

	enum class _subjectType {
		CodeableConcept,
		Reference
	};
_subjectType _subject_type;

	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _usage;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _topic_count;
	CodeableConcept** _topic;
	size_t _author_count;
	ContactDetail** _author;
	size_t _editor_count;
	ContactDetail** _editor;
	size_t _reviewer_count;
	ContactDetail** _reviewer;
	size_t _endorser_count;
	ContactDetail** _endorser;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	size_t _library_count;
	NullableString8* _library;
	NullableString8 _kind;
	NullableString8 _profile;
	CodeableConcept* _code;
	NullableString8 _intent;
	NullableString8 _priority;
	NullableBoolean _doNotPerform;
	union {
		Timing* _timingTiming;
		ISO8601_Time _timingDateTime;
		Age* _timingAge;
		Period* _timingPeriod;
		Range* _timingRange;
		Duration* _timingDuration;
	} _timing;

	enum class _timingType {
		Timing,
		DateTime,
		Age,
		Period,
		Range,
		Duration
	};
_timingType _timing_type;

	Reference* _location;
	size_t _participant_count;
	ActivityDefinition_Participant** _participant;
	union {
		Reference* _productReference;
		CodeableConcept* _productCodeableConcept;
	} _product;

	enum class _productType {
		Reference,
		CodeableConcept
	};
_productType _product_type;

	Quantity* _quantity;
	size_t _dosage_count;
	Dosage** _dosage;
	size_t _bodySite_count;
	CodeableConcept** _bodySite;
	size_t _specimenRequirement_count;
	Reference** _specimenRequirement;
	size_t _observationRequirement_count;
	Reference** _observationRequirement;
	size_t _observationResultRequirement_count;
	Reference** _observationResultRequirement;
	NullableString8 _transform;
	size_t _dynamicValue_count;
	ActivityDefinition_DynamicValue** _dynamicValue;
};
struct ActivityDefinition_Participant {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _type;
	CodeableConcept* _role;
};
struct ActivityDefinition_DynamicValue {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _path;
	Expression* _expression;
};
struct AdverseEvent {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _identifier;
	NullableString8 _actuality;
	size_t _category_count;
	CodeableConcept** _category;
	CodeableConcept* _event;
	Reference* _subject;
	Reference* _encounter;
	ISO8601_Time _date;
	ISO8601_Time _detected;
	ISO8601_Time _recordedDate;
	size_t _resultingCondition_count;
	Reference** _resultingCondition;
	Reference* _location;
	CodeableConcept* _seriousness;
	CodeableConcept* _severity;
	CodeableConcept* _outcome;
	Reference* _recorder;
	size_t _contributor_count;
	Reference** _contributor;
	size_t _suspectEntity_count;
	AdverseEvent_SuspectEntity** _suspectEntity;
	size_t _subjectMedicalHistory_count;
	Reference** _subjectMedicalHistory;
	size_t _referenceDocument_count;
	Reference** _referenceDocument;
	size_t _study_count;
	Reference** _study;
};
struct AdverseEvent_SuspectEntity {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _instance;
	size_t _causality_count;
	AdverseEvent_SuspectEntity_Causality** _causality;
};
struct AdverseEvent_SuspectEntity_Causality {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _assessment;
	NullableString8 _productRelatedness;
	Reference* _author;
	CodeableConcept* _method;
};
struct AllergyIntolerance {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	CodeableConcept* _clinicalStatus;
	CodeableConcept* _verificationStatus;
	NullableString8 _type;
	size_t _category_count;
	NullableString8* _category;
	NullableString8 _criticality;
	CodeableConcept* _code;
	Reference* _patient;
	Reference* _encounter;
	union {
		ISO8601_Time _onsetDateTime;
		Age* _onsetAge;
		Period* _onsetPeriod;
		Range* _onsetRange;
		NullableString8 _onsetString;
	} _onset;

	enum class _onsetType {
		DateTime,
		Age,
		Period,
		Range,
		String
	};
_onsetType _onset_type;

	ISO8601_Time _recordedDate;
	Reference* _recorder;
	Reference* _asserter;
	ISO8601_Time _lastOccurrence;
	size_t _note_count;
	Annotation** _note;
	size_t _reaction_count;
	AllergyIntolerance_Reaction** _reaction;
};
struct AllergyIntolerance_Reaction {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _substance;
	size_t _manifestation_count;
	CodeableConcept** _manifestation;
	NullableString8 _description;
	ISO8601_Time _onset;
	NullableString8 _severity;
	CodeableConcept* _exposureRoute;
	size_t _note_count;
	Annotation** _note;
};
struct Appointment {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	CodeableConcept* _cancelationReason;
	size_t _serviceCategory_count;
	CodeableConcept** _serviceCategory;
	size_t _serviceType_count;
	CodeableConcept** _serviceType;
	size_t _specialty_count;
	CodeableConcept** _specialty;
	CodeableConcept* _appointmentType;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	NullableInt32 _priority;
	NullableString8 _description;
	size_t _supportingInformation_count;
	Reference** _supportingInformation;
	ISO8601_Time _start;
	ISO8601_Time _end;
	NullableInt32 _minutesDuration;
	size_t _slot_count;
	Reference** _slot;
	ISO8601_Time _created;
	NullableString8 _comment;
	NullableString8 _patientInstruction;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _participant_count;
	Appointment_Participant** _participant;
	size_t _requestedPeriod_count;
	Period** _requestedPeriod;
};
struct Appointment_Participant {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _type_count;
	CodeableConcept** _type;
	Reference* _actor;
	NullableString8 _required;
	NullableString8 _status;
	Period* _period;
};
struct AppointmentResponse {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	Reference* _appointment;
	ISO8601_Time _start;
	ISO8601_Time _end;
	size_t _participantType_count;
	CodeableConcept** _participantType;
	Reference* _actor;
	NullableString8 _participantStatus;
	NullableString8 _comment;
};
struct AuditEvent {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Coding* _type;
	size_t _subtype_count;
	Coding** _subtype;
	NullableString8 _action;
	Period* _period;
	ISO8601_Time _recorded;
	NullableString8 _outcome;
	NullableString8 _outcomeDesc;
	size_t _purposeOfEvent_count;
	CodeableConcept** _purposeOfEvent;
	size_t _agent_count;
	AuditEvent_Agent** _agent;
	AuditEvent_Source* _source;
	size_t _entity_count;
	AuditEvent_Entity** _entity;
};
struct AuditEvent_Agent {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	size_t _role_count;
	CodeableConcept** _role;
	Reference* _who;
	NullableString8 _altId;
	NullableString8 _name;
	NullableBoolean _requestor;
	Reference* _location;
	size_t _policy_count;
	NullableString8* _policy;
	Coding* _media;
	AuditEvent_Agent_Network* _network;
	size_t _purposeOfUse_count;
	CodeableConcept** _purposeOfUse;
};
struct AuditEvent_Agent_Network {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _address;
	NullableString8 _type;
};
struct AuditEvent_Source {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _site;
	Reference* _observer;
	size_t _type_count;
	Coding** _type;
};
struct AuditEvent_Entity {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _what;
	Coding* _type;
	Coding* _role;
	Coding* _lifecycle;
	size_t _securityLabel_count;
	Coding** _securityLabel;
	NullableString8 _name;
	NullableString8 _description;
	NullableString8 _query;
	size_t _detail_count;
	AuditEvent_Entity_Detail** _detail;
};
struct AuditEvent_Entity_Detail {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _type;
	union {
		NullableString8 _valueString;
		NullableString8 _valueBase64Binary;
	} _value;

	enum class _valueType {
		String,
		Base64Binary
	};
_valueType _value_type;

};
struct Basic {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	CodeableConcept* _code;
	Reference* _subject;
	ISO8601_Time _created;
	Reference* _author;
};
struct Binary {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	NullableString8 _contentType;
	Reference* _securityContext;
	NullableString8 _data;
};
struct BiologicallyDerivedProduct {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _productCategory;
	CodeableConcept* _productCode;
	NullableString8 _status;
	size_t _request_count;
	Reference** _request;
	NullableInt32 _quantity;
	size_t _parent_count;
	Reference** _parent;
	BiologicallyDerivedProduct_Collection* _collection;
	size_t _processing_count;
	BiologicallyDerivedProduct_Processing** _processing;
	BiologicallyDerivedProduct_Manipulation* _manipulation;
	size_t _storage_count;
	BiologicallyDerivedProduct_Storage** _storage;
};
struct BiologicallyDerivedProduct_Collection {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _collector;
	Reference* _source;
	union {
		ISO8601_Time _collectedDateTime;
		Period* _collectedPeriod;
	} _collected;

	enum class _collectedType {
		DateTime,
		Period
	};
_collectedType _collected_type;

};
struct BiologicallyDerivedProduct_Processing {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _description;
	CodeableConcept* _procedure;
	Reference* _additive;
	union {
		ISO8601_Time _timeDateTime;
		Period* _timePeriod;
	} _time;

	enum class _timeType {
		DateTime,
		Period
	};
_timeType _time_type;

};
struct BiologicallyDerivedProduct_Manipulation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _description;
	union {
		ISO8601_Time _timeDateTime;
		Period* _timePeriod;
	} _time;

	enum class _timeType {
		DateTime,
		Period
	};
_timeType _time_type;

};
struct BiologicallyDerivedProduct_Storage {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _description;
	NullableString8 _temperature;
	NullableString8 _scale;
	Period* _duration;
};
struct BodyStructure {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableBoolean _active;
	CodeableConcept* _morphology;
	CodeableConcept* _location;
	size_t _locationQualifier_count;
	CodeableConcept** _locationQualifier;
	NullableString8 _description;
	size_t _image_count;
	Attachment** _image;
	Reference* _patient;
};
struct Bundle {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Identifier* _identifier;
	NullableString8 _type;
	ISO8601_Time _timestamp;
	NullableInt32 _total;
	size_t _link_count;
	Bundle_Link** _link;
	size_t _entry_count;
	Bundle_Entry** _entry;
	Signature* _signature;
};
struct Bundle_Link {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _relation;
	NullableString8 _url;
};
struct Bundle_Entry {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _link_count;
	Bundle_Link** _link;
	NullableString8 _fullUrl;
	Resource* _resource;
	Bundle_Entry_Search* _search;
	Bundle_Entry_Request* _request;
	Bundle_Entry_Response* _response;
};
struct Bundle_Entry_Search {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _mode;
	NullableString8 _score;
};
struct Bundle_Entry_Request {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _method;
	NullableString8 _url;
	NullableString8 _ifNoneMatch;
	ISO8601_Time _ifModifiedSince;
	NullableString8 _ifMatch;
	NullableString8 _ifNoneExist;
};
struct Bundle_Entry_Response {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _status;
	NullableString8 _location;
	NullableString8 _etag;
	ISO8601_Time _lastModified;
	Resource* _outcome;
};
struct CapabilityStatement {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _status;
	NullableBoolean _experimental;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _copyright;
	NullableString8 _kind;
	size_t _instantiates_count;
	NullableString8* _instantiates;
	size_t _imports_count;
	NullableString8* _imports;
	CapabilityStatement_Software* _software;
	CapabilityStatement_Implementation* _implementation;
	NullableString8 _fhirVersion;
	size_t _format_count;
	NullableString8* _format;
	size_t _patchFormat_count;
	NullableString8* _patchFormat;
	size_t _implementationGuide_count;
	NullableString8* _implementationGuide;
	size_t _rest_count;
	CapabilityStatement_Rest** _rest;
	size_t _messaging_count;
	CapabilityStatement_Messaging** _messaging;
	size_t _document_count;
	CapabilityStatement_Document** _document;
};
struct CapabilityStatement_Software {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	NullableString8 _version;
	ISO8601_Time _releaseDate;
};
struct CapabilityStatement_Implementation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _description;
	NullableString8 _url;
	Reference* _custodian;
};
struct CapabilityStatement_Rest {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _mode;
	NullableString8 _documentation;
	CapabilityStatement_Rest_Security* _security;
	size_t _resource_count;
	CapabilityStatement_Rest_Resource** _resource;
	size_t _interaction_count;
	CapabilityStatement_Rest_Interaction** _interaction;
	size_t _searchParam_count;
	CapabilityStatement_Rest_Resource_SearchParam** _searchParam;
	size_t _operation_count;
	CapabilityStatement_Rest_Resource_Operation** _operation;
	size_t _compartment_count;
	NullableString8* _compartment;
};
struct CapabilityStatement_Rest_Security {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableBoolean _cors;
	size_t _service_count;
	CodeableConcept** _service;
	NullableString8 _description;
};
struct CapabilityStatement_Rest_Resource {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _type;
	NullableString8 _profile;
	size_t _supportedProfile_count;
	NullableString8* _supportedProfile;
	NullableString8 _documentation;
	size_t _interaction_count;
	CapabilityStatement_Rest_Resource_Interaction** _interaction;
	NullableString8 _versioning;
	NullableBoolean _readHistory;
	NullableBoolean _updateCreate;
	NullableBoolean _conditionalCreate;
	NullableString8 _conditionalRead;
	NullableBoolean _conditionalUpdate;
	NullableString8 _conditionalDelete;
	size_t _referencePolicy_count;
	NullableString8* _referencePolicy;
	size_t _searchInclude_count;
	NullableString8* _searchInclude;
	size_t _searchRevInclude_count;
	NullableString8* _searchRevInclude;
	size_t _searchParam_count;
	CapabilityStatement_Rest_Resource_SearchParam** _searchParam;
	size_t _operation_count;
	CapabilityStatement_Rest_Resource_Operation** _operation;
};
struct CapabilityStatement_Rest_Resource_Interaction {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _code;
	NullableString8 _documentation;
};
struct CapabilityStatement_Rest_Resource_SearchParam {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	NullableString8 _definition;
	NullableString8 _type;
	NullableString8 _documentation;
};
struct CapabilityStatement_Rest_Resource_Operation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	NullableString8 _definition;
	NullableString8 _documentation;
};
struct CapabilityStatement_Rest_Interaction {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _code;
	NullableString8 _documentation;
};
struct CapabilityStatement_Messaging {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _endpoint_count;
	CapabilityStatement_Messaging_Endpoint** _endpoint;
	NullableInt32 _reliableCache;
	NullableString8 _documentation;
	size_t _supportedMessage_count;
	CapabilityStatement_Messaging_SupportedMessage** _supportedMessage;
};
struct CapabilityStatement_Messaging_Endpoint {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Coding* _protocol;
	NullableString8 _address;
};
struct CapabilityStatement_Messaging_SupportedMessage {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _mode;
	NullableString8 _definition;
};
struct CapabilityStatement_Document {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _mode;
	NullableString8 _documentation;
	NullableString8 _profile;
};
struct CarePlan {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _instantiatesCanonical_count;
	NullableString8* _instantiatesCanonical;
	size_t _instantiatesUri_count;
	NullableString8* _instantiatesUri;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _replaces_count;
	Reference** _replaces;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	NullableString8 _intent;
	size_t _category_count;
	CodeableConcept** _category;
	NullableString8 _title;
	NullableString8 _description;
	Reference* _subject;
	Reference* _encounter;
	Period* _period;
	ISO8601_Time _created;
	Reference* _author;
	size_t _contributor_count;
	Reference** _contributor;
	size_t _careTeam_count;
	Reference** _careTeam;
	size_t _addresses_count;
	Reference** _addresses;
	size_t _supportingInfo_count;
	Reference** _supportingInfo;
	size_t _goal_count;
	Reference** _goal;
	size_t _activity_count;
	CarePlan_Activity** _activity;
	size_t _note_count;
	Annotation** _note;
};
struct CarePlan_Activity {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _outcomeCodeableConcept_count;
	CodeableConcept** _outcomeCodeableConcept;
	size_t _outcomeReference_count;
	Reference** _outcomeReference;
	size_t _progress_count;
	Annotation** _progress;
	Reference* _reference;
	CarePlan_Activity_Detail* _detail;
};
struct CarePlan_Activity_Detail {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _kind;
	size_t _instantiatesCanonical_count;
	NullableString8* _instantiatesCanonical;
	size_t _instantiatesUri_count;
	NullableString8* _instantiatesUri;
	CodeableConcept* _code;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	size_t _goal_count;
	Reference** _goal;
	NullableString8 _status;
	CodeableConcept* _statusReason;
	NullableBoolean _doNotPerform;
	union {
		Timing* _scheduledTiming;
		Period* _scheduledPeriod;
		NullableString8 _scheduledString;
	} _scheduled;

	enum class _scheduledType {
		Timing,
		Period,
		String
	};
_scheduledType _scheduled_type;

	Reference* _location;
	size_t _performer_count;
	Reference** _performer;
	union {
		CodeableConcept* _productCodeableConcept;
		Reference* _productReference;
	} _product;

	enum class _productType {
		CodeableConcept,
		Reference
	};
_productType _product_type;

	Quantity* _dailyAmount;
	Quantity* _quantity;
	NullableString8 _description;
};
struct CareTeam {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	NullableString8 _name;
	Reference* _subject;
	Reference* _encounter;
	Period* _period;
	size_t _participant_count;
	CareTeam_Participant** _participant;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	size_t _managingOrganization_count;
	Reference** _managingOrganization;
	size_t _telecom_count;
	ContactPoint** _telecom;
	size_t _note_count;
	Annotation** _note;
};
struct CareTeam_Participant {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _role_count;
	CodeableConcept** _role;
	Reference* _member;
	Reference* _onBehalfOf;
	Period* _period;
};
struct CatalogEntry {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	CodeableConcept* _type;
	NullableBoolean _orderable;
	Reference* _referencedItem;
	size_t _additionalIdentifier_count;
	Identifier** _additionalIdentifier;
	size_t _classification_count;
	CodeableConcept** _classification;
	NullableString8 _status;
	Period* _validityPeriod;
	ISO8601_Time _validTo;
	ISO8601_Time _lastUpdated;
	size_t _additionalCharacteristic_count;
	CodeableConcept** _additionalCharacteristic;
	size_t _additionalClassification_count;
	CodeableConcept** _additionalClassification;
	size_t _relatedEntry_count;
	CatalogEntry_RelatedEntry** _relatedEntry;
};
struct CatalogEntry_RelatedEntry {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _relationtype;
	Reference* _item;
};
struct ChargeItem {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _definitionUri_count;
	NullableString8* _definitionUri;
	size_t _definitionCanonical_count;
	NullableString8* _definitionCanonical;
	NullableString8 _status;
	size_t _partOf_count;
	Reference** _partOf;
	CodeableConcept* _code;
	Reference* _subject;
	Reference* _context;
	union {
		ISO8601_Time _occurrenceDateTime;
		Period* _occurrencePeriod;
		Timing* _occurrenceTiming;
	} _occurrence;

	enum class _occurrenceType {
		DateTime,
		Period,
		Timing
	};
_occurrenceType _occurrence_type;

	size_t _performer_count;
	ChargeItem_Performer** _performer;
	Reference* _performingOrganization;
	Reference* _requestingOrganization;
	Reference* _costCenter;
	Quantity* _quantity;
	size_t _bodysite_count;
	CodeableConcept** _bodysite;
	NullableString8 _factorOverride;
	Money* _priceOverride;
	NullableString8 _overrideReason;
	Reference* _enterer;
	ISO8601_Time _enteredDate;
	size_t _reason_count;
	CodeableConcept** _reason;
	size_t _service_count;
	Reference** _service;
	union {
		Reference* _productReference;
		CodeableConcept* _productCodeableConcept;
	} _product;

	enum class _productType {
		Reference,
		CodeableConcept
	};
_productType _product_type;

	size_t _account_count;
	Reference** _account;
	size_t _note_count;
	Annotation** _note;
	size_t _supportingInformation_count;
	Reference** _supportingInformation;
};
struct ChargeItem_Performer {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _function;
	Reference* _actor;
};
struct ChargeItemDefinition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _title;
	size_t _derivedFromUri_count;
	NullableString8* _derivedFromUri;
	size_t _partOf_count;
	NullableString8* _partOf;
	size_t _replaces_count;
	NullableString8* _replaces;
	NullableString8 _status;
	NullableBoolean _experimental;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	CodeableConcept* _code;
	size_t _instance_count;
	Reference** _instance;
	size_t _applicability_count;
	ChargeItemDefinition_Applicability** _applicability;
	size_t _propertyGroup_count;
	ChargeItemDefinition_PropertyGroup** _propertyGroup;
};
struct ChargeItemDefinition_Applicability {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _description;
	NullableString8 _language;
	NullableString8 _expression;
};
struct ChargeItemDefinition_PropertyGroup {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _applicability_count;
	ChargeItemDefinition_Applicability** _applicability;
	size_t _priceComponent_count;
	ChargeItemDefinition_PropertyGroup_PriceComponent** _priceComponent;
};
struct ChargeItemDefinition_PropertyGroup_PriceComponent {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _type;
	CodeableConcept* _code;
	NullableString8 _factor;
	Money* _amount;
};
struct Claim {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	CodeableConcept* _type;
	CodeableConcept* _subType;
	NullableString8 _use;
	Reference* _patient;
	Period* _billablePeriod;
	ISO8601_Time _created;
	Reference* _enterer;
	Reference* _insurer;
	Reference* _provider;
	CodeableConcept* _priority;
	CodeableConcept* _fundsReserve;
	size_t _related_count;
	Claim_Related** _related;
	Reference* _prescription;
	Reference* _originalPrescription;
	Claim_Payee* _payee;
	Reference* _referral;
	Reference* _facility;
	size_t _careTeam_count;
	Claim_CareTeam** _careTeam;
	size_t _supportingInfo_count;
	Claim_SupportingInfo** _supportingInfo;
	size_t _diagnosis_count;
	Claim_Diagnosis** _diagnosis;
	size_t _procedure_count;
	Claim_Procedure** _procedure;
	size_t _insurance_count;
	Claim_Insurance** _insurance;
	Claim_Accident* _accident;
	size_t _item_count;
	Claim_Item** _item;
	Money* _total;
};
struct Claim_Related {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _claim;
	CodeableConcept* _relationship;
	Identifier* _reference;
};
struct Claim_Payee {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	Reference* _party;
};
struct Claim_CareTeam {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _sequence;
	Reference* _provider;
	NullableBoolean _responsible;
	CodeableConcept* _role;
	CodeableConcept* _qualification;
};
struct Claim_SupportingInfo {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _sequence;
	CodeableConcept* _category;
	CodeableConcept* _code;
	union {
		ISO8601_Time _timingDate;
		Period* _timingPeriod;
	} _timing;

	enum class _timingType {
		Date,
		Period
	};
_timingType _timing_type;

	union {
		NullableBoolean _valueBoolean;
		NullableString8 _valueString;
		Quantity* _valueQuantity;
		Attachment* _valueAttachment;
		Reference* _valueReference;
	} _value;

	enum class _valueType {
		Boolean,
		String,
		Quantity,
		Attachment,
		Reference
	};
_valueType _value_type;

	CodeableConcept* _reason;
};
struct Claim_Diagnosis {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _sequence;
	union {
		CodeableConcept* _diagnosisCodeableConcept;
		Reference* _diagnosisReference;
	} _diagnosis;

	enum class _diagnosisType {
		CodeableConcept,
		Reference
	};
_diagnosisType _diagnosis_type;

	size_t _type_count;
	CodeableConcept** _type;
	CodeableConcept* _onAdmission;
	CodeableConcept* _packageCode;
};
struct Claim_Procedure {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _sequence;
	size_t _type_count;
	CodeableConcept** _type;
	ISO8601_Time _date;
	union {
		CodeableConcept* _procedureCodeableConcept;
		Reference* _procedureReference;
	} _procedure;

	enum class _procedureType {
		CodeableConcept,
		Reference
	};
_procedureType _procedure_type;

	size_t _udi_count;
	Reference** _udi;
};
struct Claim_Insurance {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _sequence;
	NullableBoolean _focal;
	Identifier* _identifier;
	Reference* _coverage;
	NullableString8 _businessArrangement;
	size_t _preAuthRef_count;
	NullableString8* _preAuthRef;
	Reference* _claimResponse;
};
struct Claim_Accident {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	ISO8601_Time _date;
	CodeableConcept* _type;
	union {
		Address* _locationAddress;
		Reference* _locationReference;
	} _location;

	enum class _locationType {
		Address,
		Reference
	};
_locationType _location_type;

};
struct Claim_Item {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _sequence;
	size_t _careTeamSequence_count;
	NullableInt32* _careTeamSequence;
	size_t _diagnosisSequence_count;
	NullableInt32* _diagnosisSequence;
	size_t _procedureSequence_count;
	NullableInt32* _procedureSequence;
	size_t _informationSequence_count;
	NullableInt32* _informationSequence;
	CodeableConcept* _revenue;
	CodeableConcept* _category;
	CodeableConcept* _productOrService;
	size_t _modifier_count;
	CodeableConcept** _modifier;
	size_t _programCode_count;
	CodeableConcept** _programCode;
	union {
		ISO8601_Time _servicedDate;
		Period* _servicedPeriod;
	} _serviced;

	enum class _servicedType {
		Date,
		Period
	};
_servicedType _serviced_type;

	union {
		CodeableConcept* _locationCodeableConcept;
		Address* _locationAddress;
		Reference* _locationReference;
	} _location;

	enum class _locationType {
		CodeableConcept,
		Address,
		Reference
	};
_locationType _location_type;

	Quantity* _quantity;
	Money* _unitPrice;
	NullableString8 _factor;
	Money* _net;
	size_t _udi_count;
	Reference** _udi;
	CodeableConcept* _bodySite;
	size_t _subSite_count;
	CodeableConcept** _subSite;
	size_t _encounter_count;
	Reference** _encounter;
	size_t _detail_count;
	Claim_Item_Detail** _detail;
};
struct Claim_Item_Detail {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _sequence;
	CodeableConcept* _revenue;
	CodeableConcept* _category;
	CodeableConcept* _productOrService;
	size_t _modifier_count;
	CodeableConcept** _modifier;
	size_t _programCode_count;
	CodeableConcept** _programCode;
	Quantity* _quantity;
	Money* _unitPrice;
	NullableString8 _factor;
	Money* _net;
	size_t _udi_count;
	Reference** _udi;
	size_t _subDetail_count;
	Claim_Item_Detail_SubDetail** _subDetail;
};
struct Claim_Item_Detail_SubDetail {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _sequence;
	CodeableConcept* _revenue;
	CodeableConcept* _category;
	CodeableConcept* _productOrService;
	size_t _modifier_count;
	CodeableConcept** _modifier;
	size_t _programCode_count;
	CodeableConcept** _programCode;
	Quantity* _quantity;
	Money* _unitPrice;
	NullableString8 _factor;
	Money* _net;
	size_t _udi_count;
	Reference** _udi;
};
struct ClaimResponse {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	CodeableConcept* _type;
	CodeableConcept* _subType;
	NullableString8 _use;
	Reference* _patient;
	ISO8601_Time _created;
	Reference* _insurer;
	Reference* _requestor;
	Reference* _request;
	NullableString8 _outcome;
	NullableString8 _disposition;
	NullableString8 _preAuthRef;
	Period* _preAuthPeriod;
	CodeableConcept* _payeeType;
	size_t _item_count;
	ClaimResponse_Item** _item;
	size_t _addItem_count;
	ClaimResponse_AddItem** _addItem;
	size_t _adjudication_count;
	ClaimResponse_Item_Adjudication** _adjudication;
	size_t _total_count;
	ClaimResponse_Total** _total;
	ClaimResponse_Payment* _payment;
	CodeableConcept* _fundsReserve;
	CodeableConcept* _formCode;
	Attachment* _form;
	size_t _processNote_count;
	ClaimResponse_ProcessNote** _processNote;
	size_t _communicationRequest_count;
	Reference** _communicationRequest;
	size_t _insurance_count;
	ClaimResponse_Insurance** _insurance;
	size_t _error_count;
	ClaimResponse_Error** _error;
};
struct ClaimResponse_Item {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _itemSequence;
	size_t _noteNumber_count;
	NullableInt32* _noteNumber;
	size_t _adjudication_count;
	ClaimResponse_Item_Adjudication** _adjudication;
	size_t _detail_count;
	ClaimResponse_Item_Detail** _detail;
};
struct ClaimResponse_Item_Adjudication {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _category;
	CodeableConcept* _reason;
	Money* _amount;
	NullableString8 _value;
};
struct ClaimResponse_Item_Detail {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _detailSequence;
	size_t _noteNumber_count;
	NullableInt32* _noteNumber;
	size_t _adjudication_count;
	ClaimResponse_Item_Adjudication** _adjudication;
	size_t _subDetail_count;
	ClaimResponse_Item_Detail_SubDetail** _subDetail;
};
struct ClaimResponse_Item_Detail_SubDetail {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _subDetailSequence;
	size_t _noteNumber_count;
	NullableInt32* _noteNumber;
	size_t _adjudication_count;
	ClaimResponse_Item_Adjudication** _adjudication;
};
struct ClaimResponse_AddItem {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _itemSequence_count;
	NullableInt32* _itemSequence;
	size_t _detailSequence_count;
	NullableInt32* _detailSequence;
	size_t _subdetailSequence_count;
	NullableInt32* _subdetailSequence;
	size_t _provider_count;
	Reference** _provider;
	CodeableConcept* _productOrService;
	size_t _modifier_count;
	CodeableConcept** _modifier;
	size_t _programCode_count;
	CodeableConcept** _programCode;
	union {
		ISO8601_Time _servicedDate;
		Period* _servicedPeriod;
	} _serviced;

	enum class _servicedType {
		Date,
		Period
	};
_servicedType _serviced_type;

	union {
		CodeableConcept* _locationCodeableConcept;
		Address* _locationAddress;
		Reference* _locationReference;
	} _location;

	enum class _locationType {
		CodeableConcept,
		Address,
		Reference
	};
_locationType _location_type;

	Quantity* _quantity;
	Money* _unitPrice;
	NullableString8 _factor;
	Money* _net;
	CodeableConcept* _bodySite;
	size_t _subSite_count;
	CodeableConcept** _subSite;
	size_t _noteNumber_count;
	NullableInt32* _noteNumber;
	size_t _adjudication_count;
	ClaimResponse_Item_Adjudication** _adjudication;
	size_t _detail_count;
	ClaimResponse_AddItem_Detail** _detail;
};
struct ClaimResponse_AddItem_Detail {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _productOrService;
	size_t _modifier_count;
	CodeableConcept** _modifier;
	Quantity* _quantity;
	Money* _unitPrice;
	NullableString8 _factor;
	Money* _net;
	size_t _noteNumber_count;
	NullableInt32* _noteNumber;
	size_t _adjudication_count;
	ClaimResponse_Item_Adjudication** _adjudication;
	size_t _subDetail_count;
	ClaimResponse_AddItem_Detail_SubDetail** _subDetail;
};
struct ClaimResponse_AddItem_Detail_SubDetail {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _productOrService;
	size_t _modifier_count;
	CodeableConcept** _modifier;
	Quantity* _quantity;
	Money* _unitPrice;
	NullableString8 _factor;
	Money* _net;
	size_t _noteNumber_count;
	NullableInt32* _noteNumber;
	size_t _adjudication_count;
	ClaimResponse_Item_Adjudication** _adjudication;
};
struct ClaimResponse_Total {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _category;
	Money* _amount;
};
struct ClaimResponse_Payment {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	Money* _adjustment;
	CodeableConcept* _adjustmentReason;
	ISO8601_Time _date;
	Money* _amount;
	Identifier* _identifier;
};
struct ClaimResponse_ProcessNote {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _number;
	NullableString8 _type;
	NullableString8 _text;
	CodeableConcept* _language;
};
struct ClaimResponse_Insurance {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _sequence;
	NullableBoolean _focal;
	Reference* _coverage;
	NullableString8 _businessArrangement;
	Reference* _claimResponse;
};
struct ClaimResponse_Error {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _itemSequence;
	NullableInt32 _detailSequence;
	NullableInt32 _subDetailSequence;
	CodeableConcept* _code;
};
struct ClinicalImpression {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	CodeableConcept* _statusReason;
	CodeableConcept* _code;
	NullableString8 _description;
	Reference* _subject;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period
	};
_effectiveType _effective_type;

	ISO8601_Time _date;
	Reference* _assessor;
	Reference* _previous;
	size_t _problem_count;
	Reference** _problem;
	size_t _investigation_count;
	ClinicalImpression_Investigation** _investigation;
	size_t _protocol_count;
	NullableString8* _protocol;
	NullableString8 _summary;
	size_t _finding_count;
	ClinicalImpression_Finding** _finding;
	size_t _prognosisCodeableConcept_count;
	CodeableConcept** _prognosisCodeableConcept;
	size_t _prognosisReference_count;
	Reference** _prognosisReference;
	size_t _supportingInfo_count;
	Reference** _supportingInfo;
	size_t _note_count;
	Annotation** _note;
};
struct ClinicalImpression_Investigation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	size_t _item_count;
	Reference** _item;
};
struct ClinicalImpression_Finding {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _itemCodeableConcept;
	Reference* _itemReference;
	NullableString8 _basis;
};
struct CodeSystem {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _status;
	NullableBoolean _experimental;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _copyright;
	NullableBoolean _caseSensitive;
	NullableString8 _valueSet;
	NullableString8 _hierarchyMeaning;
	NullableBoolean _compositional;
	NullableBoolean _versionNeeded;
	NullableString8 _content;
	NullableString8 _supplements;
	NullableInt32 _count;
	size_t _filter_count;
	CodeSystem_Filter** _filter;
	size_t _property_count;
	CodeSystem_Property** _property;
	size_t _concept_count;
	CodeSystem_Concept** _concept;
};
struct CodeSystem_Filter {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _code;
	NullableString8 _description;
	size_t _operator_count;
	NullableString8* _operator;
	NullableString8 _value;
};
struct CodeSystem_Property {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _code;
	NullableString8 _uri;
	NullableString8 _description;
	NullableString8 _type;
};
struct CodeSystem_Concept {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _code;
	NullableString8 _display;
	NullableString8 _definition;
	size_t _designation_count;
	CodeSystem_Concept_Designation** _designation;
	size_t _property_count;
	CodeSystem_Concept_Property** _property;
	size_t _concept_count;
	CodeSystem_Concept** _concept;
};
struct CodeSystem_Concept_Designation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _language;
	Coding* _use;
	NullableString8 _value;
};
struct CodeSystem_Concept_Property {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _code;
	union {
		NullableString8 _valueCode;
		Coding* _valueCoding;
		NullableString8 _valueString;
		NullableInt32 _valueInteger;
		NullableBoolean _valueBoolean;
		ISO8601_Time _valueDateTime;
		NullableString8 _valueDecimal;
	} _value;

	enum class _valueType {
		Code,
		Coding,
		String,
		Integer,
		Boolean,
		DateTime,
		Decimal
	};
_valueType _value_type;

};
struct Communication {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _instantiatesCanonical_count;
	NullableString8* _instantiatesCanonical;
	size_t _instantiatesUri_count;
	NullableString8* _instantiatesUri;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	size_t _inResponseTo_count;
	Reference** _inResponseTo;
	NullableString8 _status;
	CodeableConcept* _statusReason;
	size_t _category_count;
	CodeableConcept** _category;
	NullableString8 _priority;
	size_t _medium_count;
	CodeableConcept** _medium;
	Reference* _subject;
	CodeableConcept* _topic;
	size_t _about_count;
	Reference** _about;
	Reference* _encounter;
	ISO8601_Time _sent;
	ISO8601_Time _received;
	size_t _recipient_count;
	Reference** _recipient;
	Reference* _sender;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	size_t _payload_count;
	Communication_Payload** _payload;
	size_t _note_count;
	Annotation** _note;
};
struct Communication_Payload {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		NullableString8 _contentString;
		Attachment* _contentAttachment;
		Reference* _contentReference;
	} _content;

	enum class _contentType {
		String,
		Attachment,
		Reference
	};
_contentType _content_type;

};
struct CommunicationRequest {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _replaces_count;
	Reference** _replaces;
	Identifier* _groupIdentifier;
	NullableString8 _status;
	CodeableConcept* _statusReason;
	size_t _category_count;
	CodeableConcept** _category;
	NullableString8 _priority;
	NullableBoolean _doNotPerform;
	size_t _medium_count;
	CodeableConcept** _medium;
	Reference* _subject;
	size_t _about_count;
	Reference** _about;
	Reference* _encounter;
	size_t _payload_count;
	CommunicationRequest_Payload** _payload;
	union {
		ISO8601_Time _occurrenceDateTime;
		Period* _occurrencePeriod;
	} _occurrence;

	enum class _occurrenceType {
		DateTime,
		Period
	};
_occurrenceType _occurrence_type;

	ISO8601_Time _authoredOn;
	Reference* _requester;
	size_t _recipient_count;
	Reference** _recipient;
	Reference* _sender;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	size_t _note_count;
	Annotation** _note;
};
struct CommunicationRequest_Payload {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		NullableString8 _contentString;
		Attachment* _contentAttachment;
		Reference* _contentReference;
	} _content;

	enum class _contentType {
		String,
		Attachment,
		Reference
	};
_contentType _content_type;

};
struct CompartmentDefinition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _status;
	NullableBoolean _experimental;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	NullableString8 _purpose;
	NullableString8 _code;
	NullableBoolean _search;
	size_t _resource_count;
	CompartmentDefinition_Resource** _resource;
};
struct CompartmentDefinition_Resource {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _code;
	size_t _param_count;
	NullableString8* _param;
	NullableString8 _documentation;
};
struct Composition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _identifier;
	NullableString8 _status;
	CodeableConcept* _type;
	size_t _category_count;
	CodeableConcept** _category;
	Reference* _subject;
	Reference* _encounter;
	ISO8601_Time _date;
	size_t _author_count;
	Reference** _author;
	NullableString8 _title;
	NullableString8 _confidentiality;
	size_t _attester_count;
	Composition_Attester** _attester;
	Reference* _custodian;
	size_t _relatesTo_count;
	Composition_RelatesTo** _relatesTo;
	size_t _event_count;
	Composition_Event** _event;
	size_t _section_count;
	Composition_Section** _section;
};
struct Composition_Attester {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _mode;
	ISO8601_Time _time;
	Reference* _party;
};
struct Composition_RelatesTo {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _code;
	union {
		Identifier* _targetIdentifier;
		Reference* _targetReference;
	} _target;

	enum class _targetType {
		Identifier,
		Reference
	};
_targetType _target_type;

};
struct Composition_Event {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _code_count;
	CodeableConcept** _code;
	Period* _period;
	size_t _detail_count;
	Reference** _detail;
};
struct Composition_Section {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _title;
	CodeableConcept* _code;
	size_t _author_count;
	Reference** _author;
	Reference* _focus;
	Narrative* _text;
	NullableString8 _mode;
	CodeableConcept* _orderedBy;
	size_t _entry_count;
	Reference** _entry;
	CodeableConcept* _emptyReason;
	size_t _section_count;
	Composition_Section** _section;
};
struct ConceptMap {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	Identifier* _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _status;
	NullableBoolean _experimental;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _copyright;
	union {
		NullableString8 _sourceUri;
		NullableString8 _sourceCanonical;
	} _source;

	enum class _sourceType {
		Uri,
		Canonical
	};
_sourceType _source_type;

	union {
		NullableString8 _targetUri;
		NullableString8 _targetCanonical;
	} _target;

	enum class _targetType {
		Uri,
		Canonical
	};
_targetType _target_type;

	size_t _group_count;
	ConceptMap_Group** _group;
};
struct ConceptMap_Group {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _source;
	NullableString8 _sourceVersion;
	NullableString8 _target;
	NullableString8 _targetVersion;
	size_t _element_count;
	ConceptMap_Group_Element** _element;
	ConceptMap_Group_Unmapped* _unmapped;
};
struct ConceptMap_Group_Element {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _code;
	NullableString8 _display;
	size_t _target_count;
	ConceptMap_Group_Element_Target** _target;
};
struct ConceptMap_Group_Element_Target {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _code;
	NullableString8 _display;
	NullableString8 _equivalence;
	NullableString8 _comment;
	size_t _dependsOn_count;
	ConceptMap_Group_Element_Target_DependsOn** _dependsOn;
	size_t _product_count;
	ConceptMap_Group_Element_Target_DependsOn** _product;
};
struct ConceptMap_Group_Element_Target_DependsOn {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _property;
	NullableString8 _system;
	NullableString8 _value;
	NullableString8 _display;
};
struct ConceptMap_Group_Unmapped {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _mode;
	NullableString8 _code;
	NullableString8 _display;
	NullableString8 _url;
};
struct Condition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	CodeableConcept* _clinicalStatus;
	CodeableConcept* _verificationStatus;
	size_t _category_count;
	CodeableConcept** _category;
	CodeableConcept* _severity;
	CodeableConcept* _code;
	size_t _bodySite_count;
	CodeableConcept** _bodySite;
	Reference* _subject;
	Reference* _encounter;
	union {
		ISO8601_Time _onsetDateTime;
		Age* _onsetAge;
		Period* _onsetPeriod;
		Range* _onsetRange;
		NullableString8 _onsetString;
	} _onset;

	enum class _onsetType {
		DateTime,
		Age,
		Period,
		Range,
		String
	};
_onsetType _onset_type;

	union {
		ISO8601_Time _abatementDateTime;
		Age* _abatementAge;
		Period* _abatementPeriod;
		Range* _abatementRange;
		NullableString8 _abatementString;
	} _abatement;

	enum class _abatementType {
		DateTime,
		Age,
		Period,
		Range,
		String
	};
_abatementType _abatement_type;

	ISO8601_Time _recordedDate;
	Reference* _recorder;
	Reference* _asserter;
	size_t _stage_count;
	Condition_Stage** _stage;
	size_t _evidence_count;
	Condition_Evidence** _evidence;
	size_t _note_count;
	Annotation** _note;
};
struct Condition_Stage {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _summary;
	size_t _assessment_count;
	Reference** _assessment;
	CodeableConcept* _type;
};
struct Condition_Evidence {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _code_count;
	CodeableConcept** _code;
	size_t _detail_count;
	Reference** _detail;
};
struct Consent {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	CodeableConcept* _scope;
	size_t _category_count;
	CodeableConcept** _category;
	Reference* _patient;
	ISO8601_Time _dateTime;
	size_t _performer_count;
	Reference** _performer;
	size_t _organization_count;
	Reference** _organization;
	union {
		Attachment* _sourceAttachment;
		Reference* _sourceReference;
	} _source;

	enum class _sourceType {
		Attachment,
		Reference
	};
_sourceType _source_type;

	size_t _policy_count;
	Consent_Policy** _policy;
	CodeableConcept* _policyRule;
	size_t _verification_count;
	Consent_Verification** _verification;
	Consent_Provision* _provision;
};
struct Consent_Policy {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _authority;
	NullableString8 _uri;
};
struct Consent_Verification {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableBoolean _verified;
	Reference* _verifiedWith;
	ISO8601_Time _verificationDate;
};
struct Consent_Provision {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _type;
	Period* _period;
	size_t _actor_count;
	Consent_Provision_Actor** _actor;
	size_t _action_count;
	CodeableConcept** _action;
	size_t _securityLabel_count;
	Coding** _securityLabel;
	size_t _purpose_count;
	Coding** _purpose;
	size_t _class_count;
	Coding** _class;
	size_t _code_count;
	CodeableConcept** _code;
	Period* _dataPeriod;
	size_t _data_count;
	Consent_Provision_Data** _data;
	size_t _provision_count;
	Consent_Provision** _provision;
};
struct Consent_Provision_Actor {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _role;
	Reference* _reference;
};
struct Consent_Provision_Data {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _meaning;
	Reference* _reference;
};
struct Contract {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _url;
	NullableString8 _version;
	NullableString8 _status;
	CodeableConcept* _legalState;
	Reference* _instantiatesCanonical;
	NullableString8 _instantiatesUri;
	CodeableConcept* _contentDerivative;
	ISO8601_Time _issued;
	Period* _applies;
	CodeableConcept* _expirationType;
	size_t _subject_count;
	Reference** _subject;
	size_t _authority_count;
	Reference** _authority;
	size_t _domain_count;
	Reference** _domain;
	size_t _site_count;
	Reference** _site;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _subtitle;
	size_t _alias_count;
	NullableString8* _alias;
	Reference* _author;
	CodeableConcept* _scope;
	union {
		CodeableConcept* _topicCodeableConcept;
		Reference* _topicReference;
	} _topic;

	enum class _topicType {
		CodeableConcept,
		Reference
	};
_topicType _topic_type;

	CodeableConcept* _type;
	size_t _subType_count;
	CodeableConcept** _subType;
	Contract_ContentDefinition* _contentDefinition;
	size_t _term_count;
	Contract_Term** _term;
	size_t _supportingInfo_count;
	Reference** _supportingInfo;
	size_t _relevantHistory_count;
	Reference** _relevantHistory;
	size_t _signer_count;
	Contract_Signer** _signer;
	size_t _friendly_count;
	Contract_Friendly** _friendly;
	size_t _legal_count;
	Contract_Legal** _legal;
	size_t _rule_count;
	Contract_Rule** _rule;
	union {
		Attachment* _legallyBindingAttachment;
		Reference* _legallyBindingReference;
	} _legallyBinding;

	enum class _legallyBindingType {
		Attachment,
		Reference
	};
_legallyBindingType _legallyBinding_type;

};
struct Contract_ContentDefinition {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	CodeableConcept* _subType;
	Reference* _publisher;
	ISO8601_Time _publicationDate;
	NullableString8 _publicationStatus;
	NullableString8 _copyright;
};
struct Contract_Term {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _identifier;
	ISO8601_Time _issued;
	Period* _applies;
	union {
		CodeableConcept* _topicCodeableConcept;
		Reference* _topicReference;
	} _topic;

	enum class _topicType {
		CodeableConcept,
		Reference
	};
_topicType _topic_type;

	CodeableConcept* _type;
	CodeableConcept* _subType;
	NullableString8 _text;
	size_t _securityLabel_count;
	Contract_Term_SecurityLabel** _securityLabel;
	Contract_Term_Offer* _offer;
	size_t _asset_count;
	Contract_Term_Asset** _asset;
	size_t _action_count;
	Contract_Term_Action** _action;
	size_t _group_count;
	Contract_Term** _group;
};
struct Contract_Term_SecurityLabel {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _number_count;
	NullableInt32* _number;
	Coding* _classification;
	size_t _category_count;
	Coding** _category;
	size_t _control_count;
	Coding** _control;
};
struct Contract_Term_Offer {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _party_count;
	Contract_Term_Offer_Party** _party;
	Reference* _topic;
	CodeableConcept* _type;
	CodeableConcept* _decision;
	size_t _decisionMode_count;
	CodeableConcept** _decisionMode;
	size_t _answer_count;
	Contract_Term_Offer_Answer** _answer;
	NullableString8 _text;
	size_t _linkId_count;
	NullableString8* _linkId;
	size_t _securityLabelNumber_count;
	NullableInt32* _securityLabelNumber;
};
struct Contract_Term_Offer_Party {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _reference_count;
	Reference** _reference;
	CodeableConcept* _role;
};
struct Contract_Term_Offer_Answer {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		NullableBoolean _valueBoolean;
		NullableString8 _valueDecimal;
		NullableInt32 _valueInteger;
		ISO8601_Time _valueDate;
		ISO8601_Time _valueDateTime;
		ISO8601_Time _valueTime;
		NullableString8 _valueString;
		NullableString8 _valueUri;
		Attachment* _valueAttachment;
		Coding* _valueCoding;
		Quantity* _valueQuantity;
		Reference* _valueReference;
	} _value;

	enum class _valueType {
		Boolean,
		Decimal,
		Integer,
		Date,
		DateTime,
		Time,
		String,
		Uri,
		Attachment,
		Coding,
		Quantity,
		Reference
	};
_valueType _value_type;

};
struct Contract_Term_Asset {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _scope;
	size_t _type_count;
	CodeableConcept** _type;
	size_t _typeReference_count;
	Reference** _typeReference;
	size_t _subtype_count;
	CodeableConcept** _subtype;
	Coding* _relationship;
	size_t _context_count;
	Contract_Term_Asset_Context** _context;
	NullableString8 _condition;
	size_t _periodType_count;
	CodeableConcept** _periodType;
	size_t _period_count;
	Period** _period;
	size_t _usePeriod_count;
	Period** _usePeriod;
	NullableString8 _text;
	size_t _linkId_count;
	NullableString8* _linkId;
	size_t _answer_count;
	Contract_Term_Offer_Answer** _answer;
	size_t _securityLabelNumber_count;
	NullableInt32* _securityLabelNumber;
	size_t _valuedItem_count;
	Contract_Term_Asset_ValuedItem** _valuedItem;
};
struct Contract_Term_Asset_Context {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _reference;
	size_t _code_count;
	CodeableConcept** _code;
	NullableString8 _text;
};
struct Contract_Term_Asset_ValuedItem {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		CodeableConcept* _entityCodeableConcept;
		Reference* _entityReference;
	} _entity;

	enum class _entityType {
		CodeableConcept,
		Reference
	};
_entityType _entity_type;

	Identifier* _identifier;
	ISO8601_Time _effectiveTime;
	Quantity* _quantity;
	Money* _unitPrice;
	NullableString8 _factor;
	NullableString8 _points;
	Money* _net;
	NullableString8 _payment;
	ISO8601_Time _paymentDate;
	Reference* _responsible;
	Reference* _recipient;
	size_t _linkId_count;
	NullableString8* _linkId;
	size_t _securityLabelNumber_count;
	NullableInt32* _securityLabelNumber;
};
struct Contract_Term_Action {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableBoolean _doNotPerform;
	CodeableConcept* _type;
	size_t _subject_count;
	Contract_Term_Action_Subject** _subject;
	CodeableConcept* _intent;
	size_t _linkId_count;
	NullableString8* _linkId;
	CodeableConcept* _status;
	Reference* _context;
	size_t _contextLinkId_count;
	NullableString8* _contextLinkId;
	union {
		ISO8601_Time _occurrenceDateTime;
		Period* _occurrencePeriod;
		Timing* _occurrenceTiming;
	} _occurrence;

	enum class _occurrenceType {
		DateTime,
		Period,
		Timing
	};
_occurrenceType _occurrence_type;

	size_t _requester_count;
	Reference** _requester;
	size_t _requesterLinkId_count;
	NullableString8* _requesterLinkId;
	size_t _performerType_count;
	CodeableConcept** _performerType;
	CodeableConcept* _performerRole;
	Reference* _performer;
	size_t _performerLinkId_count;
	NullableString8* _performerLinkId;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	size_t _reason_count;
	NullableString8* _reason;
	size_t _reasonLinkId_count;
	NullableString8* _reasonLinkId;
	size_t _note_count;
	Annotation** _note;
	size_t _securityLabelNumber_count;
	NullableInt32* _securityLabelNumber;
};
struct Contract_Term_Action_Subject {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _reference_count;
	Reference** _reference;
	CodeableConcept* _role;
};
struct Contract_Signer {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Coding* _type;
	Reference* _party;
	size_t _signature_count;
	Signature** _signature;
};
struct Contract_Friendly {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		Attachment* _contentAttachment;
		Reference* _contentReference;
	} _content;

	enum class _contentType {
		Attachment,
		Reference
	};
_contentType _content_type;

};
struct Contract_Legal {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		Attachment* _contentAttachment;
		Reference* _contentReference;
	} _content;

	enum class _contentType {
		Attachment,
		Reference
	};
_contentType _content_type;

};
struct Contract_Rule {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		Attachment* _contentAttachment;
		Reference* _contentReference;
	} _content;

	enum class _contentType {
		Attachment,
		Reference
	};
_contentType _content_type;

};
struct Coverage {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	CodeableConcept* _type;
	Reference* _policyHolder;
	Reference* _subscriber;
	NullableString8 _subscriberId;
	Reference* _beneficiary;
	NullableString8 _dependent;
	CodeableConcept* _relationship;
	Period* _period;
	size_t _payor_count;
	Reference** _payor;
	size_t _class_count;
	Coverage_Class** _class;
	NullableInt32 _order;
	NullableString8 _network;
	size_t _costToBeneficiary_count;
	Coverage_CostToBeneficiary** _costToBeneficiary;
	NullableBoolean _subrogation;
	size_t _contract_count;
	Reference** _contract;
};
struct Coverage_Class {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	NullableString8 _value;
	NullableString8 _name;
};
struct Coverage_CostToBeneficiary {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	union {
		Quantity* _valueQuantity;
		Money* _valueMoney;
	} _value;

	enum class _valueType {
		Quantity,
		Money
	};
_valueType _value_type;

	size_t _exception_count;
	Coverage_CostToBeneficiary_Exception** _exception;
};
struct Coverage_CostToBeneficiary_Exception {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	Period* _period;
};
struct CoverageEligibilityRequest {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	CodeableConcept* _priority;
	size_t _purpose_count;
	NullableString8* _purpose;
	Reference* _patient;
	union {
		ISO8601_Time _servicedDate;
		Period* _servicedPeriod;
	} _serviced;

	enum class _servicedType {
		Date,
		Period
	};
_servicedType _serviced_type;

	ISO8601_Time _created;
	Reference* _enterer;
	Reference* _provider;
	Reference* _insurer;
	Reference* _facility;
	size_t _supportingInfo_count;
	CoverageEligibilityRequest_SupportingInfo** _supportingInfo;
	size_t _insurance_count;
	CoverageEligibilityRequest_Insurance** _insurance;
	size_t _item_count;
	CoverageEligibilityRequest_Item** _item;
};
struct CoverageEligibilityRequest_SupportingInfo {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _sequence;
	Reference* _information;
	NullableBoolean _appliesToAll;
};
struct CoverageEligibilityRequest_Insurance {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableBoolean _focal;
	Reference* _coverage;
	NullableString8 _businessArrangement;
};
struct CoverageEligibilityRequest_Item {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _supportingInfoSequence_count;
	NullableInt32* _supportingInfoSequence;
	CodeableConcept* _category;
	CodeableConcept* _productOrService;
	size_t _modifier_count;
	CodeableConcept** _modifier;
	Reference* _provider;
	Quantity* _quantity;
	Money* _unitPrice;
	Reference* _facility;
	size_t _diagnosis_count;
	CoverageEligibilityRequest_Item_Diagnosis** _diagnosis;
	size_t _detail_count;
	Reference** _detail;
};
struct CoverageEligibilityRequest_Item_Diagnosis {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		CodeableConcept* _diagnosisCodeableConcept;
		Reference* _diagnosisReference;
	} _diagnosis;

	enum class _diagnosisType {
		CodeableConcept,
		Reference
	};
_diagnosisType _diagnosis_type;

};
struct CoverageEligibilityResponse {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	size_t _purpose_count;
	NullableString8* _purpose;
	Reference* _patient;
	union {
		ISO8601_Time _servicedDate;
		Period* _servicedPeriod;
	} _serviced;

	enum class _servicedType {
		Date,
		Period
	};
_servicedType _serviced_type;

	ISO8601_Time _created;
	Reference* _requestor;
	Reference* _request;
	NullableString8 _outcome;
	NullableString8 _disposition;
	Reference* _insurer;
	size_t _insurance_count;
	CoverageEligibilityResponse_Insurance** _insurance;
	NullableString8 _preAuthRef;
	CodeableConcept* _form;
	size_t _error_count;
	CoverageEligibilityResponse_Error** _error;
};
struct CoverageEligibilityResponse_Insurance {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _coverage;
	NullableBoolean _inforce;
	Period* _benefitPeriod;
	size_t _item_count;
	CoverageEligibilityResponse_Insurance_Item** _item;
};
struct CoverageEligibilityResponse_Insurance_Item {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _category;
	CodeableConcept* _productOrService;
	size_t _modifier_count;
	CodeableConcept** _modifier;
	Reference* _provider;
	NullableBoolean _excluded;
	NullableString8 _name;
	NullableString8 _description;
	CodeableConcept* _network;
	CodeableConcept* _unit;
	CodeableConcept* _term;
	size_t _benefit_count;
	CoverageEligibilityResponse_Insurance_Item_Benefit** _benefit;
	NullableBoolean _authorizationRequired;
	size_t _authorizationSupporting_count;
	CodeableConcept** _authorizationSupporting;
	NullableString8 _authorizationUrl;
};
struct CoverageEligibilityResponse_Insurance_Item_Benefit {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	union {
		NullableInt32 _allowedUnsignedInt;
		NullableString8 _allowedString;
		Money* _allowedMoney;
	} _allowed;

	enum class _allowedType {
		UnsignedInt,
		String,
		Money
	};
_allowedType _allowed_type;

	union {
		NullableInt32 _usedUnsignedInt;
		NullableString8 _usedString;
		Money* _usedMoney;
	} _used;

	enum class _usedType {
		UnsignedInt,
		String,
		Money
	};
_usedType _used_type;

};
struct CoverageEligibilityResponse_Error {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
};
struct DetectedIssue {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	CodeableConcept* _code;
	NullableString8 _severity;
	Reference* _patient;
	union {
		ISO8601_Time _identifiedDateTime;
		Period* _identifiedPeriod;
	} _identified;

	enum class _identifiedType {
		DateTime,
		Period
	};
_identifiedType _identified_type;

	Reference* _author;
	size_t _implicated_count;
	Reference** _implicated;
	size_t _evidence_count;
	DetectedIssue_Evidence** _evidence;
	NullableString8 _detail;
	NullableString8 _reference;
	size_t _mitigation_count;
	DetectedIssue_Mitigation** _mitigation;
};
struct DetectedIssue_Evidence {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _code_count;
	CodeableConcept** _code;
	size_t _detail_count;
	Reference** _detail;
};
struct DetectedIssue_Mitigation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _action;
	ISO8601_Time _date;
	Reference* _author;
};
struct Device {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	Reference* _definition;
	size_t _udiCarrier_count;
	Device_UdiCarrier** _udiCarrier;
	NullableString8 _status;
	size_t _statusReason_count;
	CodeableConcept** _statusReason;
	NullableString8 _distinctIdentifier;
	NullableString8 _manufacturer;
	ISO8601_Time _manufactureDate;
	ISO8601_Time _expirationDate;
	NullableString8 _lotNumber;
	NullableString8 _serialNumber;
	size_t _deviceName_count;
	Device_DeviceName** _deviceName;
	NullableString8 _modelNumber;
	NullableString8 _partNumber;
	CodeableConcept* _type;
	size_t _specialization_count;
	Device_Specialization** _specialization;
	size_t _version_count;
	Device_Version** _version;
	size_t _property_count;
	Device_Property** _property;
	Reference* _patient;
	Reference* _owner;
	size_t _contact_count;
	ContactPoint** _contact;
	Reference* _location;
	NullableString8 _url;
	size_t _note_count;
	Annotation** _note;
	size_t _safety_count;
	CodeableConcept** _safety;
	Reference* _parent;
};
struct Device_UdiCarrier {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _deviceIdentifier;
	NullableString8 _issuer;
	NullableString8 _jurisdiction;
	NullableString8 _carrierAIDC;
	NullableString8 _carrierHRF;
	NullableString8 _entryType;
};
struct Device_DeviceName {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	NullableString8 _type;
};
struct Device_Specialization {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _systemType;
	NullableString8 _version;
};
struct Device_Version {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	Identifier* _component;
	NullableString8 _value;
};
struct Device_Property {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	size_t _valueQuantity_count;
	Quantity** _valueQuantity;
	size_t _valueCode_count;
	CodeableConcept** _valueCode;
};
struct DeviceDefinition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _udiDeviceIdentifier_count;
	DeviceDefinition_UdiDeviceIdentifier** _udiDeviceIdentifier;
	union {
		NullableString8 _manufacturerString;
		Reference* _manufacturerReference;
	} _manufacturer;

	enum class _manufacturerType {
		String,
		Reference
	};
_manufacturerType _manufacturer_type;

	size_t _deviceName_count;
	DeviceDefinition_DeviceName** _deviceName;
	NullableString8 _modelNumber;
	CodeableConcept* _type;
	size_t _specialization_count;
	DeviceDefinition_Specialization** _specialization;
	size_t _version_count;
	NullableString8* _version;
	size_t _safety_count;
	CodeableConcept** _safety;
	size_t _shelfLifeStorage_count;
	ProductShelfLife** _shelfLifeStorage;
	ProdCharacteristic* _physicalCharacteristics;
	size_t _languageCode_count;
	CodeableConcept** _languageCode;
	size_t _capability_count;
	DeviceDefinition_Capability** _capability;
	size_t _property_count;
	DeviceDefinition_Property** _property;
	Reference* _owner;
	size_t _contact_count;
	ContactPoint** _contact;
	NullableString8 _url;
	NullableString8 _onlineInformation;
	size_t _note_count;
	Annotation** _note;
	Quantity* _quantity;
	Reference* _parentDevice;
	size_t _material_count;
	DeviceDefinition_Material** _material;
};
struct DeviceDefinition_UdiDeviceIdentifier {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _deviceIdentifier;
	NullableString8 _issuer;
	NullableString8 _jurisdiction;
};
struct DeviceDefinition_DeviceName {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	NullableString8 _type;
};
struct DeviceDefinition_Specialization {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _systemType;
	NullableString8 _version;
};
struct DeviceDefinition_Capability {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	size_t _description_count;
	CodeableConcept** _description;
};
struct DeviceDefinition_Property {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	size_t _valueQuantity_count;
	Quantity** _valueQuantity;
	size_t _valueCode_count;
	CodeableConcept** _valueCode;
};
struct DeviceDefinition_Material {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _substance;
	NullableBoolean _alternate;
	NullableBoolean _allergenicIndicator;
};
struct DeviceMetric {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	CodeableConcept* _type;
	CodeableConcept* _unit;
	Reference* _source;
	Reference* _parent;
	NullableString8 _operationalStatus;
	NullableString8 _color;
	NullableString8 _category;
	Timing* _measurementPeriod;
	size_t _calibration_count;
	DeviceMetric_Calibration** _calibration;
};
struct DeviceMetric_Calibration {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _type;
	NullableString8 _state;
	ISO8601_Time _time;
};
struct DeviceRequest {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _instantiatesCanonical_count;
	NullableString8* _instantiatesCanonical;
	size_t _instantiatesUri_count;
	NullableString8* _instantiatesUri;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _priorRequest_count;
	Reference** _priorRequest;
	Identifier* _groupIdentifier;
	NullableString8 _status;
	NullableString8 _intent;
	NullableString8 _priority;
	union {
		Reference* _codeReference;
		CodeableConcept* _codeCodeableConcept;
	} _code;

	enum class _codeType {
		Reference,
		CodeableConcept
	};
_codeType _code_type;

	size_t _parameter_count;
	DeviceRequest_Parameter** _parameter;
	Reference* _subject;
	Reference* _encounter;
	union {
		ISO8601_Time _occurrenceDateTime;
		Period* _occurrencePeriod;
		Timing* _occurrenceTiming;
	} _occurrence;

	enum class _occurrenceType {
		DateTime,
		Period,
		Timing
	};
_occurrenceType _occurrence_type;

	ISO8601_Time _authoredOn;
	Reference* _requester;
	CodeableConcept* _performerType;
	Reference* _performer;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	size_t _insurance_count;
	Reference** _insurance;
	size_t _supportingInfo_count;
	Reference** _supportingInfo;
	size_t _note_count;
	Annotation** _note;
	size_t _relevantHistory_count;
	Reference** _relevantHistory;
};
struct DeviceRequest_Parameter {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	union {
		CodeableConcept* _valueCodeableConcept;
		Quantity* _valueQuantity;
		Range* _valueRange;
		NullableBoolean _valueBoolean;
	} _value;

	enum class _valueType {
		CodeableConcept,
		Quantity,
		Range,
		Boolean
	};
_valueType _value_type;

};
struct DeviceUseStatement {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	NullableString8 _status;
	Reference* _subject;
	size_t _derivedFrom_count;
	Reference** _derivedFrom;
	union {
		Timing* _timingTiming;
		Period* _timingPeriod;
		ISO8601_Time _timingDateTime;
	} _timing;

	enum class _timingType {
		Timing,
		Period,
		DateTime
	};
_timingType _timing_type;

	ISO8601_Time _recordedOn;
	Reference* _source;
	Reference* _device;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	CodeableConcept* _bodySite;
	size_t _note_count;
	Annotation** _note;
};
struct DiagnosticReport {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	CodeableConcept* _code;
	Reference* _subject;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	size_t _resultsInterpreter_count;
	Reference** _resultsInterpreter;
	size_t _specimen_count;
	Reference** _specimen;
	size_t _result_count;
	Reference** _result;
	size_t _imagingStudy_count;
	Reference** _imagingStudy;
	size_t _media_count;
	DiagnosticReport_Media** _media;
	NullableString8 _conclusion;
	size_t _conclusionCode_count;
	CodeableConcept** _conclusionCode;
	size_t _presentedForm_count;
	Attachment** _presentedForm;
};
struct DiagnosticReport_Media {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _comment;
	Reference* _link;
};
struct DocumentManifest {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _masterIdentifier;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	CodeableConcept* _type;
	Reference* _subject;
	ISO8601_Time _created;
	size_t _author_count;
	Reference** _author;
	size_t _recipient_count;
	Reference** _recipient;
	NullableString8 _source;
	NullableString8 _description;
	size_t _content_count;
	Reference** _content;
	size_t _related_count;
	DocumentManifest_Related** _related;
};
struct DocumentManifest_Related {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _identifier;
	Reference* _ref;
};
struct DocumentReference {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _masterIdentifier;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	NullableString8 _docStatus;
	CodeableConcept* _type;
	size_t _category_count;
	CodeableConcept** _category;
	Reference* _subject;
	ISO8601_Time _date;
	size_t _author_count;
	Reference** _author;
	Reference* _authenticator;
	Reference* _custodian;
	size_t _relatesTo_count;
	DocumentReference_RelatesTo** _relatesTo;
	NullableString8 _description;
	size_t _securityLabel_count;
	CodeableConcept** _securityLabel;
	size_t _content_count;
	DocumentReference_Content** _content;
	DocumentReference_Context* _context;
};
struct DocumentReference_RelatesTo {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _code;
	Reference* _target;
};
struct DocumentReference_Content {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Attachment* _attachment;
	Coding* _format;
};
struct DocumentReference_Context {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _encounter_count;
	Reference** _encounter;
	size_t _event_count;
	CodeableConcept** _event;
	Period* _period;
	CodeableConcept* _facilityType;
	CodeableConcept* _practiceSetting;
	Reference* _sourcePatientInfo;
	size_t _related_count;
	Reference** _related;
};
struct DomainResource {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
};
struct EffectEvidenceSynthesis {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _status;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _note_count;
	Annotation** _note;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _topic_count;
	CodeableConcept** _topic;
	size_t _author_count;
	ContactDetail** _author;
	size_t _editor_count;
	ContactDetail** _editor;
	size_t _reviewer_count;
	ContactDetail** _reviewer;
	size_t _endorser_count;
	ContactDetail** _endorser;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	CodeableConcept* _synthesisType;
	CodeableConcept* _studyType;
	Reference* _population;
	Reference* _exposure;
	Reference* _exposureAlternative;
	Reference* _outcome;
	EffectEvidenceSynthesis_SampleSize* _sampleSize;
	size_t _resultsByExposure_count;
	EffectEvidenceSynthesis_ResultsByExposure** _resultsByExposure;
	size_t _effectEstimate_count;
	EffectEvidenceSynthesis_EffectEstimate** _effectEstimate;
	size_t _certainty_count;
	EffectEvidenceSynthesis_Certainty** _certainty;
};
struct EffectEvidenceSynthesis_SampleSize {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _description;
	NullableInt32 _numberOfStudies;
	NullableInt32 _numberOfParticipants;
};
struct EffectEvidenceSynthesis_ResultsByExposure {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _description;
	NullableString8 _exposureState;
	CodeableConcept* _variantState;
	Reference* _riskEvidenceSynthesis;
};
struct EffectEvidenceSynthesis_EffectEstimate {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _description;
	CodeableConcept* _type;
	CodeableConcept* _variantState;
	NullableString8 _value;
	CodeableConcept* _unitOfMeasure;
	size_t _precisionEstimate_count;
	EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate** _precisionEstimate;
};
struct EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	NullableString8 _level;
	NullableString8 _from;
	NullableString8 _to;
};
struct EffectEvidenceSynthesis_Certainty {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _rating_count;
	CodeableConcept** _rating;
	size_t _note_count;
	Annotation** _note;
	size_t _certaintySubcomponent_count;
	EffectEvidenceSynthesis_Certainty_CertaintySubcomponent** _certaintySubcomponent;
};
struct EffectEvidenceSynthesis_Certainty_CertaintySubcomponent {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	size_t _rating_count;
	CodeableConcept** _rating;
	size_t _note_count;
	Annotation** _note;
};
struct Encounter {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	size_t _statusHistory_count;
	Encounter_StatusHistory** _statusHistory;
	Coding* _class;
	size_t _classHistory_count;
	Encounter_ClassHistory** _classHistory;
	size_t _type_count;
	CodeableConcept** _type;
	CodeableConcept* _serviceType;
	CodeableConcept* _priority;
	Reference* _subject;
	size_t _episodeOfCare_count;
	Reference** _episodeOfCare;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _participant_count;
	Encounter_Participant** _participant;
	size_t _appointment_count;
	Reference** _appointment;
	Period* _period;
	Duration* _length;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	size_t _diagnosis_count;
	Encounter_Diagnosis** _diagnosis;
	size_t _account_count;
	Reference** _account;
	Encounter_Hospitalization* _hospitalization;
	size_t _location_count;
	Encounter_Location** _location;
	Reference* _serviceProvider;
	Reference* _partOf;
};
struct Encounter_StatusHistory {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _status;
	Period* _period;
};
struct Encounter_ClassHistory {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Coding* _class;
	Period* _period;
};
struct Encounter_Participant {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _type_count;
	CodeableConcept** _type;
	Period* _period;
	Reference* _individual;
};
struct Encounter_Diagnosis {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _condition;
	CodeableConcept* _use;
	NullableInt32 _rank;
};
struct Encounter_Hospitalization {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _preAdmissionIdentifier;
	Reference* _origin;
	CodeableConcept* _admitSource;
	CodeableConcept* _reAdmission;
	size_t _dietPreference_count;
	CodeableConcept** _dietPreference;
	size_t _specialCourtesy_count;
	CodeableConcept** _specialCourtesy;
	size_t _specialArrangement_count;
	CodeableConcept** _specialArrangement;
	Reference* _destination;
	CodeableConcept* _dischargeDisposition;
};
struct Encounter_Location {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _location;
	NullableString8 _status;
	CodeableConcept* _physicalType;
	Period* _period;
};
struct Endpoint {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	Coding* _connectionType;
	NullableString8 _name;
	Reference* _managingOrganization;
	size_t _contact_count;
	ContactPoint** _contact;
	Period* _period;
	size_t _payloadType_count;
	CodeableConcept** _payloadType;
	size_t _payloadMimeType_count;
	NullableString8* _payloadMimeType;
	NullableString8 _address;
	size_t _header_count;
	NullableString8* _header;
};
struct EnrollmentRequest {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	ISO8601_Time _created;
	Reference* _insurer;
	Reference* _provider;
	Reference* _candidate;
	Reference* _coverage;
};
struct EnrollmentResponse {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	Reference* _request;
	NullableString8 _outcome;
	NullableString8 _disposition;
	ISO8601_Time _created;
	Reference* _organization;
	Reference* _requestProvider;
};
struct EpisodeOfCare {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	size_t _statusHistory_count;
	EpisodeOfCare_StatusHistory** _statusHistory;
	size_t _type_count;
	CodeableConcept** _type;
	size_t _diagnosis_count;
	EpisodeOfCare_Diagnosis** _diagnosis;
	Reference* _patient;
	Reference* _managingOrganization;
	Period* _period;
	size_t _referralRequest_count;
	Reference** _referralRequest;
	Reference* _careManager;
	size_t _team_count;
	Reference** _team;
	size_t _account_count;
	Reference** _account;
};
struct EpisodeOfCare_StatusHistory {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _status;
	Period* _period;
};
struct EpisodeOfCare_Diagnosis {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _condition;
	CodeableConcept* _role;
	NullableInt32 _rank;
};
struct EventDefinition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _subtitle;
	NullableString8 _status;
	NullableBoolean _experimental;
	union {
		CodeableConcept* _subjectCodeableConcept;
		Reference* _subjectReference;
	} _subject;

	enum class _subjectType {
		CodeableConcept,
		Reference
	};
_subjectType _subject_type;

	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _usage;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _topic_count;
	CodeableConcept** _topic;
	size_t _author_count;
	ContactDetail** _author;
	size_t _editor_count;
	ContactDetail** _editor;
	size_t _reviewer_count;
	ContactDetail** _reviewer;
	size_t _endorser_count;
	ContactDetail** _endorser;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	size_t _trigger_count;
	TriggerDefinition** _trigger;
};
struct Evidence {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _shortTitle;
	NullableString8 _subtitle;
	NullableString8 _status;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _note_count;
	Annotation** _note;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _topic_count;
	CodeableConcept** _topic;
	size_t _author_count;
	ContactDetail** _author;
	size_t _editor_count;
	ContactDetail** _editor;
	size_t _reviewer_count;
	ContactDetail** _reviewer;
	size_t _endorser_count;
	ContactDetail** _endorser;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	Reference* _exposureBackground;
	size_t _exposureVariant_count;
	Reference** _exposureVariant;
	size_t _outcome_count;
	Reference** _outcome;
};
struct EvidenceVariable {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _shortTitle;
	NullableString8 _subtitle;
	NullableString8 _status;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _note_count;
	Annotation** _note;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _topic_count;
	CodeableConcept** _topic;
	size_t _author_count;
	ContactDetail** _author;
	size_t _editor_count;
	ContactDetail** _editor;
	size_t _reviewer_count;
	ContactDetail** _reviewer;
	size_t _endorser_count;
	ContactDetail** _endorser;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	NullableString8 _type;
	size_t _characteristic_count;
	EvidenceVariable_Characteristic** _characteristic;
};
struct EvidenceVariable_Characteristic {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _description;
	union {
		Reference* _definitionReference;
		NullableString8 _definitionCanonical;
		CodeableConcept* _definitionCodeableConcept;
		Expression* _definitionExpression;
		DataRequirement* _definitionDataRequirement;
		TriggerDefinition* _definitionTriggerDefinition;
	} _definition;

	enum class _definitionType {
		Reference,
		Canonical,
		CodeableConcept,
		Expression,
		DataRequirement,
		TriggerDefinition
	};
_definitionType _definition_type;

	size_t _usageContext_count;
	UsageContext** _usageContext;
	NullableBoolean _exclude;
	union {
		ISO8601_Time _participantEffectiveDateTime;
		Period* _participantEffectivePeriod;
		Duration* _participantEffectiveDuration;
		Timing* _participantEffectiveTiming;
	} _participantEffective;

	enum class _participantEffectiveType {
		DateTime,
		Period,
		Duration,
		Timing
	};
_participantEffectiveType _participantEffective_type;

	Duration* _timeFromStart;
	NullableString8 _groupMeasure;
};
struct ExampleScenario {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _status;
	NullableBoolean _experimental;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _copyright;
	NullableString8 _purpose;
	size_t _actor_count;
	ExampleScenario_Actor** _actor;
	size_t _instance_count;
	ExampleScenario_Instance** _instance;
	size_t _process_count;
	ExampleScenario_Process** _process;
	size_t _workflow_count;
	NullableString8* _workflow;
};
struct ExampleScenario_Actor {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _actorId;
	NullableString8 _type;
	NullableString8 _name;
	NullableString8 _description;
};
struct ExampleScenario_Instance {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _resourceId;
	NullableString8 _resourceType;
	NullableString8 _name;
	NullableString8 _description;
	size_t _version_count;
	ExampleScenario_Instance_Version** _version;
	size_t _containedInstance_count;
	ExampleScenario_Instance_ContainedInstance** _containedInstance;
};
struct ExampleScenario_Instance_Version {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _versionId;
	NullableString8 _description;
};
struct ExampleScenario_Instance_ContainedInstance {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _resourceId;
	NullableString8 _versionId;
};
struct ExampleScenario_Process {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _title;
	NullableString8 _description;
	NullableString8 _preConditions;
	NullableString8 _postConditions;
	size_t _step_count;
	ExampleScenario_Process_Step** _step;
};
struct ExampleScenario_Process_Step {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _process_count;
	ExampleScenario_Process** _process;
	NullableBoolean _pause;
	ExampleScenario_Process_Step_Operation* _operation;
	size_t _alternative_count;
	ExampleScenario_Process_Step_Alternative** _alternative;
};
struct ExampleScenario_Process_Step_Operation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _number;
	NullableString8 _type;
	NullableString8 _name;
	NullableString8 _initiator;
	NullableString8 _receiver;
	NullableString8 _description;
	NullableBoolean _initiatorActive;
	NullableBoolean _receiverActive;
	ExampleScenario_Instance_ContainedInstance* _request;
	ExampleScenario_Instance_ContainedInstance* _response;
};
struct ExampleScenario_Process_Step_Alternative {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _title;
	NullableString8 _description;
	size_t _step_count;
	ExampleScenario_Process_Step** _step;
};
struct ExplanationOfBenefit {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	CodeableConcept* _type;
	CodeableConcept* _subType;
	NullableString8 _use;
	Reference* _patient;
	Period* _billablePeriod;
	ISO8601_Time _created;
	Reference* _enterer;
	Reference* _insurer;
	Reference* _provider;
	CodeableConcept* _priority;
	CodeableConcept* _fundsReserveRequested;
	CodeableConcept* _fundsReserve;
	size_t _related_count;
	ExplanationOfBenefit_Related** _related;
	Reference* _prescription;
	Reference* _originalPrescription;
	ExplanationOfBenefit_Payee* _payee;
	Reference* _referral;
	Reference* _facility;
	Reference* _claim;
	Reference* _claimResponse;
	NullableString8 _outcome;
	NullableString8 _disposition;
	size_t _preAuthRef_count;
	NullableString8* _preAuthRef;
	size_t _preAuthRefPeriod_count;
	Period** _preAuthRefPeriod;
	size_t _careTeam_count;
	ExplanationOfBenefit_CareTeam** _careTeam;
	size_t _supportingInfo_count;
	ExplanationOfBenefit_SupportingInfo** _supportingInfo;
	size_t _diagnosis_count;
	ExplanationOfBenefit_Diagnosis** _diagnosis;
	size_t _procedure_count;
	ExplanationOfBenefit_Procedure** _procedure;
	NullableInt32 _precedence;
	size_t _insurance_count;
	ExplanationOfBenefit_Insurance** _insurance;
	ExplanationOfBenefit_Accident* _accident;
	size_t _item_count;
	ExplanationOfBenefit_Item** _item;
	size_t _addItem_count;
	ExplanationOfBenefit_AddItem** _addItem;
	size_t _adjudication_count;
	ExplanationOfBenefit_Item_Adjudication** _adjudication;
	size_t _total_count;
	ExplanationOfBenefit_Total** _total;
	ExplanationOfBenefit_Payment* _payment;
	CodeableConcept* _formCode;
	Attachment* _form;
	size_t _processNote_count;
	ExplanationOfBenefit_ProcessNote** _processNote;
	Period* _benefitPeriod;
	size_t _benefitBalance_count;
	ExplanationOfBenefit_BenefitBalance** _benefitBalance;
};
struct ExplanationOfBenefit_Related {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _claim;
	CodeableConcept* _relationship;
	Identifier* _reference;
};
struct ExplanationOfBenefit_Payee {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	Reference* _party;
};
struct ExplanationOfBenefit_CareTeam {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _sequence;
	Reference* _provider;
	NullableBoolean _responsible;
	CodeableConcept* _role;
	CodeableConcept* _qualification;
};
struct ExplanationOfBenefit_SupportingInfo {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _sequence;
	CodeableConcept* _category;
	CodeableConcept* _code;
	union {
		ISO8601_Time _timingDate;
		Period* _timingPeriod;
	} _timing;

	enum class _timingType {
		Date,
		Period
	};
_timingType _timing_type;

	union {
		NullableBoolean _valueBoolean;
		NullableString8 _valueString;
		Quantity* _valueQuantity;
		Attachment* _valueAttachment;
		Reference* _valueReference;
	} _value;

	enum class _valueType {
		Boolean,
		String,
		Quantity,
		Attachment,
		Reference
	};
_valueType _value_type;

	Coding* _reason;
};
struct ExplanationOfBenefit_Diagnosis {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _sequence;
	union {
		CodeableConcept* _diagnosisCodeableConcept;
		Reference* _diagnosisReference;
	} _diagnosis;

	enum class _diagnosisType {
		CodeableConcept,
		Reference
	};
_diagnosisType _diagnosis_type;

	size_t _type_count;
	CodeableConcept** _type;
	CodeableConcept* _onAdmission;
	CodeableConcept* _packageCode;
};
struct ExplanationOfBenefit_Procedure {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _sequence;
	size_t _type_count;
	CodeableConcept** _type;
	ISO8601_Time _date;
	union {
		CodeableConcept* _procedureCodeableConcept;
		Reference* _procedureReference;
	} _procedure;

	enum class _procedureType {
		CodeableConcept,
		Reference
	};
_procedureType _procedure_type;

	size_t _udi_count;
	Reference** _udi;
};
struct ExplanationOfBenefit_Insurance {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableBoolean _focal;
	Reference* _coverage;
	size_t _preAuthRef_count;
	NullableString8* _preAuthRef;
};
struct ExplanationOfBenefit_Accident {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	ISO8601_Time _date;
	CodeableConcept* _type;
	union {
		Address* _locationAddress;
		Reference* _locationReference;
	} _location;

	enum class _locationType {
		Address,
		Reference
	};
_locationType _location_type;

};
struct ExplanationOfBenefit_Item {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _sequence;
	size_t _careTeamSequence_count;
	NullableInt32* _careTeamSequence;
	size_t _diagnosisSequence_count;
	NullableInt32* _diagnosisSequence;
	size_t _procedureSequence_count;
	NullableInt32* _procedureSequence;
	size_t _informationSequence_count;
	NullableInt32* _informationSequence;
	CodeableConcept* _revenue;
	CodeableConcept* _category;
	CodeableConcept* _productOrService;
	size_t _modifier_count;
	CodeableConcept** _modifier;
	size_t _programCode_count;
	CodeableConcept** _programCode;
	union {
		ISO8601_Time _servicedDate;
		Period* _servicedPeriod;
	} _serviced;

	enum class _servicedType {
		Date,
		Period
	};
_servicedType _serviced_type;

	union {
		CodeableConcept* _locationCodeableConcept;
		Address* _locationAddress;
		Reference* _locationReference;
	} _location;

	enum class _locationType {
		CodeableConcept,
		Address,
		Reference
	};
_locationType _location_type;

	Quantity* _quantity;
	Money* _unitPrice;
	NullableString8 _factor;
	Money* _net;
	size_t _udi_count;
	Reference** _udi;
	CodeableConcept* _bodySite;
	size_t _subSite_count;
	CodeableConcept** _subSite;
	size_t _encounter_count;
	Reference** _encounter;
	size_t _noteNumber_count;
	NullableInt32* _noteNumber;
	size_t _adjudication_count;
	ExplanationOfBenefit_Item_Adjudication** _adjudication;
	size_t _detail_count;
	ExplanationOfBenefit_Item_Detail** _detail;
};
struct ExplanationOfBenefit_Item_Adjudication {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _category;
	CodeableConcept* _reason;
	Money* _amount;
	NullableString8 _value;
};
struct ExplanationOfBenefit_Item_Detail {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _sequence;
	CodeableConcept* _revenue;
	CodeableConcept* _category;
	CodeableConcept* _productOrService;
	size_t _modifier_count;
	CodeableConcept** _modifier;
	size_t _programCode_count;
	CodeableConcept** _programCode;
	Quantity* _quantity;
	Money* _unitPrice;
	NullableString8 _factor;
	Money* _net;
	size_t _udi_count;
	Reference** _udi;
	size_t _noteNumber_count;
	NullableInt32* _noteNumber;
	size_t _adjudication_count;
	ExplanationOfBenefit_Item_Adjudication** _adjudication;
	size_t _subDetail_count;
	ExplanationOfBenefit_Item_Detail_SubDetail** _subDetail;
};
struct ExplanationOfBenefit_Item_Detail_SubDetail {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _sequence;
	CodeableConcept* _revenue;
	CodeableConcept* _category;
	CodeableConcept* _productOrService;
	size_t _modifier_count;
	CodeableConcept** _modifier;
	size_t _programCode_count;
	CodeableConcept** _programCode;
	Quantity* _quantity;
	Money* _unitPrice;
	NullableString8 _factor;
	Money* _net;
	size_t _udi_count;
	Reference** _udi;
	size_t _noteNumber_count;
	NullableInt32* _noteNumber;
	size_t _adjudication_count;
	ExplanationOfBenefit_Item_Adjudication** _adjudication;
};
struct ExplanationOfBenefit_AddItem {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _itemSequence_count;
	NullableInt32* _itemSequence;
	size_t _detailSequence_count;
	NullableInt32* _detailSequence;
	size_t _subDetailSequence_count;
	NullableInt32* _subDetailSequence;
	size_t _provider_count;
	Reference** _provider;
	CodeableConcept* _productOrService;
	size_t _modifier_count;
	CodeableConcept** _modifier;
	size_t _programCode_count;
	CodeableConcept** _programCode;
	union {
		ISO8601_Time _servicedDate;
		Period* _servicedPeriod;
	} _serviced;

	enum class _servicedType {
		Date,
		Period
	};
_servicedType _serviced_type;

	union {
		CodeableConcept* _locationCodeableConcept;
		Address* _locationAddress;
		Reference* _locationReference;
	} _location;

	enum class _locationType {
		CodeableConcept,
		Address,
		Reference
	};
_locationType _location_type;

	Quantity* _quantity;
	Money* _unitPrice;
	NullableString8 _factor;
	Money* _net;
	CodeableConcept* _bodySite;
	size_t _subSite_count;
	CodeableConcept** _subSite;
	size_t _noteNumber_count;
	NullableInt32* _noteNumber;
	size_t _adjudication_count;
	ExplanationOfBenefit_Item_Adjudication** _adjudication;
	size_t _detail_count;
	ExplanationOfBenefit_AddItem_Detail** _detail;
};
struct ExplanationOfBenefit_AddItem_Detail {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _productOrService;
	size_t _modifier_count;
	CodeableConcept** _modifier;
	Quantity* _quantity;
	Money* _unitPrice;
	NullableString8 _factor;
	Money* _net;
	size_t _noteNumber_count;
	NullableInt32* _noteNumber;
	size_t _adjudication_count;
	ExplanationOfBenefit_Item_Adjudication** _adjudication;
	size_t _subDetail_count;
	ExplanationOfBenefit_AddItem_Detail_SubDetail** _subDetail;
};
struct ExplanationOfBenefit_AddItem_Detail_SubDetail {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _productOrService;
	size_t _modifier_count;
	CodeableConcept** _modifier;
	Quantity* _quantity;
	Money* _unitPrice;
	NullableString8 _factor;
	Money* _net;
	size_t _noteNumber_count;
	NullableInt32* _noteNumber;
	size_t _adjudication_count;
	ExplanationOfBenefit_Item_Adjudication** _adjudication;
};
struct ExplanationOfBenefit_Total {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _category;
	Money* _amount;
};
struct ExplanationOfBenefit_Payment {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	Money* _adjustment;
	CodeableConcept* _adjustmentReason;
	ISO8601_Time _date;
	Money* _amount;
	Identifier* _identifier;
};
struct ExplanationOfBenefit_ProcessNote {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _number;
	NullableString8 _type;
	NullableString8 _text;
	CodeableConcept* _language;
};
struct ExplanationOfBenefit_BenefitBalance {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _category;
	NullableBoolean _excluded;
	NullableString8 _name;
	NullableString8 _description;
	CodeableConcept* _network;
	CodeableConcept* _unit;
	CodeableConcept* _term;
	size_t _financial_count;
	ExplanationOfBenefit_BenefitBalance_Financial** _financial;
};
struct ExplanationOfBenefit_BenefitBalance_Financial {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	union {
		NullableInt32 _allowedUnsignedInt;
		NullableString8 _allowedString;
		Money* _allowedMoney;
	} _allowed;

	enum class _allowedType {
		UnsignedInt,
		String,
		Money
	};
_allowedType _allowed_type;

	union {
		NullableInt32 _usedUnsignedInt;
		Money* _usedMoney;
	} _used;

	enum class _usedType {
		UnsignedInt,
		Money
	};
_usedType _used_type;

};
struct FamilyMemberHistory {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _instantiatesCanonical_count;
	NullableString8* _instantiatesCanonical;
	size_t _instantiatesUri_count;
	NullableString8* _instantiatesUri;
	NullableString8 _status;
	CodeableConcept* _dataAbsentReason;
	Reference* _patient;
	ISO8601_Time _date;
	NullableString8 _name;
	CodeableConcept* _relationship;
	CodeableConcept* _sex;
	union {
		Period* _bornPeriod;
		ISO8601_Time _bornDate;
		NullableString8 _bornString;
	} _born;

	enum class _bornType {
		Period,
		Date,
		String
	};
_bornType _born_type;

	union {
		Age* _ageAge;
		Range* _ageRange;
		NullableString8 _ageString;
	} _age;

	enum class _ageType {
		Age,
		Range,
		String
	};
_ageType _age_type;

	NullableBoolean _estimatedAge;
	union {
		NullableBoolean _deceasedBoolean;
		Age* _deceasedAge;
		Range* _deceasedRange;
		ISO8601_Time _deceasedDate;
		NullableString8 _deceasedString;
	} _deceased;

	enum class _deceasedType {
		Boolean,
		Age,
		Range,
		Date,
		String
	};
_deceasedType _deceased_type;

	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	size_t _note_count;
	Annotation** _note;
	size_t _condition_count;
	FamilyMemberHistory_Condition** _condition;
};
struct FamilyMemberHistory_Condition {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	CodeableConcept* _outcome;
	NullableBoolean _contributedToDeath;
	union {
		Age* _onsetAge;
		Range* _onsetRange;
		Period* _onsetPeriod;
		NullableString8 _onsetString;
	} _onset;

	enum class _onsetType {
		Age,
		Range,
		Period,
		String
	};
_onsetType _onset_type;

	size_t _note_count;
	Annotation** _note;
};
struct Flag {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	CodeableConcept* _code;
	Reference* _subject;
	Period* _period;
	Reference* _encounter;
	Reference* _author;
};
struct Goal {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _lifecycleStatus;
	CodeableConcept* _achievementStatus;
	size_t _category_count;
	CodeableConcept** _category;
	CodeableConcept* _priority;
	CodeableConcept* _description;
	Reference* _subject;
	union {
		ISO8601_Time _startDate;
		CodeableConcept* _startCodeableConcept;
	} _start;

	enum class _startType {
		Date,
		CodeableConcept
	};
_startType _start_type;

	size_t _target_count;
	Goal_Target** _target;
	ISO8601_Time _statusDate;
	NullableString8 _statusReason;
	Reference* _expressedBy;
	size_t _addresses_count;
	Reference** _addresses;
	size_t _note_count;
	Annotation** _note;
	size_t _outcomeCode_count;
	CodeableConcept** _outcomeCode;
	size_t _outcomeReference_count;
	Reference** _outcomeReference;
};
struct Goal_Target {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _measure;
	union {
		Quantity* _detailQuantity;
		Range* _detailRange;
		CodeableConcept* _detailCodeableConcept;
		NullableString8 _detailString;
		NullableBoolean _detailBoolean;
		NullableInt32 _detailInteger;
		Ratio* _detailRatio;
	} _detail;

	enum class _detailType {
		Quantity,
		Range,
		CodeableConcept,
		String,
		Boolean,
		Integer,
		Ratio
	};
_detailType _detail_type;

	union {
		ISO8601_Time _dueDate;
		Duration* _dueDuration;
	} _due;

	enum class _dueType {
		Date,
		Duration
	};
_dueType _due_type;

};
struct GraphDefinition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _status;
	NullableBoolean _experimental;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _start;
	NullableString8 _profile;
	size_t _link_count;
	GraphDefinition_Link** _link;
};
struct GraphDefinition_Link {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _path;
	NullableString8 _sliceName;
	NullableInt32 _min;
	NullableString8 _max;
	NullableString8 _description;
	size_t _target_count;
	GraphDefinition_Link_Target** _target;
};
struct GraphDefinition_Link_Target {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _type;
	NullableString8 _params;
	NullableString8 _profile;
	size_t _compartment_count;
	GraphDefinition_Link_Target_Compartment** _compartment;
	size_t _link_count;
	GraphDefinition_Link** _link;
};
struct GraphDefinition_Link_Target_Compartment {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _use;
	NullableString8 _code;
	NullableString8 _rule;
	NullableString8 _expression;
	NullableString8 _description;
};
struct Group {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableBoolean _active;
	NullableString8 _type;
	NullableBoolean _actual;
	CodeableConcept* _code;
	NullableString8 _name;
	NullableInt32 _quantity;
	Reference* _managingEntity;
	size_t _characteristic_count;
	Group_Characteristic** _characteristic;
	size_t _member_count;
	Group_Member** _member;
};
struct Group_Characteristic {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	union {
		CodeableConcept* _valueCodeableConcept;
		NullableBoolean _valueBoolean;
		Quantity* _valueQuantity;
		Range* _valueRange;
		Reference* _valueReference;
	} _value;

	enum class _valueType {
		CodeableConcept,
		Boolean,
		Quantity,
		Range,
		Reference
	};
_valueType _value_type;

	NullableBoolean _exclude;
	Period* _period;
};
struct Group_Member {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _entity;
	Period* _period;
	NullableBoolean _inactive;
};
struct GuidanceResponse {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _requestIdentifier;
	size_t _identifier_count;
	Identifier** _identifier;
	union {
		NullableString8 _moduleUri;
		NullableString8 _moduleCanonical;
		CodeableConcept* _moduleCodeableConcept;
	} _module;

	enum class _moduleType {
		Uri,
		Canonical,
		CodeableConcept
	};
_moduleType _module_type;

	NullableString8 _status;
	Reference* _subject;
	Reference* _encounter;
	ISO8601_Time _occurrenceDateTime;
	Reference* _performer;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	size_t _note_count;
	Annotation** _note;
	size_t _evaluationMessage_count;
	Reference** _evaluationMessage;
	Reference* _outputParameters;
	Reference* _result;
	size_t _dataRequirement_count;
	DataRequirement** _dataRequirement;
};
struct HealthcareService {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableBoolean _active;
	Reference* _providedBy;
	size_t _category_count;
	CodeableConcept** _category;
	size_t _type_count;
	CodeableConcept** _type;
	size_t _specialty_count;
	CodeableConcept** _specialty;
	size_t _location_count;
	Reference** _location;
	NullableString8 _name;
	NullableString8 _comment;
	NullableString8 _extraDetails;
	Attachment* _photo;
	size_t _telecom_count;
	ContactPoint** _telecom;
	size_t _coverageArea_count;
	Reference** _coverageArea;
	size_t _serviceProvisionCode_count;
	CodeableConcept** _serviceProvisionCode;
	size_t _eligibility_count;
	HealthcareService_Eligibility** _eligibility;
	size_t _program_count;
	CodeableConcept** _program;
	size_t _characteristic_count;
	CodeableConcept** _characteristic;
	size_t _communication_count;
	CodeableConcept** _communication;
	size_t _referralMethod_count;
	CodeableConcept** _referralMethod;
	NullableBoolean _appointmentRequired;
	size_t _availableTime_count;
	HealthcareService_AvailableTime** _availableTime;
	size_t _notAvailable_count;
	HealthcareService_NotAvailable** _notAvailable;
	NullableString8 _availabilityExceptions;
	size_t _endpoint_count;
	Reference** _endpoint;
};
struct HealthcareService_Eligibility {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	NullableString8 _comment;
};
struct HealthcareService_AvailableTime {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _daysOfWeek_count;
	NullableString8* _daysOfWeek;
	NullableBoolean _allDay;
	ISO8601_Time _availableStartTime;
	ISO8601_Time _availableEndTime;
};
struct HealthcareService_NotAvailable {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _description;
	Period* _during;
};
struct ImagingStudy {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	size_t _modality_count;
	Coding** _modality;
	Reference* _subject;
	Reference* _encounter;
	ISO8601_Time _started;
	size_t _basedOn_count;
	Reference** _basedOn;
	Reference* _referrer;
	size_t _interpreter_count;
	Reference** _interpreter;
	size_t _endpoint_count;
	Reference** _endpoint;
	NullableInt32 _numberOfSeries;
	NullableInt32 _numberOfInstances;
	Reference* _procedureReference;
	size_t _procedureCode_count;
	CodeableConcept** _procedureCode;
	Reference* _location;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	size_t _note_count;
	Annotation** _note;
	NullableString8 _description;
	size_t _series_count;
	ImagingStudy_Series** _series;
};
struct ImagingStudy_Series {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _uid;
	NullableInt32 _number;
	Coding* _modality;
	NullableString8 _description;
	NullableInt32 _numberOfInstances;
	size_t _endpoint_count;
	Reference** _endpoint;
	Coding* _bodySite;
	Coding* _laterality;
	size_t _specimen_count;
	Reference** _specimen;
	ISO8601_Time _started;
	size_t _performer_count;
	ImagingStudy_Series_Performer** _performer;
	size_t _instance_count;
	ImagingStudy_Series_Instance** _instance;
};
struct ImagingStudy_Series_Performer {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _function;
	Reference* _actor;
};
struct ImagingStudy_Series_Instance {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _uid;
	Coding* _sopClass;
	NullableInt32 _number;
	NullableString8 _title;
};
struct Immunization {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	CodeableConcept* _statusReason;
	CodeableConcept* _vaccineCode;
	Reference* _patient;
	Reference* _encounter;
	union {
		ISO8601_Time _occurrenceDateTime;
		NullableString8 _occurrenceString;
	} _occurrence;

	enum class _occurrenceType {
		DateTime,
		String
	};
_occurrenceType _occurrence_type;

	ISO8601_Time _recorded;
	NullableBoolean _primarySource;
	CodeableConcept* _reportOrigin;
	Reference* _location;
	Reference* _manufacturer;
	NullableString8 _lotNumber;
	ISO8601_Time _expirationDate;
	CodeableConcept* _site;
	CodeableConcept* _route;
	Quantity* _doseQuantity;
	size_t _performer_count;
	Immunization_Performer** _performer;
	size_t _note_count;
	Annotation** _note;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	NullableBoolean _isSubpotent;
	size_t _subpotentReason_count;
	CodeableConcept** _subpotentReason;
	size_t _education_count;
	Immunization_Education** _education;
	size_t _programEligibility_count;
	CodeableConcept** _programEligibility;
	CodeableConcept* _fundingSource;
	size_t _reaction_count;
	Immunization_Reaction** _reaction;
	size_t _protocolApplied_count;
	Immunization_ProtocolApplied** _protocolApplied;
};
struct Immunization_Performer {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _function;
	Reference* _actor;
};
struct Immunization_Education {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _documentType;
	NullableString8 _reference;
	ISO8601_Time _publicationDate;
	ISO8601_Time _presentationDate;
};
struct Immunization_Reaction {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	ISO8601_Time _date;
	Reference* _detail;
	NullableBoolean _reported;
};
struct Immunization_ProtocolApplied {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _series;
	Reference* _authority;
	size_t _targetDisease_count;
	CodeableConcept** _targetDisease;
	union {
		NullableInt32 _doseNumberPositiveInt;
		NullableString8 _doseNumberString;
	} _doseNumber;

	enum class _doseNumberType {
		PositiveInt,
		String
	};
_doseNumberType _doseNumber_type;

	union {
		NullableInt32 _seriesDosesPositiveInt;
		NullableString8 _seriesDosesString;
	} _seriesDoses;

	enum class _seriesDosesType {
		PositiveInt,
		String
	};
_seriesDosesType _seriesDoses_type;

};
struct ImmunizationEvaluation {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	Reference* _patient;
	ISO8601_Time _date;
	Reference* _authority;
	CodeableConcept* _targetDisease;
	Reference* _immunizationEvent;
	CodeableConcept* _doseStatus;
	size_t _doseStatusReason_count;
	CodeableConcept** _doseStatusReason;
	NullableString8 _description;
	NullableString8 _series;
	union {
		NullableInt32 _doseNumberPositiveInt;
		NullableString8 _doseNumberString;
	} _doseNumber;

	enum class _doseNumberType {
		PositiveInt,
		String
	};
_doseNumberType _doseNumber_type;

	union {
		NullableInt32 _seriesDosesPositiveInt;
		NullableString8 _seriesDosesString;
	} _seriesDoses;

	enum class _seriesDosesType {
		PositiveInt,
		String
	};
_seriesDosesType _seriesDoses_type;

};
struct ImmunizationRecommendation {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	Reference* _patient;
	ISO8601_Time _date;
	Reference* _authority;
	size_t _recommendation_count;
	ImmunizationRecommendation_Recommendation** _recommendation;
};
struct ImmunizationRecommendation_Recommendation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _vaccineCode_count;
	CodeableConcept** _vaccineCode;
	CodeableConcept* _targetDisease;
	size_t _contraindicatedVaccineCode_count;
	CodeableConcept** _contraindicatedVaccineCode;
	CodeableConcept* _forecastStatus;
	size_t _forecastReason_count;
	CodeableConcept** _forecastReason;
	size_t _dateCriterion_count;
	ImmunizationRecommendation_Recommendation_DateCriterion** _dateCriterion;
	NullableString8 _description;
	NullableString8 _series;
	union {
		NullableInt32 _doseNumberPositiveInt;
		NullableString8 _doseNumberString;
	} _doseNumber;

	enum class _doseNumberType {
		PositiveInt,
		String
	};
_doseNumberType _doseNumber_type;

	union {
		NullableInt32 _seriesDosesPositiveInt;
		NullableString8 _seriesDosesString;
	} _seriesDoses;

	enum class _seriesDosesType {
		PositiveInt,
		String
	};
_seriesDosesType _seriesDoses_type;

	size_t _supportingImmunization_count;
	Reference** _supportingImmunization;
	size_t _supportingPatientInformation_count;
	Reference** _supportingPatientInformation;
};
struct ImmunizationRecommendation_Recommendation_DateCriterion {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	ISO8601_Time _value;
};
struct ImplementationGuide {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _status;
	NullableBoolean _experimental;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _copyright;
	NullableString8 _packageId;
	NullableString8 _license;
	size_t _fhirVersion_count;
	NullableString8* _fhirVersion;
	size_t _dependsOn_count;
	ImplementationGuide_DependsOn** _dependsOn;
	size_t _global_count;
	ImplementationGuide_Global** _global;
	ImplementationGuide_Definition* _definition;
	ImplementationGuide_Manifest* _manifest;
};
struct ImplementationGuide_DependsOn {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _uri;
	NullableString8 _packageId;
	NullableString8 _version;
};
struct ImplementationGuide_Global {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _type;
	NullableString8 _profile;
};
struct ImplementationGuide_Definition {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _grouping_count;
	ImplementationGuide_Definition_Grouping** _grouping;
	size_t _resource_count;
	ImplementationGuide_Definition_Resource** _resource;
	ImplementationGuide_Definition_Page* _page;
	size_t _parameter_count;
	ImplementationGuide_Definition_Parameter** _parameter;
	size_t _template_count;
	ImplementationGuide_Definition_Template** _template;
};
struct ImplementationGuide_Definition_Grouping {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	NullableString8 _description;
};
struct ImplementationGuide_Definition_Resource {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _reference;
	size_t _fhirVersion_count;
	NullableString8* _fhirVersion;
	NullableString8 _name;
	NullableString8 _description;
	union {
		NullableBoolean _exampleBoolean;
		NullableString8 _exampleCanonical;
	} _example;

	enum class _exampleType {
		Boolean,
		Canonical
	};
_exampleType _example_type;

	NullableString8 _groupingId;
};
struct ImplementationGuide_Definition_Page {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		NullableString8 _nameUrl;
		Reference* _nameReference;
	} _name;

	enum class _nameType {
		Url,
		Reference
	};
_nameType _name_type;

	NullableString8 _title;
	NullableString8 _generation;
	size_t _page_count;
	ImplementationGuide_Definition_Page** _page;
};
struct ImplementationGuide_Definition_Parameter {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _code;
	NullableString8 _value;
};
struct ImplementationGuide_Definition_Template {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _code;
	NullableString8 _source;
	NullableString8 _scope;
};
struct ImplementationGuide_Manifest {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _rendering;
	size_t _resource_count;
	ImplementationGuide_Manifest_Resource** _resource;
	size_t _page_count;
	ImplementationGuide_Manifest_Page** _page;
	size_t _image_count;
	NullableString8* _image;
	size_t _other_count;
	NullableString8* _other;
};
struct ImplementationGuide_Manifest_Resource {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _reference;
	union {
		NullableBoolean _exampleBoolean;
		NullableString8 _exampleCanonical;
	} _example;

	enum class _exampleType {
		Boolean,
		Canonical
	};
_exampleType _example_type;

	NullableString8 _relativePath;
};
struct ImplementationGuide_Manifest_Page {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	NullableString8 _title;
	size_t _anchor_count;
	NullableString8* _anchor;
};
struct InsurancePlan {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	size_t _type_count;
	CodeableConcept** _type;
	NullableString8 _name;
	size_t _alias_count;
	NullableString8* _alias;
	Period* _period;
	Reference* _ownedBy;
	Reference* _administeredBy;
	size_t _coverageArea_count;
	Reference** _coverageArea;
	size_t _contact_count;
	InsurancePlan_Contact** _contact;
	size_t _endpoint_count;
	Reference** _endpoint;
	size_t _network_count;
	Reference** _network;
	size_t _coverage_count;
	InsurancePlan_Coverage** _coverage;
	size_t _plan_count;
	InsurancePlan_Plan** _plan;
};
struct InsurancePlan_Contact {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _purpose;
	HumanName* _name;
	size_t _telecom_count;
	ContactPoint** _telecom;
	Address* _address;
};
struct InsurancePlan_Coverage {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	size_t _network_count;
	Reference** _network;
	size_t _benefit_count;
	InsurancePlan_Coverage_Benefit** _benefit;
};
struct InsurancePlan_Coverage_Benefit {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	NullableString8 _requirement;
	size_t _limit_count;
	InsurancePlan_Coverage_Benefit_Limit** _limit;
};
struct InsurancePlan_Coverage_Benefit_Limit {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Quantity* _value;
	CodeableConcept* _code;
};
struct InsurancePlan_Plan {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	CodeableConcept* _type;
	size_t _coverageArea_count;
	Reference** _coverageArea;
	size_t _network_count;
	Reference** _network;
	size_t _generalCost_count;
	InsurancePlan_Plan_GeneralCost** _generalCost;
	size_t _specificCost_count;
	InsurancePlan_Plan_SpecificCost** _specificCost;
};
struct InsurancePlan_Plan_GeneralCost {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	NullableInt32 _groupSize;
	Money* _cost;
	NullableString8 _comment;
};
struct InsurancePlan_Plan_SpecificCost {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _category;
	size_t _benefit_count;
	InsurancePlan_Plan_SpecificCost_Benefit** _benefit;
};
struct InsurancePlan_Plan_SpecificCost_Benefit {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	size_t _cost_count;
	InsurancePlan_Plan_SpecificCost_Benefit_Cost** _cost;
};
struct InsurancePlan_Plan_SpecificCost_Benefit_Cost {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	CodeableConcept* _applicability;
	size_t _qualifiers_count;
	CodeableConcept** _qualifiers;
	Quantity* _value;
};
struct Invoice {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	NullableString8 _cancelledReason;
	CodeableConcept* _type;
	Reference* _subject;
	Reference* _recipient;
	ISO8601_Time _date;
	size_t _participant_count;
	Invoice_Participant** _participant;
	Reference* _issuer;
	Reference* _account;
	size_t _lineItem_count;
	Invoice_LineItem** _lineItem;
	size_t _totalPriceComponent_count;
	Invoice_LineItem_PriceComponent** _totalPriceComponent;
	Money* _totalNet;
	Money* _totalGross;
	NullableString8 _paymentTerms;
	size_t _note_count;
	Annotation** _note;
};
struct Invoice_Participant {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _role;
	Reference* _actor;
};
struct Invoice_LineItem {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _sequence;
	union {
		Reference* _chargeItemReference;
		CodeableConcept* _chargeItemCodeableConcept;
	} _chargeItem;

	enum class _chargeItemType {
		Reference,
		CodeableConcept
	};
_chargeItemType _chargeItem_type;

	size_t _priceComponent_count;
	Invoice_LineItem_PriceComponent** _priceComponent;
};
struct Invoice_LineItem_PriceComponent {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _type;
	CodeableConcept* _code;
	NullableString8 _factor;
	Money* _amount;
};
struct Library {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _subtitle;
	NullableString8 _status;
	NullableBoolean _experimental;
	CodeableConcept* _type;
	union {
		CodeableConcept* _subjectCodeableConcept;
		Reference* _subjectReference;
	} _subject;

	enum class _subjectType {
		CodeableConcept,
		Reference
	};
_subjectType _subject_type;

	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _usage;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _topic_count;
	CodeableConcept** _topic;
	size_t _author_count;
	ContactDetail** _author;
	size_t _editor_count;
	ContactDetail** _editor;
	size_t _reviewer_count;
	ContactDetail** _reviewer;
	size_t _endorser_count;
	ContactDetail** _endorser;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	size_t _parameter_count;
	ParameterDefinition** _parameter;
	size_t _dataRequirement_count;
	DataRequirement** _dataRequirement;
	size_t _content_count;
	Attachment** _content;
};
struct Linkage {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableBoolean _active;
	Reference* _author;
	size_t _item_count;
	Linkage_Item** _item;
};
struct Linkage_Item {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _type;
	Reference* _resource;
};
struct List {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	NullableString8 _mode;
	NullableString8 _title;
	CodeableConcept* _code;
	Reference* _subject;
	Reference* _encounter;
	ISO8601_Time _date;
	Reference* _source;
	CodeableConcept* _orderedBy;
	size_t _note_count;
	Annotation** _note;
	size_t _entry_count;
	List_Entry** _entry;
	CodeableConcept* _emptyReason;
};
struct List_Entry {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _flag;
	NullableBoolean _deleted;
	ISO8601_Time _date;
	Reference* _item;
};
struct Location {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	Coding* _operationalStatus;
	NullableString8 _name;
	size_t _alias_count;
	NullableString8* _alias;
	NullableString8 _description;
	NullableString8 _mode;
	size_t _type_count;
	CodeableConcept** _type;
	size_t _telecom_count;
	ContactPoint** _telecom;
	Address* _address;
	CodeableConcept* _physicalType;
	Location_Position* _position;
	Reference* _managingOrganization;
	Reference* _partOf;
	size_t _hoursOfOperation_count;
	Location_HoursOfOperation** _hoursOfOperation;
	NullableString8 _availabilityExceptions;
	size_t _endpoint_count;
	Reference** _endpoint;
};
struct Location_Position {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _longitude;
	NullableString8 _latitude;
	NullableString8 _altitude;
};
struct Location_HoursOfOperation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _daysOfWeek_count;
	NullableString8* _daysOfWeek;
	NullableBoolean _allDay;
	ISO8601_Time _openingTime;
	ISO8601_Time _closingTime;
};
struct Measure {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _subtitle;
	NullableString8 _status;
	NullableBoolean _experimental;
	union {
		CodeableConcept* _subjectCodeableConcept;
		Reference* _subjectReference;
	} _subject;

	enum class _subjectType {
		CodeableConcept,
		Reference
	};
_subjectType _subject_type;

	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _usage;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _topic_count;
	CodeableConcept** _topic;
	size_t _author_count;
	ContactDetail** _author;
	size_t _editor_count;
	ContactDetail** _editor;
	size_t _reviewer_count;
	ContactDetail** _reviewer;
	size_t _endorser_count;
	ContactDetail** _endorser;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	size_t _library_count;
	NullableString8* _library;
	NullableString8 _disclaimer;
	CodeableConcept* _scoring;
	CodeableConcept* _compositeScoring;
	size_t _type_count;
	CodeableConcept** _type;
	NullableString8 _riskAdjustment;
	NullableString8 _rateAggregation;
	NullableString8 _rationale;
	NullableString8 _clinicalRecommendationStatement;
	CodeableConcept* _improvementNotation;
	size_t _definition_count;
	NullableString8* _definition;
	NullableString8 _guidance;
	size_t _group_count;
	Measure_Group** _group;
	size_t _supplementalData_count;
	Measure_SupplementalData** _supplementalData;
};
struct Measure_Group {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	NullableString8 _description;
	size_t _population_count;
	Measure_Group_Population** _population;
	size_t _stratifier_count;
	Measure_Group_Stratifier** _stratifier;
};
struct Measure_Group_Population {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	NullableString8 _description;
	Expression* _criteria;
};
struct Measure_Group_Stratifier {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	NullableString8 _description;
	Expression* _criteria;
	size_t _component_count;
	Measure_Group_Stratifier_Component** _component;
};
struct Measure_Group_Stratifier_Component {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	NullableString8 _description;
	Expression* _criteria;
};
struct Measure_SupplementalData {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	size_t _usage_count;
	CodeableConcept** _usage;
	NullableString8 _description;
	Expression* _criteria;
};
struct MeasureReport {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	NullableString8 _type;
	NullableString8 _measure;
	Reference* _subject;
	ISO8601_Time _date;
	Reference* _reporter;
	Period* _period;
	CodeableConcept* _improvementNotation;
	size_t _group_count;
	MeasureReport_Group** _group;
	size_t _evaluatedResource_count;
	Reference** _evaluatedResource;
};
struct MeasureReport_Group {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	size_t _population_count;
	MeasureReport_Group_Population** _population;
	Quantity* _measureScore;
	size_t _stratifier_count;
	MeasureReport_Group_Stratifier** _stratifier;
};
struct MeasureReport_Group_Population {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	NullableInt32 _count;
	Reference* _subjectResults;
};
struct MeasureReport_Group_Stratifier {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _code_count;
	CodeableConcept** _code;
	size_t _stratum_count;
	MeasureReport_Group_Stratifier_Stratum** _stratum;
};
struct MeasureReport_Group_Stratifier_Stratum {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _value;
	size_t _component_count;
	MeasureReport_Group_Stratifier_Stratum_Component** _component;
	size_t _population_count;
	MeasureReport_Group_Stratifier_Stratum_Population** _population;
	Quantity* _measureScore;
};
struct MeasureReport_Group_Stratifier_Stratum_Component {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	CodeableConcept* _value;
};
struct MeasureReport_Group_Stratifier_Stratum_Population {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	NullableInt32 _count;
	Reference* _subjectResults;
};
struct Media {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	CodeableConcept* _type;
	CodeableConcept* _modality;
	CodeableConcept* _view;
	Reference* _subject;
	Reference* _encounter;
	union {
		ISO8601_Time _createdDateTime;
		Period* _createdPeriod;
	} _created;

	enum class _createdType {
		DateTime,
		Period
	};
_createdType _created_type;

	ISO8601_Time _issued;
	Reference* _operator;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	CodeableConcept* _bodySite;
	NullableString8 _deviceName;
	Reference* _device;
	NullableInt32 _height;
	NullableInt32 _width;
	NullableInt32 _frames;
	NullableString8 _duration;
	Attachment* _content;
	size_t _note_count;
	Annotation** _note;
};
struct Medication {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	CodeableConcept* _code;
	NullableString8 _status;
	Reference* _manufacturer;
	CodeableConcept* _form;
	Ratio* _amount;
	size_t _ingredient_count;
	Medication_Ingredient** _ingredient;
	Medication_Batch* _batch;
};
struct Medication_Ingredient {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		CodeableConcept* _itemCodeableConcept;
		Reference* _itemReference;
	} _item;

	enum class _itemType {
		CodeableConcept,
		Reference
	};
_itemType _item_type;

	NullableBoolean _isActive;
	Ratio* _strength;
};
struct Medication_Batch {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _lotNumber;
	ISO8601_Time _expirationDate;
};
struct MedicationAdministration {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _instantiates_count;
	NullableString8* _instantiates;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	size_t _statusReason_count;
	CodeableConcept** _statusReason;
	CodeableConcept* _category;
	union {
		CodeableConcept* _medicationCodeableConcept;
		Reference* _medicationReference;
	} _medication;

	enum class _medicationType {
		CodeableConcept,
		Reference
	};
_medicationType _medication_type;

	Reference* _subject;
	Reference* _context;
	size_t _supportingInformation_count;
	Reference** _supportingInformation;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period
	};
_effectiveType _effective_type;

	size_t _performer_count;
	MedicationAdministration_Performer** _performer;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	Reference* _request;
	size_t _device_count;
	Reference** _device;
	size_t _note_count;
	Annotation** _note;
	MedicationAdministration_Dosage* _dosage;
	size_t _eventHistory_count;
	Reference** _eventHistory;
};
struct MedicationAdministration_Performer {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _function;
	Reference* _actor;
};
struct MedicationAdministration_Dosage {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _text;
	CodeableConcept* _site;
	CodeableConcept* _route;
	CodeableConcept* _method;
	Quantity* _dose;
	union {
		Ratio* _rateRatio;
		Quantity* _rateQuantity;
	} _rate;

	enum class _rateType {
		Ratio,
		Quantity
	};
_rateType _rate_type;

};
struct MedicationDispense {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	union {
		CodeableConcept* _statusReasonCodeableConcept;
		Reference* _statusReasonReference;
	} _statusReason;

	enum class _statusReasonType {
		CodeableConcept,
		Reference
	};
_statusReasonType _statusReason_type;

	CodeableConcept* _category;
	union {
		CodeableConcept* _medicationCodeableConcept;
		Reference* _medicationReference;
	} _medication;

	enum class _medicationType {
		CodeableConcept,
		Reference
	};
_medicationType _medication_type;

	Reference* _subject;
	Reference* _context;
	size_t _supportingInformation_count;
	Reference** _supportingInformation;
	size_t _performer_count;
	MedicationDispense_Performer** _performer;
	Reference* _location;
	size_t _authorizingPrescription_count;
	Reference** _authorizingPrescription;
	CodeableConcept* _type;
	Quantity* _quantity;
	Quantity* _daysSupply;
	ISO8601_Time _whenPrepared;
	ISO8601_Time _whenHandedOver;
	Reference* _destination;
	size_t _receiver_count;
	Reference** _receiver;
	size_t _note_count;
	Annotation** _note;
	size_t _dosageInstruction_count;
	Dosage** _dosageInstruction;
	MedicationDispense_Substitution* _substitution;
	size_t _detectedIssue_count;
	Reference** _detectedIssue;
	size_t _eventHistory_count;
	Reference** _eventHistory;
};
struct MedicationDispense_Performer {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _function;
	Reference* _actor;
};
struct MedicationDispense_Substitution {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableBoolean _wasSubstituted;
	CodeableConcept* _type;
	size_t _reason_count;
	CodeableConcept** _reason;
	size_t _responsibleParty_count;
	Reference** _responsibleParty;
};
struct MedicationKnowledge {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	NullableString8 _status;
	Reference* _manufacturer;
	CodeableConcept* _doseForm;
	Quantity* _amount;
	size_t _synonym_count;
	NullableString8* _synonym;
	size_t _relatedMedicationKnowledge_count;
	MedicationKnowledge_RelatedMedicationKnowledge** _relatedMedicationKnowledge;
	size_t _associatedMedication_count;
	Reference** _associatedMedication;
	size_t _productType_count;
	CodeableConcept** _productType;
	size_t _monograph_count;
	MedicationKnowledge_Monograph** _monograph;
	size_t _ingredient_count;
	MedicationKnowledge_Ingredient** _ingredient;
	NullableString8 _preparationInstruction;
	size_t _intendedRoute_count;
	CodeableConcept** _intendedRoute;
	size_t _cost_count;
	MedicationKnowledge_Cost** _cost;
	size_t _monitoringProgram_count;
	MedicationKnowledge_MonitoringProgram** _monitoringProgram;
	size_t _administrationGuidelines_count;
	MedicationKnowledge_AdministrationGuidelines** _administrationGuidelines;
	size_t _medicineClassification_count;
	MedicationKnowledge_MedicineClassification** _medicineClassification;
	MedicationKnowledge_Packaging* _packaging;
	size_t _drugCharacteristic_count;
	MedicationKnowledge_DrugCharacteristic** _drugCharacteristic;
	size_t _contraindication_count;
	Reference** _contraindication;
	size_t _regulatory_count;
	MedicationKnowledge_Regulatory** _regulatory;
	size_t _kinetics_count;
	MedicationKnowledge_Kinetics** _kinetics;
};
struct MedicationKnowledge_RelatedMedicationKnowledge {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	size_t _reference_count;
	Reference** _reference;
};
struct MedicationKnowledge_Monograph {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	Reference* _source;
};
struct MedicationKnowledge_Ingredient {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		CodeableConcept* _itemCodeableConcept;
		Reference* _itemReference;
	} _item;

	enum class _itemType {
		CodeableConcept,
		Reference
	};
_itemType _item_type;

	NullableBoolean _isActive;
	Ratio* _strength;
};
struct MedicationKnowledge_Cost {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	NullableString8 _source;
	Money* _cost;
};
struct MedicationKnowledge_MonitoringProgram {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	NullableString8 _name;
};
struct MedicationKnowledge_AdministrationGuidelines {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _dosage_count;
	MedicationKnowledge_AdministrationGuidelines_Dosage** _dosage;
	union {
		CodeableConcept* _indicationCodeableConcept;
		Reference* _indicationReference;
	} _indication;

	enum class _indicationType {
		CodeableConcept,
		Reference
	};
_indicationType _indication_type;

	size_t _patientCharacteristics_count;
	MedicationKnowledge_AdministrationGuidelines_PatientCharacteristics** _patientCharacteristics;
};
struct MedicationKnowledge_AdministrationGuidelines_Dosage {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	size_t _dosage_count;
	Dosage** _dosage;
};
struct MedicationKnowledge_AdministrationGuidelines_PatientCharacteristics {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		CodeableConcept* _characteristicCodeableConcept;
		Quantity* _characteristicQuantity;
	} _characteristic;

	enum class _characteristicType {
		CodeableConcept,
		Quantity
	};
_characteristicType _characteristic_type;

	size_t _value_count;
	NullableString8* _value;
};
struct MedicationKnowledge_MedicineClassification {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	size_t _classification_count;
	CodeableConcept** _classification;
};
struct MedicationKnowledge_Packaging {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	Quantity* _quantity;
};
struct MedicationKnowledge_DrugCharacteristic {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	union {
		CodeableConcept* _valueCodeableConcept;
		NullableString8 _valueString;
		Quantity* _valueQuantity;
		NullableString8 _valueBase64Binary;
	} _value;

	enum class _valueType {
		CodeableConcept,
		String,
		Quantity,
		Base64Binary
	};
_valueType _value_type;

};
struct MedicationKnowledge_Regulatory {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _regulatoryAuthority;
	size_t _substitution_count;
	MedicationKnowledge_Regulatory_Substitution** _substitution;
	size_t _schedule_count;
	MedicationKnowledge_Regulatory_Schedule** _schedule;
	MedicationKnowledge_Regulatory_MaxDispense* _maxDispense;
};
struct MedicationKnowledge_Regulatory_Substitution {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	NullableBoolean _allowed;
};
struct MedicationKnowledge_Regulatory_Schedule {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _schedule;
};
struct MedicationKnowledge_Regulatory_MaxDispense {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Quantity* _quantity;
	Duration* _period;
};
struct MedicationKnowledge_Kinetics {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _areaUnderCurve_count;
	Quantity** _areaUnderCurve;
	size_t _lethalDose50_count;
	Quantity** _lethalDose50;
	Duration* _halfLifePeriod;
};
struct MedicationRequest {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	CodeableConcept* _statusReason;
	NullableString8 _intent;
	size_t _category_count;
	CodeableConcept** _category;
	NullableString8 _priority;
	NullableBoolean _doNotPerform;
	union {
		NullableBoolean _reportedBoolean;
		Reference* _reportedReference;
	} _reported;

	enum class _reportedType {
		Boolean,
		Reference
	};
_reportedType _reported_type;

	union {
		CodeableConcept* _medicationCodeableConcept;
		Reference* _medicationReference;
	} _medication;

	enum class _medicationType {
		CodeableConcept,
		Reference
	};
_medicationType _medication_type;

	Reference* _subject;
	Reference* _encounter;
	size_t _supportingInformation_count;
	Reference** _supportingInformation;
	ISO8601_Time _authoredOn;
	Reference* _requester;
	Reference* _performer;
	CodeableConcept* _performerType;
	Reference* _recorder;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	size_t _instantiatesCanonical_count;
	NullableString8* _instantiatesCanonical;
	size_t _instantiatesUri_count;
	NullableString8* _instantiatesUri;
	size_t _basedOn_count;
	Reference** _basedOn;
	Identifier* _groupIdentifier;
	CodeableConcept* _courseOfTherapyType;
	size_t _insurance_count;
	Reference** _insurance;
	size_t _note_count;
	Annotation** _note;
	size_t _dosageInstruction_count;
	Dosage** _dosageInstruction;
	MedicationRequest_DispenseRequest* _dispenseRequest;
	MedicationRequest_Substitution* _substitution;
	Reference* _priorPrescription;
	size_t _detectedIssue_count;
	Reference** _detectedIssue;
	size_t _eventHistory_count;
	Reference** _eventHistory;
};
struct MedicationRequest_DispenseRequest {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	MedicationRequest_DispenseRequest_InitialFill* _initialFill;
	Duration* _dispenseInterval;
	Period* _validityPeriod;
	NullableInt32 _numberOfRepeatsAllowed;
	Quantity* _quantity;
	Duration* _expectedSupplyDuration;
	Reference* _performer;
};
struct MedicationRequest_DispenseRequest_InitialFill {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Quantity* _quantity;
	Duration* _duration;
};
struct MedicationRequest_Substitution {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		NullableBoolean _allowedBoolean;
		CodeableConcept* _allowedCodeableConcept;
	} _allowed;

	enum class _allowedType {
		Boolean,
		CodeableConcept
	};
_allowedType _allowed_type;

	CodeableConcept* _reason;
};
struct MedicationStatement {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	size_t _statusReason_count;
	CodeableConcept** _statusReason;
	CodeableConcept* _category;
	union {
		CodeableConcept* _medicationCodeableConcept;
		Reference* _medicationReference;
	} _medication;

	enum class _medicationType {
		CodeableConcept,
		Reference
	};
_medicationType _medication_type;

	Reference* _subject;
	Reference* _context;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period
	};
_effectiveType _effective_type;

	ISO8601_Time _dateAsserted;
	Reference* _informationSource;
	size_t _derivedFrom_count;
	Reference** _derivedFrom;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	size_t _note_count;
	Annotation** _note;
	size_t _dosage_count;
	Dosage** _dosage;
};
struct MedicinalProduct {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	CodeableConcept* _type;
	Coding* _domain;
	CodeableConcept* _combinedPharmaceuticalDoseForm;
	CodeableConcept* _legalStatusOfSupply;
	CodeableConcept* _additionalMonitoringIndicator;
	size_t _specialMeasures_count;
	NullableString8* _specialMeasures;
	CodeableConcept* _paediatricUseIndicator;
	size_t _productClassification_count;
	CodeableConcept** _productClassification;
	size_t _marketingStatus_count;
	MarketingStatus** _marketingStatus;
	size_t _pharmaceuticalProduct_count;
	Reference** _pharmaceuticalProduct;
	size_t _packagedMedicinalProduct_count;
	Reference** _packagedMedicinalProduct;
	size_t _attachedDocument_count;
	Reference** _attachedDocument;
	size_t _masterFile_count;
	Reference** _masterFile;
	size_t _contact_count;
	Reference** _contact;
	size_t _clinicalTrial_count;
	Reference** _clinicalTrial;
	size_t _name_count;
	MedicinalProduct_Name** _name;
	size_t _crossReference_count;
	Identifier** _crossReference;
	size_t _manufacturingBusinessOperation_count;
	MedicinalProduct_ManufacturingBusinessOperation** _manufacturingBusinessOperation;
	size_t _specialDesignation_count;
	MedicinalProduct_SpecialDesignation** _specialDesignation;
};
struct MedicinalProduct_Name {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _productName;
	size_t _namePart_count;
	MedicinalProduct_Name_NamePart** _namePart;
	size_t _countryLanguage_count;
	MedicinalProduct_Name_CountryLanguage** _countryLanguage;
};
struct MedicinalProduct_Name_NamePart {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _part;
	Coding* _type;
};
struct MedicinalProduct_Name_CountryLanguage {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _country;
	CodeableConcept* _jurisdiction;
	CodeableConcept* _language;
};
struct MedicinalProduct_ManufacturingBusinessOperation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _operationType;
	Identifier* _authorisationReferenceNumber;
	ISO8601_Time _effectiveDate;
	CodeableConcept* _confidentialityIndicator;
	size_t _manufacturer_count;
	Reference** _manufacturer;
	Reference* _regulator;
};
struct MedicinalProduct_SpecialDesignation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	CodeableConcept* _type;
	CodeableConcept* _intendedUse;
	union {
		CodeableConcept* _indicationCodeableConcept;
		Reference* _indicationReference;
	} _indication;

	enum class _indicationType {
		CodeableConcept,
		Reference
	};
_indicationType _indication_type;

	CodeableConcept* _status;
	ISO8601_Time _date;
	CodeableConcept* _species;
};
struct MedicinalProductAuthorization {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	Reference* _subject;
	size_t _country_count;
	CodeableConcept** _country;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	CodeableConcept* _status;
	ISO8601_Time _statusDate;
	ISO8601_Time _restoreDate;
	Period* _validityPeriod;
	Period* _dataExclusivityPeriod;
	ISO8601_Time _dateOfFirstAuthorization;
	ISO8601_Time _internationalBirthDate;
	CodeableConcept* _legalBasis;
	size_t _jurisdictionalAuthorization_count;
	MedicinalProductAuthorization_JurisdictionalAuthorization** _jurisdictionalAuthorization;
	Reference* _holder;
	Reference* _regulator;
	MedicinalProductAuthorization_Procedure* _procedure;
};
struct MedicinalProductAuthorization_JurisdictionalAuthorization {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	CodeableConcept* _country;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	CodeableConcept* _legalStatusOfSupply;
	Period* _validityPeriod;
};
struct MedicinalProductAuthorization_Procedure {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _identifier;
	CodeableConcept* _type;
	union {
		Period* _datePeriod;
		ISO8601_Time _dateDateTime;
	} _date;

	enum class _dateType {
		Period,
		DateTime
	};
_dateType _date_type;

	size_t _application_count;
	MedicinalProductAuthorization_Procedure** _application;
};
struct MedicinalProductContraindication {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _subject_count;
	Reference** _subject;
	CodeableConcept* _disease;
	CodeableConcept* _diseaseStatus;
	size_t _comorbidity_count;
	CodeableConcept** _comorbidity;
	size_t _therapeuticIndication_count;
	Reference** _therapeuticIndication;
	size_t _otherTherapy_count;
	MedicinalProductContraindication_OtherTherapy** _otherTherapy;
	size_t _population_count;
	Population** _population;
};
struct MedicinalProductContraindication_OtherTherapy {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _therapyRelationshipType;
	union {
		CodeableConcept* _medicationCodeableConcept;
		Reference* _medicationReference;
	} _medication;

	enum class _medicationType {
		CodeableConcept,
		Reference
	};
_medicationType _medication_type;

};
struct MedicinalProductIndication {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _subject_count;
	Reference** _subject;
	CodeableConcept* _diseaseSymptomProcedure;
	CodeableConcept* _diseaseStatus;
	size_t _comorbidity_count;
	CodeableConcept** _comorbidity;
	CodeableConcept* _intendedEffect;
	Quantity* _duration;
	size_t _otherTherapy_count;
	MedicinalProductIndication_OtherTherapy** _otherTherapy;
	size_t _undesirableEffect_count;
	Reference** _undesirableEffect;
	size_t _population_count;
	Population** _population;
};
struct MedicinalProductIndication_OtherTherapy {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _therapyRelationshipType;
	union {
		CodeableConcept* _medicationCodeableConcept;
		Reference* _medicationReference;
	} _medication;

	enum class _medicationType {
		CodeableConcept,
		Reference
	};
_medicationType _medication_type;

};
struct MedicinalProductIngredient {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _identifier;
	CodeableConcept* _role;
	NullableBoolean _allergenicIndicator;
	size_t _manufacturer_count;
	Reference** _manufacturer;
	size_t _specifiedSubstance_count;
	MedicinalProductIngredient_SpecifiedSubstance** _specifiedSubstance;
	MedicinalProductIngredient_Substance* _substance;
};
struct MedicinalProductIngredient_SpecifiedSubstance {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	CodeableConcept* _group;
	CodeableConcept* _confidentiality;
	size_t _strength_count;
	MedicinalProductIngredient_SpecifiedSubstance_Strength** _strength;
};
struct MedicinalProductIngredient_SpecifiedSubstance_Strength {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Ratio* _presentation;
	Ratio* _presentationLowLimit;
	Ratio* _concentration;
	Ratio* _concentrationLowLimit;
	NullableString8 _measurementPoint;
	size_t _country_count;
	CodeableConcept** _country;
	size_t _referenceStrength_count;
	MedicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength** _referenceStrength;
};
struct MedicinalProductIngredient_SpecifiedSubstance_Strength_ReferenceStrength {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _substance;
	Ratio* _strength;
	Ratio* _strengthLowLimit;
	NullableString8 _measurementPoint;
	size_t _country_count;
	CodeableConcept** _country;
};
struct MedicinalProductIngredient_Substance {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	size_t _strength_count;
	MedicinalProductIngredient_SpecifiedSubstance_Strength** _strength;
};
struct MedicinalProductInteraction {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _subject_count;
	Reference** _subject;
	NullableString8 _description;
	size_t _interactant_count;
	MedicinalProductInteraction_Interactant** _interactant;
	CodeableConcept* _type;
	CodeableConcept* _effect;
	CodeableConcept* _incidence;
	CodeableConcept* _management;
};
struct MedicinalProductInteraction_Interactant {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		Reference* _itemReference;
		CodeableConcept* _itemCodeableConcept;
	} _item;

	enum class _itemType {
		Reference,
		CodeableConcept
	};
_itemType _item_type;

};
struct MedicinalProductManufactured {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _manufacturedDoseForm;
	CodeableConcept* _unitOfPresentation;
	Quantity* _quantity;
	size_t _manufacturer_count;
	Reference** _manufacturer;
	size_t _ingredient_count;
	Reference** _ingredient;
	ProdCharacteristic* _physicalCharacteristics;
	size_t _otherCharacteristics_count;
	CodeableConcept** _otherCharacteristics;
};
struct MedicinalProductPackaged {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _subject_count;
	Reference** _subject;
	NullableString8 _description;
	CodeableConcept* _legalStatusOfSupply;
	size_t _marketingStatus_count;
	MarketingStatus** _marketingStatus;
	Reference* _marketingAuthorization;
	size_t _manufacturer_count;
	Reference** _manufacturer;
	size_t _batchIdentifier_count;
	MedicinalProductPackaged_BatchIdentifier** _batchIdentifier;
	size_t _packageItem_count;
	MedicinalProductPackaged_PackageItem** _packageItem;
};
struct MedicinalProductPackaged_BatchIdentifier {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _outerPackaging;
	Identifier* _immediatePackaging;
};
struct MedicinalProductPackaged_PackageItem {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	CodeableConcept* _type;
	Quantity* _quantity;
	size_t _material_count;
	CodeableConcept** _material;
	size_t _alternateMaterial_count;
	CodeableConcept** _alternateMaterial;
	size_t _device_count;
	Reference** _device;
	size_t _manufacturedItem_count;
	Reference** _manufacturedItem;
	size_t _packageItem_count;
	MedicinalProductPackaged_PackageItem** _packageItem;
	ProdCharacteristic* _physicalCharacteristics;
	size_t _otherCharacteristics_count;
	CodeableConcept** _otherCharacteristics;
	size_t _shelfLifeStorage_count;
	ProductShelfLife** _shelfLifeStorage;
	size_t _manufacturer_count;
	Reference** _manufacturer;
};
struct MedicinalProductPharmaceutical {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	CodeableConcept* _administrableDoseForm;
	CodeableConcept* _unitOfPresentation;
	size_t _ingredient_count;
	Reference** _ingredient;
	size_t _device_count;
	Reference** _device;
	size_t _characteristics_count;
	MedicinalProductPharmaceutical_Characteristics** _characteristics;
	size_t _routeOfAdministration_count;
	MedicinalProductPharmaceutical_RouteOfAdministration** _routeOfAdministration;
};
struct MedicinalProductPharmaceutical_Characteristics {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	CodeableConcept* _status;
};
struct MedicinalProductPharmaceutical_RouteOfAdministration {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	Quantity* _firstDose;
	Quantity* _maxSingleDose;
	Quantity* _maxDosePerDay;
	Ratio* _maxDosePerTreatmentPeriod;
	Duration* _maxTreatmentPeriod;
	size_t _targetSpecies_count;
	MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies** _targetSpecies;
};
struct MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	size_t _withdrawalPeriod_count;
	MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod** _withdrawalPeriod;
};
struct MedicinalProductPharmaceutical_RouteOfAdministration_TargetSpecies_WithdrawalPeriod {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _tissue;
	Quantity* _value;
	NullableString8 _supportingInformation;
};
struct MedicinalProductUndesirableEffect {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _subject_count;
	Reference** _subject;
	CodeableConcept* _symptomConditionEffect;
	CodeableConcept* _classification;
	CodeableConcept* _frequencyOfOccurrence;
	size_t _population_count;
	Population** _population;
};
struct MessageDefinition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	size_t _replaces_count;
	NullableString8* _replaces;
	NullableString8 _status;
	NullableBoolean _experimental;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _copyright;
	NullableString8 _base;
	size_t _parent_count;
	NullableString8* _parent;
	union {
		Coding* _eventCoding;
		NullableString8 _eventUri;
	} _event;

	enum class _eventType {
		Coding,
		Uri
	};
_eventType _event_type;

	NullableString8 _category;
	size_t _focus_count;
	MessageDefinition_Focus** _focus;
	NullableString8 _responseRequired;
	size_t _allowedResponse_count;
	MessageDefinition_AllowedResponse** _allowedResponse;
	size_t _graph_count;
	NullableString8* _graph;
};
struct MessageDefinition_Focus {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _code;
	NullableString8 _profile;
	NullableInt32 _min;
	NullableString8 _max;
};
struct MessageDefinition_AllowedResponse {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _message;
	NullableString8 _situation;
};
struct MessageHeader {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		Coding* _eventCoding;
		NullableString8 _eventUri;
	} _event;

	enum class _eventType {
		Coding,
		Uri
	};
_eventType _event_type;

	size_t _destination_count;
	MessageHeader_Destination** _destination;
	Reference* _sender;
	Reference* _enterer;
	Reference* _author;
	MessageHeader_Source* _source;
	Reference* _responsible;
	CodeableConcept* _reason;
	MessageHeader_Response* _response;
	size_t _focus_count;
	Reference** _focus;
	NullableString8 _definition;
};
struct MessageHeader_Destination {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	Reference* _target;
	NullableString8 _endpoint;
	Reference* _receiver;
};
struct MessageHeader_Source {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	NullableString8 _software;
	NullableString8 _version;
	ContactPoint* _contact;
	NullableString8 _endpoint;
};
struct MessageHeader_Response {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _identifier;
	NullableString8 _code;
	Reference* _details;
};
struct MolecularSequence {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _type;
	NullableInt32 _coordinateSystem;
	Reference* _patient;
	Reference* _specimen;
	Reference* _device;
	Reference* _performer;
	Quantity* _quantity;
	MolecularSequence_ReferenceSeq* _referenceSeq;
	size_t _variant_count;
	MolecularSequence_Variant** _variant;
	NullableString8 _observedSeq;
	size_t _quality_count;
	MolecularSequence_Quality** _quality;
	NullableInt32 _readCoverage;
	size_t _repository_count;
	MolecularSequence_Repository** _repository;
	size_t _pointer_count;
	Reference** _pointer;
	size_t _structureVariant_count;
	MolecularSequence_StructureVariant** _structureVariant;
};
struct MolecularSequence_ReferenceSeq {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _chromosome;
	NullableString8 _genomeBuild;
	NullableString8 _orientation;
	CodeableConcept* _referenceSeqId;
	Reference* _referenceSeqPointer;
	NullableString8 _referenceSeqString;
	NullableString8 _strand;
	NullableInt32 _windowStart;
	NullableInt32 _windowEnd;
};
struct MolecularSequence_Variant {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _start;
	NullableInt32 _end;
	NullableString8 _observedAllele;
	NullableString8 _referenceAllele;
	NullableString8 _cigar;
	Reference* _variantPointer;
};
struct MolecularSequence_Quality {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _type;
	CodeableConcept* _standardSequence;
	NullableInt32 _start;
	NullableInt32 _end;
	Quantity* _score;
	CodeableConcept* _method;
	NullableString8 _truthTP;
	NullableString8 _queryTP;
	NullableString8 _truthFN;
	NullableString8 _queryFP;
	NullableString8 _gtFP;
	NullableString8 _precision;
	NullableString8 _recall;
	NullableString8 _fScore;
	MolecularSequence_Quality_Roc* _roc;
};
struct MolecularSequence_Quality_Roc {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _score_count;
	NullableInt32* _score;
	size_t _numTP_count;
	NullableInt32* _numTP;
	size_t _numFP_count;
	NullableInt32* _numFP;
	size_t _numFN_count;
	NullableInt32* _numFN;
	size_t _precision_count;
	NullableString8* _precision;
	size_t _sensitivity_count;
	NullableString8* _sensitivity;
	size_t _fMeasure_count;
	NullableString8* _fMeasure;
};
struct MolecularSequence_Repository {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _type;
	NullableString8 _url;
	NullableString8 _name;
	NullableString8 _datasetId;
	NullableString8 _variantsetId;
	NullableString8 _readsetId;
};
struct MolecularSequence_StructureVariant {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _variantType;
	NullableBoolean _exact;
	NullableInt32 _length;
	MolecularSequence_StructureVariant_Outer* _outer;
	MolecularSequence_StructureVariant_Inner* _inner;
};
struct MolecularSequence_StructureVariant_Outer {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _start;
	NullableInt32 _end;
};
struct MolecularSequence_StructureVariant_Inner {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _start;
	NullableInt32 _end;
};
struct NamingSystem {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	NullableString8 _status;
	NullableString8 _kind;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _responsible;
	CodeableConcept* _type;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _usage;
	size_t _uniqueId_count;
	NamingSystem_UniqueId** _uniqueId;
};
struct NamingSystem_UniqueId {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _type;
	NullableString8 _value;
	NullableBoolean _preferred;
	NullableString8 _comment;
	Period* _period;
};
struct NutritionOrder {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _instantiatesCanonical_count;
	NullableString8* _instantiatesCanonical;
	size_t _instantiatesUri_count;
	NullableString8* _instantiatesUri;
	size_t _instantiates_count;
	NullableString8* _instantiates;
	NullableString8 _status;
	NullableString8 _intent;
	Reference* _patient;
	Reference* _encounter;
	ISO8601_Time _dateTime;
	Reference* _orderer;
	size_t _allergyIntolerance_count;
	Reference** _allergyIntolerance;
	size_t _foodPreferenceModifier_count;
	CodeableConcept** _foodPreferenceModifier;
	size_t _excludeFoodModifier_count;
	CodeableConcept** _excludeFoodModifier;
	NutritionOrder_OralDiet* _oralDiet;
	size_t _supplement_count;
	NutritionOrder_Supplement** _supplement;
	NutritionOrder_EnteralFormula* _enteralFormula;
	size_t _note_count;
	Annotation** _note;
};
struct NutritionOrder_OralDiet {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _type_count;
	CodeableConcept** _type;
	size_t _schedule_count;
	Timing** _schedule;
	size_t _nutrient_count;
	NutritionOrder_OralDiet_Nutrient** _nutrient;
	size_t _texture_count;
	NutritionOrder_OralDiet_Texture** _texture;
	size_t _fluidConsistencyType_count;
	CodeableConcept** _fluidConsistencyType;
	NullableString8 _instruction;
};
struct NutritionOrder_OralDiet_Nutrient {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _modifier;
	Quantity* _amount;
};
struct NutritionOrder_OralDiet_Texture {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _modifier;
	CodeableConcept* _foodType;
};
struct NutritionOrder_Supplement {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	NullableString8 _productName;
	size_t _schedule_count;
	Timing** _schedule;
	Quantity* _quantity;
	NullableString8 _instruction;
};
struct NutritionOrder_EnteralFormula {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _baseFormulaType;
	NullableString8 _baseFormulaProductName;
	CodeableConcept* _additiveType;
	NullableString8 _additiveProductName;
	Quantity* _caloricDensity;
	CodeableConcept* _routeofAdministration;
	size_t _administration_count;
	NutritionOrder_EnteralFormula_Administration** _administration;
	Quantity* _maxVolumeToDeliver;
	NullableString8 _administrationInstruction;
};
struct NutritionOrder_EnteralFormula_Administration {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Timing* _schedule;
	Quantity* _quantity;
	union {
		Quantity* _rateQuantity;
		Ratio* _rateRatio;
	} _rate;

	enum class _rateType {
		Quantity,
		Ratio
	};
_rateType _rate_type;

};
struct Observation {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	CodeableConcept* _code;
	Reference* _subject;
	size_t _focus_count;
	Reference** _focus;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
		Timing* _effectiveTiming;
		ISO8601_Time _effectiveInstant;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period,
		Timing,
		Instant
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	union {
		Quantity* _valueQuantity;
		CodeableConcept* _valueCodeableConcept;
		NullableString8 _valueString;
		NullableBoolean _valueBoolean;
		NullableInt32 _valueInteger;
		Range* _valueRange;
		Ratio* _valueRatio;
		SampledData* _valueSampledData;
		ISO8601_Time _valueTime;
		ISO8601_Time _valueDateTime;
		Period* _valuePeriod;
	} _value;

	enum class _valueType {
		Quantity,
		CodeableConcept,
		String,
		Boolean,
		Integer,
		Range,
		Ratio,
		SampledData,
		Time,
		DateTime,
		Period
	};
_valueType _value_type;

	CodeableConcept* _dataAbsentReason;
	size_t _interpretation_count;
	CodeableConcept** _interpretation;
	size_t _note_count;
	Annotation** _note;
	CodeableConcept* _bodySite;
	CodeableConcept* _method;
	Reference* _specimen;
	Reference* _device;
	size_t _referenceRange_count;
	Observation_ReferenceRange** _referenceRange;
	size_t _hasMember_count;
	Reference** _hasMember;
	size_t _derivedFrom_count;
	Reference** _derivedFrom;
	size_t _component_count;
	Observation_Component** _component;
};
struct Observation_ReferenceRange {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Quantity* _low;
	Quantity* _high;
	CodeableConcept* _type;
	size_t _appliesTo_count;
	CodeableConcept** _appliesTo;
	Range* _age;
	NullableString8 _text;
};
struct Observation_Component {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	union {
		Quantity* _valueQuantity;
		CodeableConcept* _valueCodeableConcept;
		NullableString8 _valueString;
		NullableBoolean _valueBoolean;
		NullableInt32 _valueInteger;
		Range* _valueRange;
		Ratio* _valueRatio;
		SampledData* _valueSampledData;
		ISO8601_Time _valueTime;
		ISO8601_Time _valueDateTime;
		Period* _valuePeriod;
	} _value;

	enum class _valueType {
		Quantity,
		CodeableConcept,
		String,
		Boolean,
		Integer,
		Range,
		Ratio,
		SampledData,
		Time,
		DateTime,
		Period
	};
_valueType _value_type;

	CodeableConcept* _dataAbsentReason;
	size_t _interpretation_count;
	CodeableConcept** _interpretation;
	size_t _referenceRange_count;
	Observation_ReferenceRange** _referenceRange;
};
struct ObservationDefinition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _category_count;
	CodeableConcept** _category;
	CodeableConcept* _code;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _permittedDataType_count;
	NullableString8* _permittedDataType;
	NullableBoolean _multipleResultsAllowed;
	CodeableConcept* _method;
	NullableString8 _preferredReportName;
	ObservationDefinition_QuantitativeDetails* _quantitativeDetails;
	size_t _qualifiedInterval_count;
	ObservationDefinition_QualifiedInterval** _qualifiedInterval;
	Reference* _validCodedValueSet;
	Reference* _normalCodedValueSet;
	Reference* _abnormalCodedValueSet;
	Reference* _criticalCodedValueSet;
};
struct ObservationDefinition_QuantitativeDetails {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _customaryUnit;
	CodeableConcept* _unit;
	NullableString8 _conversionFactor;
	NullableInt32 _decimalPrecision;
};
struct ObservationDefinition_QualifiedInterval {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _category;
	Range* _range;
	CodeableConcept* _context;
	size_t _appliesTo_count;
	CodeableConcept** _appliesTo;
	NullableString8 _gender;
	Range* _age;
	Range* _gestationalAge;
	NullableString8 _condition;
};
struct OperationDefinition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _status;
	NullableString8 _kind;
	NullableBoolean _experimental;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableBoolean _affectsState;
	NullableString8 _code;
	NullableString8 _comment;
	NullableString8 _base;
	size_t _resource_count;
	NullableString8* _resource;
	NullableBoolean _system;
	NullableBoolean _type;
	NullableBoolean _instance;
	NullableString8 _inputProfile;
	NullableString8 _outputProfile;
	size_t _parameter_count;
	OperationDefinition_Parameter** _parameter;
	size_t _overload_count;
	OperationDefinition_Overload** _overload;
};
struct OperationDefinition_Parameter {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	NullableString8 _use;
	NullableInt32 _min;
	NullableString8 _max;
	NullableString8 _documentation;
	NullableString8 _type;
	size_t _targetProfile_count;
	NullableString8* _targetProfile;
	NullableString8 _searchType;
	OperationDefinition_Parameter_Binding* _binding;
	size_t _referencedFrom_count;
	OperationDefinition_Parameter_ReferencedFrom** _referencedFrom;
	size_t _part_count;
	OperationDefinition_Parameter** _part;
};
struct OperationDefinition_Parameter_Binding {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _strength;
	NullableString8 _valueSet;
};
struct OperationDefinition_Parameter_ReferencedFrom {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _source;
	NullableString8 _sourceId;
};
struct OperationDefinition_Overload {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _parameterName_count;
	NullableString8* _parameterName;
	NullableString8 _comment;
};
struct OperationOutcome {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _issue_count;
	OperationOutcome_Issue** _issue;
};
struct OperationOutcome_Issue {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _severity;
	NullableString8 _code;
	CodeableConcept* _details;
	NullableString8 _diagnostics;
	size_t _location_count;
	NullableString8* _location;
	size_t _expression_count;
	NullableString8* _expression;
};
struct Organization {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableBoolean _active;
	size_t _type_count;
	CodeableConcept** _type;
	NullableString8 _name;
	size_t _alias_count;
	NullableString8* _alias;
	size_t _telecom_count;
	ContactPoint** _telecom;
	size_t _address_count;
	Address** _address;
	Reference* _partOf;
	size_t _contact_count;
	Organization_Contact** _contact;
	size_t _endpoint_count;
	Reference** _endpoint;
};
struct Organization_Contact {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _purpose;
	HumanName* _name;
	size_t _telecom_count;
	ContactPoint** _telecom;
	Address* _address;
};
struct OrganizationAffiliation {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableBoolean _active;
	Period* _period;
	Reference* _organization;
	Reference* _participatingOrganization;
	size_t _network_count;
	Reference** _network;
	size_t _code_count;
	CodeableConcept** _code;
	size_t _specialty_count;
	CodeableConcept** _specialty;
	size_t _location_count;
	Reference** _location;
	size_t _healthcareService_count;
	Reference** _healthcareService;
	size_t _telecom_count;
	ContactPoint** _telecom;
	size_t _endpoint_count;
	Reference** _endpoint;
};
struct Parameters {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	size_t _parameter_count;
	Parameters_Parameter** _parameter;
};
struct Parameters_Parameter {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	union {
		NullableString8 _valueBase64Binary;
		NullableBoolean _valueBoolean;
		NullableString8 _valueCanonical;
		NullableString8 _valueCode;
		ISO8601_Time _valueDate;
		ISO8601_Time _valueDateTime;
		NullableString8 _valueDecimal;
		NullableString8 _valueId;
		ISO8601_Time _valueInstant;
		NullableInt32 _valueInteger;
		NullableString8 _valueMarkdown;
		NullableString8 _valueOid;
		NullableInt32 _valuePositiveInt;
		NullableString8 _valueString;
		ISO8601_Time _valueTime;
		NullableInt32 _valueUnsignedInt;
		NullableString8 _valueUri;
		NullableString8 _valueUrl;
		NullableString8 _valueUuid;
		Address* _valueAddress;
		Age* _valueAge;
		Annotation* _valueAnnotation;
		Attachment* _valueAttachment;
		CodeableConcept* _valueCodeableConcept;
		Coding* _valueCoding;
		ContactPoint* _valueContactPoint;
		Count* _valueCount;
		Distance* _valueDistance;
		Duration* _valueDuration;
		HumanName* _valueHumanName;
		Identifier* _valueIdentifier;
		Money* _valueMoney;
		Period* _valuePeriod;
		Quantity* _valueQuantity;
		Range* _valueRange;
		Ratio* _valueRatio;
		Reference* _valueReference;
		SampledData* _valueSampledData;
		Signature* _valueSignature;
		Timing* _valueTiming;
		ContactDetail* _valueContactDetail;
		Contributor* _valueContributor;
		DataRequirement* _valueDataRequirement;
		Expression* _valueExpression;
		ParameterDefinition* _valueParameterDefinition;
		RelatedArtifact* _valueRelatedArtifact;
		TriggerDefinition* _valueTriggerDefinition;
		UsageContext* _valueUsageContext;
		Dosage* _valueDosage;
		Meta* _valueMeta;
	} _value;

	enum class _valueType {
		Base64Binary,
		Boolean,
		Canonical,
		Code,
		Date,
		DateTime,
		Decimal,
		Id,
		Instant,
		Integer,
		Markdown,
		Oid,
		PositiveInt,
		String,
		Time,
		UnsignedInt,
		Uri,
		Url,
		Uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	};
_valueType _value_type;

	Resource* _resource;
	size_t _part_count;
	Parameters_Parameter** _part;
};
struct Patient {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableBoolean _active;
	size_t _name_count;
	HumanName** _name;
	size_t _telecom_count;
	ContactPoint** _telecom;
	NullableString8 _gender;
	ISO8601_Time _birthDate;
	union {
		NullableBoolean _deceasedBoolean;
		ISO8601_Time _deceasedDateTime;
	} _deceased;

	enum class _deceasedType {
		Boolean,
		DateTime
	};
_deceasedType _deceased_type;

	size_t _address_count;
	Address** _address;
	CodeableConcept* _maritalStatus;
	union {
		NullableBoolean _multipleBirthBoolean;
		NullableInt32 _multipleBirthInteger;
	} _multipleBirth;

	enum class _multipleBirthType {
		Boolean,
		Integer
	};
_multipleBirthType _multipleBirth_type;

	size_t _photo_count;
	Attachment** _photo;
	size_t _contact_count;
	Patient_Contact** _contact;
	size_t _communication_count;
	Patient_Communication** _communication;
	size_t _generalPractitioner_count;
	Reference** _generalPractitioner;
	Reference* _managingOrganization;
	size_t _link_count;
	Patient_Link** _link;
};
struct Patient_Contact {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _relationship_count;
	CodeableConcept** _relationship;
	HumanName* _name;
	size_t _telecom_count;
	ContactPoint** _telecom;
	Address* _address;
	NullableString8 _gender;
	Reference* _organization;
	Period* _period;
};
struct Patient_Communication {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _language;
	NullableBoolean _preferred;
};
struct Patient_Link {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _other;
	NullableString8 _type;
};
struct PaymentNotice {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	Reference* _request;
	Reference* _response;
	ISO8601_Time _created;
	Reference* _provider;
	Reference* _payment;
	ISO8601_Time _paymentDate;
	Reference* _payee;
	Reference* _recipient;
	Money* _amount;
	CodeableConcept* _paymentStatus;
};
struct PaymentReconciliation {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	Period* _period;
	ISO8601_Time _created;
	Reference* _paymentIssuer;
	Reference* _request;
	Reference* _requestor;
	NullableString8 _outcome;
	NullableString8 _disposition;
	ISO8601_Time _paymentDate;
	Money* _paymentAmount;
	Identifier* _paymentIdentifier;
	size_t _detail_count;
	PaymentReconciliation_Detail** _detail;
	CodeableConcept* _formCode;
	size_t _processNote_count;
	PaymentReconciliation_ProcessNote** _processNote;
};
struct PaymentReconciliation_Detail {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _identifier;
	Identifier* _predecessor;
	CodeableConcept* _type;
	Reference* _request;
	Reference* _submitter;
	Reference* _response;
	ISO8601_Time _date;
	Reference* _responsible;
	Reference* _payee;
	Money* _amount;
};
struct PaymentReconciliation_ProcessNote {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _type;
	NullableString8 _text;
};
struct Person {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _name_count;
	HumanName** _name;
	size_t _telecom_count;
	ContactPoint** _telecom;
	NullableString8 _gender;
	ISO8601_Time _birthDate;
	size_t _address_count;
	Address** _address;
	Attachment* _photo;
	Reference* _managingOrganization;
	NullableBoolean _active;
	size_t _link_count;
	Person_Link** _link;
};
struct Person_Link {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _target;
	NullableString8 _assurance;
};
struct PlanDefinition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _subtitle;
	CodeableConcept* _type;
	NullableString8 _status;
	NullableBoolean _experimental;
	union {
		CodeableConcept* _subjectCodeableConcept;
		Reference* _subjectReference;
	} _subject;

	enum class _subjectType {
		CodeableConcept,
		Reference
	};
_subjectType _subject_type;

	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _usage;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _topic_count;
	CodeableConcept** _topic;
	size_t _author_count;
	ContactDetail** _author;
	size_t _editor_count;
	ContactDetail** _editor;
	size_t _reviewer_count;
	ContactDetail** _reviewer;
	size_t _endorser_count;
	ContactDetail** _endorser;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	size_t _library_count;
	NullableString8* _library;
	size_t _goal_count;
	PlanDefinition_Goal** _goal;
	size_t _action_count;
	PlanDefinition_Action** _action;
};
struct PlanDefinition_Goal {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _category;
	CodeableConcept* _description;
	CodeableConcept* _priority;
	CodeableConcept* _start;
	size_t _addresses_count;
	CodeableConcept** _addresses;
	size_t _documentation_count;
	RelatedArtifact** _documentation;
	size_t _target_count;
	PlanDefinition_Goal_Target** _target;
};
struct PlanDefinition_Goal_Target {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _measure;
	union {
		Quantity* _detailQuantity;
		Range* _detailRange;
		CodeableConcept* _detailCodeableConcept;
	} _detail;

	enum class _detailType {
		Quantity,
		Range,
		CodeableConcept
	};
_detailType _detail_type;

	Duration* _due;
};
struct PlanDefinition_Action {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _prefix;
	NullableString8 _title;
	NullableString8 _description;
	NullableString8 _textEquivalent;
	NullableString8 _priority;
	size_t _code_count;
	CodeableConcept** _code;
	size_t _reason_count;
	CodeableConcept** _reason;
	size_t _documentation_count;
	RelatedArtifact** _documentation;
	size_t _goalId_count;
	NullableString8* _goalId;
	union {
		CodeableConcept* _subjectCodeableConcept;
		Reference* _subjectReference;
	} _subject;

	enum class _subjectType {
		CodeableConcept,
		Reference
	};
_subjectType _subject_type;

	size_t _trigger_count;
	TriggerDefinition** _trigger;
	size_t _condition_count;
	PlanDefinition_Action_Condition** _condition;
	size_t _input_count;
	DataRequirement** _input;
	size_t _output_count;
	DataRequirement** _output;
	size_t _relatedAction_count;
	PlanDefinition_Action_RelatedAction** _relatedAction;
	union {
		ISO8601_Time _timingDateTime;
		Age* _timingAge;
		Period* _timingPeriod;
		Duration* _timingDuration;
		Range* _timingRange;
		Timing* _timingTiming;
	} _timing;

	enum class _timingType {
		DateTime,
		Age,
		Period,
		Duration,
		Range,
		Timing
	};
_timingType _timing_type;

	size_t _participant_count;
	PlanDefinition_Action_Participant** _participant;
	CodeableConcept* _type;
	NullableString8 _groupingBehavior;
	NullableString8 _selectionBehavior;
	NullableString8 _requiredBehavior;
	NullableString8 _precheckBehavior;
	NullableString8 _cardinalityBehavior;
	union {
		NullableString8 _definitionCanonical;
		NullableString8 _definitionUri;
	} _definition;

	enum class _definitionType {
		Canonical,
		Uri
	};
_definitionType _definition_type;

	NullableString8 _transform;
	size_t _dynamicValue_count;
	PlanDefinition_Action_DynamicValue** _dynamicValue;
	size_t _action_count;
	PlanDefinition_Action** _action;
};
struct PlanDefinition_Action_Condition {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _kind;
	Expression* _expression;
};
struct PlanDefinition_Action_RelatedAction {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _actionId;
	NullableString8 _relationship;
	union {
		Duration* _offsetDuration;
		Range* _offsetRange;
	} _offset;

	enum class _offsetType {
		Duration,
		Range
	};
_offsetType _offset_type;

};
struct PlanDefinition_Action_Participant {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _type;
	CodeableConcept* _role;
};
struct PlanDefinition_Action_DynamicValue {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _path;
	Expression* _expression;
};
struct Practitioner {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableBoolean _active;
	size_t _name_count;
	HumanName** _name;
	size_t _telecom_count;
	ContactPoint** _telecom;
	size_t _address_count;
	Address** _address;
	NullableString8 _gender;
	ISO8601_Time _birthDate;
	size_t _photo_count;
	Attachment** _photo;
	size_t _qualification_count;
	Practitioner_Qualification** _qualification;
	size_t _communication_count;
	CodeableConcept** _communication;
};
struct Practitioner_Qualification {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	CodeableConcept* _code;
	Period* _period;
	Reference* _issuer;
};
struct PractitionerRole {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableBoolean _active;
	Period* _period;
	Reference* _practitioner;
	Reference* _organization;
	size_t _code_count;
	CodeableConcept** _code;
	size_t _specialty_count;
	CodeableConcept** _specialty;
	size_t _location_count;
	Reference** _location;
	size_t _healthcareService_count;
	Reference** _healthcareService;
	size_t _telecom_count;
	ContactPoint** _telecom;
	size_t _availableTime_count;
	PractitionerRole_AvailableTime** _availableTime;
	size_t _notAvailable_count;
	PractitionerRole_NotAvailable** _notAvailable;
	NullableString8 _availabilityExceptions;
	size_t _endpoint_count;
	Reference** _endpoint;
};
struct PractitionerRole_AvailableTime {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _daysOfWeek_count;
	NullableString8* _daysOfWeek;
	NullableBoolean _allDay;
	ISO8601_Time _availableStartTime;
	ISO8601_Time _availableEndTime;
};
struct PractitionerRole_NotAvailable {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _description;
	Period* _during;
};
struct Procedure {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _instantiatesCanonical_count;
	NullableString8* _instantiatesCanonical;
	size_t _instantiatesUri_count;
	NullableString8* _instantiatesUri;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	CodeableConcept* _statusReason;
	CodeableConcept* _category;
	CodeableConcept* _code;
	Reference* _subject;
	Reference* _encounter;
	union {
		ISO8601_Time _performedDateTime;
		Period* _performedPeriod;
		NullableString8 _performedString;
		Age* _performedAge;
		Range* _performedRange;
	} _performed;

	enum class _performedType {
		DateTime,
		Period,
		String,
		Age,
		Range
	};
_performedType _performed_type;

	Reference* _recorder;
	Reference* _asserter;
	size_t _performer_count;
	Procedure_Performer** _performer;
	Reference* _location;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	size_t _bodySite_count;
	CodeableConcept** _bodySite;
	CodeableConcept* _outcome;
	size_t _report_count;
	Reference** _report;
	size_t _complication_count;
	CodeableConcept** _complication;
	size_t _complicationDetail_count;
	Reference** _complicationDetail;
	size_t _followUp_count;
	CodeableConcept** _followUp;
	size_t _note_count;
	Annotation** _note;
	size_t _focalDevice_count;
	Procedure_FocalDevice** _focalDevice;
	size_t _usedReference_count;
	Reference** _usedReference;
	size_t _usedCode_count;
	CodeableConcept** _usedCode;
};
struct Procedure_Performer {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _function;
	Reference* _actor;
	Reference* _onBehalfOf;
};
struct Procedure_FocalDevice {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _action;
	Reference* _manipulated;
};
struct Provenance {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _target_count;
	Reference** _target;
	union {
		Period* _occurredPeriod;
		ISO8601_Time _occurredDateTime;
	} _occurred;

	enum class _occurredType {
		Period,
		DateTime
	};
_occurredType _occurred_type;

	ISO8601_Time _recorded;
	size_t _policy_count;
	NullableString8* _policy;
	Reference* _location;
	size_t _reason_count;
	CodeableConcept** _reason;
	CodeableConcept* _activity;
	size_t _agent_count;
	Provenance_Agent** _agent;
	size_t _entity_count;
	Provenance_Entity** _entity;
	size_t _signature_count;
	Signature** _signature;
};
struct Provenance_Agent {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	size_t _role_count;
	CodeableConcept** _role;
	Reference* _who;
	Reference* _onBehalfOf;
};
struct Provenance_Entity {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _role;
	Reference* _what;
	size_t _agent_count;
	Provenance_Agent** _agent;
};
struct Questionnaire {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	size_t _derivedFrom_count;
	NullableString8* _derivedFrom;
	NullableString8 _status;
	NullableBoolean _experimental;
	size_t _subjectType_count;
	NullableString8* _subjectType;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _code_count;
	Coding** _code;
	size_t _item_count;
	Questionnaire_Item** _item;
};
struct Questionnaire_Item {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _linkId;
	NullableString8 _definition;
	size_t _code_count;
	Coding** _code;
	NullableString8 _prefix;
	NullableString8 _text;
	NullableString8 _type;
	size_t _enableWhen_count;
	Questionnaire_Item_EnableWhen** _enableWhen;
	NullableString8 _enableBehavior;
	NullableBoolean _required;
	NullableBoolean _repeats;
	NullableBoolean _readOnly;
	NullableInt32 _maxLength;
	NullableString8 _answerValueSet;
	size_t _answerOption_count;
	Questionnaire_Item_AnswerOption** _answerOption;
	size_t _initial_count;
	Questionnaire_Item_Initial** _initial;
	size_t _item_count;
	Questionnaire_Item** _item;
};
struct Questionnaire_Item_EnableWhen {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _question;
	NullableString8 _operator;
	union {
		NullableBoolean _answerBoolean;
		NullableString8 _answerDecimal;
		NullableInt32 _answerInteger;
		ISO8601_Time _answerDate;
		ISO8601_Time _answerDateTime;
		ISO8601_Time _answerTime;
		NullableString8 _answerString;
		Coding* _answerCoding;
		Quantity* _answerQuantity;
		Reference* _answerReference;
	} _answer;

	enum class _answerType {
		Boolean,
		Decimal,
		Integer,
		Date,
		DateTime,
		Time,
		String,
		Coding,
		Quantity,
		Reference
	};
_answerType _answer_type;

};
struct Questionnaire_Item_AnswerOption {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		NullableInt32 _valueInteger;
		ISO8601_Time _valueDate;
		ISO8601_Time _valueTime;
		NullableString8 _valueString;
		Coding* _valueCoding;
		Reference* _valueReference;
	} _value;

	enum class _valueType {
		Integer,
		Date,
		Time,
		String,
		Coding,
		Reference
	};
_valueType _value_type;

	NullableBoolean _initialSelected;
};
struct Questionnaire_Item_Initial {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		NullableBoolean _valueBoolean;
		NullableString8 _valueDecimal;
		NullableInt32 _valueInteger;
		ISO8601_Time _valueDate;
		ISO8601_Time _valueDateTime;
		ISO8601_Time _valueTime;
		NullableString8 _valueString;
		NullableString8 _valueUri;
		Attachment* _valueAttachment;
		Coding* _valueCoding;
		Quantity* _valueQuantity;
		Reference* _valueReference;
	} _value;

	enum class _valueType {
		Boolean,
		Decimal,
		Integer,
		Date,
		DateTime,
		Time,
		String,
		Uri,
		Attachment,
		Coding,
		Quantity,
		Reference
	};
_valueType _value_type;

};
struct QuestionnaireResponse {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _questionnaire;
	NullableString8 _status;
	Reference* _subject;
	Reference* _encounter;
	ISO8601_Time _authored;
	Reference* _author;
	Reference* _source;
	size_t _item_count;
	QuestionnaireResponse_Item** _item;
};
struct QuestionnaireResponse_Item {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _linkId;
	NullableString8 _definition;
	NullableString8 _text;
	size_t _answer_count;
	QuestionnaireResponse_Item_Answer** _answer;
	size_t _item_count;
	QuestionnaireResponse_Item** _item;
};
struct QuestionnaireResponse_Item_Answer {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		NullableBoolean _valueBoolean;
		NullableString8 _valueDecimal;
		NullableInt32 _valueInteger;
		ISO8601_Time _valueDate;
		ISO8601_Time _valueDateTime;
		ISO8601_Time _valueTime;
		NullableString8 _valueString;
		NullableString8 _valueUri;
		Attachment* _valueAttachment;
		Coding* _valueCoding;
		Quantity* _valueQuantity;
		Reference* _valueReference;
	} _value;

	enum class _valueType {
		Boolean,
		Decimal,
		Integer,
		Date,
		DateTime,
		Time,
		String,
		Uri,
		Attachment,
		Coding,
		Quantity,
		Reference
	};
_valueType _value_type;

	size_t _item_count;
	QuestionnaireResponse_Item** _item;
};
struct RelatedPerson {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableBoolean _active;
	Reference* _patient;
	size_t _relationship_count;
	CodeableConcept** _relationship;
	size_t _name_count;
	HumanName** _name;
	size_t _telecom_count;
	ContactPoint** _telecom;
	NullableString8 _gender;
	ISO8601_Time _birthDate;
	size_t _address_count;
	Address** _address;
	size_t _photo_count;
	Attachment** _photo;
	Period* _period;
	size_t _communication_count;
	RelatedPerson_Communication** _communication;
};
struct RelatedPerson_Communication {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _language;
	NullableBoolean _preferred;
};
struct RequestGroup {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _instantiatesCanonical_count;
	NullableString8* _instantiatesCanonical;
	size_t _instantiatesUri_count;
	NullableString8* _instantiatesUri;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _replaces_count;
	Reference** _replaces;
	Identifier* _groupIdentifier;
	NullableString8 _status;
	NullableString8 _intent;
	NullableString8 _priority;
	CodeableConcept* _code;
	Reference* _subject;
	Reference* _encounter;
	ISO8601_Time _authoredOn;
	Reference* _author;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	size_t _note_count;
	Annotation** _note;
	size_t _action_count;
	RequestGroup_Action** _action;
};
struct RequestGroup_Action {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _prefix;
	NullableString8 _title;
	NullableString8 _description;
	NullableString8 _textEquivalent;
	NullableString8 _priority;
	size_t _code_count;
	CodeableConcept** _code;
	size_t _documentation_count;
	RelatedArtifact** _documentation;
	size_t _condition_count;
	RequestGroup_Action_Condition** _condition;
	size_t _relatedAction_count;
	RequestGroup_Action_RelatedAction** _relatedAction;
	union {
		ISO8601_Time _timingDateTime;
		Age* _timingAge;
		Period* _timingPeriod;
		Duration* _timingDuration;
		Range* _timingRange;
		Timing* _timingTiming;
	} _timing;

	enum class _timingType {
		DateTime,
		Age,
		Period,
		Duration,
		Range,
		Timing
	};
_timingType _timing_type;

	size_t _participant_count;
	Reference** _participant;
	CodeableConcept* _type;
	NullableString8 _groupingBehavior;
	NullableString8 _selectionBehavior;
	NullableString8 _requiredBehavior;
	NullableString8 _precheckBehavior;
	NullableString8 _cardinalityBehavior;
	Reference* _resource;
	size_t _action_count;
	RequestGroup_Action** _action;
};
struct RequestGroup_Action_Condition {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _kind;
	Expression* _expression;
};
struct RequestGroup_Action_RelatedAction {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _actionId;
	NullableString8 _relationship;
	union {
		Duration* _offsetDuration;
		Range* _offsetRange;
	} _offset;

	enum class _offsetType {
		Duration,
		Range
	};
_offsetType _offset_type;

};
struct ResearchDefinition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _shortTitle;
	NullableString8 _subtitle;
	NullableString8 _status;
	NullableBoolean _experimental;
	union {
		CodeableConcept* _subjectCodeableConcept;
		Reference* _subjectReference;
	} _subject;

	enum class _subjectType {
		CodeableConcept,
		Reference
	};
_subjectType _subject_type;

	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _comment_count;
	NullableString8* _comment;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _usage;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _topic_count;
	CodeableConcept** _topic;
	size_t _author_count;
	ContactDetail** _author;
	size_t _editor_count;
	ContactDetail** _editor;
	size_t _reviewer_count;
	ContactDetail** _reviewer;
	size_t _endorser_count;
	ContactDetail** _endorser;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	size_t _library_count;
	NullableString8* _library;
	Reference* _population;
	Reference* _exposure;
	Reference* _exposureAlternative;
	Reference* _outcome;
};
struct ResearchElementDefinition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _shortTitle;
	NullableString8 _subtitle;
	NullableString8 _status;
	NullableBoolean _experimental;
	union {
		CodeableConcept* _subjectCodeableConcept;
		Reference* _subjectReference;
	} _subject;

	enum class _subjectType {
		CodeableConcept,
		Reference
	};
_subjectType _subject_type;

	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _comment_count;
	NullableString8* _comment;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _usage;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _topic_count;
	CodeableConcept** _topic;
	size_t _author_count;
	ContactDetail** _author;
	size_t _editor_count;
	ContactDetail** _editor;
	size_t _reviewer_count;
	ContactDetail** _reviewer;
	size_t _endorser_count;
	ContactDetail** _endorser;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	size_t _library_count;
	NullableString8* _library;
	NullableString8 _type;
	NullableString8 _variableType;
	size_t _characteristic_count;
	ResearchElementDefinition_Characteristic** _characteristic;
};
struct ResearchElementDefinition_Characteristic {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		CodeableConcept* _definitionCodeableConcept;
		NullableString8 _definitionCanonical;
		Expression* _definitionExpression;
		DataRequirement* _definitionDataRequirement;
	} _definition;

	enum class _definitionType {
		CodeableConcept,
		Canonical,
		Expression,
		DataRequirement
	};
_definitionType _definition_type;

	size_t _usageContext_count;
	UsageContext** _usageContext;
	NullableBoolean _exclude;
	CodeableConcept* _unitOfMeasure;
	NullableString8 _studyEffectiveDescription;
	union {
		ISO8601_Time _studyEffectiveDateTime;
		Period* _studyEffectivePeriod;
		Duration* _studyEffectiveDuration;
		Timing* _studyEffectiveTiming;
	} _studyEffective;

	enum class _studyEffectiveType {
		DateTime,
		Period,
		Duration,
		Timing
	};
_studyEffectiveType _studyEffective_type;

	Duration* _studyEffectiveTimeFromStart;
	NullableString8 _studyEffectiveGroupMeasure;
	NullableString8 _participantEffectiveDescription;
	union {
		ISO8601_Time _participantEffectiveDateTime;
		Period* _participantEffectivePeriod;
		Duration* _participantEffectiveDuration;
		Timing* _participantEffectiveTiming;
	} _participantEffective;

	enum class _participantEffectiveType {
		DateTime,
		Period,
		Duration,
		Timing
	};
_participantEffectiveType _participantEffective_type;

	Duration* _participantEffectiveTimeFromStart;
	NullableString8 _participantEffectiveGroupMeasure;
};
struct ResearchStudy {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _title;
	size_t _protocol_count;
	Reference** _protocol;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	CodeableConcept* _primaryPurposeType;
	CodeableConcept* _phase;
	size_t _category_count;
	CodeableConcept** _category;
	size_t _focus_count;
	CodeableConcept** _focus;
	size_t _condition_count;
	CodeableConcept** _condition;
	size_t _contact_count;
	ContactDetail** _contact;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	size_t _keyword_count;
	CodeableConcept** _keyword;
	size_t _location_count;
	CodeableConcept** _location;
	NullableString8 _description;
	size_t _enrollment_count;
	Reference** _enrollment;
	Period* _period;
	Reference* _sponsor;
	Reference* _principalInvestigator;
	size_t _site_count;
	Reference** _site;
	CodeableConcept* _reasonStopped;
	size_t _note_count;
	Annotation** _note;
	size_t _arm_count;
	ResearchStudy_Arm** _arm;
	size_t _objective_count;
	ResearchStudy_Objective** _objective;
};
struct ResearchStudy_Arm {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	CodeableConcept* _type;
	NullableString8 _description;
};
struct ResearchStudy_Objective {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	CodeableConcept* _type;
};
struct ResearchSubject {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	Period* _period;
	Reference* _study;
	Reference* _individual;
	NullableString8 _assignedArm;
	NullableString8 _actualArm;
	Reference* _consent;
};
struct RiskAssessment {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	Reference* _basedOn;
	Reference* _parent;
	NullableString8 _status;
	CodeableConcept* _method;
	CodeableConcept* _code;
	Reference* _subject;
	Reference* _encounter;
	union {
		ISO8601_Time _occurrenceDateTime;
		Period* _occurrencePeriod;
	} _occurrence;

	enum class _occurrenceType {
		DateTime,
		Period
	};
_occurrenceType _occurrence_type;

	Reference* _condition;
	Reference* _performer;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	size_t _basis_count;
	Reference** _basis;
	size_t _prediction_count;
	RiskAssessment_Prediction** _prediction;
	NullableString8 _mitigation;
	size_t _note_count;
	Annotation** _note;
};
struct RiskAssessment_Prediction {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _outcome;
	union {
		NullableString8 _probabilityDecimal;
		Range* _probabilityRange;
	} _probability;

	enum class _probabilityType {
		Decimal,
		Range
	};
_probabilityType _probability_type;

	CodeableConcept* _qualitativeRisk;
	NullableString8 _relativeRisk;
	union {
		Period* _whenPeriod;
		Range* _whenRange;
	} _when;

	enum class _whenType {
		Period,
		Range
	};
_whenType _when_type;

	NullableString8 _rationale;
};
struct RiskEvidenceSynthesis {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _status;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _note_count;
	Annotation** _note;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _topic_count;
	CodeableConcept** _topic;
	size_t _author_count;
	ContactDetail** _author;
	size_t _editor_count;
	ContactDetail** _editor;
	size_t _reviewer_count;
	ContactDetail** _reviewer;
	size_t _endorser_count;
	ContactDetail** _endorser;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	CodeableConcept* _synthesisType;
	CodeableConcept* _studyType;
	Reference* _population;
	Reference* _exposure;
	Reference* _outcome;
	RiskEvidenceSynthesis_SampleSize* _sampleSize;
	RiskEvidenceSynthesis_RiskEstimate* _riskEstimate;
	size_t _certainty_count;
	RiskEvidenceSynthesis_Certainty** _certainty;
};
struct RiskEvidenceSynthesis_SampleSize {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _description;
	NullableInt32 _numberOfStudies;
	NullableInt32 _numberOfParticipants;
};
struct RiskEvidenceSynthesis_RiskEstimate {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _description;
	CodeableConcept* _type;
	NullableString8 _value;
	CodeableConcept* _unitOfMeasure;
	NullableInt32 _denominatorCount;
	NullableInt32 _numeratorCount;
	size_t _precisionEstimate_count;
	RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate** _precisionEstimate;
};
struct RiskEvidenceSynthesis_RiskEstimate_PrecisionEstimate {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	NullableString8 _level;
	NullableString8 _from;
	NullableString8 _to;
};
struct RiskEvidenceSynthesis_Certainty {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _rating_count;
	CodeableConcept** _rating;
	size_t _note_count;
	Annotation** _note;
	size_t _certaintySubcomponent_count;
	RiskEvidenceSynthesis_Certainty_CertaintySubcomponent** _certaintySubcomponent;
};
struct RiskEvidenceSynthesis_Certainty_CertaintySubcomponent {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	size_t _rating_count;
	CodeableConcept** _rating;
	size_t _note_count;
	Annotation** _note;
};
struct Schedule {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableBoolean _active;
	size_t _serviceCategory_count;
	CodeableConcept** _serviceCategory;
	size_t _serviceType_count;
	CodeableConcept** _serviceType;
	size_t _specialty_count;
	CodeableConcept** _specialty;
	size_t _actor_count;
	Reference** _actor;
	Period* _planningHorizon;
	NullableString8 _comment;
};
struct SearchParameter {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _derivedFrom;
	NullableString8 _status;
	NullableBoolean _experimental;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _code;
	size_t _base_count;
	NullableString8* _base;
	NullableString8 _type;
	NullableString8 _expression;
	NullableString8 _xpath;
	NullableString8 _xpathUsage;
	size_t _target_count;
	NullableString8* _target;
	NullableBoolean _multipleOr;
	NullableBoolean _multipleAnd;
	size_t _comparator_count;
	NullableString8* _comparator;
	size_t _modifier_count;
	NullableString8* _modifier;
	size_t _chain_count;
	NullableString8* _chain;
	size_t _component_count;
	SearchParameter_Component** _component;
};
struct SearchParameter_Component {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _definition;
	NullableString8 _expression;
};
struct ServiceRequest {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _instantiatesCanonical_count;
	NullableString8* _instantiatesCanonical;
	size_t _instantiatesUri_count;
	NullableString8* _instantiatesUri;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _replaces_count;
	Reference** _replaces;
	Identifier* _requisition;
	NullableString8 _status;
	NullableString8 _intent;
	size_t _category_count;
	CodeableConcept** _category;
	NullableString8 _priority;
	NullableBoolean _doNotPerform;
	CodeableConcept* _code;
	size_t _orderDetail_count;
	CodeableConcept** _orderDetail;
	union {
		Quantity* _quantityQuantity;
		Ratio* _quantityRatio;
		Range* _quantityRange;
	} _quantity;

	enum class _quantityType {
		Quantity,
		Ratio,
		Range
	};
_quantityType _quantity_type;

	Reference* _subject;
	Reference* _encounter;
	union {
		ISO8601_Time _occurrenceDateTime;
		Period* _occurrencePeriod;
		Timing* _occurrenceTiming;
	} _occurrence;

	enum class _occurrenceType {
		DateTime,
		Period,
		Timing
	};
_occurrenceType _occurrence_type;

	union {
		NullableBoolean _asNeededBoolean;
		CodeableConcept* _asNeededCodeableConcept;
	} _asNeeded;

	enum class _asNeededType {
		Boolean,
		CodeableConcept
	};
_asNeededType _asNeeded_type;

	ISO8601_Time _authoredOn;
	Reference* _requester;
	CodeableConcept* _performerType;
	size_t _performer_count;
	Reference** _performer;
	size_t _locationCode_count;
	CodeableConcept** _locationCode;
	size_t _locationReference_count;
	Reference** _locationReference;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	size_t _insurance_count;
	Reference** _insurance;
	size_t _supportingInfo_count;
	Reference** _supportingInfo;
	size_t _specimen_count;
	Reference** _specimen;
	size_t _bodySite_count;
	CodeableConcept** _bodySite;
	size_t _note_count;
	Annotation** _note;
	NullableString8 _patientInstruction;
	size_t _relevantHistory_count;
	Reference** _relevantHistory;
};
struct Slot {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _serviceCategory_count;
	CodeableConcept** _serviceCategory;
	size_t _serviceType_count;
	CodeableConcept** _serviceType;
	size_t _specialty_count;
	CodeableConcept** _specialty;
	CodeableConcept* _appointmentType;
	Reference* _schedule;
	NullableString8 _status;
	ISO8601_Time _start;
	ISO8601_Time _end;
	NullableBoolean _overbooked;
	NullableString8 _comment;
};
struct Specimen {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	Identifier* _accessionIdentifier;
	NullableString8 _status;
	CodeableConcept* _type;
	Reference* _subject;
	ISO8601_Time _receivedTime;
	size_t _parent_count;
	Reference** _parent;
	size_t _request_count;
	Reference** _request;
	Specimen_Collection* _collection;
	size_t _processing_count;
	Specimen_Processing** _processing;
	size_t _container_count;
	Specimen_Container** _container;
	size_t _condition_count;
	CodeableConcept** _condition;
	size_t _note_count;
	Annotation** _note;
};
struct Specimen_Collection {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _collector;
	union {
		ISO8601_Time _collectedDateTime;
		Period* _collectedPeriod;
	} _collected;

	enum class _collectedType {
		DateTime,
		Period
	};
_collectedType _collected_type;

	Duration* _duration;
	Quantity* _quantity;
	CodeableConcept* _method;
	CodeableConcept* _bodySite;
	union {
		CodeableConcept* _fastingStatusCodeableConcept;
		Duration* _fastingStatusDuration;
	} _fastingStatus;

	enum class _fastingStatusType {
		CodeableConcept,
		Duration
	};
_fastingStatusType _fastingStatus_type;

};
struct Specimen_Processing {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _description;
	CodeableConcept* _procedure;
	size_t _additive_count;
	Reference** _additive;
	union {
		ISO8601_Time _timeDateTime;
		Period* _timePeriod;
	} _time;

	enum class _timeType {
		DateTime,
		Period
	};
_timeType _time_type;

};
struct Specimen_Container {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _description;
	CodeableConcept* _type;
	Quantity* _capacity;
	Quantity* _specimenQuantity;
	union {
		CodeableConcept* _additiveCodeableConcept;
		Reference* _additiveReference;
	} _additive;

	enum class _additiveType {
		CodeableConcept,
		Reference
	};
_additiveType _additive_type;

};
struct SpecimenDefinition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _identifier;
	CodeableConcept* _typeCollected;
	size_t _patientPreparation_count;
	CodeableConcept** _patientPreparation;
	NullableString8 _timeAspect;
	size_t _collection_count;
	CodeableConcept** _collection;
	size_t _typeTested_count;
	SpecimenDefinition_TypeTested** _typeTested;
};
struct SpecimenDefinition_TypeTested {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableBoolean _isDerived;
	CodeableConcept* _type;
	NullableString8 _preference;
	SpecimenDefinition_TypeTested_Container* _container;
	NullableString8 _requirement;
	Duration* _retentionTime;
	size_t _rejectionCriterion_count;
	CodeableConcept** _rejectionCriterion;
	size_t _handling_count;
	SpecimenDefinition_TypeTested_Handling** _handling;
};
struct SpecimenDefinition_TypeTested_Container {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _material;
	CodeableConcept* _type;
	CodeableConcept* _cap;
	NullableString8 _description;
	Quantity* _capacity;
	union {
		Quantity* _minimumVolumeQuantity;
		NullableString8 _minimumVolumeString;
	} _minimumVolume;

	enum class _minimumVolumeType {
		Quantity,
		String
	};
_minimumVolumeType _minimumVolume_type;

	size_t _additive_count;
	SpecimenDefinition_TypeTested_Container_Additive** _additive;
	NullableString8 _preparation;
};
struct SpecimenDefinition_TypeTested_Container_Additive {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		CodeableConcept* _additiveCodeableConcept;
		Reference* _additiveReference;
	} _additive;

	enum class _additiveType {
		CodeableConcept,
		Reference
	};
_additiveType _additive_type;

};
struct SpecimenDefinition_TypeTested_Handling {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _temperatureQualifier;
	Range* _temperatureRange;
	Duration* _maxDuration;
	NullableString8 _instruction;
};
struct StructureDefinition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _status;
	NullableBoolean _experimental;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _copyright;
	size_t _keyword_count;
	Coding** _keyword;
	NullableString8 _fhirVersion;
	size_t _mapping_count;
	StructureDefinition_Mapping** _mapping;
	NullableString8 _kind;
	NullableBoolean _abstract;
	size_t _context_count;
	StructureDefinition_Context** _context;
	size_t _contextInvariant_count;
	NullableString8* _contextInvariant;
	NullableString8 _type;
	NullableString8 _baseDefinition;
	NullableString8 _derivation;
	StructureDefinition_Snapshot* _snapshot;
	StructureDefinition_Differential* _differential;
};
struct StructureDefinition_Mapping {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _identity;
	NullableString8 _uri;
	NullableString8 _name;
	NullableString8 _comment;
};
struct StructureDefinition_Context {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _type;
	NullableString8 _expression;
};
struct StructureDefinition_Snapshot {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _element_count;
	ElementDefinition** _element;
};
struct StructureDefinition_Differential {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _element_count;
	ElementDefinition** _element;
};
struct StructureMap {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _status;
	NullableBoolean _experimental;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _copyright;
	size_t _structure_count;
	StructureMap_Structure** _structure;
	size_t _import_count;
	NullableString8* _import;
	size_t _group_count;
	StructureMap_Group** _group;
};
struct StructureMap_Structure {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	NullableString8 _mode;
	NullableString8 _alias;
	NullableString8 _documentation;
};
struct StructureMap_Group {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	NullableString8 _extends;
	NullableString8 _typeMode;
	NullableString8 _documentation;
	size_t _input_count;
	StructureMap_Group_Input** _input;
	size_t _rule_count;
	StructureMap_Group_Rule** _rule;
};
struct StructureMap_Group_Input {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	NullableString8 _type;
	NullableString8 _mode;
	NullableString8 _documentation;
};
struct StructureMap_Group_Rule {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	size_t _source_count;
	StructureMap_Group_Rule_Source** _source;
	size_t _target_count;
	StructureMap_Group_Rule_Target** _target;
	size_t _rule_count;
	StructureMap_Group_Rule** _rule;
	size_t _dependent_count;
	StructureMap_Group_Rule_Dependent** _dependent;
	NullableString8 _documentation;
};
struct StructureMap_Group_Rule_Source {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _context;
	NullableInt32 _min;
	NullableString8 _max;
	NullableString8 _type;
	union {
		NullableString8 _defaultValueBase64Binary;
		NullableBoolean _defaultValueBoolean;
		NullableString8 _defaultValueCanonical;
		NullableString8 _defaultValueCode;
		ISO8601_Time _defaultValueDate;
		ISO8601_Time _defaultValueDateTime;
		NullableString8 _defaultValueDecimal;
		NullableString8 _defaultValueId;
		ISO8601_Time _defaultValueInstant;
		NullableInt32 _defaultValueInteger;
		NullableString8 _defaultValueMarkdown;
		NullableString8 _defaultValueOid;
		NullableInt32 _defaultValuePositiveInt;
		NullableString8 _defaultValueString;
		ISO8601_Time _defaultValueTime;
		NullableInt32 _defaultValueUnsignedInt;
		NullableString8 _defaultValueUri;
		NullableString8 _defaultValueUrl;
		NullableString8 _defaultValueUuid;
		Address* _defaultValueAddress;
		Age* _defaultValueAge;
		Annotation* _defaultValueAnnotation;
		Attachment* _defaultValueAttachment;
		CodeableConcept* _defaultValueCodeableConcept;
		Coding* _defaultValueCoding;
		ContactPoint* _defaultValueContactPoint;
		Count* _defaultValueCount;
		Distance* _defaultValueDistance;
		Duration* _defaultValueDuration;
		HumanName* _defaultValueHumanName;
		Identifier* _defaultValueIdentifier;
		Money* _defaultValueMoney;
		Period* _defaultValuePeriod;
		Quantity* _defaultValueQuantity;
		Range* _defaultValueRange;
		Ratio* _defaultValueRatio;
		Reference* _defaultValueReference;
		SampledData* _defaultValueSampledData;
		Signature* _defaultValueSignature;
		Timing* _defaultValueTiming;
		ContactDetail* _defaultValueContactDetail;
		Contributor* _defaultValueContributor;
		DataRequirement* _defaultValueDataRequirement;
		Expression* _defaultValueExpression;
		ParameterDefinition* _defaultValueParameterDefinition;
		RelatedArtifact* _defaultValueRelatedArtifact;
		TriggerDefinition* _defaultValueTriggerDefinition;
		UsageContext* _defaultValueUsageContext;
		Dosage* _defaultValueDosage;
		Meta* _defaultValueMeta;
	} _defaultValue;

	enum class _defaultValueType {
		Base64Binary,
		Boolean,
		Canonical,
		Code,
		Date,
		DateTime,
		Decimal,
		Id,
		Instant,
		Integer,
		Markdown,
		Oid,
		PositiveInt,
		String,
		Time,
		UnsignedInt,
		Uri,
		Url,
		Uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	};
_defaultValueType _defaultValue_type;

	NullableString8 _element;
	NullableString8 _listMode;
	NullableString8 _variable;
	NullableString8 _condition;
	NullableString8 _check;
	NullableString8 _logMessage;
};
struct StructureMap_Group_Rule_Target {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _context;
	NullableString8 _contextType;
	NullableString8 _element;
	NullableString8 _variable;
	size_t _listMode_count;
	NullableString8* _listMode;
	NullableString8 _listRuleId;
	NullableString8 _transform;
	size_t _parameter_count;
	StructureMap_Group_Rule_Target_Parameter** _parameter;
};
struct StructureMap_Group_Rule_Target_Parameter {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		NullableString8 _valueId;
		NullableString8 _valueString;
		NullableBoolean _valueBoolean;
		NullableInt32 _valueInteger;
		NullableString8 _valueDecimal;
	} _value;

	enum class _valueType {
		Id,
		String,
		Boolean,
		Integer,
		Decimal
	};
_valueType _value_type;

};
struct StructureMap_Group_Rule_Dependent {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	size_t _variable_count;
	NullableString8* _variable;
};
struct Subscription {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _status;
	size_t _contact_count;
	ContactPoint** _contact;
	ISO8601_Time _end;
	NullableString8 _reason;
	NullableString8 _criteria;
	NullableString8 _error;
	Subscription_Channel* _channel;
};
struct Subscription_Channel {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _type;
	NullableString8 _endpoint;
	NullableString8 _payload;
	size_t _header_count;
	NullableString8* _header;
};
struct Substance {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	CodeableConcept* _code;
	NullableString8 _description;
	size_t _instance_count;
	Substance_Instance** _instance;
	size_t _ingredient_count;
	Substance_Ingredient** _ingredient;
};
struct Substance_Instance {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _identifier;
	ISO8601_Time _expiry;
	Quantity* _quantity;
};
struct Substance_Ingredient {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Ratio* _quantity;
	union {
		CodeableConcept* _substanceCodeableConcept;
		Reference* _substanceReference;
	} _substance;

	enum class _substanceType {
		CodeableConcept,
		Reference
	};
_substanceType _substance_type;

};
struct SubstanceNucleicAcid {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _sequenceType;
	NullableInt32 _numberOfSubunits;
	NullableString8 _areaOfHybridisation;
	CodeableConcept* _oligoNucleotideType;
	size_t _subunit_count;
	SubstanceNucleicAcid_Subunit** _subunit;
};
struct SubstanceNucleicAcid_Subunit {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _subunit;
	NullableString8 _sequence;
	NullableInt32 _length;
	Attachment* _sequenceAttachment;
	CodeableConcept* _fivePrime;
	CodeableConcept* _threePrime;
	size_t _linkage_count;
	SubstanceNucleicAcid_Subunit_Linkage** _linkage;
	size_t _sugar_count;
	SubstanceNucleicAcid_Subunit_Sugar** _sugar;
};
struct SubstanceNucleicAcid_Subunit_Linkage {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _connectivity;
	Identifier* _identifier;
	NullableString8 _name;
	NullableString8 _residueSite;
};
struct SubstanceNucleicAcid_Subunit_Sugar {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _identifier;
	NullableString8 _name;
	NullableString8 _residueSite;
};
struct SubstancePolymer {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _class;
	CodeableConcept* _geometry;
	size_t _copolymerConnectivity_count;
	CodeableConcept** _copolymerConnectivity;
	size_t _modification_count;
	NullableString8* _modification;
	size_t _monomerSet_count;
	SubstancePolymer_MonomerSet** _monomerSet;
	size_t _repeat_count;
	SubstancePolymer_Repeat** _repeat;
};
struct SubstancePolymer_MonomerSet {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _ratioType;
	size_t _startingMaterial_count;
	SubstancePolymer_MonomerSet_StartingMaterial** _startingMaterial;
};
struct SubstancePolymer_MonomerSet_StartingMaterial {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _material;
	CodeableConcept* _type;
	NullableBoolean _isDefining;
	SubstanceAmount* _amount;
};
struct SubstancePolymer_Repeat {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _numberOfUnits;
	NullableString8 _averageMolecularFormula;
	CodeableConcept* _repeatUnitAmountType;
	size_t _repeatUnit_count;
	SubstancePolymer_Repeat_RepeatUnit** _repeatUnit;
};
struct SubstancePolymer_Repeat_RepeatUnit {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _orientationOfPolymerisation;
	NullableString8 _repeatUnit;
	SubstanceAmount* _amount;
	size_t _degreeOfPolymerisation_count;
	SubstancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation** _degreeOfPolymerisation;
	size_t _structuralRepresentation_count;
	SubstancePolymer_Repeat_RepeatUnit_StructuralRepresentation** _structuralRepresentation;
};
struct SubstancePolymer_Repeat_RepeatUnit_DegreeOfPolymerisation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _degree;
	SubstanceAmount* _amount;
};
struct SubstancePolymer_Repeat_RepeatUnit_StructuralRepresentation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	NullableString8 _representation;
	Attachment* _attachment;
};
struct SubstanceProtein {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _sequenceType;
	NullableInt32 _numberOfSubunits;
	size_t _disulfideLinkage_count;
	NullableString8* _disulfideLinkage;
	size_t _subunit_count;
	SubstanceProtein_Subunit** _subunit;
};
struct SubstanceProtein_Subunit {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _subunit;
	NullableString8 _sequence;
	NullableInt32 _length;
	Attachment* _sequenceAttachment;
	Identifier* _nTerminalModificationId;
	NullableString8 _nTerminalModification;
	Identifier* _cTerminalModificationId;
	NullableString8 _cTerminalModification;
};
struct SubstanceReferenceInformation {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _comment;
	size_t _gene_count;
	SubstanceReferenceInformation_Gene** _gene;
	size_t _geneElement_count;
	SubstanceReferenceInformation_GeneElement** _geneElement;
	size_t _classification_count;
	SubstanceReferenceInformation_Classification** _classification;
	size_t _target_count;
	SubstanceReferenceInformation_Target** _target;
};
struct SubstanceReferenceInformation_Gene {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _geneSequenceOrigin;
	CodeableConcept* _gene;
	size_t _source_count;
	Reference** _source;
};
struct SubstanceReferenceInformation_GeneElement {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	Identifier* _element;
	size_t _source_count;
	Reference** _source;
};
struct SubstanceReferenceInformation_Classification {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _domain;
	CodeableConcept* _classification;
	size_t _subtype_count;
	CodeableConcept** _subtype;
	size_t _source_count;
	Reference** _source;
};
struct SubstanceReferenceInformation_Target {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _target;
	CodeableConcept* _type;
	CodeableConcept* _interaction;
	CodeableConcept* _organism;
	CodeableConcept* _organismType;
	union {
		Quantity* _amountQuantity;
		Range* _amountRange;
		NullableString8 _amountString;
	} _amount;

	enum class _amountType {
		Quantity,
		Range,
		String
	};
_amountType _amount_type;

	CodeableConcept* _amountType;
	size_t _source_count;
	Reference** _source;
};
struct SubstanceSourceMaterial {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _sourceMaterialClass;
	CodeableConcept* _sourceMaterialType;
	CodeableConcept* _sourceMaterialState;
	Identifier* _organismId;
	NullableString8 _organismName;
	size_t _parentSubstanceId_count;
	Identifier** _parentSubstanceId;
	size_t _parentSubstanceName_count;
	NullableString8* _parentSubstanceName;
	size_t _countryOfOrigin_count;
	CodeableConcept** _countryOfOrigin;
	size_t _geographicalLocation_count;
	NullableString8* _geographicalLocation;
	CodeableConcept* _developmentStage;
	size_t _fractionDescription_count;
	SubstanceSourceMaterial_FractionDescription** _fractionDescription;
	SubstanceSourceMaterial_Organism* _organism;
	size_t _partDescription_count;
	SubstanceSourceMaterial_PartDescription** _partDescription;
};
struct SubstanceSourceMaterial_FractionDescription {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _fraction;
	CodeableConcept* _materialType;
};
struct SubstanceSourceMaterial_Organism {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _family;
	CodeableConcept* _genus;
	CodeableConcept* _species;
	CodeableConcept* _intraspecificType;
	NullableString8 _intraspecificDescription;
	size_t _author_count;
	SubstanceSourceMaterial_Organism_Author** _author;
	SubstanceSourceMaterial_Organism_Hybrid* _hybrid;
	SubstanceSourceMaterial_Organism_OrganismGeneral* _organismGeneral;
};
struct SubstanceSourceMaterial_Organism_Author {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _authorType;
	NullableString8 _authorDescription;
};
struct SubstanceSourceMaterial_Organism_Hybrid {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _maternalOrganismId;
	NullableString8 _maternalOrganismName;
	NullableString8 _paternalOrganismId;
	NullableString8 _paternalOrganismName;
	CodeableConcept* _hybridType;
};
struct SubstanceSourceMaterial_Organism_OrganismGeneral {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _kingdom;
	CodeableConcept* _phylum;
	CodeableConcept* _class;
	CodeableConcept* _order;
};
struct SubstanceSourceMaterial_PartDescription {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _part;
	CodeableConcept* _partLocation;
};
struct SubstanceSpecification {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _identifier;
	CodeableConcept* _type;
	CodeableConcept* _status;
	CodeableConcept* _domain;
	NullableString8 _description;
	size_t _source_count;
	Reference** _source;
	NullableString8 _comment;
	size_t _moiety_count;
	SubstanceSpecification_Moiety** _moiety;
	size_t _property_count;
	SubstanceSpecification_Property** _property;
	Reference* _referenceInformation;
	SubstanceSpecification_Structure* _structure;
	size_t _code_count;
	SubstanceSpecification_Code** _code;
	size_t _name_count;
	SubstanceSpecification_Name** _name;
	size_t _molecularWeight_count;
	SubstanceSpecification_Structure_Isotope_MolecularWeight** _molecularWeight;
	size_t _relationship_count;
	SubstanceSpecification_Relationship** _relationship;
	Reference* _nucleicAcid;
	Reference* _polymer;
	Reference* _protein;
	Reference* _sourceMaterial;
};
struct SubstanceSpecification_Moiety {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _role;
	Identifier* _identifier;
	NullableString8 _name;
	CodeableConcept* _stereochemistry;
	CodeableConcept* _opticalActivity;
	NullableString8 _molecularFormula;
	union {
		Quantity* _amountQuantity;
		NullableString8 _amountString;
	} _amount;

	enum class _amountType {
		Quantity,
		String
	};
_amountType _amount_type;

};
struct SubstanceSpecification_Property {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _category;
	CodeableConcept* _code;
	NullableString8 _parameters;
	union {
		Reference* _definingSubstanceReference;
		CodeableConcept* _definingSubstanceCodeableConcept;
	} _definingSubstance;

	enum class _definingSubstanceType {
		Reference,
		CodeableConcept
	};
_definingSubstanceType _definingSubstance_type;

	union {
		Quantity* _amountQuantity;
		NullableString8 _amountString;
	} _amount;

	enum class _amountType {
		Quantity,
		String
	};
_amountType _amount_type;

};
struct SubstanceSpecification_Structure {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _stereochemistry;
	CodeableConcept* _opticalActivity;
	NullableString8 _molecularFormula;
	NullableString8 _molecularFormulaByMoiety;
	size_t _isotope_count;
	SubstanceSpecification_Structure_Isotope** _isotope;
	SubstanceSpecification_Structure_Isotope_MolecularWeight* _molecularWeight;
	size_t _source_count;
	Reference** _source;
	size_t _representation_count;
	SubstanceSpecification_Structure_Representation** _representation;
};
struct SubstanceSpecification_Structure_Isotope {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _identifier;
	CodeableConcept* _name;
	CodeableConcept* _substitution;
	Quantity* _halfLife;
	SubstanceSpecification_Structure_Isotope_MolecularWeight* _molecularWeight;
};
struct SubstanceSpecification_Structure_Isotope_MolecularWeight {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _method;
	CodeableConcept* _type;
	Quantity* _amount;
};
struct SubstanceSpecification_Structure_Representation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	NullableString8 _representation;
	Attachment* _attachment;
};
struct SubstanceSpecification_Code {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	CodeableConcept* _status;
	ISO8601_Time _statusDate;
	NullableString8 _comment;
	size_t _source_count;
	Reference** _source;
};
struct SubstanceSpecification_Name {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	CodeableConcept* _type;
	CodeableConcept* _status;
	NullableBoolean _preferred;
	size_t _language_count;
	CodeableConcept** _language;
	size_t _domain_count;
	CodeableConcept** _domain;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	size_t _synonym_count;
	SubstanceSpecification_Name** _synonym;
	size_t _translation_count;
	SubstanceSpecification_Name** _translation;
	size_t _official_count;
	SubstanceSpecification_Name_Official** _official;
	size_t _source_count;
	Reference** _source;
};
struct SubstanceSpecification_Name_Official {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _authority;
	CodeableConcept* _status;
	ISO8601_Time _date;
};
struct SubstanceSpecification_Relationship {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		Reference* _substanceReference;
		CodeableConcept* _substanceCodeableConcept;
	} _substance;

	enum class _substanceType {
		Reference,
		CodeableConcept
	};
_substanceType _substance_type;

	CodeableConcept* _relationship;
	NullableBoolean _isDefining;
	union {
		Quantity* _amountQuantity;
		Range* _amountRange;
		Ratio* _amountRatio;
		NullableString8 _amountString;
	} _amount;

	enum class _amountType {
		Quantity,
		Range,
		Ratio,
		String
	};
_amountType _amount_type;

	Ratio* _amountRatioLowLimit;
	CodeableConcept* _amountType;
	size_t _source_count;
	Reference** _source;
};
struct SupplyDelivery {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	Reference* _patient;
	CodeableConcept* _type;
	SupplyDelivery_SuppliedItem* _suppliedItem;
	union {
		ISO8601_Time _occurrenceDateTime;
		Period* _occurrencePeriod;
		Timing* _occurrenceTiming;
	} _occurrence;

	enum class _occurrenceType {
		DateTime,
		Period,
		Timing
	};
_occurrenceType _occurrence_type;

	Reference* _supplier;
	Reference* _destination;
	size_t _receiver_count;
	Reference** _receiver;
};
struct SupplyDelivery_SuppliedItem {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Quantity* _quantity;
	union {
		CodeableConcept* _itemCodeableConcept;
		Reference* _itemReference;
	} _item;

	enum class _itemType {
		CodeableConcept,
		Reference
	};
_itemType _item_type;

};
struct SupplyRequest {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	CodeableConcept* _category;
	NullableString8 _priority;
	union {
		CodeableConcept* _itemCodeableConcept;
		Reference* _itemReference;
	} _item;

	enum class _itemType {
		CodeableConcept,
		Reference
	};
_itemType _item_type;

	Quantity* _quantity;
	size_t _parameter_count;
	SupplyRequest_Parameter** _parameter;
	union {
		ISO8601_Time _occurrenceDateTime;
		Period* _occurrencePeriod;
		Timing* _occurrenceTiming;
	} _occurrence;

	enum class _occurrenceType {
		DateTime,
		Period,
		Timing
	};
_occurrenceType _occurrence_type;

	ISO8601_Time _authoredOn;
	Reference* _requester;
	size_t _supplier_count;
	Reference** _supplier;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	Reference* _deliverFrom;
	Reference* _deliverTo;
};
struct SupplyRequest_Parameter {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _code;
	union {
		CodeableConcept* _valueCodeableConcept;
		Quantity* _valueQuantity;
		Range* _valueRange;
		NullableBoolean _valueBoolean;
	} _value;

	enum class _valueType {
		CodeableConcept,
		Quantity,
		Range,
		Boolean
	};
_valueType _value_type;

};
struct Task {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _instantiatesCanonical;
	NullableString8 _instantiatesUri;
	size_t _basedOn_count;
	Reference** _basedOn;
	Identifier* _groupIdentifier;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	CodeableConcept* _statusReason;
	CodeableConcept* _businessStatus;
	NullableString8 _intent;
	NullableString8 _priority;
	CodeableConcept* _code;
	NullableString8 _description;
	Reference* _focus;
	Reference* _for;
	Reference* _encounter;
	Period* _executionPeriod;
	ISO8601_Time _authoredOn;
	ISO8601_Time _lastModified;
	Reference* _requester;
	size_t _performerType_count;
	CodeableConcept** _performerType;
	Reference* _owner;
	Reference* _location;
	CodeableConcept* _reasonCode;
	Reference* _reasonReference;
	size_t _insurance_count;
	Reference** _insurance;
	size_t _note_count;
	Annotation** _note;
	size_t _relevantHistory_count;
	Reference** _relevantHistory;
	Task_Restriction* _restriction;
	size_t _input_count;
	Task_Input** _input;
	size_t _output_count;
	Task_Output** _output;
};
struct Task_Restriction {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _repetitions;
	Period* _period;
	size_t _recipient_count;
	Reference** _recipient;
};
struct Task_Input {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	union {
		NullableString8 _valueBase64Binary;
		NullableBoolean _valueBoolean;
		NullableString8 _valueCanonical;
		NullableString8 _valueCode;
		ISO8601_Time _valueDate;
		ISO8601_Time _valueDateTime;
		NullableString8 _valueDecimal;
		NullableString8 _valueId;
		ISO8601_Time _valueInstant;
		NullableInt32 _valueInteger;
		NullableString8 _valueMarkdown;
		NullableString8 _valueOid;
		NullableInt32 _valuePositiveInt;
		NullableString8 _valueString;
		ISO8601_Time _valueTime;
		NullableInt32 _valueUnsignedInt;
		NullableString8 _valueUri;
		NullableString8 _valueUrl;
		NullableString8 _valueUuid;
		Address* _valueAddress;
		Age* _valueAge;
		Annotation* _valueAnnotation;
		Attachment* _valueAttachment;
		CodeableConcept* _valueCodeableConcept;
		Coding* _valueCoding;
		ContactPoint* _valueContactPoint;
		Count* _valueCount;
		Distance* _valueDistance;
		Duration* _valueDuration;
		HumanName* _valueHumanName;
		Identifier* _valueIdentifier;
		Money* _valueMoney;
		Period* _valuePeriod;
		Quantity* _valueQuantity;
		Range* _valueRange;
		Ratio* _valueRatio;
		Reference* _valueReference;
		SampledData* _valueSampledData;
		Signature* _valueSignature;
		Timing* _valueTiming;
		ContactDetail* _valueContactDetail;
		Contributor* _valueContributor;
		DataRequirement* _valueDataRequirement;
		Expression* _valueExpression;
		ParameterDefinition* _valueParameterDefinition;
		RelatedArtifact* _valueRelatedArtifact;
		TriggerDefinition* _valueTriggerDefinition;
		UsageContext* _valueUsageContext;
		Dosage* _valueDosage;
		Meta* _valueMeta;
	} _value;

	enum class _valueType {
		Base64Binary,
		Boolean,
		Canonical,
		Code,
		Date,
		DateTime,
		Decimal,
		Id,
		Instant,
		Integer,
		Markdown,
		Oid,
		PositiveInt,
		String,
		Time,
		UnsignedInt,
		Uri,
		Url,
		Uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	};
_valueType _value_type;

};
struct Task_Output {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _type;
	union {
		NullableString8 _valueBase64Binary;
		NullableBoolean _valueBoolean;
		NullableString8 _valueCanonical;
		NullableString8 _valueCode;
		ISO8601_Time _valueDate;
		ISO8601_Time _valueDateTime;
		NullableString8 _valueDecimal;
		NullableString8 _valueId;
		ISO8601_Time _valueInstant;
		NullableInt32 _valueInteger;
		NullableString8 _valueMarkdown;
		NullableString8 _valueOid;
		NullableInt32 _valuePositiveInt;
		NullableString8 _valueString;
		ISO8601_Time _valueTime;
		NullableInt32 _valueUnsignedInt;
		NullableString8 _valueUri;
		NullableString8 _valueUrl;
		NullableString8 _valueUuid;
		Address* _valueAddress;
		Age* _valueAge;
		Annotation* _valueAnnotation;
		Attachment* _valueAttachment;
		CodeableConcept* _valueCodeableConcept;
		Coding* _valueCoding;
		ContactPoint* _valueContactPoint;
		Count* _valueCount;
		Distance* _valueDistance;
		Duration* _valueDuration;
		HumanName* _valueHumanName;
		Identifier* _valueIdentifier;
		Money* _valueMoney;
		Period* _valuePeriod;
		Quantity* _valueQuantity;
		Range* _valueRange;
		Ratio* _valueRatio;
		Reference* _valueReference;
		SampledData* _valueSampledData;
		Signature* _valueSignature;
		Timing* _valueTiming;
		ContactDetail* _valueContactDetail;
		Contributor* _valueContributor;
		DataRequirement* _valueDataRequirement;
		Expression* _valueExpression;
		ParameterDefinition* _valueParameterDefinition;
		RelatedArtifact* _valueRelatedArtifact;
		TriggerDefinition* _valueTriggerDefinition;
		UsageContext* _valueUsageContext;
		Dosage* _valueDosage;
		Meta* _valueMeta;
	} _value;

	enum class _valueType {
		Base64Binary,
		Boolean,
		Canonical,
		Code,
		Date,
		DateTime,
		Decimal,
		Id,
		Instant,
		Integer,
		Markdown,
		Oid,
		PositiveInt,
		String,
		Time,
		UnsignedInt,
		Uri,
		Url,
		Uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	};
_valueType _value_type;

};
struct TerminologyCapabilities {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _status;
	NullableBoolean _experimental;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _copyright;
	NullableString8 _kind;
	TerminologyCapabilities_Software* _software;
	TerminologyCapabilities_Implementation* _implementation;
	NullableBoolean _lockedDate;
	size_t _codeSystem_count;
	TerminologyCapabilities_CodeSystem** _codeSystem;
	TerminologyCapabilities_Expansion* _expansion;
	NullableString8 _codeSearch;
	TerminologyCapabilities_ValidateCode* _validateCode;
	TerminologyCapabilities_Translation* _translation;
	TerminologyCapabilities_Closure* _closure;
};
struct TerminologyCapabilities_Software {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	NullableString8 _version;
};
struct TerminologyCapabilities_Implementation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _description;
	NullableString8 _url;
};
struct TerminologyCapabilities_CodeSystem {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _uri;
	size_t _version_count;
	TerminologyCapabilities_CodeSystem_Version** _version;
	NullableBoolean _subsumption;
};
struct TerminologyCapabilities_CodeSystem_Version {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _code;
	NullableBoolean _isDefault;
	NullableBoolean _compositional;
	size_t _language_count;
	NullableString8* _language;
	size_t _filter_count;
	TerminologyCapabilities_CodeSystem_Version_Filter** _filter;
	size_t _property_count;
	NullableString8* _property;
};
struct TerminologyCapabilities_CodeSystem_Version_Filter {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _code;
	size_t _op_count;
	NullableString8* _op;
};
struct TerminologyCapabilities_Expansion {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableBoolean _hierarchical;
	NullableBoolean _paging;
	NullableBoolean _incomplete;
	size_t _parameter_count;
	TerminologyCapabilities_Expansion_Parameter** _parameter;
	NullableString8 _textFilter;
};
struct TerminologyCapabilities_Expansion_Parameter {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	NullableString8 _documentation;
};
struct TerminologyCapabilities_ValidateCode {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableBoolean _translations;
};
struct TerminologyCapabilities_Translation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableBoolean _needsMap;
};
struct TerminologyCapabilities_Closure {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableBoolean _translation;
};
struct TestReport {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _identifier;
	NullableString8 _name;
	NullableString8 _status;
	Reference* _testScript;
	NullableString8 _result;
	NullableString8 _score;
	NullableString8 _tester;
	ISO8601_Time _issued;
	size_t _participant_count;
	TestReport_Participant** _participant;
	TestReport_Setup* _setup;
	size_t _test_count;
	TestReport_Test** _test;
	TestReport_Teardown* _teardown;
};
struct TestReport_Participant {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _type;
	NullableString8 _uri;
	NullableString8 _display;
};
struct TestReport_Setup {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _action_count;
	TestReport_Setup_Action** _action;
};
struct TestReport_Setup_Action {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	TestReport_Setup_Action_Operation* _operation;
	TestReport_Setup_Action_Assert* _assert;
};
struct TestReport_Setup_Action_Operation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _result;
	NullableString8 _message;
	NullableString8 _detail;
};
struct TestReport_Setup_Action_Assert {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _result;
	NullableString8 _message;
	NullableString8 _detail;
};
struct TestReport_Test {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	NullableString8 _description;
	size_t _action_count;
	TestReport_Test_Action** _action;
};
struct TestReport_Test_Action {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	TestReport_Setup_Action_Operation* _operation;
	TestReport_Setup_Action_Assert* _assert;
};
struct TestReport_Teardown {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _action_count;
	TestReport_Teardown_Action** _action;
};
struct TestReport_Teardown_Action {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	TestReport_Setup_Action_Operation* _operation;
};
struct TestScript {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	Identifier* _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _status;
	NullableBoolean _experimental;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _copyright;
	size_t _origin_count;
	TestScript_Origin** _origin;
	size_t _destination_count;
	TestScript_Destination** _destination;
	TestScript_Metadata* _metadata;
	size_t _fixture_count;
	TestScript_Fixture** _fixture;
	size_t _profile_count;
	Reference** _profile;
	size_t _variable_count;
	TestScript_Variable** _variable;
	TestScript_Setup* _setup;
	size_t _test_count;
	TestScript_Test** _test;
	TestScript_Teardown* _teardown;
};
struct TestScript_Origin {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _index;
	Coding* _profile;
};
struct TestScript_Destination {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _index;
	Coding* _profile;
};
struct TestScript_Metadata {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _link_count;
	TestScript_Metadata_Link** _link;
	size_t _capability_count;
	TestScript_Metadata_Capability** _capability;
};
struct TestScript_Metadata_Link {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	NullableString8 _description;
};
struct TestScript_Metadata_Capability {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableBoolean _required;
	NullableBoolean _validated;
	NullableString8 _description;
	size_t _origin_count;
	NullableInt32* _origin;
	NullableInt32 _destination;
	size_t _link_count;
	NullableString8* _link;
	NullableString8 _capabilities;
};
struct TestScript_Fixture {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableBoolean _autocreate;
	NullableBoolean _autodelete;
	Reference* _resource;
};
struct TestScript_Variable {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	NullableString8 _defaultValue;
	NullableString8 _description;
	NullableString8 _expression;
	NullableString8 _headerField;
	NullableString8 _hint;
	NullableString8 _path;
	NullableString8 _sourceId;
};
struct TestScript_Setup {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _action_count;
	TestScript_Setup_Action** _action;
};
struct TestScript_Setup_Action {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	TestScript_Setup_Action_Operation* _operation;
	TestScript_Setup_Action_Assert* _assert;
};
struct TestScript_Setup_Action_Operation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Coding* _type;
	NullableString8 _resource;
	NullableString8 _label;
	NullableString8 _description;
	NullableString8 _accept;
	NullableString8 _contentType;
	NullableInt32 _destination;
	NullableBoolean _encodeRequestUrl;
	NullableString8 _method;
	NullableInt32 _origin;
	NullableString8 _params;
	size_t _requestHeader_count;
	TestScript_Setup_Action_Operation_RequestHeader** _requestHeader;
	NullableString8 _requestId;
	NullableString8 _responseId;
	NullableString8 _sourceId;
	NullableString8 _targetId;
	NullableString8 _url;
};
struct TestScript_Setup_Action_Operation_RequestHeader {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _field;
	NullableString8 _value;
};
struct TestScript_Setup_Action_Assert {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _label;
	NullableString8 _description;
	NullableString8 _direction;
	NullableString8 _compareToSourceId;
	NullableString8 _compareToSourceExpression;
	NullableString8 _compareToSourcePath;
	NullableString8 _contentType;
	NullableString8 _expression;
	NullableString8 _headerField;
	NullableString8 _minimumId;
	NullableBoolean _navigationLinks;
	NullableString8 _operator;
	NullableString8 _path;
	NullableString8 _requestMethod;
	NullableString8 _requestURL;
	NullableString8 _resource;
	NullableString8 _response;
	NullableString8 _responseCode;
	NullableString8 _sourceId;
	NullableString8 _validateProfileId;
	NullableString8 _value;
	NullableBoolean _warningOnly;
};
struct TestScript_Test {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	NullableString8 _description;
	size_t _action_count;
	TestScript_Test_Action** _action;
};
struct TestScript_Test_Action {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	TestScript_Setup_Action_Operation* _operation;
	TestScript_Setup_Action_Assert* _assert;
};
struct TestScript_Teardown {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _action_count;
	TestScript_Teardown_Action** _action;
};
struct TestScript_Teardown_Action {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	TestScript_Setup_Action_Operation* _operation;
};
struct ValueSet {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _status;
	NullableBoolean _experimental;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableBoolean _immutable;
	NullableString8 _purpose;
	NullableString8 _copyright;
	ValueSet_Compose* _compose;
	ValueSet_Expansion* _expansion;
};
struct ValueSet_Compose {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	ISO8601_Time _lockedDate;
	NullableBoolean _inactive;
	size_t _include_count;
	ValueSet_Compose_Include** _include;
	size_t _exclude_count;
	ValueSet_Compose_Include** _exclude;
};
struct ValueSet_Compose_Include {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _system;
	NullableString8 _version;
	size_t _concept_count;
	ValueSet_Compose_Include_Concept** _concept;
	size_t _filter_count;
	ValueSet_Compose_Include_Filter** _filter;
	size_t _valueSet_count;
	NullableString8* _valueSet;
};
struct ValueSet_Compose_Include_Concept {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _code;
	NullableString8 _display;
	size_t _designation_count;
	ValueSet_Compose_Include_Concept_Designation** _designation;
};
struct ValueSet_Compose_Include_Concept_Designation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _language;
	Coding* _use;
	NullableString8 _value;
};
struct ValueSet_Compose_Include_Filter {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _property;
	NullableString8 _op;
	NullableString8 _value;
};
struct ValueSet_Expansion {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _identifier;
	ISO8601_Time _timestamp;
	NullableInt32 _total;
	NullableInt32 _offset;
	size_t _parameter_count;
	ValueSet_Expansion_Parameter** _parameter;
	size_t _contains_count;
	ValueSet_Expansion_Contains** _contains;
};
struct ValueSet_Expansion_Parameter {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	union {
		NullableString8 _valueString;
		NullableBoolean _valueBoolean;
		NullableInt32 _valueInteger;
		NullableString8 _valueDecimal;
		NullableString8 _valueUri;
		NullableString8 _valueCode;
		ISO8601_Time _valueDateTime;
	} _value;

	enum class _valueType {
		String,
		Boolean,
		Integer,
		Decimal,
		Uri,
		Code,
		DateTime
	};
_valueType _value_type;

};
struct ValueSet_Expansion_Contains {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _system;
	NullableBoolean _abstract;
	NullableBoolean _inactive;
	NullableString8 _version;
	NullableString8 _code;
	NullableString8 _display;
	size_t _designation_count;
	ValueSet_Compose_Include_Concept_Designation** _designation;
	size_t _contains_count;
	ValueSet_Expansion_Contains** _contains;
};
struct VerificationResult {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _target_count;
	Reference** _target;
	size_t _targetLocation_count;
	NullableString8* _targetLocation;
	CodeableConcept* _need;
	NullableString8 _status;
	ISO8601_Time _statusDate;
	CodeableConcept* _validationType;
	size_t _validationProcess_count;
	CodeableConcept** _validationProcess;
	Timing* _frequency;
	ISO8601_Time _lastPerformed;
	ISO8601_Time _nextScheduled;
	CodeableConcept* _failureAction;
	size_t _primarySource_count;
	VerificationResult_PrimarySource** _primarySource;
	VerificationResult_Attestation* _attestation;
	size_t _validator_count;
	VerificationResult_Validator** _validator;
};
struct VerificationResult_PrimarySource {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _who;
	size_t _type_count;
	CodeableConcept** _type;
	size_t _communicationMethod_count;
	CodeableConcept** _communicationMethod;
	CodeableConcept* _validationStatus;
	ISO8601_Time _validationDate;
	CodeableConcept* _canPushUpdates;
	size_t _pushTypeAvailable_count;
	CodeableConcept** _pushTypeAvailable;
};
struct VerificationResult_Attestation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _who;
	Reference* _onBehalfOf;
	CodeableConcept* _communicationMethod;
	ISO8601_Time _date;
	NullableString8 _sourceIdentityCertificate;
	NullableString8 _proxyIdentityCertificate;
	Signature* _proxySignature;
	Signature* _sourceSignature;
};
struct VerificationResult_Validator {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Reference* _organization;
	NullableString8 _identityCertificate;
	Signature* _attestationSignature;
};
struct VisionPrescription {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _status;
	ISO8601_Time _created;
	Reference* _patient;
	Reference* _encounter;
	ISO8601_Time _dateWritten;
	Reference* _prescriber;
	size_t _lensSpecification_count;
	VisionPrescription_LensSpecification** _lensSpecification;
};
struct VisionPrescription_LensSpecification {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _product;
	NullableString8 _eye;
	NullableString8 _sphere;
	NullableString8 _cylinder;
	NullableInt32 _axis;
	size_t _prism_count;
	VisionPrescription_LensSpecification_Prism** _prism;
	NullableString8 _add;
	NullableString8 _power;
	NullableString8 _backCurve;
	NullableString8 _diameter;
	Quantity* _duration;
	NullableString8 _color;
	NullableString8 _brand;
	size_t _note_count;
	Annotation** _note;
};
struct VisionPrescription_LensSpecification_Prism {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _amount;
	NullableString8 _base;
};
struct MetadataResource {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _status;
	NullableBoolean _experimental;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
};
struct Element {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
};
struct BackboneElement {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
};
struct Address {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _use;
	NullableString8 _type;
	NullableString8 _text;
	size_t _line_count;
	NullableString8* _line;
	NullableString8 _city;
	NullableString8 _district;
	NullableString8 _state;
	NullableString8 _postalCode;
	NullableString8 _country;
	Period* _period;
};
struct Age {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _value;
	NullableString8 _comparator;
	NullableString8 _unit;
	NullableString8 _system;
	NullableString8 _code;
};
struct Annotation {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	union {
		Reference* _authorReference;
		NullableString8 _authorString;
	} _author;

	enum class _authorType {
		Reference,
		String
	};
_authorType _author_type;

	ISO8601_Time _time;
	NullableString8 _text;
};
struct Attachment {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _contentType;
	NullableString8 _language;
	NullableString8 _data;
	NullableString8 _url;
	NullableInt32 _size;
	NullableString8 _hash;
	NullableString8 _title;
	ISO8601_Time _creation;
};
struct CodeableConcept {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _coding_count;
	Coding** _coding;
	NullableString8 _text;
};
struct Coding {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _system;
	NullableString8 _version;
	NullableString8 _code;
	NullableString8 _display;
	NullableBoolean _userSelected;
};
struct ContactDetail {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _name;
	size_t _telecom_count;
	ContactPoint** _telecom;
};
struct ContactPoint {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _system;
	NullableString8 _value;
	NullableString8 _use;
	NullableInt32 _rank;
	Period* _period;
};
struct Contributor {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _type;
	NullableString8 _name;
	size_t _contact_count;
	ContactDetail** _contact;
};
struct Count {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _value;
	NullableString8 _comparator;
	NullableString8 _unit;
	NullableString8 _system;
	NullableString8 _code;
};
struct DataRequirement {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _type;
	size_t _profile_count;
	NullableString8* _profile;
	union {
		CodeableConcept* _subjectCodeableConcept;
		Reference* _subjectReference;
	} _subject;

	enum class _subjectType {
		CodeableConcept,
		Reference
	};
_subjectType _subject_type;

	size_t _mustSupport_count;
	NullableString8* _mustSupport;
	size_t _codeFilter_count;
	DataRequirement_CodeFilter** _codeFilter;
	size_t _dateFilter_count;
	DataRequirement_DateFilter** _dateFilter;
	NullableInt32 _limit;
	size_t _sort_count;
	DataRequirement_Sort** _sort;
};
struct DataRequirement_CodeFilter {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _path;
	NullableString8 _searchParam;
	NullableString8 _valueSet;
	size_t _code_count;
	Coding** _code;
};
struct DataRequirement_DateFilter {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _path;
	NullableString8 _searchParam;
	union {
		ISO8601_Time _valueDateTime;
		Period* _valuePeriod;
		Duration* _valueDuration;
	} _value;

	enum class _valueType {
		DateTime,
		Period,
		Duration
	};
_valueType _value_type;

};
struct DataRequirement_Sort {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _path;
	NullableString8 _direction;
};
struct Distance {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _value;
	NullableString8 _comparator;
	NullableString8 _unit;
	NullableString8 _system;
	NullableString8 _code;
};
struct Dosage {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableInt32 _sequence;
	NullableString8 _text;
	size_t _additionalInstruction_count;
	CodeableConcept** _additionalInstruction;
	NullableString8 _patientInstruction;
	Timing* _timing;
	union {
		NullableBoolean _asNeededBoolean;
		CodeableConcept* _asNeededCodeableConcept;
	} _asNeeded;

	enum class _asNeededType {
		Boolean,
		CodeableConcept
	};
_asNeededType _asNeeded_type;

	CodeableConcept* _site;
	CodeableConcept* _route;
	CodeableConcept* _method;
	size_t _doseAndRate_count;
	Dosage_DoseAndRate** _doseAndRate;
	Ratio* _maxDosePerPeriod;
	Quantity* _maxDosePerAdministration;
	Quantity* _maxDosePerLifetime;
};
struct Dosage_DoseAndRate {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	CodeableConcept* _type;
	union {
		Range* _doseRange;
		Quantity* _doseQuantity;
	} _dose;

	enum class _doseType {
		Range,
		Quantity
	};
_doseType _dose_type;

	union {
		Ratio* _rateRatio;
		Range* _rateRange;
		Quantity* _rateQuantity;
	} _rate;

	enum class _rateType {
		Ratio,
		Range,
		Quantity
	};
_rateType _rate_type;

};
struct Duration {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _value;
	NullableString8 _comparator;
	NullableString8 _unit;
	NullableString8 _system;
	NullableString8 _code;
};
struct ElementDefinition {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _path;
	size_t _representation_count;
	NullableString8* _representation;
	NullableString8 _sliceName;
	NullableBoolean _sliceIsConstraining;
	NullableString8 _label;
	size_t _code_count;
	Coding** _code;
	ElementDefinition_Slicing* _slicing;
	NullableString8 _short;
	NullableString8 _definition;
	NullableString8 _comment;
	NullableString8 _requirements;
	size_t _alias_count;
	NullableString8* _alias;
	NullableInt32 _min;
	NullableString8 _max;
	ElementDefinition_Base* _base;
	NullableString8 _contentReference;
	size_t _type_count;
	ElementDefinition_Type** _type;
	union {
		NullableString8 _defaultValueBase64Binary;
		NullableBoolean _defaultValueBoolean;
		NullableString8 _defaultValueCanonical;
		NullableString8 _defaultValueCode;
		ISO8601_Time _defaultValueDate;
		ISO8601_Time _defaultValueDateTime;
		NullableString8 _defaultValueDecimal;
		NullableString8 _defaultValueId;
		ISO8601_Time _defaultValueInstant;
		NullableInt32 _defaultValueInteger;
		NullableString8 _defaultValueMarkdown;
		NullableString8 _defaultValueOid;
		NullableInt32 _defaultValuePositiveInt;
		NullableString8 _defaultValueString;
		ISO8601_Time _defaultValueTime;
		NullableInt32 _defaultValueUnsignedInt;
		NullableString8 _defaultValueUri;
		NullableString8 _defaultValueUrl;
		NullableString8 _defaultValueUuid;
		Address* _defaultValueAddress;
		Age* _defaultValueAge;
		Annotation* _defaultValueAnnotation;
		Attachment* _defaultValueAttachment;
		CodeableConcept* _defaultValueCodeableConcept;
		Coding* _defaultValueCoding;
		ContactPoint* _defaultValueContactPoint;
		Count* _defaultValueCount;
		Distance* _defaultValueDistance;
		Duration* _defaultValueDuration;
		HumanName* _defaultValueHumanName;
		Identifier* _defaultValueIdentifier;
		Money* _defaultValueMoney;
		Period* _defaultValuePeriod;
		Quantity* _defaultValueQuantity;
		Range* _defaultValueRange;
		Ratio* _defaultValueRatio;
		Reference* _defaultValueReference;
		SampledData* _defaultValueSampledData;
		Signature* _defaultValueSignature;
		Timing* _defaultValueTiming;
		ContactDetail* _defaultValueContactDetail;
		Contributor* _defaultValueContributor;
		DataRequirement* _defaultValueDataRequirement;
		Expression* _defaultValueExpression;
		ParameterDefinition* _defaultValueParameterDefinition;
		RelatedArtifact* _defaultValueRelatedArtifact;
		TriggerDefinition* _defaultValueTriggerDefinition;
		UsageContext* _defaultValueUsageContext;
		Dosage* _defaultValueDosage;
		Meta* _defaultValueMeta;
	} _defaultValue;

	enum class _defaultValueType {
		Base64Binary,
		Boolean,
		Canonical,
		Code,
		Date,
		DateTime,
		Decimal,
		Id,
		Instant,
		Integer,
		Markdown,
		Oid,
		PositiveInt,
		String,
		Time,
		UnsignedInt,
		Uri,
		Url,
		Uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	};
_defaultValueType _defaultValue_type;

	NullableString8 _meaningWhenMissing;
	NullableString8 _orderMeaning;
	union {
		NullableString8 _fixedBase64Binary;
		NullableBoolean _fixedBoolean;
		NullableString8 _fixedCanonical;
		NullableString8 _fixedCode;
		ISO8601_Time _fixedDate;
		ISO8601_Time _fixedDateTime;
		NullableString8 _fixedDecimal;
		NullableString8 _fixedId;
		ISO8601_Time _fixedInstant;
		NullableInt32 _fixedInteger;
		NullableString8 _fixedMarkdown;
		NullableString8 _fixedOid;
		NullableInt32 _fixedPositiveInt;
		NullableString8 _fixedString;
		ISO8601_Time _fixedTime;
		NullableInt32 _fixedUnsignedInt;
		NullableString8 _fixedUri;
		NullableString8 _fixedUrl;
		NullableString8 _fixedUuid;
		Address* _fixedAddress;
		Age* _fixedAge;
		Annotation* _fixedAnnotation;
		Attachment* _fixedAttachment;
		CodeableConcept* _fixedCodeableConcept;
		Coding* _fixedCoding;
		ContactPoint* _fixedContactPoint;
		Count* _fixedCount;
		Distance* _fixedDistance;
		Duration* _fixedDuration;
		HumanName* _fixedHumanName;
		Identifier* _fixedIdentifier;
		Money* _fixedMoney;
		Period* _fixedPeriod;
		Quantity* _fixedQuantity;
		Range* _fixedRange;
		Ratio* _fixedRatio;
		Reference* _fixedReference;
		SampledData* _fixedSampledData;
		Signature* _fixedSignature;
		Timing* _fixedTiming;
		ContactDetail* _fixedContactDetail;
		Contributor* _fixedContributor;
		DataRequirement* _fixedDataRequirement;
		Expression* _fixedExpression;
		ParameterDefinition* _fixedParameterDefinition;
		RelatedArtifact* _fixedRelatedArtifact;
		TriggerDefinition* _fixedTriggerDefinition;
		UsageContext* _fixedUsageContext;
		Dosage* _fixedDosage;
		Meta* _fixedMeta;
	} _fixed;

	enum class _fixedType {
		Base64Binary,
		Boolean,
		Canonical,
		Code,
		Date,
		DateTime,
		Decimal,
		Id,
		Instant,
		Integer,
		Markdown,
		Oid,
		PositiveInt,
		String,
		Time,
		UnsignedInt,
		Uri,
		Url,
		Uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	};
_fixedType _fixed_type;

	union {
		NullableString8 _patternBase64Binary;
		NullableBoolean _patternBoolean;
		NullableString8 _patternCanonical;
		NullableString8 _patternCode;
		ISO8601_Time _patternDate;
		ISO8601_Time _patternDateTime;
		NullableString8 _patternDecimal;
		NullableString8 _patternId;
		ISO8601_Time _patternInstant;
		NullableInt32 _patternInteger;
		NullableString8 _patternMarkdown;
		NullableString8 _patternOid;
		NullableInt32 _patternPositiveInt;
		NullableString8 _patternString;
		ISO8601_Time _patternTime;
		NullableInt32 _patternUnsignedInt;
		NullableString8 _patternUri;
		NullableString8 _patternUrl;
		NullableString8 _patternUuid;
		Address* _patternAddress;
		Age* _patternAge;
		Annotation* _patternAnnotation;
		Attachment* _patternAttachment;
		CodeableConcept* _patternCodeableConcept;
		Coding* _patternCoding;
		ContactPoint* _patternContactPoint;
		Count* _patternCount;
		Distance* _patternDistance;
		Duration* _patternDuration;
		HumanName* _patternHumanName;
		Identifier* _patternIdentifier;
		Money* _patternMoney;
		Period* _patternPeriod;
		Quantity* _patternQuantity;
		Range* _patternRange;
		Ratio* _patternRatio;
		Reference* _patternReference;
		SampledData* _patternSampledData;
		Signature* _patternSignature;
		Timing* _patternTiming;
		ContactDetail* _patternContactDetail;
		Contributor* _patternContributor;
		DataRequirement* _patternDataRequirement;
		Expression* _patternExpression;
		ParameterDefinition* _patternParameterDefinition;
		RelatedArtifact* _patternRelatedArtifact;
		TriggerDefinition* _patternTriggerDefinition;
		UsageContext* _patternUsageContext;
		Dosage* _patternDosage;
		Meta* _patternMeta;
	} _pattern;

	enum class _patternType {
		Base64Binary,
		Boolean,
		Canonical,
		Code,
		Date,
		DateTime,
		Decimal,
		Id,
		Instant,
		Integer,
		Markdown,
		Oid,
		PositiveInt,
		String,
		Time,
		UnsignedInt,
		Uri,
		Url,
		Uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	};
_patternType _pattern_type;

	size_t _example_count;
	ElementDefinition_Example** _example;
	union {
		ISO8601_Time _minValueDate;
		ISO8601_Time _minValueDateTime;
		ISO8601_Time _minValueInstant;
		ISO8601_Time _minValueTime;
		NullableString8 _minValueDecimal;
		NullableInt32 _minValueInteger;
		NullableInt32 _minValuePositiveInt;
		NullableInt32 _minValueUnsignedInt;
		Quantity* _minValueQuantity;
	} _minValue;

	enum class _minValueType {
		Date,
		DateTime,
		Instant,
		Time,
		Decimal,
		Integer,
		PositiveInt,
		UnsignedInt,
		Quantity
	};
_minValueType _minValue_type;

	union {
		ISO8601_Time _maxValueDate;
		ISO8601_Time _maxValueDateTime;
		ISO8601_Time _maxValueInstant;
		ISO8601_Time _maxValueTime;
		NullableString8 _maxValueDecimal;
		NullableInt32 _maxValueInteger;
		NullableInt32 _maxValuePositiveInt;
		NullableInt32 _maxValueUnsignedInt;
		Quantity* _maxValueQuantity;
	} _maxValue;

	enum class _maxValueType {
		Date,
		DateTime,
		Instant,
		Time,
		Decimal,
		Integer,
		PositiveInt,
		UnsignedInt,
		Quantity
	};
_maxValueType _maxValue_type;

	NullableInt32 _maxLength;
	size_t _condition_count;
	NullableString8* _condition;
	size_t _constraint_count;
	ElementDefinition_Constraint** _constraint;
	NullableBoolean _mustSupport;
	NullableBoolean _isModifier;
	NullableString8 _isModifierReason;
	NullableBoolean _isSummary;
	ElementDefinition_Binding* _binding;
	size_t _mapping_count;
	ElementDefinition_Mapping** _mapping;
};
struct ElementDefinition_Slicing {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _discriminator_count;
	ElementDefinition_Slicing_Discriminator** _discriminator;
	NullableString8 _description;
	NullableBoolean _ordered;
	NullableString8 _rules;
};
struct ElementDefinition_Slicing_Discriminator {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _type;
	NullableString8 _path;
};
struct ElementDefinition_Base {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _path;
	NullableInt32 _min;
	NullableString8 _max;
};
struct ElementDefinition_Type {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _code;
	size_t _profile_count;
	NullableString8* _profile;
	size_t _targetProfile_count;
	NullableString8* _targetProfile;
	size_t _aggregation_count;
	NullableString8* _aggregation;
	NullableString8 _versioning;
};
struct ElementDefinition_Example {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _label;
	union {
		NullableString8 _valueBase64Binary;
		NullableBoolean _valueBoolean;
		NullableString8 _valueCanonical;
		NullableString8 _valueCode;
		ISO8601_Time _valueDate;
		ISO8601_Time _valueDateTime;
		NullableString8 _valueDecimal;
		NullableString8 _valueId;
		ISO8601_Time _valueInstant;
		NullableInt32 _valueInteger;
		NullableString8 _valueMarkdown;
		NullableString8 _valueOid;
		NullableInt32 _valuePositiveInt;
		NullableString8 _valueString;
		ISO8601_Time _valueTime;
		NullableInt32 _valueUnsignedInt;
		NullableString8 _valueUri;
		NullableString8 _valueUrl;
		NullableString8 _valueUuid;
		Address* _valueAddress;
		Age* _valueAge;
		Annotation* _valueAnnotation;
		Attachment* _valueAttachment;
		CodeableConcept* _valueCodeableConcept;
		Coding* _valueCoding;
		ContactPoint* _valueContactPoint;
		Count* _valueCount;
		Distance* _valueDistance;
		Duration* _valueDuration;
		HumanName* _valueHumanName;
		Identifier* _valueIdentifier;
		Money* _valueMoney;
		Period* _valuePeriod;
		Quantity* _valueQuantity;
		Range* _valueRange;
		Ratio* _valueRatio;
		Reference* _valueReference;
		SampledData* _valueSampledData;
		Signature* _valueSignature;
		Timing* _valueTiming;
		ContactDetail* _valueContactDetail;
		Contributor* _valueContributor;
		DataRequirement* _valueDataRequirement;
		Expression* _valueExpression;
		ParameterDefinition* _valueParameterDefinition;
		RelatedArtifact* _valueRelatedArtifact;
		TriggerDefinition* _valueTriggerDefinition;
		UsageContext* _valueUsageContext;
		Dosage* _valueDosage;
		Meta* _valueMeta;
	} _value;

	enum class _valueType {
		Base64Binary,
		Boolean,
		Canonical,
		Code,
		Date,
		DateTime,
		Decimal,
		Id,
		Instant,
		Integer,
		Markdown,
		Oid,
		PositiveInt,
		String,
		Time,
		UnsignedInt,
		Uri,
		Url,
		Uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	};
_valueType _value_type;

};
struct ElementDefinition_Constraint {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _key;
	NullableString8 _requirements;
	NullableString8 _severity;
	NullableString8 _human;
	NullableString8 _expression;
	NullableString8 _xpath;
	NullableString8 _source;
};
struct ElementDefinition_Binding {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _strength;
	NullableString8 _description;
	NullableString8 _valueSet;
};
struct ElementDefinition_Mapping {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _identity;
	NullableString8 _language;
	NullableString8 _map;
	NullableString8 _comment;
};
struct Expression {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _description;
	NullableString8 _name;
	NullableString8 _language;
	NullableString8 _expression;
	NullableString8 _reference;
};
struct Extension {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _url;
	union {
		NullableString8 _valueBase64Binary;
		NullableBoolean _valueBoolean;
		NullableString8 _valueCanonical;
		NullableString8 _valueCode;
		ISO8601_Time _valueDate;
		ISO8601_Time _valueDateTime;
		NullableString8 _valueDecimal;
		NullableString8 _valueId;
		ISO8601_Time _valueInstant;
		NullableInt32 _valueInteger;
		NullableString8 _valueMarkdown;
		NullableString8 _valueOid;
		NullableInt32 _valuePositiveInt;
		NullableString8 _valueString;
		ISO8601_Time _valueTime;
		NullableInt32 _valueUnsignedInt;
		NullableString8 _valueUri;
		NullableString8 _valueUrl;
		NullableString8 _valueUuid;
		Address* _valueAddress;
		Age* _valueAge;
		Annotation* _valueAnnotation;
		Attachment* _valueAttachment;
		CodeableConcept* _valueCodeableConcept;
		Coding* _valueCoding;
		ContactPoint* _valueContactPoint;
		Count* _valueCount;
		Distance* _valueDistance;
		Duration* _valueDuration;
		HumanName* _valueHumanName;
		Identifier* _valueIdentifier;
		Money* _valueMoney;
		Period* _valuePeriod;
		Quantity* _valueQuantity;
		Range* _valueRange;
		Ratio* _valueRatio;
		Reference* _valueReference;
		SampledData* _valueSampledData;
		Signature* _valueSignature;
		Timing* _valueTiming;
		ContactDetail* _valueContactDetail;
		Contributor* _valueContributor;
		DataRequirement* _valueDataRequirement;
		Expression* _valueExpression;
		ParameterDefinition* _valueParameterDefinition;
		RelatedArtifact* _valueRelatedArtifact;
		TriggerDefinition* _valueTriggerDefinition;
		UsageContext* _valueUsageContext;
		Dosage* _valueDosage;
		Meta* _valueMeta;
	} _value;

	enum class _valueType {
		Base64Binary,
		Boolean,
		Canonical,
		Code,
		Date,
		DateTime,
		Decimal,
		Id,
		Instant,
		Integer,
		Markdown,
		Oid,
		PositiveInt,
		String,
		Time,
		UnsignedInt,
		Uri,
		Url,
		Uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	};
_valueType _value_type;

};
struct HumanName {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _use;
	NullableString8 _text;
	NullableString8 _family;
	size_t _given_count;
	NullableString8* _given;
	size_t _prefix_count;
	NullableString8* _prefix;
	size_t _suffix_count;
	NullableString8* _suffix;
	Period* _period;
};
struct Identifier {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _use;
	CodeableConcept* _type;
	NullableString8 _system;
	NullableString8 _value;
	Period* _period;
	Reference* _assigner;
};
struct MarketingStatus {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	CodeableConcept* _country;
	CodeableConcept* _jurisdiction;
	CodeableConcept* _status;
	Period* _dateRange;
	ISO8601_Time _restoreDate;
};
struct Meta {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _versionId;
	ISO8601_Time _lastUpdated;
	NullableString8 _source;
	size_t _profile_count;
	NullableString8* _profile;
	size_t _security_count;
	Coding** _security;
	size_t _tag_count;
	Coding** _tag;
};
struct Money {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _value;
	NullableString8 _currency;
};
struct Narrative {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _status;
	NullableString8 _div;
};
struct ParameterDefinition {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _name;
	NullableString8 _use;
	NullableInt32 _min;
	NullableString8 _max;
	NullableString8 _documentation;
	NullableString8 _type;
	NullableString8 _profile;
};
struct Period {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	ISO8601_Time _start;
	ISO8601_Time _end;
};
struct Population {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		Range* _ageRange;
		CodeableConcept* _ageCodeableConcept;
	} _age;

	enum class _ageType {
		Range,
		CodeableConcept
	};
_ageType _age_type;

	CodeableConcept* _gender;
	CodeableConcept* _race;
	CodeableConcept* _physiologicalCondition;
};
struct ProdCharacteristic {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Quantity* _height;
	Quantity* _width;
	Quantity* _depth;
	Quantity* _weight;
	Quantity* _nominalVolume;
	Quantity* _externalDiameter;
	NullableString8 _shape;
	size_t _color_count;
	NullableString8* _color;
	size_t _imprint_count;
	NullableString8* _imprint;
	size_t _image_count;
	Attachment** _image;
	CodeableConcept* _scoring;
};
struct ProductShelfLife {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _identifier;
	CodeableConcept* _type;
	Quantity* _period;
	size_t _specialPrecautionsForStorage_count;
	CodeableConcept** _specialPrecautionsForStorage;
};
struct Quantity {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _value;
	NullableString8 _comparator;
	NullableString8 _unit;
	NullableString8 _system;
	NullableString8 _code;
};
struct Range {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	Quantity* _low;
	Quantity* _high;
};
struct Ratio {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	Quantity* _numerator;
	Quantity* _denominator;
};
struct Reference {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _reference;
	NullableString8 _type;
	Identifier* _identifier;
	NullableString8 _display;
};
struct RelatedArtifact {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _type;
	NullableString8 _label;
	NullableString8 _display;
	NullableString8 _citation;
	NullableString8 _url;
	Attachment* _document;
	NullableString8 _resource;
};
struct SampledData {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	Quantity* _origin;
	NullableString8 _period;
	NullableString8 _factor;
	NullableString8 _lowerLimit;
	NullableString8 _upperLimit;
	NullableInt32 _dimensions;
	NullableString8 _data;
};
struct Signature {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _type_count;
	Coding** _type;
	ISO8601_Time _when;
	Reference* _who;
	Reference* _onBehalfOf;
	NullableString8 _targetFormat;
	NullableString8 _sigFormat;
	NullableString8 _data;
};
struct SubstanceAmount {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	union {
		Quantity* _amountQuantity;
		Range* _amountRange;
		NullableString8 _amountString;
	} _amount;

	enum class _amountType {
		Quantity,
		Range,
		String
	};
_amountType _amount_type;

	CodeableConcept* _amountType;
	NullableString8 _amountText;
	SubstanceAmount_ReferenceRange* _referenceRange;
};
struct SubstanceAmount_ReferenceRange {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	Quantity* _lowLimit;
	Quantity* _highLimit;
};
struct Timing {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _event_count;
	ISO8601_Time* _event;
	Timing_Repeat* _repeat;
	CodeableConcept* _code;
};
struct Timing_Repeat {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	union {
		Duration* _boundsDuration;
		Range* _boundsRange;
		Period* _boundsPeriod;
	} _bounds;

	enum class _boundsType {
		Duration,
		Range,
		Period
	};
_boundsType _bounds_type;

	NullableInt32 _count;
	NullableInt32 _countMax;
	NullableString8 _duration;
	NullableString8 _durationMax;
	NullableString8 _durationUnit;
	NullableInt32 _frequency;
	NullableInt32 _frequencyMax;
	NullableString8 _period;
	NullableString8 _periodMax;
	NullableString8 _periodUnit;
	size_t _dayOfWeek_count;
	NullableString8* _dayOfWeek;
	size_t _timeOfDay_count;
	ISO8601_Time* _timeOfDay;
	size_t _when_count;
	NullableString8* _when;
	NullableInt32 _offset;
};
struct TriggerDefinition {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _type;
	NullableString8 _name;
	union {
		Timing* _timingTiming;
		Reference* _timingReference;
		ISO8601_Time _timingDate;
		ISO8601_Time _timingDateTime;
	} _timing;

	enum class _timingType {
		Timing,
		Reference,
		Date,
		DateTime
	};
_timingType _timing_type;

	size_t _data_count;
	DataRequirement** _data;
	Expression* _condition;
};
struct UsageContext {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	Coding* _code;
	union {
		CodeableConcept* _valueCodeableConcept;
		Quantity* _valueQuantity;
		Range* _valueRange;
		Reference* _valueReference;
	} _value;

	enum class _valueType {
		CodeableConcept,
		Quantity,
		Range,
		Reference
	};
_valueType _value_type;

};
struct MoneyQuantity {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _value;
	NullableString8 _comparator;
	NullableString8 _unit;
	NullableString8 _system;
	NullableString8 _code;
};
struct SimpleQuantity {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _value;
	NullableString8 _comparator;
	NullableString8 _unit;
	NullableString8 _system;
	NullableString8 _code;
};
struct Shareablemeasure {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _subtitle;
	NullableString8 _status;
	NullableBoolean _experimental;
	union {
		CodeableConcept* _subjectCodeableConcept;
		Reference* _subjectReference;
	} _subject;

	enum class _subjectType {
		CodeableConcept,
		Reference
	};
_subjectType _subject_type;

	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _usage;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _topic_count;
	CodeableConcept** _topic;
	size_t _author_count;
	ContactDetail** _author;
	size_t _editor_count;
	ContactDetail** _editor;
	size_t _reviewer_count;
	ContactDetail** _reviewer;
	size_t _endorser_count;
	ContactDetail** _endorser;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	size_t _library_count;
	NullableString8* _library;
	NullableString8 _disclaimer;
	CodeableConcept* _scoring;
	CodeableConcept* _compositeScoring;
	size_t _type_count;
	CodeableConcept** _type;
	NullableString8 _riskAdjustment;
	NullableString8 _rateAggregation;
	NullableString8 _rationale;
	NullableString8 _clinicalRecommendationStatement;
	CodeableConcept* _improvementNotation;
	size_t _definition_count;
	NullableString8* _definition;
	NullableString8 _guidance;
	size_t _group_count;
	Measure_Group** _group;
	size_t _supplementalData_count;
	Measure_SupplementalData** _supplementalData;
};
struct Servicerequest_genetics {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _instantiatesCanonical_count;
	NullableString8* _instantiatesCanonical;
	size_t _instantiatesUri_count;
	NullableString8* _instantiatesUri;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _replaces_count;
	Reference** _replaces;
	Identifier* _requisition;
	NullableString8 _status;
	NullableString8 _intent;
	size_t _category_count;
	CodeableConcept** _category;
	NullableString8 _priority;
	NullableBoolean _doNotPerform;
	CodeableConcept* _code;
	size_t _orderDetail_count;
	CodeableConcept** _orderDetail;
	union {
		Quantity* _quantityQuantity;
		Ratio* _quantityRatio;
		Range* _quantityRange;
	} _quantity;

	enum class _quantityType {
		Quantity,
		Ratio,
		Range
	};
_quantityType _quantity_type;

	Reference* _subject;
	Reference* _encounter;
	union {
		ISO8601_Time _occurrenceDateTime;
		Period* _occurrencePeriod;
		Timing* _occurrenceTiming;
	} _occurrence;

	enum class _occurrenceType {
		DateTime,
		Period,
		Timing
	};
_occurrenceType _occurrence_type;

	union {
		NullableBoolean _asNeededBoolean;
		CodeableConcept* _asNeededCodeableConcept;
	} _asNeeded;

	enum class _asNeededType {
		Boolean,
		CodeableConcept
	};
_asNeededType _asNeeded_type;

	ISO8601_Time _authoredOn;
	Reference* _requester;
	CodeableConcept* _performerType;
	size_t _performer_count;
	Reference** _performer;
	size_t _locationCode_count;
	CodeableConcept** _locationCode;
	size_t _locationReference_count;
	Reference** _locationReference;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	size_t _insurance_count;
	Reference** _insurance;
	size_t _supportingInfo_count;
	Reference** _supportingInfo;
	size_t _specimen_count;
	Reference** _specimen;
	size_t _bodySite_count;
	CodeableConcept** _bodySite;
	size_t _note_count;
	Annotation** _note;
	NullableString8 _patientInstruction;
	size_t _relevantHistory_count;
	Reference** _relevantHistory;
};
struct Groupdefinition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableBoolean _active;
	NullableString8 _type;
	NullableBoolean _actual;
	CodeableConcept* _code;
	NullableString8 _name;
	NullableInt32 _quantity;
	Reference* _managingEntity;
	size_t _characteristic_count;
	Group_Characteristic** _characteristic;
	Group_Member* _member;
};
struct Actualgroup {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableBoolean _active;
	NullableString8 _type;
	NullableBoolean _actual;
	CodeableConcept* _code;
	NullableString8 _name;
	NullableInt32 _quantity;
	Reference* _managingEntity;
	Group_Characteristic* _characteristic;
	size_t _member_count;
	Group_Member** _member;
};
struct Familymemberhistory_genetic {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _instantiatesCanonical_count;
	NullableString8* _instantiatesCanonical;
	size_t _instantiatesUri_count;
	NullableString8* _instantiatesUri;
	NullableString8 _status;
	CodeableConcept* _dataAbsentReason;
	Reference* _patient;
	ISO8601_Time _date;
	NullableString8 _name;
	CodeableConcept* _relationship;
	CodeableConcept* _sex;
	union {
		Period* _bornPeriod;
		ISO8601_Time _bornDate;
		NullableString8 _bornString;
	} _born;

	enum class _bornType {
		Period,
		Date,
		String
	};
_bornType _born_type;

	union {
		Age* _ageAge;
		Range* _ageRange;
		NullableString8 _ageString;
	} _age;

	enum class _ageType {
		Age,
		Range,
		String
	};
_ageType _age_type;

	NullableBoolean _estimatedAge;
	union {
		NullableBoolean _deceasedBoolean;
		Age* _deceasedAge;
		Range* _deceasedRange;
		ISO8601_Time _deceasedDate;
		NullableString8 _deceasedString;
	} _deceased;

	enum class _deceasedType {
		Boolean,
		Age,
		Range,
		Date,
		String
	};
_deceasedType _deceased_type;

	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	size_t _note_count;
	Annotation** _note;
	size_t _condition_count;
	FamilyMemberHistory_Condition** _condition;
	CodeableConcept* _code;
	CodeableConcept* _outcome;
	NullableBoolean _contributedToDeath;
	union {
		Age* _onsetAge;
		Range* _onsetRange;
		Period* _onsetPeriod;
		NullableString8 _onsetString;
	} _onset;

	enum class _onsetType {
		Age,
		Range,
		Period,
		String
	};
_onsetType _onset_type;

};
struct Shareableactivitydefinition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _subtitle;
	NullableString8 _status;
	NullableBoolean _experimental;
	union {
		CodeableConcept* _subjectCodeableConcept;
		Reference* _subjectReference;
	} _subject;

	enum class _subjectType {
		CodeableConcept,
		Reference
	};
_subjectType _subject_type;

	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _usage;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _topic_count;
	CodeableConcept** _topic;
	size_t _author_count;
	ContactDetail** _author;
	size_t _editor_count;
	ContactDetail** _editor;
	size_t _reviewer_count;
	ContactDetail** _reviewer;
	size_t _endorser_count;
	ContactDetail** _endorser;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	size_t _library_count;
	NullableString8* _library;
	NullableString8 _kind;
	NullableString8 _profile;
	CodeableConcept* _code;
	NullableString8 _intent;
	NullableString8 _priority;
	NullableBoolean _doNotPerform;
	union {
		Timing* _timingTiming;
		ISO8601_Time _timingDateTime;
		Age* _timingAge;
		Period* _timingPeriod;
		Range* _timingRange;
		Duration* _timingDuration;
	} _timing;

	enum class _timingType {
		Timing,
		DateTime,
		Age,
		Period,
		Range,
		Duration
	};
_timingType _timing_type;

	Reference* _location;
	size_t _participant_count;
	ActivityDefinition_Participant** _participant;
	union {
		Reference* _productReference;
		CodeableConcept* _productCodeableConcept;
	} _product;

	enum class _productType {
		Reference,
		CodeableConcept
	};
_productType _product_type;

	Quantity* _quantity;
	size_t _dosage_count;
	Dosage** _dosage;
	size_t _bodySite_count;
	CodeableConcept** _bodySite;
	size_t _specimenRequirement_count;
	Reference** _specimenRequirement;
	size_t _observationRequirement_count;
	Reference** _observationRequirement;
	size_t _observationResultRequirement_count;
	Reference** _observationResultRequirement;
	NullableString8 _transform;
	size_t _dynamicValue_count;
	ActivityDefinition_DynamicValue** _dynamicValue;
};
struct Cdshooksrequestgroup {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _identifier;
	size_t _instantiatesCanonical_count;
	NullableString8* _instantiatesCanonical;
	NullableString8 _instantiatesUri;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _replaces_count;
	Reference** _replaces;
	Identifier* _groupIdentifier;
	NullableString8 _status;
	NullableString8 _intent;
	NullableString8 _priority;
	CodeableConcept* _code;
	Reference* _subject;
	Reference* _encounter;
	ISO8601_Time _authoredOn;
	Reference* _author;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	size_t _note_count;
	Annotation** _note;
	size_t _action_count;
	RequestGroup_Action** _action;
};
struct Provenance_relevant_history {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _target_count;
	Reference** _target;
	ISO8601_Time _occurred;
	ISO8601_Time _recorded;
	size_t _policy_count;
	NullableString8* _policy;
	Reference* _location;
	size_t _reason_count;
	CodeableConcept** _reason;
	CodeableConcept* _activity;
	size_t _agent_count;
	Provenance_Agent** _agent;
	size_t _entity_count;
	Provenance_Entity** _entity;
	size_t _signature_count;
	Signature** _signature;
};
struct Cqf_questionnaire {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	size_t _derivedFrom_count;
	NullableString8* _derivedFrom;
	NullableString8 _status;
	NullableBoolean _experimental;
	size_t _subjectType_count;
	NullableString8* _subjectType;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _code_count;
	Coding** _code;
	size_t _item_count;
	Questionnaire_Item** _item;
};
struct Shareablevalueset {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _status;
	NullableBoolean _experimental;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableBoolean _immutable;
	NullableString8 _purpose;
	NullableString8 _copyright;
	ValueSet_Compose* _compose;
	ValueSet_Expansion* _expansion;
};
struct Picoelement {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _shortTitle;
	NullableString8 _subtitle;
	NullableString8 _status;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _note_count;
	Annotation** _note;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _topic_count;
	CodeableConcept** _topic;
	size_t _author_count;
	ContactDetail** _author;
	size_t _editor_count;
	ContactDetail** _editor;
	size_t _reviewer_count;
	ContactDetail** _reviewer;
	size_t _endorser_count;
	ContactDetail** _endorser;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	NullableString8 _type;
	size_t _characteristic_count;
	EvidenceVariable_Characteristic** _characteristic;
};
struct Shareablecodesystem {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _status;
	NullableBoolean _experimental;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _copyright;
	NullableBoolean _caseSensitive;
	NullableString8 _valueSet;
	NullableString8 _hierarchyMeaning;
	NullableBoolean _compositional;
	NullableBoolean _versionNeeded;
	NullableString8 _content;
	NullableString8 _supplements;
	NullableInt32 _count;
	size_t _filter_count;
	CodeSystem_Filter** _filter;
	size_t _property_count;
	CodeSystem_Property** _property;
	size_t _concept_count;
	CodeSystem_Concept** _concept;
};
struct Cdshooksguidanceresponse {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _requestIdentifier;
	Identifier* _identifier;
	NullableString8 _module;
	NullableString8 _status;
	Reference* _subject;
	Reference* _encounter;
	ISO8601_Time _occurrenceDateTime;
	Reference* _performer;
	size_t _reasonCode_count;
	CodeableConcept** _reasonCode;
	size_t _reasonReference_count;
	Reference** _reasonReference;
	size_t _note_count;
	Annotation** _note;
	size_t _evaluationMessage_count;
	Reference** _evaluationMessage;
	Reference* _outputParameters;
	Reference* _result;
	size_t _dataRequirement_count;
	DataRequirement** _dataRequirement;
};
struct Devicemetricobservation {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	CodeableConcept* _code;
	Reference* _subject;
	size_t _focus_count;
	Reference** _focus;
	Reference* _encounter;
	ISO8601_Time _effective;
	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	union {
		Quantity* _valueQuantity;
		CodeableConcept* _valueCodeableConcept;
		NullableString8 _valueString;
		Range* _valueRange;
		Ratio* _valueRatio;
		SampledData* _valueSampledData;
		ISO8601_Time _valueTime;
		ISO8601_Time _valueDateTime;
		Period* _valuePeriod;
	} _value;

	enum class _valueType {
		Quantity,
		CodeableConcept,
		String,
		Range,
		Ratio,
		SampledData,
		Time,
		DateTime,
		Period
	};
_valueType _value_type;

	CodeableConcept* _dataAbsentReason;
	CodeableConcept* _interpretation;
	size_t _note_count;
	Annotation** _note;
	CodeableConcept* _bodySite;
	CodeableConcept* _method;
	Reference* _specimen;
	Reference* _device;
	Observation_ReferenceRange* _referenceRange;
	size_t _hasMember_count;
	Reference** _hasMember;
	size_t _derivedFrom_count;
	Reference** _derivedFrom;
	size_t _component_count;
	Observation_Component** _component;
};
struct Observation_genetics {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	CodeableConcept* _code;
	Reference* _subject;
	size_t _focus_count;
	Reference** _focus;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
		Timing* _effectiveTiming;
		ISO8601_Time _effectiveInstant;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period,
		Timing,
		Instant
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	union {
		Quantity* _valueQuantity;
		CodeableConcept* _valueCodeableConcept;
		NullableString8 _valueString;
		NullableBoolean _valueBoolean;
		NullableInt32 _valueInteger;
		Range* _valueRange;
		Ratio* _valueRatio;
		SampledData* _valueSampledData;
		ISO8601_Time _valueTime;
		ISO8601_Time _valueDateTime;
		Period* _valuePeriod;
	} _value;

	enum class _valueType {
		Quantity,
		CodeableConcept,
		String,
		Boolean,
		Integer,
		Range,
		Ratio,
		SampledData,
		Time,
		DateTime,
		Period
	};
_valueType _value_type;

	CodeableConcept* _dataAbsentReason;
	size_t _interpretation_count;
	CodeableConcept** _interpretation;
	size_t _note_count;
	Annotation** _note;
	CodeableConcept* _bodySite;
	CodeableConcept* _method;
	Reference* _specimen;
	Reference* _device;
	size_t _referenceRange_count;
	Observation_ReferenceRange** _referenceRange;
	size_t _hasMember_count;
	Reference** _hasMember;
	size_t _derivedFrom_count;
	Reference** _derivedFrom;
	size_t _component_count;
	Observation_Component** _component;
};
struct Vitalsigns {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	size_t _coding_count;
	Coding** _coding;
	NullableString8 _system;
	NullableString8 _version;
	NullableString8 _code;
	NullableString8 _display;
	NullableBoolean _userSelected;
	Reference* _subject;
	size_t _focus_count;
	Reference** _focus;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	union {
		Quantity* _valueQuantity;
		CodeableConcept* _valueCodeableConcept;
		NullableString8 _valueString;
		NullableBoolean _valueBoolean;
		NullableInt32 _valueInteger;
		Range* _valueRange;
		Ratio* _valueRatio;
		SampledData* _valueSampledData;
		ISO8601_Time _valueTime;
		ISO8601_Time _valueDateTime;
		Period* _valuePeriod;
	} _value;

	enum class _valueType {
		Quantity,
		CodeableConcept,
		String,
		Boolean,
		Integer,
		Range,
		Ratio,
		SampledData,
		Time,
		DateTime,
		Period
	};
_valueType _value_type;

	CodeableConcept* _dataAbsentReason;
	size_t _interpretation_count;
	CodeableConcept** _interpretation;
	size_t _note_count;
	Annotation** _note;
	CodeableConcept* _bodySite;
	CodeableConcept* _method;
	Reference* _specimen;
	Reference* _device;
	size_t _referenceRange_count;
	Observation_ReferenceRange** _referenceRange;
	size_t _hasMember_count;
	Reference** _hasMember;
	size_t _derivedFrom_count;
	Reference** _derivedFrom;
	size_t _component_count;
	Observation_Component** _component;
};
struct Bodyweight {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	size_t _coding_count;
	Coding** _coding;
	NullableString8 _system;
	NullableString8 _version;
	NullableString8 _code;
	NullableString8 _display;
	NullableBoolean _userSelected;
	Reference* _subject;
	size_t _focus_count;
	Reference** _focus;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	Quantity* _value;
	NullableString8 _comparator;
	NullableString8 _unit;
	CodeableConcept* _dataAbsentReason;
	size_t _interpretation_count;
	CodeableConcept** _interpretation;
	size_t _note_count;
	Annotation** _note;
	CodeableConcept* _bodySite;
	CodeableConcept* _method;
	Reference* _specimen;
	Reference* _device;
	size_t _referenceRange_count;
	Observation_ReferenceRange** _referenceRange;
	size_t _hasMember_count;
	Reference** _hasMember;
	size_t _derivedFrom_count;
	Reference** _derivedFrom;
	size_t _component_count;
	Observation_Component** _component;
};
struct Vitalspanel {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	size_t _coding_count;
	Coding** _coding;
	NullableString8 _system;
	NullableString8 _version;
	NullableString8 _code;
	NullableString8 _display;
	NullableBoolean _userSelected;
	Reference* _subject;
	size_t _focus_count;
	Reference** _focus;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	union {
		Quantity* _valueQuantity;
		CodeableConcept* _valueCodeableConcept;
		NullableString8 _valueString;
		NullableBoolean _valueBoolean;
		NullableInt32 _valueInteger;
		Range* _valueRange;
		Ratio* _valueRatio;
		SampledData* _valueSampledData;
		ISO8601_Time _valueTime;
		ISO8601_Time _valueDateTime;
		Period* _valuePeriod;
	} _value;

	enum class _valueType {
		Quantity,
		CodeableConcept,
		String,
		Boolean,
		Integer,
		Range,
		Ratio,
		SampledData,
		Time,
		DateTime,
		Period
	};
_valueType _value_type;

	CodeableConcept* _dataAbsentReason;
	size_t _interpretation_count;
	CodeableConcept** _interpretation;
	size_t _note_count;
	Annotation** _note;
	CodeableConcept* _bodySite;
	CodeableConcept* _method;
	Reference* _specimen;
	Reference* _device;
	size_t _referenceRange_count;
	Observation_ReferenceRange** _referenceRange;
	size_t _hasMember_count;
	Reference** _hasMember;
	size_t _derivedFrom_count;
	Reference** _derivedFrom;
	size_t _component_count;
	Observation_Component** _component;
};
struct Bodyheight {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	size_t _coding_count;
	Coding** _coding;
	NullableString8 _system;
	NullableString8 _version;
	NullableString8 _code;
	NullableString8 _display;
	NullableBoolean _userSelected;
	Reference* _subject;
	size_t _focus_count;
	Reference** _focus;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	Quantity* _value;
	NullableString8 _comparator;
	NullableString8 _unit;
	CodeableConcept* _dataAbsentReason;
	size_t _interpretation_count;
	CodeableConcept** _interpretation;
	size_t _note_count;
	Annotation** _note;
	CodeableConcept* _bodySite;
	CodeableConcept* _method;
	Reference* _specimen;
	Reference* _device;
	size_t _referenceRange_count;
	Observation_ReferenceRange** _referenceRange;
	size_t _hasMember_count;
	Reference** _hasMember;
	size_t _derivedFrom_count;
	Reference** _derivedFrom;
	size_t _component_count;
	Observation_Component** _component;
};
struct Resprate {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	size_t _coding_count;
	Coding** _coding;
	NullableString8 _system;
	NullableString8 _version;
	NullableString8 _code;
	NullableString8 _display;
	NullableBoolean _userSelected;
	Reference* _subject;
	size_t _focus_count;
	Reference** _focus;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	Quantity* _value;
	NullableString8 _comparator;
	NullableString8 _unit;
	CodeableConcept* _dataAbsentReason;
	size_t _interpretation_count;
	CodeableConcept** _interpretation;
	size_t _note_count;
	Annotation** _note;
	CodeableConcept* _bodySite;
	CodeableConcept* _method;
	Reference* _specimen;
	Reference* _device;
	size_t _referenceRange_count;
	Observation_ReferenceRange** _referenceRange;
	size_t _hasMember_count;
	Reference** _hasMember;
	size_t _derivedFrom_count;
	Reference** _derivedFrom;
	size_t _component_count;
	Observation_Component** _component;
};
struct Heartrate {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	size_t _coding_count;
	Coding** _coding;
	NullableString8 _system;
	NullableString8 _version;
	NullableString8 _code;
	NullableString8 _display;
	NullableBoolean _userSelected;
	Reference* _subject;
	size_t _focus_count;
	Reference** _focus;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	Quantity* _value;
	NullableString8 _comparator;
	NullableString8 _unit;
	CodeableConcept* _dataAbsentReason;
	size_t _interpretation_count;
	CodeableConcept** _interpretation;
	size_t _note_count;
	Annotation** _note;
	CodeableConcept* _bodySite;
	CodeableConcept* _method;
	Reference* _specimen;
	Reference* _device;
	size_t _referenceRange_count;
	Observation_ReferenceRange** _referenceRange;
	size_t _hasMember_count;
	Reference** _hasMember;
	size_t _derivedFrom_count;
	Reference** _derivedFrom;
	size_t _component_count;
	Observation_Component** _component;
};
struct Bodytemp {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	size_t _coding_count;
	Coding** _coding;
	NullableString8 _system;
	NullableString8 _version;
	NullableString8 _code;
	NullableString8 _display;
	NullableBoolean _userSelected;
	Reference* _subject;
	size_t _focus_count;
	Reference** _focus;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	Quantity* _value;
	NullableString8 _comparator;
	NullableString8 _unit;
	CodeableConcept* _dataAbsentReason;
	size_t _interpretation_count;
	CodeableConcept** _interpretation;
	size_t _note_count;
	Annotation** _note;
	CodeableConcept* _bodySite;
	CodeableConcept* _method;
	Reference* _specimen;
	Reference* _device;
	size_t _referenceRange_count;
	Observation_ReferenceRange** _referenceRange;
	size_t _hasMember_count;
	Reference** _hasMember;
	size_t _derivedFrom_count;
	Reference** _derivedFrom;
	size_t _component_count;
	Observation_Component** _component;
};
struct Headcircum {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	size_t _coding_count;
	Coding** _coding;
	NullableString8 _system;
	NullableString8 _version;
	NullableString8 _code;
	NullableString8 _display;
	NullableBoolean _userSelected;
	Reference* _subject;
	size_t _focus_count;
	Reference** _focus;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	Quantity* _value;
	NullableString8 _comparator;
	NullableString8 _unit;
	CodeableConcept* _dataAbsentReason;
	size_t _interpretation_count;
	CodeableConcept** _interpretation;
	size_t _note_count;
	Annotation** _note;
	CodeableConcept* _bodySite;
	CodeableConcept* _method;
	Reference* _specimen;
	Reference* _device;
	size_t _referenceRange_count;
	Observation_ReferenceRange** _referenceRange;
	size_t _hasMember_count;
	Reference** _hasMember;
	size_t _derivedFrom_count;
	Reference** _derivedFrom;
	size_t _component_count;
	Observation_Component** _component;
};
struct Oxygensat {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	size_t _coding_count;
	Coding** _coding;
	NullableString8 _system;
	NullableString8 _version;
	NullableString8 _code;
	NullableString8 _display;
	NullableBoolean _userSelected;
	Reference* _subject;
	size_t _focus_count;
	Reference** _focus;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	Quantity* _value;
	NullableString8 _comparator;
	NullableString8 _unit;
	CodeableConcept* _dataAbsentReason;
	size_t _interpretation_count;
	CodeableConcept** _interpretation;
	size_t _note_count;
	Annotation** _note;
	CodeableConcept* _bodySite;
	CodeableConcept* _method;
	Reference* _specimen;
	Reference* _device;
	size_t _referenceRange_count;
	Observation_ReferenceRange** _referenceRange;
	size_t _hasMember_count;
	Reference** _hasMember;
	size_t _derivedFrom_count;
	Reference** _derivedFrom;
	size_t _component_count;
	Observation_Component** _component;
};
struct Bmi {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	size_t _coding_count;
	Coding** _coding;
	NullableString8 _system;
	NullableString8 _version;
	NullableString8 _code;
	NullableString8 _display;
	NullableBoolean _userSelected;
	Reference* _subject;
	size_t _focus_count;
	Reference** _focus;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	Quantity* _value;
	NullableString8 _comparator;
	NullableString8 _unit;
	CodeableConcept* _dataAbsentReason;
	size_t _interpretation_count;
	CodeableConcept** _interpretation;
	size_t _note_count;
	Annotation** _note;
	CodeableConcept* _bodySite;
	CodeableConcept* _method;
	Reference* _specimen;
	Reference* _device;
	size_t _referenceRange_count;
	Observation_ReferenceRange** _referenceRange;
	size_t _hasMember_count;
	Reference** _hasMember;
	size_t _derivedFrom_count;
	Reference** _derivedFrom;
	size_t _component_count;
	Observation_Component** _component;
};
struct Bp {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	size_t _coding_count;
	Coding** _coding;
	NullableString8 _system;
	NullableString8 _version;
	NullableString8 _code;
	NullableString8 _display;
	NullableBoolean _userSelected;
	Reference* _subject;
	size_t _focus_count;
	Reference** _focus;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	Quantity* _value;
	CodeableConcept* _dataAbsentReason;
	size_t _interpretation_count;
	CodeableConcept** _interpretation;
	size_t _note_count;
	Annotation** _note;
	CodeableConcept* _bodySite;
	CodeableConcept* _method;
	Reference* _specimen;
	Reference* _device;
	size_t _referenceRange_count;
	Observation_ReferenceRange** _referenceRange;
	size_t _hasMember_count;
	Reference** _hasMember;
	size_t _derivedFrom_count;
	Reference** _derivedFrom;
	Observation_Component* _component;
	NullableString8 _comparator;
	NullableString8 _unit;
};
struct Shareablelibrary {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _subtitle;
	NullableString8 _status;
	NullableBoolean _experimental;
	CodeableConcept* _type;
	union {
		CodeableConcept* _subjectCodeableConcept;
		Reference* _subjectReference;
	} _subject;

	enum class _subjectType {
		CodeableConcept,
		Reference
	};
_subjectType _subject_type;

	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _usage;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _topic_count;
	CodeableConcept** _topic;
	size_t _author_count;
	ContactDetail** _author;
	size_t _editor_count;
	ContactDetail** _editor;
	size_t _reviewer_count;
	ContactDetail** _reviewer;
	size_t _endorser_count;
	ContactDetail** _endorser;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	size_t _parameter_count;
	ParameterDefinition** _parameter;
	size_t _dataRequirement_count;
	DataRequirement** _dataRequirement;
	size_t _content_count;
	Attachment** _content;
};
struct Cqllibrary {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _subtitle;
	NullableString8 _status;
	NullableBoolean _experimental;
	CodeableConcept* _type;
	union {
		CodeableConcept* _subjectCodeableConcept;
		Reference* _subjectReference;
	} _subject;

	enum class _subjectType {
		CodeableConcept,
		Reference
	};
_subjectType _subject_type;

	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _usage;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _topic_count;
	CodeableConcept** _topic;
	size_t _author_count;
	ContactDetail** _author;
	size_t _editor_count;
	ContactDetail** _editor;
	size_t _reviewer_count;
	ContactDetail** _reviewer;
	size_t _endorser_count;
	ContactDetail** _endorser;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	size_t _parameter_count;
	ParameterDefinition** _parameter;
	size_t _dataRequirement_count;
	DataRequirement** _dataRequirement;
	size_t _content_count;
	Attachment** _content;
};
struct Lipidprofile {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	CodeableConcept* _code;
	Reference* _subject;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	size_t _resultsInterpreter_count;
	Reference** _resultsInterpreter;
	size_t _specimen_count;
	Reference** _specimen;
	Reference* _result;
	size_t _imagingStudy_count;
	Reference** _imagingStudy;
	size_t _media_count;
	DiagnosticReport_Media** _media;
	NullableString8 _conclusion;
	CodeableConcept* _conclusionCode;
	size_t _presentedForm_count;
	Attachment** _presentedForm;
};
struct Cholesterol {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	CodeableConcept* _code;
	Reference* _subject;
	size_t _focus_count;
	Reference** _focus;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
		Timing* _effectiveTiming;
		ISO8601_Time _effectiveInstant;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period,
		Timing,
		Instant
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	Quantity* _value;
	NullableString8 _comparator;
	NullableString8 _unit;
	NullableString8 _system;
	CodeableConcept* _dataAbsentReason;
	CodeableConcept* _interpretation;
	size_t _note_count;
	Annotation** _note;
	CodeableConcept* _bodySite;
	CodeableConcept* _method;
	Reference* _specimen;
	Reference* _device;
	Observation_ReferenceRange* _referenceRange;
	Reference* _hasMember;
	Reference* _derivedFrom;
	size_t _component_count;
	Observation_Component** _component;
};
struct Triglyceride {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	CodeableConcept* _code;
	Reference* _subject;
	size_t _focus_count;
	Reference** _focus;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
		Timing* _effectiveTiming;
		ISO8601_Time _effectiveInstant;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period,
		Timing,
		Instant
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	Quantity* _value;
	CodeableConcept* _dataAbsentReason;
	CodeableConcept* _interpretation;
	size_t _note_count;
	Annotation** _note;
	CodeableConcept* _bodySite;
	CodeableConcept* _method;
	Reference* _specimen;
	Reference* _device;
	Observation_ReferenceRange* _referenceRange;
	Reference* _hasMember;
	Reference* _derivedFrom;
	size_t _component_count;
	Observation_Component** _component;
};
struct Hdlcholesterol {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	CodeableConcept* _code;
	Reference* _subject;
	size_t _focus_count;
	Reference** _focus;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
		Timing* _effectiveTiming;
		ISO8601_Time _effectiveInstant;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period,
		Timing,
		Instant
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	Quantity* _value;
	CodeableConcept* _dataAbsentReason;
	CodeableConcept* _interpretation;
	size_t _note_count;
	Annotation** _note;
	CodeableConcept* _bodySite;
	CodeableConcept* _method;
	Reference* _specimen;
	Reference* _device;
	Observation_ReferenceRange* _referenceRange;
	Reference* _hasMember;
	Reference* _derivedFrom;
	size_t _component_count;
	Observation_Component** _component;
};
struct Ldlcholesterol {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	size_t _partOf_count;
	Reference** _partOf;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	CodeableConcept* _code;
	Reference* _subject;
	size_t _focus_count;
	Reference** _focus;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
		Timing* _effectiveTiming;
		ISO8601_Time _effectiveInstant;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period,
		Timing,
		Instant
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	Quantity* _value;
	CodeableConcept* _dataAbsentReason;
	CodeableConcept* _interpretation;
	size_t _note_count;
	Annotation** _note;
	CodeableConcept* _bodySite;
	CodeableConcept* _method;
	Reference* _specimen;
	Reference* _device;
	Observation_ReferenceRange* _referenceRange;
	Reference* _hasMember;
	Reference* _derivedFrom;
	size_t _component_count;
	Observation_Component** _component;
};
struct Diagnosticreport_genetics {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	CodeableConcept* _code;
	Reference* _subject;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	size_t _resultsInterpreter_count;
	Reference** _resultsInterpreter;
	size_t _specimen_count;
	Reference** _specimen;
	size_t _result_count;
	Reference** _result;
	size_t _imagingStudy_count;
	Reference** _imagingStudy;
	size_t _media_count;
	DiagnosticReport_Media** _media;
	NullableString8 _conclusion;
	CodeableConcept* _conclusionCode;
	size_t _presentedForm_count;
	Attachment** _presentedForm;
};
struct Hlaresult {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _identifier_count;
	Identifier** _identifier;
	size_t _basedOn_count;
	Reference** _basedOn;
	NullableString8 _status;
	size_t _category_count;
	CodeableConcept** _category;
	CodeableConcept* _code;
	Reference* _subject;
	Reference* _encounter;
	union {
		ISO8601_Time _effectiveDateTime;
		Period* _effectivePeriod;
	} _effective;

	enum class _effectiveType {
		DateTime,
		Period
	};
_effectiveType _effective_type;

	ISO8601_Time _issued;
	size_t _performer_count;
	Reference** _performer;
	size_t _resultsInterpreter_count;
	Reference** _resultsInterpreter;
	size_t _specimen_count;
	Reference** _specimen;
	size_t _result_count;
	Reference** _result;
	size_t _imagingStudy_count;
	Reference** _imagingStudy;
	size_t _media_count;
	DiagnosticReport_Media** _media;
	NullableString8 _conclusion;
	size_t _conclusionCode_count;
	CodeableConcept** _conclusionCode;
	size_t _presentedForm_count;
	Attachment** _presentedForm;
};
struct Synthesis {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _shortTitle;
	NullableString8 _subtitle;
	NullableString8 _status;
	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _note_count;
	Annotation** _note;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _topic_count;
	CodeableConcept** _topic;
	size_t _author_count;
	ContactDetail** _author;
	size_t _editor_count;
	ContactDetail** _editor;
	size_t _reviewer_count;
	ContactDetail** _reviewer;
	size_t _endorser_count;
	ContactDetail** _endorser;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	Reference* _exposureBackground;
	Reference* _exposureVariant;
	size_t _outcome_count;
	Reference** _outcome;
};
struct Clinicaldocument {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _identifier;
	NullableString8 _status;
	CodeableConcept* _type;
	size_t _category_count;
	CodeableConcept** _category;
	Reference* _subject;
	Reference* _encounter;
	ISO8601_Time _date;
	size_t _author_count;
	Reference** _author;
	NullableString8 _title;
	NullableString8 _confidentiality;
	size_t _attester_count;
	Composition_Attester** _attester;
	Reference* _custodian;
	size_t _relatesTo_count;
	Composition_RelatesTo** _relatesTo;
	size_t _event_count;
	Composition_Event** _event;
	size_t _section_count;
	Composition_Section** _section;
};
struct Catalog {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Identifier* _identifier;
	NullableString8 _status;
	CodeableConcept* _type;
	CodeableConcept* _category;
	Reference* _subject;
	Reference* _encounter;
	ISO8601_Time _date;
	size_t _author_count;
	Reference** _author;
	NullableString8 _title;
	NullableString8 _confidentiality;
	size_t _attester_count;
	Composition_Attester** _attester;
	Reference* _custodian;
	size_t _relatesTo_count;
	Composition_RelatesTo** _relatesTo;
	size_t _event_count;
	Composition_Event** _event;
	size_t _section_count;
	Composition_Section** _section;
};
struct Shareableplandefinition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _subtitle;
	CodeableConcept* _type;
	NullableString8 _status;
	NullableBoolean _experimental;
	union {
		CodeableConcept* _subjectCodeableConcept;
		Reference* _subjectReference;
	} _subject;

	enum class _subjectType {
		CodeableConcept,
		Reference
	};
_subjectType _subject_type;

	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _usage;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _topic_count;
	CodeableConcept** _topic;
	size_t _author_count;
	ContactDetail** _author;
	size_t _editor_count;
	ContactDetail** _editor;
	size_t _reviewer_count;
	ContactDetail** _reviewer;
	size_t _endorser_count;
	ContactDetail** _endorser;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	size_t _library_count;
	NullableString8* _library;
	size_t _goal_count;
	PlanDefinition_Goal** _goal;
	size_t _action_count;
	PlanDefinition_Action** _action;
};
struct Computableplandefinition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _subtitle;
	CodeableConcept* _type;
	NullableString8 _status;
	NullableBoolean _experimental;
	union {
		CodeableConcept* _subjectCodeableConcept;
		Reference* _subjectReference;
	} _subject;

	enum class _subjectType {
		CodeableConcept,
		Reference
	};
_subjectType _subject_type;

	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _usage;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _topic_count;
	CodeableConcept** _topic;
	size_t _author_count;
	ContactDetail** _author;
	size_t _editor_count;
	ContactDetail** _editor;
	size_t _reviewer_count;
	ContactDetail** _reviewer;
	size_t _endorser_count;
	ContactDetail** _endorser;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	NullableString8 _library;
	size_t _goal_count;
	PlanDefinition_Goal** _goal;
	size_t _action_count;
	PlanDefinition_Action** _action;
};
struct Cdshooksserviceplandefinition {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _url;
	size_t _identifier_count;
	Identifier** _identifier;
	NullableString8 _version;
	NullableString8 _name;
	NullableString8 _title;
	NullableString8 _subtitle;
	CodeableConcept* _type;
	NullableString8 _status;
	NullableBoolean _experimental;
	union {
		CodeableConcept* _subjectCodeableConcept;
		Reference* _subjectReference;
	} _subject;

	enum class _subjectType {
		CodeableConcept,
		Reference
	};
_subjectType _subject_type;

	ISO8601_Time _date;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	size_t _jurisdiction_count;
	CodeableConcept** _jurisdiction;
	NullableString8 _purpose;
	NullableString8 _usage;
	NullableString8 _copyright;
	ISO8601_Time _approvalDate;
	ISO8601_Time _lastReviewDate;
	Period* _effectivePeriod;
	size_t _topic_count;
	CodeableConcept** _topic;
	size_t _author_count;
	ContactDetail** _author;
	size_t _editor_count;
	ContactDetail** _editor;
	size_t _reviewer_count;
	ContactDetail** _reviewer;
	size_t _endorser_count;
	ContactDetail** _endorser;
	size_t _relatedArtifact_count;
	RelatedArtifact** _relatedArtifact;
	size_t _library_count;
	NullableString8* _library;
	size_t _goal_count;
	PlanDefinition_Goal** _goal;
	size_t _action_count;
	PlanDefinition_Action** _action;
};
struct Elementdefinition_de {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	NullableString8 _url;
	NullableString8 _value;
	enum class _valueType {
		CodeableConcept,
		Canonical
	};
_valueType _value_type;

	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _path;
	NullableString8 _representation;
	NullableString8 _sliceName;
	NullableBoolean _sliceIsConstraining;
	NullableString8 _label;
	size_t _code_count;
	Coding** _code;
	ElementDefinition_Slicing* _slicing;
	NullableString8 _short;
	NullableString8 _definition;
	NullableString8 _comment;
	NullableString8 _requirements;
	size_t _alias_count;
	NullableString8* _alias;
	NullableInt32 _min;
	NullableString8 _max;
	ElementDefinition_Base* _base;
	NullableString8 _contentReference;
	size_t _type_count;
	ElementDefinition_Type** _type;
	union {
		NullableString8 _defaultValueBase64Binary;
		NullableBoolean _defaultValueBoolean;
		NullableString8 _defaultValueCanonical;
		NullableString8 _defaultValueCode;
		ISO8601_Time _defaultValueDate;
		ISO8601_Time _defaultValueDateTime;
		NullableString8 _defaultValueDecimal;
		NullableString8 _defaultValueId;
		ISO8601_Time _defaultValueInstant;
		NullableInt32 _defaultValueInteger;
		NullableString8 _defaultValueMarkdown;
		NullableString8 _defaultValueOid;
		NullableInt32 _defaultValuePositiveInt;
		NullableString8 _defaultValueString;
		ISO8601_Time _defaultValueTime;
		NullableInt32 _defaultValueUnsignedInt;
		NullableString8 _defaultValueUri;
		NullableString8 _defaultValueUrl;
		NullableString8 _defaultValueUuid;
		Address* _defaultValueAddress;
		Age* _defaultValueAge;
		Annotation* _defaultValueAnnotation;
		Attachment* _defaultValueAttachment;
		CodeableConcept* _defaultValueCodeableConcept;
		Coding* _defaultValueCoding;
		ContactPoint* _defaultValueContactPoint;
		Count* _defaultValueCount;
		Distance* _defaultValueDistance;
		Duration* _defaultValueDuration;
		HumanName* _defaultValueHumanName;
		Identifier* _defaultValueIdentifier;
		Money* _defaultValueMoney;
		Period* _defaultValuePeriod;
		Quantity* _defaultValueQuantity;
		Range* _defaultValueRange;
		Ratio* _defaultValueRatio;
		Reference* _defaultValueReference;
		SampledData* _defaultValueSampledData;
		Signature* _defaultValueSignature;
		Timing* _defaultValueTiming;
		ContactDetail* _defaultValueContactDetail;
		Contributor* _defaultValueContributor;
		DataRequirement* _defaultValueDataRequirement;
		Expression* _defaultValueExpression;
		ParameterDefinition* _defaultValueParameterDefinition;
		RelatedArtifact* _defaultValueRelatedArtifact;
		TriggerDefinition* _defaultValueTriggerDefinition;
		UsageContext* _defaultValueUsageContext;
		Dosage* _defaultValueDosage;
		Meta* _defaultValueMeta;
	} _defaultValue;

	enum class _defaultValueType {
		Base64Binary,
		Boolean,
		Canonical,
		Code,
		Date,
		DateTime,
		Decimal,
		Id,
		Instant,
		Integer,
		Markdown,
		Oid,
		PositiveInt,
		String,
		Time,
		UnsignedInt,
		Uri,
		Url,
		Uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	};
_defaultValueType _defaultValue_type;

	NullableString8 _meaningWhenMissing;
	NullableString8 _orderMeaning;
	union {
		NullableString8 _fixedBase64Binary;
		NullableBoolean _fixedBoolean;
		NullableString8 _fixedCanonical;
		NullableString8 _fixedCode;
		ISO8601_Time _fixedDate;
		ISO8601_Time _fixedDateTime;
		NullableString8 _fixedDecimal;
		NullableString8 _fixedId;
		ISO8601_Time _fixedInstant;
		NullableInt32 _fixedInteger;
		NullableString8 _fixedMarkdown;
		NullableString8 _fixedOid;
		NullableInt32 _fixedPositiveInt;
		NullableString8 _fixedString;
		ISO8601_Time _fixedTime;
		NullableInt32 _fixedUnsignedInt;
		NullableString8 _fixedUri;
		NullableString8 _fixedUrl;
		NullableString8 _fixedUuid;
		Address* _fixedAddress;
		Age* _fixedAge;
		Annotation* _fixedAnnotation;
		Attachment* _fixedAttachment;
		CodeableConcept* _fixedCodeableConcept;
		Coding* _fixedCoding;
		ContactPoint* _fixedContactPoint;
		Count* _fixedCount;
		Distance* _fixedDistance;
		Duration* _fixedDuration;
		HumanName* _fixedHumanName;
		Identifier* _fixedIdentifier;
		Money* _fixedMoney;
		Period* _fixedPeriod;
		Quantity* _fixedQuantity;
		Range* _fixedRange;
		Ratio* _fixedRatio;
		Reference* _fixedReference;
		SampledData* _fixedSampledData;
		Signature* _fixedSignature;
		Timing* _fixedTiming;
		ContactDetail* _fixedContactDetail;
		Contributor* _fixedContributor;
		DataRequirement* _fixedDataRequirement;
		Expression* _fixedExpression;
		ParameterDefinition* _fixedParameterDefinition;
		RelatedArtifact* _fixedRelatedArtifact;
		TriggerDefinition* _fixedTriggerDefinition;
		UsageContext* _fixedUsageContext;
		Dosage* _fixedDosage;
		Meta* _fixedMeta;
	} _fixed;

	enum class _fixedType {
		Base64Binary,
		Boolean,
		Canonical,
		Code,
		Date,
		DateTime,
		Decimal,
		Id,
		Instant,
		Integer,
		Markdown,
		Oid,
		PositiveInt,
		String,
		Time,
		UnsignedInt,
		Uri,
		Url,
		Uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	};
_fixedType _fixed_type;

	union {
		NullableString8 _patternBase64Binary;
		NullableBoolean _patternBoolean;
		NullableString8 _patternCanonical;
		NullableString8 _patternCode;
		ISO8601_Time _patternDate;
		ISO8601_Time _patternDateTime;
		NullableString8 _patternDecimal;
		NullableString8 _patternId;
		ISO8601_Time _patternInstant;
		NullableInt32 _patternInteger;
		NullableString8 _patternMarkdown;
		NullableString8 _patternOid;
		NullableInt32 _patternPositiveInt;
		NullableString8 _patternString;
		ISO8601_Time _patternTime;
		NullableInt32 _patternUnsignedInt;
		NullableString8 _patternUri;
		NullableString8 _patternUrl;
		NullableString8 _patternUuid;
		Address* _patternAddress;
		Age* _patternAge;
		Annotation* _patternAnnotation;
		Attachment* _patternAttachment;
		CodeableConcept* _patternCodeableConcept;
		Coding* _patternCoding;
		ContactPoint* _patternContactPoint;
		Count* _patternCount;
		Distance* _patternDistance;
		Duration* _patternDuration;
		HumanName* _patternHumanName;
		Identifier* _patternIdentifier;
		Money* _patternMoney;
		Period* _patternPeriod;
		Quantity* _patternQuantity;
		Range* _patternRange;
		Ratio* _patternRatio;
		Reference* _patternReference;
		SampledData* _patternSampledData;
		Signature* _patternSignature;
		Timing* _patternTiming;
		ContactDetail* _patternContactDetail;
		Contributor* _patternContributor;
		DataRequirement* _patternDataRequirement;
		Expression* _patternExpression;
		ParameterDefinition* _patternParameterDefinition;
		RelatedArtifact* _patternRelatedArtifact;
		TriggerDefinition* _patternTriggerDefinition;
		UsageContext* _patternUsageContext;
		Dosage* _patternDosage;
		Meta* _patternMeta;
	} _pattern;

	enum class _patternType {
		Base64Binary,
		Boolean,
		Canonical,
		Code,
		Date,
		DateTime,
		Decimal,
		Id,
		Instant,
		Integer,
		Markdown,
		Oid,
		PositiveInt,
		String,
		Time,
		UnsignedInt,
		Uri,
		Url,
		Uuid,
		Address,
		Age,
		Annotation,
		Attachment,
		CodeableConcept,
		Coding,
		ContactPoint,
		Count,
		Distance,
		Duration,
		HumanName,
		Identifier,
		Money,
		Period,
		Quantity,
		Range,
		Ratio,
		Reference,
		SampledData,
		Signature,
		Timing,
		ContactDetail,
		Contributor,
		DataRequirement,
		Expression,
		ParameterDefinition,
		RelatedArtifact,
		TriggerDefinition,
		UsageContext,
		Dosage,
		Meta
	};
_patternType _pattern_type;

	size_t _example_count;
	ElementDefinition_Example** _example;
	union {
		ISO8601_Time _minValueDate;
		ISO8601_Time _minValueDateTime;
		ISO8601_Time _minValueInstant;
		ISO8601_Time _minValueTime;
		NullableString8 _minValueDecimal;
		NullableInt32 _minValueInteger;
		NullableInt32 _minValuePositiveInt;
		NullableInt32 _minValueUnsignedInt;
		Quantity* _minValueQuantity;
	} _minValue;

	enum class _minValueType {
		Date,
		DateTime,
		Instant,
		Time,
		Decimal,
		Integer,
		PositiveInt,
		UnsignedInt,
		Quantity
	};
_minValueType _minValue_type;

	union {
		ISO8601_Time _maxValueDate;
		ISO8601_Time _maxValueDateTime;
		ISO8601_Time _maxValueInstant;
		ISO8601_Time _maxValueTime;
		NullableString8 _maxValueDecimal;
		NullableInt32 _maxValueInteger;
		NullableInt32 _maxValuePositiveInt;
		NullableInt32 _maxValueUnsignedInt;
		Quantity* _maxValueQuantity;
	} _maxValue;

	enum class _maxValueType {
		Date,
		DateTime,
		Instant,
		Time,
		Decimal,
		Integer,
		PositiveInt,
		UnsignedInt,
		Quantity
	};
_maxValueType _maxValue_type;

	NullableInt32 _maxLength;
	size_t _condition_count;
	NullableString8* _condition;
	size_t _constraint_count;
	ElementDefinition_Constraint** _constraint;
	NullableBoolean _mustSupport;
	NullableBoolean _isModifier;
	NullableString8 _isModifierReason;
	NullableBoolean _isSummary;
	ElementDefinition_Binding* _binding;
	size_t _mapping_count;
	ElementDefinition_Mapping** _mapping;
};
struct Ehrsrle_auditevent {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	Coding* _type;
	size_t _subtype_count;
	Coding** _subtype;
	NullableString8 _action;
	Period* _period;
	ISO8601_Time _recorded;
	NullableString8 _outcome;
	NullableString8 _outcomeDesc;
	size_t _purposeOfEvent_count;
	CodeableConcept** _purposeOfEvent;
	size_t _agent_count;
	AuditEvent_Agent** _agent;
	AuditEvent_Source* _source;
	size_t _entity_count;
	AuditEvent_Entity** _entity;
};
struct Ehrsrle_provenance {
	ResourceType resourceType;
	NullableString8 _id;
	Meta* _meta;
	NullableString8 _implicitRules;
	NullableString8 _language;
	Narrative* _text;
	size_t _contained_count;
	Resource** _contained;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _target_count;
	Reference** _target;
	union {
		Period* _occurredPeriod;
		ISO8601_Time _occurredDateTime;
	} _occurred;

	enum class _occurredType {
		Period,
		DateTime
	};
_occurredType _occurred_type;

	ISO8601_Time _recorded;
	size_t _policy_count;
	NullableString8* _policy;
	Reference* _location;
	size_t _reason_count;
	CodeableConcept** _reason;
	CodeableConcept* _activity;
	size_t _agent_count;
	Provenance_Agent** _agent;
	size_t _entity_count;
	Provenance_Entity** _entity;
	size_t _signature_count;
	Signature** _signature;
};
struct ViewDefinition {
	ResourceType resourceType;
	NullableString8 _url;
	Identifier* _identifier;
	NullableString8 _name;
	NullableString8 _title;
	Meta* _meta;
	NullableString8 _status;
	NullableBoolean _experimental;
	NullableString8 _publisher;
	size_t _contact_count;
	ContactDetail** _contact;
	NullableString8 _description;
	size_t _useContext_count;
	UsageContext** _useContext;
	NullableString8 _copyright;
	NullableString8 _resource;
	size_t _fhirVersion_count;
	NullableString8* _fhirVersion;
	size_t _constant_count;
	ViewDefinition_Constant** _constant;
	size_t _select_count;
	ViewDefinition_Select** _select;
	size_t _where_count;
	ViewDefinition_Where** _where;
};
struct ViewDefinition_Constant {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	union {
		NullableString8 _valueBase64Binary;
		NullableBoolean _valueBoolean;
		NullableString8 _valueCanonical;
		NullableString8 _valueCode;
		ISO8601_Time _valueDate;
		ISO8601_Time _valueDateTime;
		NullableString8 _valueDecimal;
		NullableString8 _valueId;
		ISO8601_Time _valueInstant;
		NullableInt32 _valueInteger;
		NullableInt64 _valueInteger64;
		NullableString8 _valueOid;
		NullableString8 _valueString;
		NullableInt32 _valuePositiveInt;
		ISO8601_Time _valueTime;
		NullableInt32 _valueUnsignedInt;
		NullableString8 _valueUri;
		NullableString8 _valueUrl;
		NullableString8 _valueUuid;
	} _value;

	enum class _valueType {
		Base64Binary,
		Boolean,
		Canonical,
		Code,
		Date,
		DateTime,
		Decimal,
		Id,
		Instant,
		Integer,
		Integer64,
		Oid,
		String,
		PositiveInt,
		Time,
		UnsignedInt,
		Uri,
		Url,
		Uuid
	};
_valueType _value_type;

};
struct ViewDefinition_Select {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	size_t _column_count;
	ViewDefinition_Select_Column** _column;
	size_t _select_count;
	ViewDefinition_Select** _select;
	NullableString8 _forEach;
	NullableString8 _forEachOrNull;
	size_t _unionAll_count;
	ViewDefinition_Select** _unionAll;
};
struct ViewDefinition_Select_Column {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _path;
	NullableString8 _name;
	NullableString8 _description;
	NullableBoolean _collection;
	NullableString8 _type;
	size_t _tag_count;
	ViewDefinition_Select_Column_Tag** _tag;
};
struct ViewDefinition_Select_Column_Tag {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _name;
	NullableString8 _value;
};
struct ViewDefinition_Where {
	ResourceType resourceType;
	NullableString8 _id;
	size_t _extension_count;
	Extension** _extension;
	size_t _modifierExtension_count;
	Extension** _modifierExtension;
	NullableString8 _path;
	NullableString8 _description;
};
};
};
