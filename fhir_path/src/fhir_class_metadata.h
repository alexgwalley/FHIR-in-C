namespace fhir_deserialize {
ClassMetadata g_class_metadata[] =
{
{
	Str8Lit("Unknown"),
	0,
	0,
{ 0x0, 0x0, 0x0},
	{
	}
}
,{
	Str8Lit("Resource"),
	88,
	5,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Account"),
	312,
	27,
{ 0x4000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Account") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subject_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_servicePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_coverage_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_coverage"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Account_Coverage") },
			}
		},
		{
			Str8LitComp("_owner"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_guarantor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_guarantor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Account_Guarantor") },
			}
		},
		{
			Str8LitComp("_partOf"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Account_Coverage"),
	80,
	8,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Account_Coverage") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_coverage"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_priority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Account_Guarantor"),
	88,
	9,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Account_Guarantor") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_party"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_onHold"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("ActivityDefinition"),
	968,
	79,
{ 0x80000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ActivityDefinition") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subtitle"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_subjectCodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("_subjectReference") },
			}
		},
		{
			Str8LitComp("_subject_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			320,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			384,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("_jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			440,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_usage"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			464,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			488,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_approvalDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			512,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_lastReviewDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			528,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_effectivePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			544,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_topic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			552,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_topic"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			560,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			568,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_author"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			576,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_editor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			584,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_editor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			592,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_reviewer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			600,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reviewer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			608,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_endorser_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			616,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_endorser"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			624,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_relatedArtifact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			632,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_relatedArtifact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			640,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("RelatedArtifact") },
			}
		},
		{
			Str8LitComp("_library_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			648,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_library"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			656,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_kind"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			664,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_profile"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			688,
			24,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			712,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_intent"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			720,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_priority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			744,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_doNotPerform"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			768,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_timing"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			776,
			16,
			{
				{ ValueType::ClassReference, Str8LitComp("_timingTiming") },
				{ ValueType::DateTime, Str8LitComp("_timingDateTime") },
				{ ValueType::ClassReference, Str8LitComp("_timingAge") },
				{ ValueType::ClassReference, Str8LitComp("_timingPeriod") },
				{ ValueType::ClassReference, Str8LitComp("_timingRange") },
				{ ValueType::ClassReference, Str8LitComp("_timingDuration") },
			}
		},
		{
			Str8LitComp("_timing_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			792,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Timing") },
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Age") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
				{ ValueType::ClassReference, Str8LitComp("Range") },
				{ ValueType::ClassReference, Str8LitComp("Duration") },
			}
		},
		{
			Str8LitComp("_location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			800,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_participant_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			808,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_participant"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			816,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ActivityDefinition_Participant") },
			}
		},
		{
			Str8LitComp("_product"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			824,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_productReference") },
				{ ValueType::ClassReference, Str8LitComp("_productCodeableConcept") },
			}
		},
		{
			Str8LitComp("_product_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			832,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			840,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_dosage_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			848,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_dosage"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			856,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Dosage") },
			}
		},
		{
			Str8LitComp("_bodySite_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			864,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_bodySite"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			872,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_specimenRequirement_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			880,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_specimenRequirement"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			888,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_observationRequirement_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			896,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_observationRequirement"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			904,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_observationResultRequirement_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			912,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_observationResultRequirement"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			920,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_transform"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			928,
			24,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_dynamicValue_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			952,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_dynamicValue"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			960,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ActivityDefinition_DynamicValue") },
			}
		}
	}
}
,{
	Str8Lit("ActivityDefinition_Participant"),
	96,
	8,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ActivityDefinition_Participant") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_role"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("ActivityDefinition_DynamicValue"),
	96,
	8,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ActivityDefinition_DynamicValue") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_path"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_expression"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Expression") },
			}
		}
	}
}
,{
	Str8Lit("AdverseEvent"),
	400,
	39,
{ 0x22000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AdverseEvent") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_actuality"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_event"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_detected"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_recordedDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_resultingCondition_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_resultingCondition"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_seriousness"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_severity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_outcome"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_recorder"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_contributor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contributor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_suspectEntity_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_suspectEntity"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("AdverseEvent_SuspectEntity") },
			}
		},
		{
			Str8LitComp("_subjectMedicalHistory_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subjectMedicalHistory"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_referenceDocument_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_referenceDocument"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_study_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_study"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("AdverseEvent_SuspectEntity"),
	88,
	9,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AdverseEvent_SuspectEntity") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_instance"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_causality_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_causality"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("AdverseEvent_SuspectEntity_Causality") },
			}
		}
	}
}
,{
	Str8Lit("AdverseEvent_SuspectEntity_Causality"),
	112,
	10,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AdverseEvent_SuspectEntity_Causality") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_assessment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_productRelatedness"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_author"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_method"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("AllergyIntolerance"),
	376,
	33,
{ 0x200000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AllergyIntolerance") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_clinicalStatus"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_verificationStatus"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_criticality"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_onset"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			264,
			24,
			{
				{ ValueType::DateTime, Str8LitComp("_onsetDateTime") },
				{ ValueType::ClassReference, Str8LitComp("_onsetAge") },
				{ ValueType::ClassReference, Str8LitComp("_onsetPeriod") },
				{ ValueType::ClassReference, Str8LitComp("_onsetRange") },
				{ ValueType::String, Str8LitComp("_onsetString") },
			}
		},
		{
			Str8LitComp("_onset_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			288,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Age") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
				{ ValueType::ClassReference, Str8LitComp("Range") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_recordedDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_recorder"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_asserter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_lastOccurrence"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("_reaction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reaction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("AllergyIntolerance_Reaction") },
			}
		}
	}
}
,{
	Str8Lit("AllergyIntolerance_Reaction"),
	176,
	15,
{ 0x100, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AllergyIntolerance_Reaction") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_substance"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_manifestation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_manifestation"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_onset"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_severity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_exposureRoute"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("Appointment"),
	496,
	45,
{ 0x40000004000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Appointment") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_cancelationReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_serviceCategory_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_serviceCategory"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_serviceType_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_serviceType"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_specialty_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_specialty"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_appointmentType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_priority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_supportingInformation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_supportingInformation"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_start"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_end"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_minutesDuration"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_slot_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_slot"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_created"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			384,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_comment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			400,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_patientInstruction"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			424,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_basedOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_basedOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_participant_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_participant"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Appointment_Participant") },
			}
		},
		{
			Str8LitComp("_requestedPeriod_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_requestedPeriod"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("Appointment_Participant"),
	144,
	12,
{ 0x400, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Appointment_Participant") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_actor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_required"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("AppointmentResponse"),
	272,
	22,
{ 0x104000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AppointmentResponse") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_appointment"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_start"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_end"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_participantType_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_participantType"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_actor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_participantStatus"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_comment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("AuditEvent"),
	320,
	27,
{ 0x1821000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AuditEvent") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_subtype_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subtype"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_action"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_recorded"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_outcome"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_outcomeDesc"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_purposeOfEvent_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_purposeOfEvent"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_agent_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_agent"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("AuditEvent_Agent") },
			}
		},
		{
			Str8LitComp("_source"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("AuditEvent_Source") },
			}
		},
		{
			Str8LitComp("_entity_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_entity"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("AuditEvent_Entity") },
			}
		}
	}
}
,{
	Str8Lit("AuditEvent_Agent"),
	208,
	20,
{ 0x1000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AuditEvent_Agent") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_role_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_role"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_who"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_altId"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_requestor"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_policy_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_policy"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_media"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_network"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("AuditEvent_Agent_Network") },
			}
		},
		{
			Str8LitComp("_purposeOfUse_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_purposeOfUse"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("AuditEvent_Agent_Network"),
	112,
	8,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AuditEvent_Agent_Network") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_address"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("AuditEvent_Source"),
	112,
	10,
{ 0x80, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AuditEvent_Source") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_site"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_observer"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		}
	}
}
,{
	Str8Lit("AuditEvent_Entity"),
	200,
	17,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AuditEvent_Entity") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_what"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_role"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_lifecycle"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_securityLabel_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_securityLabel"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_query"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Base64Binary, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_detail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_detail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("AuditEvent_Entity_Detail") },
			}
		}
	}
}
,{
	Str8Lit("AuditEvent_Entity_Detail"),
	120,
	9,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("AuditEvent_Entity_Detail") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_value"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("_valueString") },
				{ ValueType::Base64Binary, Str8LitComp("_valueBase64Binary") },
			}
		},
		{
			Str8LitComp("_value_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			112,
			4,
			{
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::Base64Binary, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Basic"),
	200,
	18,
{ 0x4000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Basic") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_created"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_author"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Binary"),
	144,
	8,
{ 0x20, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Binary") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contentType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_securityContext"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_data"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			24,
			{
				{ ValueType::Base64Binary, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("BiologicallyDerivedProduct"),
	304,
	28,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("BiologicallyDerivedProduct") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_productCategory"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_productCode"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_request_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_request"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::Integer, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_parent_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_parent"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_collection"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("BiologicallyDerivedProduct_Collection") },
			}
		},
		{
			Str8LitComp("_processing_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_processing"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("BiologicallyDerivedProduct_Processing") },
			}
		},
		{
			Str8LitComp("_manipulation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("BiologicallyDerivedProduct_Manipulation") },
			}
		},
		{
			Str8LitComp("_storage_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_storage"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("BiologicallyDerivedProduct_Storage") },
			}
		}
	}
}
,{
	Str8Lit("BiologicallyDerivedProduct_Collection"),
	104,
	10,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("BiologicallyDerivedProduct_Collection") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_collector"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_source"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_collected"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			80,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("_collectedDateTime") },
				{ ValueType::ClassReference, Str8LitComp("_collectedPeriod") },
			}
		},
		{
			Str8LitComp("_collected_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			96,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("BiologicallyDerivedProduct_Processing"),
	128,
	11,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("BiologicallyDerivedProduct_Processing") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_procedure"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_additive"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_time"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			104,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("_timeDateTime") },
				{ ValueType::ClassReference, Str8LitComp("_timePeriod") },
			}
		},
		{
			Str8LitComp("_time_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			120,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("BiologicallyDerivedProduct_Manipulation"),
	112,
	9,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("BiologicallyDerivedProduct_Manipulation") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_time"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			88,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("_timeDateTime") },
				{ ValueType::ClassReference, Str8LitComp("_timePeriod") },
			}
		},
		{
			Str8LitComp("_time_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			104,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("BiologicallyDerivedProduct_Storage"),
	144,
	10,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("BiologicallyDerivedProduct_Storage") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_temperature"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_scale"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_duration"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("BodyStructure"),
	248,
	23,
{ 0x400000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("BodyStructure") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_active"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_morphology"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_locationQualifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_locationQualifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_image_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_image"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Attachment") },
			}
		},
		{
			Str8LitComp("_patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Bundle"),
	184,
	14,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Bundle") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_timestamp"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_total"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_link_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_link"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Bundle_Link") },
			}
		},
		{
			Str8LitComp("_entry_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_entry"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Bundle_Entry") },
			}
		},
		{
			Str8LitComp("_signature"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Signature") },
			}
		}
	}
}
,{
	Str8Lit("Bundle_Link"),
	112,
	8,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Bundle_Link") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_relation"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Bundle_Entry"),
	136,
	13,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Bundle_Entry") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_link_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_link"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Bundle_Link") },
			}
		},
		{
			Str8LitComp("_fullUrl"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_resource"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_search"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Bundle_Entry_Search") },
			}
		},
		{
			Str8LitComp("_request"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Bundle_Entry_Request") },
			}
		},
		{
			Str8LitComp("_response"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Bundle_Entry_Response") },
			}
		}
	}
}
,{
	Str8Lit("Bundle_Entry_Search"),
	112,
	8,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Bundle_Entry_Search") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_mode"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_score"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Bundle_Entry_Request"),
	200,
	12,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Bundle_Entry_Request") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_method"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_ifNoneMatch"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_ifModifiedSince"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_ifMatch"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_ifNoneExist"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Bundle_Entry_Response"),
	160,
	11,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Bundle_Entry_Response") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_etag"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_lastModified"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_outcome"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement"),
	624,
	49,
{ 0x5020050000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("_jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			384,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			408,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_kind"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instantiates_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instantiates"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_imports_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_imports"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_software"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CapabilityStatement_Software") },
			}
		},
		{
			Str8LitComp("_implementation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CapabilityStatement_Implementation") },
			}
		},
		{
			Str8LitComp("_fhirVersion"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			504,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_format_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			528,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_format"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			536,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_patchFormat_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			544,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_patchFormat"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			552,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_implementationGuide_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			560,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_implementationGuide"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			568,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_rest_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			576,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_rest"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			584,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CapabilityStatement_Rest") },
			}
		},
		{
			Str8LitComp("_messaging_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			592,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_messaging"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			600,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CapabilityStatement_Messaging") },
			}
		},
		{
			Str8LitComp("_document_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			608,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_document"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			616,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CapabilityStatement_Document") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Software"),
	128,
	9,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Software") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_releaseDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Implementation"),
	120,
	9,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Implementation") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Url, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_custodian"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Rest"),
	200,
	19,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Rest") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_mode"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_documentation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_security"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CapabilityStatement_Rest_Security") },
			}
		},
		{
			Str8LitComp("_resource_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_resource"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CapabilityStatement_Rest_Resource") },
			}
		},
		{
			Str8LitComp("_interaction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_interaction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CapabilityStatement_Rest_Interaction") },
			}
		},
		{
			Str8LitComp("_searchParam_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_searchParam"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CapabilityStatement_Rest_Resource_SearchParam") },
			}
		},
		{
			Str8LitComp("_operation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_operation"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CapabilityStatement_Rest_Resource_Operation") },
			}
		},
		{
			Str8LitComp("_compartment_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_compartment"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Rest_Security"),
	112,
	10,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Rest_Security") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_cors"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_service_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_service"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Rest_Resource"),
	352,
	30,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Rest_Resource") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_profile"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_supportedProfile_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_supportedProfile"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_documentation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_interaction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_interaction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CapabilityStatement_Rest_Resource_Interaction") },
			}
		},
		{
			Str8LitComp("_versioning"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_readHistory"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_updateCreate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_conditionalCreate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_conditionalRead"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_conditionalUpdate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_conditionalDelete"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_referencePolicy_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_referencePolicy"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_searchInclude_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_searchInclude"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_searchRevInclude_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_searchRevInclude"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_searchParam_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_searchParam"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CapabilityStatement_Rest_Resource_SearchParam") },
			}
		},
		{
			Str8LitComp("_operation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_operation"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CapabilityStatement_Rest_Resource_Operation") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Rest_Resource_Interaction"),
	112,
	8,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Rest_Resource_Interaction") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_documentation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Rest_Resource_SearchParam"),
	160,
	10,
{ 0x140, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Rest_Resource_SearchParam") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_definition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_documentation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Rest_Resource_Operation"),
	136,
	9,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Rest_Resource_Operation") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_definition"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_documentation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Rest_Interaction"),
	112,
	8,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Rest_Interaction") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_documentation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Messaging"),
	128,
	12,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Messaging") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_endpoint_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_endpoint"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CapabilityStatement_Messaging_Endpoint") },
			}
		},
		{
			Str8LitComp("_reliableCache"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_documentation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_supportedMessage_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_supportedMessage"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CapabilityStatement_Messaging_SupportedMessage") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Messaging_Endpoint"),
	96,
	8,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Messaging_Endpoint") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_protocol"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_address"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			24,
			{
				{ ValueType::Url, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Messaging_SupportedMessage"),
	112,
	8,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Messaging_SupportedMessage") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_mode"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_definition"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CapabilityStatement_Document"),
	136,
	9,
{ 0x140, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CapabilityStatement_Document") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_mode"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_documentation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_profile"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CarePlan"),
	512,
	49,
{ 0x43000000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CarePlan") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_instantiatesCanonical_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instantiatesCanonical"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instantiatesUri_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instantiatesUri"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_basedOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_basedOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_replaces_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_replaces"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_partOf_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_partOf"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_intent"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_created"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_author"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_contributor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contributor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_careTeam_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_careTeam"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_addresses_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_addresses"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_supportingInfo_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_supportingInfo"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_goal_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_goal"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_activity_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_activity"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CarePlan_Activity") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("CarePlan_Activity"),
	128,
	14,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CarePlan_Activity") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_outcomeCodeableConcept_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_outcomeCodeableConcept"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_outcomeReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_outcomeReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_progress_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_progress"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("_reference"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_detail"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CarePlan_Activity_Detail") },
			}
		}
	}
}
,{
	Str8Lit("CarePlan_Activity_Detail"),
	328,
	31,
{ 0x40000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CarePlan_Activity_Detail") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_kind"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instantiatesCanonical_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instantiatesCanonical"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instantiatesUri_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instantiatesUri"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_goal_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_goal"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_statusReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_doNotPerform"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_scheduled"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			216,
			24,
			{
				{ ValueType::ClassReference, Str8LitComp("_scheduledTiming") },
				{ ValueType::ClassReference, Str8LitComp("_scheduledPeriod") },
				{ ValueType::String, Str8LitComp("_scheduledString") },
			}
		},
		{
			Str8LitComp("_scheduled_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			240,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Timing") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_performer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_performer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_product"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_productCodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("_productReference") },
			}
		},
		{
			Str8LitComp("_product_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			280,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_dailyAmount"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CareTeam"),
	344,
	33,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CareTeam") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_participant_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_participant"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CareTeam_Participant") },
			}
		},
		{
			Str8LitComp("_reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_managingOrganization_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_managingOrganization"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_telecom_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_telecom"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactPoint") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("CareTeam_Participant"),
	104,
	11,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CareTeam_Participant") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_role_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_role"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_member"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_onBehalfOf"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("CatalogEntry"),
	328,
	31,
{ 0x18000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CatalogEntry") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_orderable"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_referencedItem"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_additionalIdentifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_additionalIdentifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_classification_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_classification"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_validityPeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_validTo"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_lastUpdated"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_additionalCharacteristic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_additionalCharacteristic"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_additionalClassification_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_additionalClassification"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_relatedEntry_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_relatedEntry"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CatalogEntry_RelatedEntry") },
			}
		}
	}
}
,{
	Str8Lit("CatalogEntry_RelatedEntry"),
	96,
	8,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CatalogEntry_RelatedEntry") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_relationtype"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_item"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ChargeItem"),
	520,
	51,
{ 0x640000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ChargeItem") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_definitionUri_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_definitionUri"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_definitionCanonical_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_definitionCanonical"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_partOf_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_partOf"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_context"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_occurrence"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			256,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("_occurrenceDateTime") },
				{ ValueType::ClassReference, Str8LitComp("_occurrencePeriod") },
				{ ValueType::ClassReference, Str8LitComp("_occurrenceTiming") },
			}
		},
		{
			Str8LitComp("_occurrence_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			272,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
				{ ValueType::ClassReference, Str8LitComp("Timing") },
			}
		},
		{
			Str8LitComp("_performer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_performer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ChargeItem_Performer") },
			}
		},
		{
			Str8LitComp("_performingOrganization"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_requestingOrganization"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_costCenter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_bodysite_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_bodysite"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_factorOverride"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_priceOverride"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_overrideReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_enterer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_enteredDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			408,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reason_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reason"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_service_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_service"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_product"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			456,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_productReference") },
				{ ValueType::ClassReference, Str8LitComp("_productCodeableConcept") },
			}
		},
		{
			Str8LitComp("_product_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			464,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_account_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_account"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("_supportingInformation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_supportingInformation"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ChargeItem_Performer"),
	80,
	8,
{ 0x80, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ChargeItem_Performer") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_function"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_actor"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ChargeItemDefinition"),
	544,
	45,
{ 0x801000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ChargeItemDefinition") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_derivedFromUri_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_derivedFromUri"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_partOf_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_partOf"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_replaces_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_replaces"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			312,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			368,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("_jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			424,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_approvalDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			448,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_lastReviewDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			464,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_effectivePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_instance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instance"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_applicability_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_applicability"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			520,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ChargeItemDefinition_Applicability") },
			}
		},
		{
			Str8LitComp("_propertyGroup_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			528,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_propertyGroup"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			536,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ChargeItemDefinition_PropertyGroup") },
			}
		}
	}
}
,{
	Str8Lit("ChargeItemDefinition_Applicability"),
	136,
	9,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ChargeItemDefinition_Applicability") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_expression"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ChargeItemDefinition_PropertyGroup"),
	96,
	10,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ChargeItemDefinition_PropertyGroup") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_applicability_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_applicability"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ChargeItemDefinition_Applicability") },
			}
		},
		{
			Str8LitComp("_priceComponent_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_priceComponent"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ChargeItemDefinition_PropertyGroup_PriceComponent") },
			}
		}
	}
}
,{
	Str8Lit("ChargeItemDefinition_PropertyGroup_PriceComponent"),
	128,
	10,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ChargeItemDefinition_PropertyGroup_PriceComponent") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_amount"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		}
	}
}
,{
	Str8Lit("Claim"),
	464,
	47,
{ 0x4000196c000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_use"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_billablePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_created"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_enterer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_insurer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_provider"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_priority"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_fundsReserve"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_related_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_related"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Claim_Related") },
			}
		},
		{
			Str8LitComp("_prescription"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_originalPrescription"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_payee"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Claim_Payee") },
			}
		},
		{
			Str8LitComp("_referral"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_facility"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_careTeam_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_careTeam"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Claim_CareTeam") },
			}
		},
		{
			Str8LitComp("_supportingInfo_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_supportingInfo"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Claim_SupportingInfo") },
			}
		},
		{
			Str8LitComp("_diagnosis_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_diagnosis"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Claim_Diagnosis") },
			}
		},
		{
			Str8LitComp("_procedure_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_procedure"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Claim_Procedure") },
			}
		},
		{
			Str8LitComp("_insurance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_insurance"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Claim_Insurance") },
			}
		},
		{
			Str8LitComp("_accident"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Claim_Accident") },
			}
		},
		{
			Str8LitComp("_item_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_item"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Claim_Item") },
			}
		},
		{
			Str8LitComp("_total"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		}
	}
}
,{
	Str8Lit("Claim_Related"),
	88,
	9,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_Related") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_claim"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_relationship"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reference"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		}
	}
}
,{
	Str8Lit("Claim_Payee"),
	80,
	8,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_Payee") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_party"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Claim_CareTeam"),
	104,
	11,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_CareTeam") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_provider"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_responsible"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_role"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_qualification"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("Claim_SupportingInfo"),
	152,
	14,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_SupportingInfo") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_timing"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			88,
			16,
			{
				{ ValueType::Date, Str8LitComp("_timingDate") },
				{ ValueType::ClassReference, Str8LitComp("_timingPeriod") },
			}
		},
		{
			Str8LitComp("_timing_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			104,
			4,
			{
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_value"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			112,
			24,
			{
				{ ValueType::Boolean, Str8LitComp("_valueBoolean") },
				{ ValueType::String, Str8LitComp("_valueString") },
				{ ValueType::ClassReference, Str8LitComp("_valueQuantity") },
				{ ValueType::ClassReference, Str8LitComp("_valueAttachment") },
				{ ValueType::ClassReference, Str8LitComp("_valueReference") },
			}
		},
		{
			Str8LitComp("_value_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			136,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
				{ ValueType::ClassReference, Str8LitComp("Attachment") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_reason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("Claim_Diagnosis"),
	120,
	13,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_Diagnosis") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_diagnosis"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_diagnosisCodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("_diagnosisReference") },
			}
		},
		{
			Str8LitComp("_diagnosis_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			80,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_onAdmission"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_packageCode"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("Claim_Procedure"),
	136,
	14,
{ 0x440, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_Procedure") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_procedure"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_procedureCodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("_procedureReference") },
			}
		},
		{
			Str8LitComp("_procedure_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			112,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_udi_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_udi"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Claim_Insurance"),
	144,
	14,
{ 0x2c0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_Insurance") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_focal"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_coverage"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_businessArrangement"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_preAuthRef_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_preAuthRef"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_claimResponse"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Claim_Accident"),
	104,
	10,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_Accident") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_locationAddress") },
				{ ValueType::ClassReference, Str8LitComp("_locationReference") },
			}
		},
		{
			Str8LitComp("_location_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			96,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Address") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Claim_Item"),
	352,
	39,
{ 0x20040, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_Item") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_careTeamSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_careTeamSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_diagnosisSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_diagnosisSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_procedureSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_procedureSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_informationSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_informationSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_revenue"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_programCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_programCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_serviced"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			192,
			16,
			{
				{ ValueType::Date, Str8LitComp("_servicedDate") },
				{ ValueType::ClassReference, Str8LitComp("_servicedPeriod") },
			}
		},
		{
			Str8LitComp("_serviced_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			208,
			4,
			{
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_locationCodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("_locationAddress") },
				{ ValueType::ClassReference, Str8LitComp("_locationReference") },
			}
		},
		{
			Str8LitComp("_location_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			224,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("Address") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_udi_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_udi"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_bodySite"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subSite_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subSite"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_encounter_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_encounter"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_detail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_detail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Claim_Item_Detail") },
			}
		}
	}
}
,{
	Str8Lit("Claim_Item_Detail"),
	208,
	22,
{ 0x240, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_Item_Detail") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_revenue"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_programCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_programCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_udi_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_udi"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_subDetail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subDetail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Claim_Item_Detail_SubDetail") },
			}
		}
	}
}
,{
	Str8Lit("Claim_Item_Detail_SubDetail"),
	192,
	20,
{ 0x240, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Claim_Item_Detail_SubDetail") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_revenue"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_programCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_programCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_udi_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_udi"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse"),
	520,
	48,
{ 0x9ec000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_use"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_created"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_insurer"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_requestor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_request"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_outcome"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_disposition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_preAuthRef"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_preAuthPeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_payeeType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_item_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_item"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ClaimResponse_Item") },
			}
		},
		{
			Str8LitComp("_addItem_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_addItem"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ClaimResponse_AddItem") },
			}
		},
		{
			Str8LitComp("_adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ClaimResponse_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("_total_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_total"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ClaimResponse_Total") },
			}
		},
		{
			Str8LitComp("_payment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ClaimResponse_Payment") },
			}
		},
		{
			Str8LitComp("_fundsReserve"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_formCode"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_form"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Attachment") },
			}
		},
		{
			Str8LitComp("_processNote_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_processNote"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ClaimResponse_ProcessNote") },
			}
		},
		{
			Str8LitComp("_communicationRequest_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_communicationRequest"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_insurance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_insurance"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ClaimResponse_Insurance") },
			}
		},
		{
			Str8LitComp("_error_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_error"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ClaimResponse_Error") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_Item"),
	120,
	13,
{ 0x440, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_Item") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_itemSequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ClaimResponse_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("_detail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_detail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ClaimResponse_Item_Detail") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_Item_Adjudication"),
	112,
	10,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_amount"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_value"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_Item_Detail"),
	120,
	13,
{ 0x440, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_Item_Detail") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_detailSequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ClaimResponse_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("_subDetail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subDetail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ClaimResponse_Item_Detail_SubDetail") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_Item_Detail_SubDetail"),
	104,
	11,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_Item_Detail_SubDetail") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_subDetailSequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ClaimResponse_Item_Adjudication") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_AddItem"),
	328,
	36,
{ 0x200004000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_AddItem") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_itemSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_itemSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_detailSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_detailSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subdetailSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subdetailSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_provider_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_provider"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_programCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_programCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_serviced"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			168,
			16,
			{
				{ ValueType::Date, Str8LitComp("_servicedDate") },
				{ ValueType::ClassReference, Str8LitComp("_servicedPeriod") },
			}
		},
		{
			Str8LitComp("_serviced_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			184,
			4,
			{
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_locationCodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("_locationAddress") },
				{ ValueType::ClassReference, Str8LitComp("_locationReference") },
			}
		},
		{
			Str8LitComp("_location_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			200,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("Address") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_bodySite"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subSite_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subSite"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ClaimResponse_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("_detail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_detail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ClaimResponse_AddItem_Detail") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_AddItem_Detail"),
	184,
	19,
{ 0x10040, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_AddItem_Detail") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ClaimResponse_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("_subDetail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subDetail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ClaimResponse_AddItem_Detail_SubDetail") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_AddItem_Detail_SubDetail"),
	168,
	17,
{ 0x10040, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_AddItem_Detail_SubDetail") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ClaimResponse_Item_Adjudication") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_Total"),
	80,
	8,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_Total") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_amount"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_Payment"),
	120,
	12,
{ 0x440, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_Payment") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_adjustment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_adjustmentReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_amount"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_ProcessNote"),
	128,
	10,
{ 0x100, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_ProcessNote") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_number"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_Insurance"),
	120,
	11,
{ 0x1c0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_Insurance") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_focal"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_coverage"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_businessArrangement"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_claimResponse"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ClaimResponse_Error"),
	96,
	10,
{ 0x200, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClaimResponse_Error") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_itemSequence"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_detailSequence"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subDetailSequence"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("ClinicalImpression"),
	448,
	42,
{ 0x44000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClinicalImpression") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_statusReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_effective"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			240,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("_effectiveDateTime") },
				{ ValueType::ClassReference, Str8LitComp("_effectivePeriod") },
			}
		},
		{
			Str8LitComp("_effective_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			256,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_assessor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_previous"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_problem_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_problem"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_investigation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_investigation"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ClinicalImpression_Investigation") },
			}
		},
		{
			Str8LitComp("_protocol_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_protocol"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_summary"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_finding_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_finding"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ClinicalImpression_Finding") },
			}
		},
		{
			Str8LitComp("_prognosisCodeableConcept_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_prognosisCodeableConcept"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_prognosisReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_prognosisReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_supportingInfo_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_supportingInfo"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("ClinicalImpression_Investigation"),
	88,
	9,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClinicalImpression_Investigation") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_item_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_item"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ClinicalImpression_Finding"),
	104,
	9,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ClinicalImpression_Finding") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_itemCodeableConcept"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_itemReference"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_basis"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CodeSystem"),
	624,
	45,
{ 0x1000040000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CodeSystem") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("_jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			400,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			424,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_caseSensitive"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_valueSet"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			456,
			24,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_hierarchyMeaning"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			480,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_compositional"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_versionNeeded"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_content"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			520,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_supplements"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			544,
			24,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_count"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			568,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_filter_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			576,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_filter"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			584,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeSystem_Filter") },
			}
		},
		{
			Str8LitComp("_property_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			592,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_property"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			600,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeSystem_Property") },
			}
		},
		{
			Str8LitComp("_concept_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			608,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_concept"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			616,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeSystem_Concept") },
			}
		}
	}
}
,{
	Str8Lit("CodeSystem_Filter"),
	152,
	11,
{ 0x640, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CodeSystem_Filter") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_operator_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_operator"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_value"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CodeSystem_Property"),
	160,
	10,
{ 0x240, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CodeSystem_Property") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_uri"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CodeSystem_Concept"),
	184,
	15,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CodeSystem_Concept") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_display"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_definition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_designation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_designation"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeSystem_Concept_Designation") },
			}
		},
		{
			Str8LitComp("_property_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_property"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeSystem_Concept_Property") },
			}
		},
		{
			Str8LitComp("_concept_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_concept"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeSystem_Concept") },
			}
		}
	}
}
,{
	Str8Lit("CodeSystem_Concept_Designation"),
	120,
	9,
{ 0x100, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CodeSystem_Concept_Designation") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_use"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_value"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CodeSystem_Concept_Property"),
	120,
	9,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CodeSystem_Concept_Property") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_value"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			88,
			24,
			{
				{ ValueType::Code, Str8LitComp("_valueCode") },
				{ ValueType::ClassReference, Str8LitComp("_valueCoding") },
				{ ValueType::String, Str8LitComp("_valueString") },
				{ ValueType::Integer, Str8LitComp("_valueInteger") },
				{ ValueType::Boolean, Str8LitComp("_valueBoolean") },
				{ ValueType::DateTime, Str8LitComp("_valueDateTime") },
				{ ValueType::Decimal, Str8LitComp("_valueDecimal") },
			}
		},
		{
			Str8LitComp("_value_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			112,
			4,
			{
				{ ValueType::Code, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Coding") },
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::Integer, Str8LitComp("") },
				{ ValueType::Boolean, Str8LitComp("") },
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::Decimal, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Communication"),
	488,
	49,
{ 0x1000000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Communication") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_instantiatesCanonical_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instantiatesCanonical"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instantiatesUri_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instantiatesUri"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_basedOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_basedOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_partOf_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_partOf"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_inResponseTo_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_inResponseTo"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_statusReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_priority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_medium_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_medium"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_topic"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_about_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_about"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_sent"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			368,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_received"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			384,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_recipient_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_recipient"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_sender"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_payload_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_payload"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Communication_Payload") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("Communication_Payload"),
	96,
	8,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Communication_Payload") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_content"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("_contentString") },
				{ ValueType::ClassReference, Str8LitComp("_contentAttachment") },
				{ ValueType::ClassReference, Str8LitComp("_contentReference") },
			}
		},
		{
			Str8LitComp("_content_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			88,
			4,
			{
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Attachment") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("CommunicationRequest"),
	464,
	46,
{ 0x80000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CommunicationRequest") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_basedOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_basedOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_replaces_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_replaces"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_groupIdentifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_statusReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_priority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_doNotPerform"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_medium_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_medium"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_about_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_about"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_payload_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_payload"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CommunicationRequest_Payload") },
			}
		},
		{
			Str8LitComp("_occurrence"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			344,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("_occurrenceDateTime") },
				{ ValueType::ClassReference, Str8LitComp("_occurrencePeriod") },
			}
		},
		{
			Str8LitComp("_occurrence_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			360,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_authoredOn"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			368,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_requester"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_recipient_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_recipient"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_sender"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("CommunicationRequest_Payload"),
	96,
	8,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CommunicationRequest_Payload") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_content"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("_contentString") },
				{ ValueType::ClassReference, Str8LitComp("_contentAttachment") },
				{ ValueType::ClassReference, Str8LitComp("_contentReference") },
			}
		},
		{
			Str8LitComp("_content_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			88,
			4,
			{
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Attachment") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("CompartmentDefinition"),
	416,
	29,
{ 0x600d000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CompartmentDefinition") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("_purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_search"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_resource_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_resource"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CompartmentDefinition_Resource") },
			}
		}
	}
}
,{
	Str8Lit("CompartmentDefinition_Resource"),
	128,
	10,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CompartmentDefinition_Resource") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_param_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_param"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_documentation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Composition"),
	368,
	33,
{ 0x686000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Composition") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_author"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_confidentiality"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_attester_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_attester"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Composition_Attester") },
			}
		},
		{
			Str8LitComp("_custodian"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_relatesTo_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_relatesTo"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Composition_RelatesTo") },
			}
		},
		{
			Str8LitComp("_event_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_event"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Composition_Event") },
			}
		},
		{
			Str8LitComp("_section_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_section"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Composition_Section") },
			}
		}
	}
}
,{
	Str8Lit("Composition_Attester"),
	112,
	9,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Composition_Attester") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_mode"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_time"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_party"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Composition_RelatesTo"),
	104,
	9,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Composition_RelatesTo") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_target"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_targetIdentifier") },
				{ ValueType::ClassReference, Str8LitComp("_targetReference") },
			}
		},
		{
			Str8LitComp("_target_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			96,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Composition_Event"),
	104,
	11,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Composition_Event") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_detail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_detail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Composition_Section"),
	200,
	19,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Composition_Section") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_author"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_focus"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_mode"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_orderedBy"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_entry_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_entry"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_emptyReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_section_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_section"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Composition_Section") },
			}
		}
	}
}
,{
	Str8Lit("ConceptMap"),
	520,
	36,
{ 0x20000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ConceptMap") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			336,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("_jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			392,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			416,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_source"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			440,
			24,
			{
				{ ValueType::Uri, Str8LitComp("_sourceUri") },
				{ ValueType::Canonical, Str8LitComp("_sourceCanonical") },
			}
		},
		{
			Str8LitComp("_source_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			464,
			4,
			{
				{ ValueType::Uri, Str8LitComp("") },
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_target"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			472,
			24,
			{
				{ ValueType::Uri, Str8LitComp("_targetUri") },
				{ ValueType::Canonical, Str8LitComp("_targetCanonical") },
			}
		},
		{
			Str8LitComp("_target_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			496,
			4,
			{
				{ ValueType::Uri, Str8LitComp("") },
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_group_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_group"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ConceptMap_Group") },
			}
		}
	}
}
,{
	Str8Lit("ConceptMap_Group"),
	184,
	13,
{ 0x800, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ConceptMap_Group") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_source"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_sourceVersion"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_target"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_targetVersion"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_element_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_element"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ConceptMap_Group_Element") },
			}
		},
		{
			Str8LitComp("_unmapped"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ConceptMap_Group_Unmapped") },
			}
		}
	}
}
,{
	Str8Lit("ConceptMap_Group_Element"),
	128,
	10,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ConceptMap_Group_Element") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_display"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_target_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_target"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ConceptMap_Group_Element_Target") },
			}
		}
	}
}
,{
	Str8Lit("ConceptMap_Group_Element_Target"),
	192,
	14,
{ 0x100, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ConceptMap_Group_Element_Target") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_display"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_equivalence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_comment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_dependsOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_dependsOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ConceptMap_Group_Element_Target_DependsOn") },
			}
		},
		{
			Str8LitComp("_product_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_product"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ConceptMap_Group_Element_Target_DependsOn") },
			}
		}
	}
}
,{
	Str8Lit("ConceptMap_Group_Element_Target_DependsOn"),
	160,
	10,
{ 0x140, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ConceptMap_Group_Element_Target_DependsOn") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_property"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_system"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_value"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_display"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ConceptMap_Group_Unmapped"),
	160,
	10,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ConceptMap_Group_Unmapped") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_mode"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_display"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			24,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Condition"),
	384,
	37,
{ 0x400000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Condition") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_clinicalStatus"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_verificationStatus"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_severity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_bodySite_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_bodySite"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_onset"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			240,
			24,
			{
				{ ValueType::DateTime, Str8LitComp("_onsetDateTime") },
				{ ValueType::ClassReference, Str8LitComp("_onsetAge") },
				{ ValueType::ClassReference, Str8LitComp("_onsetPeriod") },
				{ ValueType::ClassReference, Str8LitComp("_onsetRange") },
				{ ValueType::String, Str8LitComp("_onsetString") },
			}
		},
		{
			Str8LitComp("_onset_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			264,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Age") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
				{ ValueType::ClassReference, Str8LitComp("Range") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_abatement"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			272,
			24,
			{
				{ ValueType::DateTime, Str8LitComp("_abatementDateTime") },
				{ ValueType::ClassReference, Str8LitComp("_abatementAge") },
				{ ValueType::ClassReference, Str8LitComp("_abatementPeriod") },
				{ ValueType::ClassReference, Str8LitComp("_abatementRange") },
				{ ValueType::String, Str8LitComp("_abatementString") },
			}
		},
		{
			Str8LitComp("_abatement_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			296,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Age") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
				{ ValueType::ClassReference, Str8LitComp("Range") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_recordedDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_recorder"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_asserter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_stage_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_stage"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Condition_Stage") },
			}
		},
		{
			Str8LitComp("_evidence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_evidence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Condition_Evidence") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("Condition_Stage"),
	96,
	10,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Condition_Stage") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_summary"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_assessment_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_assessment"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("Condition_Evidence"),
	96,
	10,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Condition_Evidence") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_detail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_detail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Consent"),
	328,
	32,
{ 0x2c000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Consent") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_scope"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_patient"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_dateTime"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_performer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_performer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_organization_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_organization"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_source"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			264,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_sourceAttachment") },
				{ ValueType::ClassReference, Str8LitComp("_sourceReference") },
			}
		},
		{
			Str8LitComp("_source_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			272,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Attachment") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_policy_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_policy"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Consent_Policy") },
			}
		},
		{
			Str8LitComp("_policyRule"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_verification_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_verification"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Consent_Verification") },
			}
		},
		{
			Str8LitComp("_provision"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Consent_Provision") },
			}
		}
	}
}
,{
	Str8Lit("Consent_Policy"),
	112,
	8,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Consent_Policy") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_authority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_uri"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Consent_Verification"),
	96,
	9,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Consent_Verification") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_verified"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_verifiedWith"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_verificationDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Consent_Provision"),
	232,
	25,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Consent_Provision") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_actor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_actor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Consent_Provision_Actor") },
			}
		},
		{
			Str8LitComp("_action_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_action"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_securityLabel_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_securityLabel"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_purpose_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_purpose"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_class_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_class"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_code_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_dataPeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_data_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_data"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Consent_Provision_Data") },
			}
		},
		{
			Str8LitComp("_provision_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_provision"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Consent_Provision") },
			}
		}
	}
}
,{
	Str8Lit("Consent_Provision_Actor"),
	80,
	8,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Consent_Provision_Actor") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_role"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reference"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Consent_Provision_Data"),
	96,
	8,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Consent_Provision_Data") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_meaning"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reference"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Contract"),
	656,
	61,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_legalState"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_instantiatesCanonical"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_instantiatesUri"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contentDerivative"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_issued"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_applies"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_expirationType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subject_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_authority_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_authority"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_domain_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_domain"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_site_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_site"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			400,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subtitle"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			424,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_alias_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_alias"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_author"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_scope"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_topic"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			480,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_topicCodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("_topicReference") },
			}
		},
		{
			Str8LitComp("_topic_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			488,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subType_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subType"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_contentDefinition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			520,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Contract_ContentDefinition") },
			}
		},
		{
			Str8LitComp("_term_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			528,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_term"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			536,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Contract_Term") },
			}
		},
		{
			Str8LitComp("_supportingInfo_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			544,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_supportingInfo"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			552,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_relevantHistory_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			560,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_relevantHistory"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			568,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_signer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			576,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_signer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			584,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Contract_Signer") },
			}
		},
		{
			Str8LitComp("_friendly_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			592,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_friendly"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			600,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Contract_Friendly") },
			}
		},
		{
			Str8LitComp("_legal_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			608,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_legal"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			616,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Contract_Legal") },
			}
		},
		{
			Str8LitComp("_rule_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			624,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_rule"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			632,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Contract_Rule") },
			}
		},
		{
			Str8LitComp("_legallyBinding"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			640,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_legallyBindingAttachment") },
				{ ValueType::ClassReference, Str8LitComp("_legallyBindingReference") },
			}
		},
		{
			Str8LitComp("_legallyBinding_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			648,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Attachment") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Contract_ContentDefinition"),
	152,
	12,
{ 0x440, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_ContentDefinition") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_publicationDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_publicationStatus"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Term"),
	224,
	23,
{ 0x10000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Term") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_issued"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_applies"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_topic"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_topicCodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("_topicReference") },
			}
		},
		{
			Str8LitComp("_topic_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			104,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_securityLabel_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_securityLabel"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Contract_Term_SecurityLabel") },
			}
		},
		{
			Str8LitComp("_offer"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Contract_Term_Offer") },
			}
		},
		{
			Str8LitComp("_asset_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_asset"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Contract_Term_Asset") },
			}
		},
		{
			Str8LitComp("_action_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_action"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Contract_Term_Action") },
			}
		},
		{
			Str8LitComp("_group_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_group"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Contract_Term") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Term_SecurityLabel"),
	120,
	13,
{ 0x100, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Term_SecurityLabel") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_number_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_number"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_classification"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_control_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_control"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Term_Offer"),
	208,
	22,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Term_Offer") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_party_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_party"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Contract_Term_Offer_Party") },
			}
		},
		{
			Str8LitComp("_topic"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_decision"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_decisionMode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_decisionMode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_answer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_answer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Contract_Term_Offer_Answer") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_linkId_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_linkId"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_securityLabelNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_securityLabelNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Term_Offer_Party"),
	88,
	9,
{ 0x180, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Term_Offer_Party") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_reference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reference"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_role"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Term_Offer_Answer"),
	96,
	8,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Term_Offer_Answer") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_value"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			64,
			24,
			{
				{ ValueType::Boolean, Str8LitComp("_valueBoolean") },
				{ ValueType::Decimal, Str8LitComp("_valueDecimal") },
				{ ValueType::Integer, Str8LitComp("_valueInteger") },
				{ ValueType::Date, Str8LitComp("_valueDate") },
				{ ValueType::DateTime, Str8LitComp("_valueDateTime") },
				{ ValueType::Time, Str8LitComp("_valueTime") },
				{ ValueType::String, Str8LitComp("_valueString") },
				{ ValueType::Uri, Str8LitComp("_valueUri") },
				{ ValueType::ClassReference, Str8LitComp("_valueAttachment") },
				{ ValueType::ClassReference, Str8LitComp("_valueCoding") },
				{ ValueType::ClassReference, Str8LitComp("_valueQuantity") },
				{ ValueType::ClassReference, Str8LitComp("_valueReference") },
			}
		},
		{
			Str8LitComp("_value_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			88,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
				{ ValueType::Decimal, Str8LitComp("") },
				{ ValueType::Integer, Str8LitComp("") },
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::Time, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::Uri, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Attachment") },
				{ ValueType::ClassReference, Str8LitComp("Coding") },
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Term_Asset"),
	304,
	32,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Term_Asset") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_scope"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_typeReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_typeReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_subtype_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subtype"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_relationship"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_context_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_context"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Contract_Term_Asset_Context") },
			}
		},
		{
			Str8LitComp("_condition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_periodType_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_periodType"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_period_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_usePeriod_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_usePeriod"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_linkId_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_linkId"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_answer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_answer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Contract_Term_Offer_Answer") },
			}
		},
		{
			Str8LitComp("_securityLabelNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_securityLabelNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_valuedItem_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_valuedItem"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Contract_Term_Asset_ValuedItem") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Term_Asset_Context"),
	112,
	10,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Term_Asset_Context") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_reference"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_code_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Term_Asset_ValuedItem"),
	264,
	23,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Term_Asset_ValuedItem") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_entity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_entityCodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("_entityReference") },
			}
		},
		{
			Str8LitComp("_entity_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			72,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_effectiveTime"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_points"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_payment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_paymentDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_responsible"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_recipient"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_linkId_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_linkId"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_securityLabelNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_securityLabelNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Term_Action"),
	352,
	41,
{ 0x2480, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Term_Action") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_doNotPerform"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subject_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Contract_Term_Action_Subject") },
			}
		},
		{
			Str8LitComp("_intent"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_linkId_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_linkId"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_context"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_contextLinkId_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contextLinkId"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_occurrence"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			152,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("_occurrenceDateTime") },
				{ ValueType::ClassReference, Str8LitComp("_occurrencePeriod") },
				{ ValueType::ClassReference, Str8LitComp("_occurrenceTiming") },
			}
		},
		{
			Str8LitComp("_occurrence_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			168,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
				{ ValueType::ClassReference, Str8LitComp("Timing") },
			}
		},
		{
			Str8LitComp("_requester_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_requester"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_requesterLinkId_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_requesterLinkId"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_performerType_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_performerType"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_performerRole"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_performer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_performerLinkId_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_performerLinkId"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_reason_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reason"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonLinkId_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonLinkId"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("_securityLabelNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_securityLabelNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Term_Action_Subject"),
	88,
	9,
{ 0x80, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Term_Action_Subject") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_reference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reference"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_role"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Signer"),
	96,
	10,
{ 0x2c0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Signer") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_party"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_signature_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_signature"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Signature") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Friendly"),
	80,
	8,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Friendly") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_content"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_contentAttachment") },
				{ ValueType::ClassReference, Str8LitComp("_contentReference") },
			}
		},
		{
			Str8LitComp("_content_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			72,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Attachment") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Legal"),
	80,
	8,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Legal") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_content"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_contentAttachment") },
				{ ValueType::ClassReference, Str8LitComp("_contentReference") },
			}
		},
		{
			Str8LitComp("_content_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			72,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Attachment") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Contract_Rule"),
	80,
	8,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Contract_Rule") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_content"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_contentAttachment") },
				{ ValueType::ClassReference, Str8LitComp("_contentReference") },
			}
		},
		{
			Str8LitComp("_content_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			72,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Attachment") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Coverage"),
	384,
	34,
{ 0x1084000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Coverage") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_policyHolder"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_subscriber"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_subscriberId"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_beneficiary"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_dependent"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_relationship"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_payor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_payor"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_class_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_class"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coverage_Class") },
			}
		},
		{
			Str8LitComp("_order"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_network"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_costToBeneficiary_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_costToBeneficiary"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coverage_CostToBeneficiary") },
			}
		},
		{
			Str8LitComp("_subrogation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contract_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contract"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Coverage_Class"),
	120,
	9,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Coverage_Class") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_value"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Coverage_CostToBeneficiary"),
	104,
	11,
{ 0x80, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Coverage_CostToBeneficiary") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_value"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_valueQuantity") },
				{ ValueType::ClassReference, Str8LitComp("_valueMoney") },
			}
		},
		{
			Str8LitComp("_value_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			80,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_exception_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_exception"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coverage_CostToBeneficiary_Exception") },
			}
		}
	}
}
,{
	Str8Lit("Coverage_CostToBeneficiary_Exception"),
	80,
	8,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Coverage_CostToBeneficiary_Exception") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("CoverageEligibilityRequest"),
	336,
	32,
{ 0x1264000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CoverageEligibilityRequest") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_priority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_purpose_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_purpose"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_serviced"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			216,
			16,
			{
				{ ValueType::Date, Str8LitComp("_servicedDate") },
				{ ValueType::ClassReference, Str8LitComp("_servicedPeriod") },
			}
		},
		{
			Str8LitComp("_serviced_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			232,
			4,
			{
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_created"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_enterer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_provider"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_insurer"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_facility"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_supportingInfo_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_supportingInfo"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CoverageEligibilityRequest_SupportingInfo") },
			}
		},
		{
			Str8LitComp("_insurance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_insurance"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CoverageEligibilityRequest_Insurance") },
			}
		},
		{
			Str8LitComp("_item_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_item"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CoverageEligibilityRequest_Item") },
			}
		}
	}
}
,{
	Str8Lit("CoverageEligibilityRequest_SupportingInfo"),
	88,
	9,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CoverageEligibilityRequest_SupportingInfo") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_information"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_appliesToAll"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CoverageEligibilityRequest_Insurance"),
	104,
	9,
{ 0x80, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CoverageEligibilityRequest_Insurance") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_focal"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_coverage"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_businessArrangement"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CoverageEligibilityRequest_Item"),
	176,
	20,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CoverageEligibilityRequest_Item") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_supportingInfoSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_supportingInfoSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_productOrService"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_provider"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_facility"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_diagnosis_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_diagnosis"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CoverageEligibilityRequest_Item_Diagnosis") },
			}
		},
		{
			Str8LitComp("_detail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_detail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("CoverageEligibilityRequest_Item_Diagnosis"),
	80,
	8,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CoverageEligibilityRequest_Item_Diagnosis") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_diagnosis"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_diagnosisCodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("_diagnosisReference") },
			}
		},
		{
			Str8LitComp("_diagnosis_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			72,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("CoverageEligibilityResponse"),
	384,
	32,
{ 0x2d34000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CoverageEligibilityResponse") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_purpose_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_purpose"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_serviced"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			208,
			16,
			{
				{ ValueType::Date, Str8LitComp("_servicedDate") },
				{ ValueType::ClassReference, Str8LitComp("_servicedPeriod") },
			}
		},
		{
			Str8LitComp("_serviced_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			224,
			4,
			{
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_created"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_requestor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_request"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_outcome"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_disposition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_insurer"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_insurance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_insurance"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CoverageEligibilityResponse_Insurance") },
			}
		},
		{
			Str8LitComp("_preAuthRef"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			336,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_form"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_error_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_error"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CoverageEligibilityResponse_Error") },
			}
		}
	}
}
,{
	Str8Lit("CoverageEligibilityResponse_Insurance"),
	104,
	11,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CoverageEligibilityResponse_Insurance") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_coverage"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_inforce"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_benefitPeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_item_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_item"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CoverageEligibilityResponse_Insurance_Item") },
			}
		}
	}
}
,{
	Str8Lit("CoverageEligibilityResponse_Insurance_Item"),
	248,
	23,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CoverageEligibilityResponse_Insurance_Item") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_productOrService"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_provider"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_excluded"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_network"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_unit"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_term"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_benefit_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_benefit"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CoverageEligibilityResponse_Insurance_Item_Benefit") },
			}
		},
		{
			Str8LitComp("_authorizationRequired"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_authorizationSupporting_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_authorizationSupporting"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_authorizationUrl"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("CoverageEligibilityResponse_Insurance_Item_Benefit"),
	136,
	11,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CoverageEligibilityResponse_Insurance_Item_Benefit") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_allowed"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			72,
			24,
			{
				{ ValueType::UnsignedInt, Str8LitComp("_allowedUnsignedInt") },
				{ ValueType::String, Str8LitComp("_allowedString") },
				{ ValueType::ClassReference, Str8LitComp("_allowedMoney") },
			}
		},
		{
			Str8LitComp("_allowed_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			96,
			4,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_used"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			104,
			24,
			{
				{ ValueType::UnsignedInt, Str8LitComp("_usedUnsignedInt") },
				{ ValueType::String, Str8LitComp("_usedString") },
				{ ValueType::ClassReference, Str8LitComp("_usedMoney") },
			}
		},
		{
			Str8LitComp("_used_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			128,
			4,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		}
	}
}
,{
	Str8Lit("CoverageEligibilityResponse_Error"),
	72,
	7,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("CoverageEligibilityResponse_Error") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("DetectedIssue"),
	352,
	29,
{ 0x4000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DetectedIssue") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_severity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_patient"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_identified"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			224,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("_identifiedDateTime") },
				{ ValueType::ClassReference, Str8LitComp("_identifiedPeriod") },
			}
		},
		{
			Str8LitComp("_identified_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			240,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_author"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_implicated_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_implicated"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_evidence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_evidence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("DetectedIssue_Evidence") },
			}
		},
		{
			Str8LitComp("_detail"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reference"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			312,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_mitigation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_mitigation"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("DetectedIssue_Mitigation") },
			}
		}
	}
}
,{
	Str8Lit("DetectedIssue_Evidence"),
	96,
	10,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DetectedIssue_Evidence") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_detail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_detail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("DetectedIssue_Mitigation"),
	96,
	9,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DetectedIssue_Mitigation") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_action"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_author"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Device"),
	576,
	48,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Device") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_definition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_udiCarrier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_udiCarrier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Device_UdiCarrier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_statusReason_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_statusReason"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_distinctIdentifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_manufacturer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_manufactureDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_expirationDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_lotNumber"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_serialNumber"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_deviceName_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_deviceName"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Device_DeviceName") },
			}
		},
		{
			Str8LitComp("_modelNumber"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			368,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_partNumber"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			392,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_specialization_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_specialization"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Device_Specialization") },
			}
		},
		{
			Str8LitComp("_version_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Device_Version") },
			}
		},
		{
			Str8LitComp("_property_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_property"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Device_Property") },
			}
		},
		{
			Str8LitComp("_patient"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_owner"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactPoint") },
			}
		},
		{
			Str8LitComp("_location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			512,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			536,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			544,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("_safety_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			552,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_safety"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			560,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_parent"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			568,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Device_UdiCarrier"),
	208,
	12,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Device_UdiCarrier") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_deviceIdentifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_issuer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_jurisdiction"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_carrierAIDC"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			24,
			{
				{ ValueType::Base64Binary, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_carrierHRF"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_entryType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Device_DeviceName"),
	112,
	8,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Device_DeviceName") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Device_Specialization"),
	96,
	8,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Device_Specialization") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_systemType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Device_Version"),
	104,
	9,
{ 0x100, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Device_Version") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_component"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_value"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Device_Property"),
	104,
	11,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Device_Property") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_valueQuantity_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_valueQuantity"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_valueCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_valueCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("DeviceDefinition"),
	496,
	48,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceDefinition") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_udiDeviceIdentifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_udiDeviceIdentifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("DeviceDefinition_UdiDeviceIdentifier") },
			}
		},
		{
			Str8LitComp("_manufacturer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			176,
			24,
			{
				{ ValueType::String, Str8LitComp("_manufacturerString") },
				{ ValueType::ClassReference, Str8LitComp("_manufacturerReference") },
			}
		},
		{
			Str8LitComp("_manufacturer_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			200,
			4,
			{
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_deviceName_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_deviceName"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("DeviceDefinition_DeviceName") },
			}
		},
		{
			Str8LitComp("_modelNumber"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_specialization_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_specialization"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("DeviceDefinition_Specialization") },
			}
		},
		{
			Str8LitComp("_version_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_safety_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_safety"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_shelfLifeStorage_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_shelfLifeStorage"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ProductShelfLife") },
			}
		},
		{
			Str8LitComp("_physicalCharacteristics"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ProdCharacteristic") },
			}
		},
		{
			Str8LitComp("_languageCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_languageCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_capability_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_capability"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("DeviceDefinition_Capability") },
			}
		},
		{
			Str8LitComp("_property_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_property"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("DeviceDefinition_Property") },
			}
		},
		{
			Str8LitComp("_owner"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactPoint") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			400,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_onlineInformation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			424,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("_quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_parentDevice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_material_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_material"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("DeviceDefinition_Material") },
			}
		}
	}
}
,{
	Str8Lit("DeviceDefinition_UdiDeviceIdentifier"),
	136,
	9,
{ 0x1c0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceDefinition_UdiDeviceIdentifier") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_deviceIdentifier"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_issuer"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_jurisdiction"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("DeviceDefinition_DeviceName"),
	112,
	8,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceDefinition_DeviceName") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("DeviceDefinition_Specialization"),
	112,
	8,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceDefinition_Specialization") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_systemType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("DeviceDefinition_Capability"),
	88,
	9,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceDefinition_Capability") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_description_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("DeviceDefinition_Property"),
	104,
	11,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceDefinition_Property") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_valueQuantity_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_valueQuantity"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_valueCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_valueCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("DeviceDefinition_Material"),
	88,
	9,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceDefinition_Material") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_substance"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_alternate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_allergenicIndicator"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("DeviceMetric"),
	288,
	24,
{ 0x104000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceMetric") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_unit"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_source"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_parent"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_operationalStatus"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_color"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_measurementPeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Timing") },
			}
		},
		{
			Str8LitComp("_calibration_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_calibration"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("DeviceMetric_Calibration") },
			}
		}
	}
}
,{
	Str8Lit("DeviceMetric_Calibration"),
	128,
	9,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceMetric_Calibration") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_state"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_time"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("DeviceRequest"),
	512,
	50,
{ 0x45000000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceRequest") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_instantiatesCanonical_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instantiatesCanonical"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instantiatesUri_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instantiatesUri"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_basedOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_basedOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_priorRequest_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_priorRequest"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_groupIdentifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_intent"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_priority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_codeReference") },
				{ ValueType::ClassReference, Str8LitComp("_codeCodeableConcept") },
			}
		},
		{
			Str8LitComp("_code_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			312,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_parameter_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_parameter"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("DeviceRequest_Parameter") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_occurrence"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			352,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("_occurrenceDateTime") },
				{ ValueType::ClassReference, Str8LitComp("_occurrencePeriod") },
				{ ValueType::ClassReference, Str8LitComp("_occurrenceTiming") },
			}
		},
		{
			Str8LitComp("_occurrence_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			368,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
				{ ValueType::ClassReference, Str8LitComp("Timing") },
			}
		},
		{
			Str8LitComp("_authoredOn"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_requester"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_performerType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_performer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_insurance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_insurance"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_supportingInfo_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_supportingInfo"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("_relevantHistory_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_relevantHistory"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("DeviceRequest_Parameter"),
	88,
	9,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceRequest_Parameter") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_value"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_valueCodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("_valueQuantity") },
				{ ValueType::ClassReference, Str8LitComp("_valueRange") },
				{ ValueType::Boolean, Str8LitComp("_valueBoolean") },
			}
		},
		{
			Str8LitComp("_value_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			80,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
				{ ValueType::ClassReference, Str8LitComp("Range") },
				{ ValueType::Boolean, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("DeviceUseStatement"),
	336,
	32,
{ 0x1030000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DeviceUseStatement") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_basedOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_basedOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_derivedFrom_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_derivedFrom"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_timing"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			224,
			16,
			{
				{ ValueType::ClassReference, Str8LitComp("_timingTiming") },
				{ ValueType::ClassReference, Str8LitComp("_timingPeriod") },
				{ ValueType::DateTime, Str8LitComp("_timingDateTime") },
			}
		},
		{
			Str8LitComp("_timing_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			240,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Timing") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_recordedOn"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_source"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_device"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_bodySite"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("DiagnosticReport"),
	432,
	42,
{ 0x90000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DiagnosticReport") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_basedOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_basedOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_effective"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			240,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("_effectiveDateTime") },
				{ ValueType::ClassReference, Str8LitComp("_effectivePeriod") },
			}
		},
		{
			Str8LitComp("_effective_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			256,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_issued"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_performer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_performer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_resultsInterpreter_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_resultsInterpreter"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_specimen_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_specimen"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_result_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_result"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_imagingStudy_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_imagingStudy"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_media_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_media"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("DiagnosticReport_Media") },
			}
		},
		{
			Str8LitComp("_conclusion"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_conclusionCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_conclusionCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_presentedForm_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_presentedForm"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Attachment") },
			}
		}
	}
}
,{
	Str8Lit("DiagnosticReport_Media"),
	96,
	8,
{ 0x80, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DiagnosticReport_Media") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_comment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_link"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("DocumentManifest"),
	336,
	29,
{ 0x4008000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DocumentManifest") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_masterIdentifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_created"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_author"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_recipient_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_recipient"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_source"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_content_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_content"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_related_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_related"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("DocumentManifest_Related") },
			}
		}
	}
}
,{
	Str8Lit("DocumentManifest_Related"),
	80,
	8,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DocumentManifest_Related") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_ref"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("DocumentReference"),
	376,
	34,
{ 0x100008000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DocumentReference") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_masterIdentifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_docStatus"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			16,
			{
				{ ValueType::Instant, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_author"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_authenticator"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_custodian"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_relatesTo_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_relatesTo"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("DocumentReference_RelatesTo") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			312,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_securityLabel_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_securityLabel"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_content_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_content"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("DocumentReference_Content") },
			}
		},
		{
			Str8LitComp("_context"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("DocumentReference_Context") },
			}
		}
	}
}
,{
	Str8Lit("DocumentReference_RelatesTo"),
	96,
	8,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DocumentReference_RelatesTo") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_target"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("DocumentReference_Content"),
	80,
	8,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DocumentReference_Content") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_attachment"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Attachment") },
			}
		},
		{
			Str8LitComp("_format"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		}
	}
}
,{
	Str8Lit("DocumentReference_Context"),
	144,
	16,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DocumentReference_Context") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_encounter_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_encounter"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_event_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_event"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_facilityType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_practiceSetting"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_sourcePatientInfo"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_related_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_related"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("DomainResource"),
	144,
	12,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("DomainResource") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		}
	}
}
,{
	Str8Lit("EffectEvidenceSynthesis"),
	672,
	59,
{ 0xf000000040000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EffectEvidenceSynthesis") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			336,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("_useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("_jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			408,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_approvalDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			432,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_lastReviewDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			448,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_effectivePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_topic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_topic"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_author"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_editor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_editor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_reviewer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			520,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reviewer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			528,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_endorser_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			536,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_endorser"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			544,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_relatedArtifact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			552,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_relatedArtifact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			560,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("RelatedArtifact") },
			}
		},
		{
			Str8LitComp("_synthesisType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			568,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_studyType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			576,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_population"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			584,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_exposure"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			592,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_exposureAlternative"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			600,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_outcome"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			608,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_sampleSize"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			616,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("EffectEvidenceSynthesis_SampleSize") },
			}
		},
		{
			Str8LitComp("_resultsByExposure_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			624,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_resultsByExposure"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			632,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("EffectEvidenceSynthesis_ResultsByExposure") },
			}
		},
		{
			Str8LitComp("_effectEstimate_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			640,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_effectEstimate"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			648,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("EffectEvidenceSynthesis_EffectEstimate") },
			}
		},
		{
			Str8LitComp("_certainty_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			656,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_certainty"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			664,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("EffectEvidenceSynthesis_Certainty") },
			}
		}
	}
}
,{
	Str8Lit("EffectEvidenceSynthesis_SampleSize"),
	104,
	9,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EffectEvidenceSynthesis_SampleSize") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_numberOfStudies"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Integer, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_numberOfParticipants"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::Integer, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("EffectEvidenceSynthesis_ResultsByExposure"),
	128,
	10,
{ 0x200, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EffectEvidenceSynthesis_ResultsByExposure") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_exposureState"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_variantState"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_riskEvidenceSynthesis"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("EffectEvidenceSynthesis_EffectEstimate"),
	152,
	13,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EffectEvidenceSynthesis_EffectEstimate") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_variantState"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_value"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_unitOfMeasure"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_precisionEstimate_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_precisionEstimate"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate") },
			}
		}
	}
}
,{
	Str8Lit("EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate"),
	144,
	10,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EffectEvidenceSynthesis_EffectEstimate_PrecisionEstimate") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_level"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_from"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_to"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("EffectEvidenceSynthesis_Certainty"),
	112,
	12,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EffectEvidenceSynthesis_Certainty") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_rating_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_rating"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("_certaintySubcomponent_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_certaintySubcomponent"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("EffectEvidenceSynthesis_Certainty_CertaintySubcomponent") },
			}
		}
	}
}
,{
	Str8Lit("EffectEvidenceSynthesis_Certainty_CertaintySubcomponent"),
	104,
	11,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EffectEvidenceSynthesis_Certainty_CertaintySubcomponent") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_rating_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_rating"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("Encounter"),
	448,
	48,
{ 0x24000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Encounter") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_statusHistory_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_statusHistory"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Encounter_StatusHistory") },
			}
		},
		{
			Str8LitComp("_class"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_classHistory_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_classHistory"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Encounter_ClassHistory") },
			}
		},
		{
			Str8LitComp("_type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_serviceType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_priority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_episodeOfCare_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_episodeOfCare"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_basedOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_basedOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_participant_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_participant"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Encounter_Participant") },
			}
		},
		{
			Str8LitComp("_appointment_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_appointment"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_length"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Duration") },
			}
		},
		{
			Str8LitComp("_reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_diagnosis_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_diagnosis"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Encounter_Diagnosis") },
			}
		},
		{
			Str8LitComp("_account_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_account"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_hospitalization"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Encounter_Hospitalization") },
			}
		},
		{
			Str8LitComp("_location_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_location"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Encounter_Location") },
			}
		},
		{
			Str8LitComp("_serviceProvider"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_partOf"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Encounter_StatusHistory"),
	96,
	8,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Encounter_StatusHistory") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("Encounter_ClassHistory"),
	80,
	8,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Encounter_ClassHistory") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_class"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("Encounter_Participant"),
	96,
	10,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Encounter_Participant") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_individual"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Encounter_Diagnosis"),
	88,
	9,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Encounter_Diagnosis") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_condition"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_use"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_rank"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Encounter_Hospitalization"),
	160,
	18,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Encounter_Hospitalization") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_preAdmissionIdentifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_origin"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_admitSource"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reAdmission"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_dietPreference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_dietPreference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_specialCourtesy_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_specialCourtesy"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_specialArrangement_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_specialArrangement"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_destination"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_dischargeDisposition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("Encounter_Location"),
	112,
	10,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Encounter_Location") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_location"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_physicalType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("Endpoint"),
	320,
	28,
{ 0x240c000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Endpoint") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_connectionType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_managingOrganization"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactPoint") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_payloadType_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_payloadType"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_payloadMimeType_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_payloadMimeType"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_address"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			24,
			{
				{ ValueType::Url, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_header_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_header"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("EnrollmentRequest"),
	232,
	20,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EnrollmentRequest") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_created"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_insurer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_provider"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_candidate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_coverage"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("EnrollmentResponse"),
	272,
	21,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EnrollmentResponse") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_request"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_outcome"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_disposition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_created"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_organization"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_requestProvider"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("EpisodeOfCare"),
	312,
	31,
{ 0x204000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EpisodeOfCare") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_statusHistory_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_statusHistory"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("EpisodeOfCare_StatusHistory") },
			}
		},
		{
			Str8LitComp("_type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_diagnosis_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_diagnosis"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("EpisodeOfCare_Diagnosis") },
			}
		},
		{
			Str8LitComp("_patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_managingOrganization"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_referralRequest_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_referralRequest"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_careManager"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_team_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_team"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_account_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_account"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("EpisodeOfCare_StatusHistory"),
	96,
	8,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EpisodeOfCare_StatusHistory") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("EpisodeOfCare_Diagnosis"),
	88,
	9,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EpisodeOfCare_Diagnosis") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_condition"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_role"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_rank"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("EventDefinition"),
	664,
	52,
{ 0x8000000080000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EventDefinition") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subtitle"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_subjectCodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("_subjectReference") },
			}
		},
		{
			Str8LitComp("_subject_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			320,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			384,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("_jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			440,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_usage"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			464,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			488,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_approvalDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			512,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_lastReviewDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			528,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_effectivePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			544,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_topic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			552,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_topic"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			560,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			568,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_author"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			576,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_editor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			584,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_editor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			592,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_reviewer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			600,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reviewer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			608,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_endorser_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			616,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_endorser"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			624,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_relatedArtifact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			632,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_relatedArtifact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			640,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("RelatedArtifact") },
			}
		},
		{
			Str8LitComp("_trigger_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			648,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_trigger"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			656,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("TriggerDefinition") },
			}
		}
	}
}
,{
	Str8Lit("Evidence"),
	656,
	53,
{ 0x1000000100000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Evidence") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_shortTitle"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subtitle"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			384,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("_useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("_jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			456,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_approvalDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			480,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_lastReviewDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			496,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_effectivePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_topic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			520,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_topic"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			528,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			536,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_author"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			544,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_editor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			552,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_editor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			560,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_reviewer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			568,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reviewer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			576,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_endorser_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			584,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_endorser"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			592,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_relatedArtifact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			600,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_relatedArtifact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			608,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("RelatedArtifact") },
			}
		},
		{
			Str8LitComp("_exposureBackground"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			616,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_exposureVariant_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			624,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_exposureVariant"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			632,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_outcome_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			640,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_outcome"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			648,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("EvidenceVariable"),
	656,
	51,
{ 0x4000000100000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EvidenceVariable") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_shortTitle"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subtitle"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			384,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("_useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("_jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			456,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_approvalDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			480,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_lastReviewDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			496,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_effectivePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_topic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			520,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_topic"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			528,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			536,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_author"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			544,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_editor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			552,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_editor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			560,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_reviewer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			568,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reviewer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			576,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_endorser_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			584,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_endorser"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			592,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_relatedArtifact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			600,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_relatedArtifact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			608,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("RelatedArtifact") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			616,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_characteristic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			640,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_characteristic"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			648,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("EvidenceVariable_Characteristic") },
			}
		}
	}
}
,{
	Str8Lit("EvidenceVariable_Characteristic"),
	200,
	16,
{ 0x80, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("EvidenceVariable_Characteristic") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_definition"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			88,
			24,
			{
				{ ValueType::ClassReference, Str8LitComp("_definitionReference") },
				{ ValueType::Canonical, Str8LitComp("_definitionCanonical") },
				{ ValueType::ClassReference, Str8LitComp("_definitionCodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("_definitionExpression") },
				{ ValueType::ClassReference, Str8LitComp("_definitionDataRequirement") },
				{ ValueType::ClassReference, Str8LitComp("_definitionTriggerDefinition") },
			}
		},
		{
			Str8LitComp("_definition_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			112,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
				{ ValueType::Canonical, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("Expression") },
				{ ValueType::ClassReference, Str8LitComp("DataRequirement") },
				{ ValueType::ClassReference, Str8LitComp("TriggerDefinition") },
			}
		},
		{
			Str8LitComp("_usageContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_usageContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("_exclude"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_participantEffective"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			144,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("_participantEffectiveDateTime") },
				{ ValueType::ClassReference, Str8LitComp("_participantEffectivePeriod") },
				{ ValueType::ClassReference, Str8LitComp("_participantEffectiveDuration") },
				{ ValueType::ClassReference, Str8LitComp("_participantEffectiveTiming") },
			}
		},
		{
			Str8LitComp("_participantEffective_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			160,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
				{ ValueType::ClassReference, Str8LitComp("Duration") },
				{ ValueType::ClassReference, Str8LitComp("Timing") },
			}
		},
		{
			Str8LitComp("_timeFromStart"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Duration") },
			}
		},
		{
			Str8LitComp("_groupMeasure"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			176,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ExampleScenario"),
	464,
	37,
{ 0x20000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExampleScenario") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("_jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			352,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			376,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_actor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_actor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExampleScenario_Actor") },
			}
		},
		{
			Str8LitComp("_instance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instance"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExampleScenario_Instance") },
			}
		},
		{
			Str8LitComp("_process_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_process"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExampleScenario_Process") },
			}
		},
		{
			Str8LitComp("_workflow_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_workflow"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ExampleScenario_Actor"),
	160,
	10,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExampleScenario_Actor") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_actorId"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ExampleScenario_Instance"),
	192,
	14,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExampleScenario_Instance") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_resourceId"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_version_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExampleScenario_Instance_Version") },
			}
		},
		{
			Str8LitComp("_containedInstance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_containedInstance"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExampleScenario_Instance_ContainedInstance") },
			}
		}
	}
}
,{
	Str8Lit("ExampleScenario_Instance_Version"),
	112,
	8,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExampleScenario_Instance_Version") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_versionId"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ExampleScenario_Instance_ContainedInstance"),
	112,
	8,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExampleScenario_Instance_ContainedInstance") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_resourceId"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_versionId"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ExampleScenario_Process"),
	176,
	12,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExampleScenario_Process") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_preConditions"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_postConditions"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_step_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_step"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExampleScenario_Process_Step") },
			}
		}
	}
}
,{
	Str8Lit("ExampleScenario_Process_Step"),
	112,
	12,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExampleScenario_Process_Step") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_process_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_process"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExampleScenario_Process") },
			}
		},
		{
			Str8LitComp("_pause"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_operation"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExampleScenario_Process_Step_Operation") },
			}
		},
		{
			Str8LitComp("_alternative_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_alternative"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExampleScenario_Process_Step_Alternative") },
			}
		}
	}
}
,{
	Str8Lit("ExampleScenario_Process_Step_Operation"),
	240,
	16,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExampleScenario_Process_Step_Operation") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_number"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_initiator"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_receiver"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_initiatorActive"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_receiverActive"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_request"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExampleScenario_Instance_ContainedInstance") },
			}
		},
		{
			Str8LitComp("_response"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExampleScenario_Instance_ContainedInstance") },
			}
		}
	}
}
,{
	Str8Lit("ExampleScenario_Process_Step_Alternative"),
	128,
	10,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExampleScenario_Process_Step_Alternative") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_step_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_step"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExampleScenario_Process_Step") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit"),
	680,
	70,
{ 0x10001000d6c000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_use"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_billablePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_created"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_enterer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_insurer"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_provider"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_priority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_fundsReserveRequested"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_fundsReserve"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_related_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_related"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_Related") },
			}
		},
		{
			Str8LitComp("_prescription"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_originalPrescription"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_payee"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_Payee") },
			}
		},
		{
			Str8LitComp("_referral"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_facility"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_claim"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_claimResponse"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_outcome"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			376,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_disposition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			400,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_preAuthRef_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_preAuthRef"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_preAuthRefPeriod_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_preAuthRefPeriod"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_careTeam_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_careTeam"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_CareTeam") },
			}
		},
		{
			Str8LitComp("_supportingInfo_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_supportingInfo"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_SupportingInfo") },
			}
		},
		{
			Str8LitComp("_diagnosis_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_diagnosis"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_Diagnosis") },
			}
		},
		{
			Str8LitComp("_procedure_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_procedure"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_Procedure") },
			}
		},
		{
			Str8LitComp("_precedence"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			520,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_insurance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			528,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_insurance"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			536,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_Insurance") },
			}
		},
		{
			Str8LitComp("_accident"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			544,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_Accident") },
			}
		},
		{
			Str8LitComp("_item_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			552,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_item"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			560,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_Item") },
			}
		},
		{
			Str8LitComp("_addItem_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			568,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_addItem"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			576,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_AddItem") },
			}
		},
		{
			Str8LitComp("_adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			584,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			592,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("_total_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			600,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_total"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			608,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_Total") },
			}
		},
		{
			Str8LitComp("_payment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			616,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_Payment") },
			}
		},
		{
			Str8LitComp("_formCode"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			624,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_form"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			632,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Attachment") },
			}
		},
		{
			Str8LitComp("_processNote_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			640,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_processNote"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			648,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_ProcessNote") },
			}
		},
		{
			Str8LitComp("_benefitPeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			656,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_benefitBalance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			664,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_benefitBalance"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			672,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_BenefitBalance") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Related"),
	88,
	9,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Related") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_claim"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_relationship"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reference"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Payee"),
	80,
	8,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Payee") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_party"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_CareTeam"),
	104,
	11,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_CareTeam") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_provider"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_responsible"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_role"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_qualification"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_SupportingInfo"),
	152,
	14,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_SupportingInfo") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_timing"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			88,
			16,
			{
				{ ValueType::Date, Str8LitComp("_timingDate") },
				{ ValueType::ClassReference, Str8LitComp("_timingPeriod") },
			}
		},
		{
			Str8LitComp("_timing_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			104,
			4,
			{
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_value"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			112,
			24,
			{
				{ ValueType::Boolean, Str8LitComp("_valueBoolean") },
				{ ValueType::String, Str8LitComp("_valueString") },
				{ ValueType::ClassReference, Str8LitComp("_valueQuantity") },
				{ ValueType::ClassReference, Str8LitComp("_valueAttachment") },
				{ ValueType::ClassReference, Str8LitComp("_valueReference") },
			}
		},
		{
			Str8LitComp("_value_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			136,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
				{ ValueType::ClassReference, Str8LitComp("Attachment") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_reason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Diagnosis"),
	120,
	13,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Diagnosis") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_diagnosis"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_diagnosisCodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("_diagnosisReference") },
			}
		},
		{
			Str8LitComp("_diagnosis_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			80,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_onAdmission"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_packageCode"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Procedure"),
	136,
	14,
{ 0x440, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Procedure") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_procedure"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_procedureCodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("_procedureReference") },
			}
		},
		{
			Str8LitComp("_procedure_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			112,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_udi_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_udi"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Insurance"),
	96,
	10,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Insurance") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_focal"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_coverage"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_preAuthRef_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_preAuthRef"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Accident"),
	104,
	10,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Accident") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_locationAddress") },
				{ ValueType::ClassReference, Str8LitComp("_locationReference") },
			}
		},
		{
			Str8LitComp("_location_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			96,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Address") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Item"),
	384,
	43,
{ 0x20040, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Item") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_careTeamSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_careTeamSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_diagnosisSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_diagnosisSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_procedureSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_procedureSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_informationSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_informationSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_revenue"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_programCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_programCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_serviced"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			192,
			16,
			{
				{ ValueType::Date, Str8LitComp("_servicedDate") },
				{ ValueType::ClassReference, Str8LitComp("_servicedPeriod") },
			}
		},
		{
			Str8LitComp("_serviced_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			208,
			4,
			{
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_locationCodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("_locationAddress") },
				{ ValueType::ClassReference, Str8LitComp("_locationReference") },
			}
		},
		{
			Str8LitComp("_location_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			224,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("Address") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_udi_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_udi"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_bodySite"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subSite_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subSite"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_encounter_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_encounter"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("_detail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_detail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_Item_Detail") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Item_Adjudication"),
	112,
	10,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_amount"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_value"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Item_Detail"),
	240,
	26,
{ 0x240, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Item_Detail") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_revenue"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_programCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_programCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_udi_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_udi"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("_subDetail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subDetail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_Item_Detail_SubDetail") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Item_Detail_SubDetail"),
	224,
	24,
{ 0x240, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Item_Detail_SubDetail") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_sequence"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_revenue"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_programCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_programCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_udi_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_udi"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_Item_Adjudication") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_AddItem"),
	328,
	36,
{ 0x4000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_AddItem") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_itemSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_itemSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_detailSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_detailSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subDetailSequence_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subDetailSequence"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_provider_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_provider"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_programCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_programCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_serviced"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			168,
			16,
			{
				{ ValueType::Date, Str8LitComp("_servicedDate") },
				{ ValueType::ClassReference, Str8LitComp("_servicedPeriod") },
			}
		},
		{
			Str8LitComp("_serviced_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			184,
			4,
			{
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_locationCodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("_locationAddress") },
				{ ValueType::ClassReference, Str8LitComp("_locationReference") },
			}
		},
		{
			Str8LitComp("_location_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			200,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("Address") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_bodySite"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subSite_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subSite"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("_detail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_detail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_AddItem_Detail") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_AddItem_Detail"),
	184,
	19,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_AddItem_Detail") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_Item_Adjudication") },
			}
		},
		{
			Str8LitComp("_subDetail_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subDetail"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_AddItem_Detail_SubDetail") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_AddItem_Detail_SubDetail"),
	168,
	17,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_AddItem_Detail_SubDetail") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_productOrService"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_modifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_unitPrice"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_net"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_noteNumber_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_noteNumber"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_adjudication"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_Item_Adjudication") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Total"),
	80,
	8,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Total") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_amount"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_Payment"),
	120,
	12,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_Payment") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_adjustment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_adjustmentReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_amount"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_ProcessNote"),
	128,
	10,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_ProcessNote") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_number"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_BenefitBalance"),
	168,
	15,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_BenefitBalance") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_excluded"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_network"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_unit"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_term"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_financial_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_financial"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ExplanationOfBenefit_BenefitBalance_Financial") },
			}
		}
	}
}
,{
	Str8Lit("ExplanationOfBenefit_BenefitBalance_Financial"),
	120,
	11,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ExplanationOfBenefit_BenefitBalance_Financial") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_allowed"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			72,
			24,
			{
				{ ValueType::UnsignedInt, Str8LitComp("_allowedUnsignedInt") },
				{ ValueType::String, Str8LitComp("_allowedString") },
				{ ValueType::ClassReference, Str8LitComp("_allowedMoney") },
			}
		},
		{
			Str8LitComp("_allowed_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			96,
			4,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_used"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			104,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("_usedUnsignedInt") },
				{ ValueType::ClassReference, Str8LitComp("_usedMoney") },
			}
		},
		{
			Str8LitComp("_used_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			112,
			4,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		}
	}
}
,{
	Str8Lit("FamilyMemberHistory"),
	456,
	40,
{ 0x940000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("FamilyMemberHistory") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_instantiatesCanonical_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instantiatesCanonical"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instantiatesUri_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instantiatesUri"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_dataAbsentReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_relationship"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_sex"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_born"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			288,
			24,
			{
				{ ValueType::ClassReference, Str8LitComp("_bornPeriod") },
				{ ValueType::Date, Str8LitComp("_bornDate") },
				{ ValueType::String, Str8LitComp("_bornString") },
			}
		},
		{
			Str8LitComp("_born_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			312,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_age"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			320,
			24,
			{
				{ ValueType::ClassReference, Str8LitComp("_ageAge") },
				{ ValueType::ClassReference, Str8LitComp("_ageRange") },
				{ ValueType::String, Str8LitComp("_ageString") },
			}
		},
		{
			Str8LitComp("_age_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			344,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Age") },
				{ ValueType::ClassReference, Str8LitComp("Range") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_estimatedAge"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_deceased"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			360,
			24,
			{
				{ ValueType::Boolean, Str8LitComp("_deceasedBoolean") },
				{ ValueType::ClassReference, Str8LitComp("_deceasedAge") },
				{ ValueType::ClassReference, Str8LitComp("_deceasedRange") },
				{ ValueType::Date, Str8LitComp("_deceasedDate") },
				{ ValueType::String, Str8LitComp("_deceasedString") },
			}
		},
		{
			Str8LitComp("_deceased_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			384,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Age") },
				{ ValueType::ClassReference, Str8LitComp("Range") },
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("_condition_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_condition"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("FamilyMemberHistory_Condition") },
			}
		}
	}
}
,{
	Str8Lit("FamilyMemberHistory_Condition"),
	136,
	13,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("FamilyMemberHistory_Condition") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_outcome"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_contributedToDeath"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_onset"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			88,
			24,
			{
				{ ValueType::ClassReference, Str8LitComp("_onsetAge") },
				{ ValueType::ClassReference, Str8LitComp("_onsetRange") },
				{ ValueType::ClassReference, Str8LitComp("_onsetPeriod") },
				{ ValueType::String, Str8LitComp("_onsetString") },
			}
		},
		{
			Str8LitComp("_onset_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			112,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Age") },
				{ ValueType::ClassReference, Str8LitComp("Range") },
				{ ValueType::ClassReference, Str8LitComp("Period") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("Flag"),
	240,
	22,
{ 0x64000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Flag") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_author"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Goal"),
	384,
	36,
{ 0x184000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Goal") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_lifecycleStatus"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_achievementStatus"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_priority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_start"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			232,
			16,
			{
				{ ValueType::Date, Str8LitComp("_startDate") },
				{ ValueType::ClassReference, Str8LitComp("_startCodeableConcept") },
			}
		},
		{
			Str8LitComp("_start_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			248,
			4,
			{
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_target_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_target"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Goal_Target") },
			}
		},
		{
			Str8LitComp("_statusDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_statusReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_expressedBy"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_addresses_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_addresses"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("_outcomeCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_outcomeCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_outcomeReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_outcomeReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Goal_Target"),
	128,
	11,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Goal_Target") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_measure"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_detail"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			72,
			24,
			{
				{ ValueType::ClassReference, Str8LitComp("_detailQuantity") },
				{ ValueType::ClassReference, Str8LitComp("_detailRange") },
				{ ValueType::ClassReference, Str8LitComp("_detailCodeableConcept") },
				{ ValueType::String, Str8LitComp("_detailString") },
				{ ValueType::Boolean, Str8LitComp("_detailBoolean") },
				{ ValueType::Integer, Str8LitComp("_detailInteger") },
				{ ValueType::ClassReference, Str8LitComp("_detailRatio") },
			}
		},
		{
			Str8LitComp("_detail_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			96,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
				{ ValueType::ClassReference, Str8LitComp("Range") },
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::String, Str8LitComp("") },
				{ ValueType::Boolean, Str8LitComp("") },
				{ ValueType::Integer, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Ratio") },
			}
		},
		{
			Str8LitComp("_due"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			104,
			16,
			{
				{ ValueType::Date, Str8LitComp("_dueDate") },
				{ ValueType::ClassReference, Str8LitComp("_dueDuration") },
			}
		},
		{
			Str8LitComp("_due_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			120,
			4,
			{
				{ ValueType::Date, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Duration") },
			}
		}
	}
}
,{
	Str8Lit("GraphDefinition"),
	448,
	31,
{ 0x800c000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("GraphDefinition") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("_jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			360,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_start"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			384,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_profile"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			408,
			24,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_link_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_link"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("GraphDefinition_Link") },
			}
		}
	}
}
,{
	Str8Lit("GraphDefinition_Link"),
	184,
	13,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("GraphDefinition_Link") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_path"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_sliceName"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_min"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::Integer, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_max"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_target_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_target"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("GraphDefinition_Link_Target") },
			}
		}
	}
}
,{
	Str8Lit("GraphDefinition_Link_Target"),
	168,
	13,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("GraphDefinition_Link_Target") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_params"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_profile"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_compartment_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_compartment"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("GraphDefinition_Link_Target_Compartment") },
			}
		},
		{
			Str8LitComp("_link_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_link"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("GraphDefinition_Link") },
			}
		}
	}
}
,{
	Str8Lit("GraphDefinition_Link_Target_Compartment"),
	184,
	11,
{ 0x1c0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("GraphDefinition_Link_Target_Compartment") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_use"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_rule"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_expression"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			136,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Group"),
	280,
	25,
{ 0x18000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Group") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_active"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_actual"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_quantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_managingEntity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_characteristic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_characteristic"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Group_Characteristic") },
			}
		},
		{
			Str8LitComp("_member_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_member"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Group_Member") },
			}
		}
	}
}
,{
	Str8Lit("Group_Characteristic"),
	104,
	11,
{ 0x2c0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Group_Characteristic") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_value"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_valueCodeableConcept") },
				{ ValueType::Boolean, Str8LitComp("_valueBoolean") },
				{ ValueType::ClassReference, Str8LitComp("_valueQuantity") },
				{ ValueType::ClassReference, Str8LitComp("_valueRange") },
				{ ValueType::ClassReference, Str8LitComp("_valueReference") },
			}
		},
		{
			Str8LitComp("_value_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			80,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::Boolean, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
				{ ValueType::ClassReference, Str8LitComp("Range") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_exclude"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("Group_Member"),
	88,
	9,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Group_Member") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_entity"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_inactive"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("GuidanceResponse"),
	360,
	34,
{ 0x28000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("GuidanceResponse") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_requestIdentifier"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_module"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			168,
			24,
			{
				{ ValueType::Uri, Str8LitComp("_moduleUri") },
				{ ValueType::Canonical, Str8LitComp("_moduleCanonical") },
				{ ValueType::ClassReference, Str8LitComp("_moduleCodeableConcept") },
			}
		},
		{
			Str8LitComp("_module_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			192,
			4,
			{
				{ ValueType::Uri, Str8LitComp("") },
				{ ValueType::Canonical, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_occurrenceDateTime"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_performer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("_evaluationMessage_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_evaluationMessage"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_outputParameters"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_result"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_dataRequirement_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_dataRequirement"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("DataRequirement") },
			}
		}
	}
}
,{
	Str8Lit("HealthcareService"),
	528,
	52,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("HealthcareService") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_active"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_providedBy"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_category_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_specialty_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_specialty"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_location_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_location"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_comment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extraDetails"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_photo"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Attachment") },
			}
		},
		{
			Str8LitComp("_telecom_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_telecom"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactPoint") },
			}
		},
		{
			Str8LitComp("_coverageArea_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_coverageArea"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_serviceProvisionCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_serviceProvisionCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_eligibility_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_eligibility"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("HealthcareService_Eligibility") },
			}
		},
		{
			Str8LitComp("_program_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_program"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_characteristic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_characteristic"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_communication_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_communication"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_referralMethod_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_referralMethod"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_appointmentRequired"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_availableTime_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_availableTime"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("HealthcareService_AvailableTime") },
			}
		},
		{
			Str8LitComp("_notAvailable_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_notAvailable"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("HealthcareService_NotAvailable") },
			}
		},
		{
			Str8LitComp("_availabilityExceptions"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			488,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_endpoint_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_endpoint"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			520,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("HealthcareService_Eligibility"),
	96,
	8,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("HealthcareService_Eligibility") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_comment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("HealthcareService_AvailableTime"),
	120,
	11,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("HealthcareService_AvailableTime") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_daysOfWeek_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_daysOfWeek"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_allDay"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_availableStartTime"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::Time, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_availableEndTime"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::Time, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("HealthcareService_NotAvailable"),
	96,
	8,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("HealthcareService_NotAvailable") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_during"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		}
	}
}
,{
	Str8Lit("ImagingStudy"),
	424,
	42,
{ 0x24000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImagingStudy") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modality_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modality"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_started"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_basedOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_basedOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_referrer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_interpreter_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_interpreter"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_endpoint_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_endpoint"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_numberOfSeries"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_numberOfInstances"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_procedureReference"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_procedureCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_procedureCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			384,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_series_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_series"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ImagingStudy_Series") },
			}
		}
	}
}
,{
	Str8Lit("ImagingStudy_Series"),
	232,
	22,
{ 0x140, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImagingStudy_Series") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_uid"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Id, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_number"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modality"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_numberOfInstances"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_endpoint_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_endpoint"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_bodySite"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_laterality"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_specimen_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_specimen"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_started"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_performer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_performer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ImagingStudy_Series_Performer") },
			}
		},
		{
			Str8LitComp("_instance_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_instance"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ImagingStudy_Series_Instance") },
			}
		}
	}
}
,{
	Str8Lit("ImagingStudy_Series_Performer"),
	80,
	8,
{ 0x80, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImagingStudy_Series_Performer") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_function"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_actor"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ImagingStudy_Series_Instance"),
	128,
	10,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImagingStudy_Series_Instance") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_uid"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Id, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_sopClass"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_number"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::UnsignedInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Immunization"),
	520,
	51,
{ 0xb4000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Immunization") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_statusReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_vaccineCode"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_occurrence"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			216,
			24,
			{
				{ ValueType::DateTime, Str8LitComp("_occurrenceDateTime") },
				{ ValueType::String, Str8LitComp("_occurrenceString") },
			}
		},
		{
			Str8LitComp("_occurrence_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			240,
			4,
			{
				{ ValueType::DateTime, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_recorded"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_primarySource"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reportOrigin"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_location"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_manufacturer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_lotNumber"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			296,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_expirationDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_site"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_route"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_doseQuantity"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_performer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_performer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Immunization_Performer") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("_reasonCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reasonReference_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reasonReference"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_isSubpotent"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subpotentReason_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subpotentReason"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_education_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			448,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_education"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Immunization_Education") },
			}
		},
		{
			Str8LitComp("_programEligibility_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_programEligibility"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_fundingSource"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_reaction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reaction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Immunization_Reaction") },
			}
		},
		{
			Str8LitComp("_protocolApplied_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_protocolApplied"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Immunization_ProtocolApplied") },
			}
		}
	}
}
,{
	Str8Lit("Immunization_Performer"),
	80,
	8,
{ 0x80, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Immunization_Performer") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_function"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_actor"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Immunization_Education"),
	144,
	10,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Immunization_Education") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_documentType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reference"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_publicationDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_presentationDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			128,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Immunization_Reaction"),
	96,
	9,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Immunization_Reaction") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_detail"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_reported"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Immunization_ProtocolApplied"),
	176,
	14,
{ 0x400, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Immunization_ProtocolApplied") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_series"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_authority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_targetDisease_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_targetDisease"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_doseNumber"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			112,
			24,
			{
				{ ValueType::PositiveInt, Str8LitComp("_doseNumberPositiveInt") },
				{ ValueType::String, Str8LitComp("_doseNumberString") },
			}
		},
		{
			Str8LitComp("_doseNumber_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			136,
			4,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_seriesDoses"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			144,
			24,
			{
				{ ValueType::PositiveInt, Str8LitComp("_seriesDosesPositiveInt") },
				{ ValueType::String, Str8LitComp("_seriesDosesString") },
			}
		},
		{
			Str8LitComp("_seriesDoses_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			168,
			4,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ImmunizationEvaluation"),
	368,
	29,
{ 0x1cc000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImmunizationEvaluation") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_authority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_targetDisease"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_immunizationEvent"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_doseStatus"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_doseStatusReason_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_doseStatusReason"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_series"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_doseNumber"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			304,
			24,
			{
				{ ValueType::PositiveInt, Str8LitComp("_doseNumberPositiveInt") },
				{ ValueType::String, Str8LitComp("_doseNumberString") },
			}
		},
		{
			Str8LitComp("_doseNumber_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			328,
			4,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_seriesDoses"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			336,
			24,
			{
				{ ValueType::PositiveInt, Str8LitComp("_seriesDosesPositiveInt") },
				{ ValueType::String, Str8LitComp("_seriesDosesString") },
			}
		},
		{
			Str8LitComp("_seriesDoses_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			360,
			4,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ImmunizationRecommendation"),
	208,
	19,
{ 0x4c000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImmunizationRecommendation") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_patient"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_authority"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_recommendation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_recommendation"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			200,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ImmunizationRecommendation_Recommendation") },
			}
		}
	}
}
,{
	Str8Lit("ImmunizationRecommendation_Recommendation"),
	288,
	26,
{ 0x800, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImmunizationRecommendation_Recommendation") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_vaccineCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_vaccineCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_targetDisease"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_contraindicatedVaccineCode_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contraindicatedVaccineCode"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_forecastStatus"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_forecastReason_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_forecastReason"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_dateCriterion_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_dateCriterion"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ImmunizationRecommendation_Recommendation_DateCriterion") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_series"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_doseNumber"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			192,
			24,
			{
				{ ValueType::PositiveInt, Str8LitComp("_doseNumberPositiveInt") },
				{ ValueType::String, Str8LitComp("_doseNumberString") },
			}
		},
		{
			Str8LitComp("_doseNumber_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			216,
			4,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_seriesDoses"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			224,
			24,
			{
				{ ValueType::PositiveInt, Str8LitComp("_seriesDosesPositiveInt") },
				{ ValueType::String, Str8LitComp("_seriesDosesString") },
			}
		},
		{
			Str8LitComp("_seriesDoses_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			248,
			4,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_supportingImmunization_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_supportingImmunization"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_supportingPatientInformation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_supportingPatientInformation"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("ImmunizationRecommendation_Recommendation_DateCriterion"),
	88,
	8,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImmunizationRecommendation_Recommendation_DateCriterion") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_value"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide"),
	520,
	38,
{ 0x90015000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			192,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			240,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			288,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("_jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			384,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_packageId"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			408,
			24,
			{
				{ ValueType::Id, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_license"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			432,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_fhirVersion_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			456,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_fhirVersion"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			464,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_dependsOn_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			472,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_dependsOn"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			480,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ImplementationGuide_DependsOn") },
			}
		},
		{
			Str8LitComp("_global_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			488,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_global"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			496,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ImplementationGuide_Global") },
			}
		},
		{
			Str8LitComp("_definition"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			504,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ImplementationGuide_Definition") },
			}
		},
		{
			Str8LitComp("_manifest"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			512,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ImplementationGuide_Manifest") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_DependsOn"),
	136,
	9,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_DependsOn") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_uri"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_packageId"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Id, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_Global"),
	112,
	8,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_Global") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_profile"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Canonical, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_Definition"),
	136,
	15,
{ 0x200, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_Definition") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_grouping_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_grouping"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ImplementationGuide_Definition_Grouping") },
			}
		},
		{
			Str8LitComp("_resource_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_resource"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ImplementationGuide_Definition_Resource") },
			}
		},
		{
			Str8LitComp("_page"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ImplementationGuide_Definition_Page") },
			}
		},
		{
			Str8LitComp("_parameter_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_parameter"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ImplementationGuide_Definition_Parameter") },
			}
		},
		{
			Str8LitComp("_template_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_template"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ImplementationGuide_Definition_Template") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_Definition_Grouping"),
	112,
	8,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_Definition_Grouping") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_Definition_Resource"),
	192,
	14,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_Definition_Resource") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_reference"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_fhirVersion_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_fhirVersion"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_example"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			136,
			24,
			{
				{ ValueType::Boolean, Str8LitComp("_exampleBoolean") },
				{ ValueType::Canonical, Str8LitComp("_exampleCanonical") },
			}
		},
		{
			Str8LitComp("_example_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			160,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_groupingId"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			168,
			24,
			{
				{ ValueType::Id, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_Definition_Page"),
	160,
	12,
{ 0x340, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_Definition_Page") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			64,
			24,
			{
				{ ValueType::Url, Str8LitComp("_nameUrl") },
				{ ValueType::ClassReference, Str8LitComp("_nameReference") },
			}
		},
		{
			Str8LitComp("_name_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			88,
			4,
			{
				{ ValueType::Url, Str8LitComp("") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_generation"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_page_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_page"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ImplementationGuide_Definition_Page") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_Definition_Parameter"),
	112,
	8,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_Definition_Parameter") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_value"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_Definition_Template"),
	136,
	9,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_Definition_Template") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_source"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_scope"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_Manifest"),
	152,
	15,
{ 0x100, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_Manifest") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_rendering"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Url, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_resource_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_resource"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ImplementationGuide_Manifest_Resource") },
			}
		},
		{
			Str8LitComp("_page_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_page"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ImplementationGuide_Manifest_Page") },
			}
		},
		{
			Str8LitComp("_image_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_image"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_other_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_other"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_Manifest_Resource"),
	128,
	10,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_Manifest_Resource") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_reference"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_example"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			72,
			24,
			{
				{ ValueType::Boolean, Str8LitComp("_exampleBoolean") },
				{ ValueType::Canonical, Str8LitComp("_exampleCanonical") },
			}
		},
		{
			Str8LitComp("_example_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			96,
			4,
			{
				{ ValueType::Boolean, Str8LitComp("") },
				{ ValueType::Canonical, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_relativePath"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			24,
			{
				{ ValueType::Url, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("ImplementationGuide_Manifest_Page"),
	128,
	10,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("ImplementationGuide_Manifest_Page") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_anchor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_anchor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("InsurancePlan"),
	360,
	35,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("InsurancePlan") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			192,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			200,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_alias_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_alias"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_period"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_ownedBy"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_administeredBy"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_coverageArea_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_coverageArea"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("InsurancePlan_Contact") },
			}
		},
		{
			Str8LitComp("_endpoint_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_endpoint"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_network_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_network"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_coverage_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_coverage"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("InsurancePlan_Coverage") },
			}
		},
		{
			Str8LitComp("_plan_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_plan"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("InsurancePlan_Plan") },
			}
		}
	}
}
,{
	Str8Lit("InsurancePlan_Contact"),
	104,
	11,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("InsurancePlan_Contact") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("HumanName") },
			}
		},
		{
			Str8LitComp("_telecom_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_telecom"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactPoint") },
			}
		},
		{
			Str8LitComp("_address"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Address") },
			}
		}
	}
}
,{
	Str8Lit("InsurancePlan_Coverage"),
	104,
	11,
{ 0x440, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("InsurancePlan_Coverage") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_network_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_network"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_benefit_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_benefit"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("InsurancePlan_Coverage_Benefit") },
			}
		}
	}
}
,{
	Str8Lit("InsurancePlan_Coverage_Benefit"),
	112,
	10,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("InsurancePlan_Coverage_Benefit") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_requirement"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_limit_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_limit"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("InsurancePlan_Coverage_Benefit_Limit") },
			}
		}
	}
}
,{
	Str8Lit("InsurancePlan_Coverage_Benefit_Limit"),
	80,
	8,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("InsurancePlan_Coverage_Benefit_Limit") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_value"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("InsurancePlan_Plan"),
	152,
	17,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("InsurancePlan_Plan") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_coverageArea_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_coverageArea"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_network_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_network"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_generalCost_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_generalCost"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("InsurancePlan_Plan_GeneralCost") },
			}
		},
		{
			Str8LitComp("_specificCost_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_specificCost"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("InsurancePlan_Plan_SpecificCost") },
			}
		}
	}
}
,{
	Str8Lit("InsurancePlan_Plan_GeneralCost"),
	112,
	10,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("InsurancePlan_Plan_GeneralCost") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_groupSize"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_cost"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_comment"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("InsurancePlan_Plan_SpecificCost"),
	88,
	9,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("InsurancePlan_Plan_SpecificCost") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_category"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_benefit_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_benefit"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("InsurancePlan_Plan_SpecificCost_Benefit") },
			}
		}
	}
}
,{
	Str8Lit("InsurancePlan_Plan_SpecificCost_Benefit"),
	88,
	9,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("InsurancePlan_Plan_SpecificCost_Benefit") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_cost_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_cost"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("InsurancePlan_Plan_SpecificCost_Benefit_Cost") },
			}
		}
	}
}
,{
	Str8Lit("InsurancePlan_Plan_SpecificCost_Benefit_Cost"),
	104,
	11,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("InsurancePlan_Plan_SpecificCost_Benefit_Cost") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_applicability"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_qualifiers_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_qualifiers"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_value"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Quantity") },
			}
		}
	}
}
,{
	Str8Lit("Invoice"),
	368,
	33,
{ 0x4000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Invoice") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_cancelledReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_recipient"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_participant_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_participant"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			256,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Invoice_Participant") },
			}
		},
		{
			Str8LitComp("_issuer"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			264,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_account"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_lineItem_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_lineItem"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Invoice_LineItem") },
			}
		},
		{
			Str8LitComp("_totalPriceComponent_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_totalPriceComponent"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Invoice_LineItem_PriceComponent") },
			}
		},
		{
			Str8LitComp("_totalNet"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_totalGross"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		},
		{
			Str8LitComp("_paymentTerms"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		}
	}
}
,{
	Str8Lit("Invoice_Participant"),
	80,
	8,
{ 0x80, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Invoice_Participant") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_role"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_actor"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Invoice_LineItem"),
	104,
	11,
{ 0x80, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Invoice_LineItem") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_sequence"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::PositiveInt, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_chargeItem"),
			Cardinality::OneToOne,
			ClassMemberType::Union,
			72,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_chargeItemReference") },
				{ ValueType::ClassReference, Str8LitComp("_chargeItemCodeableConcept") },
			}
		},
		{
			Str8LitComp("_chargeItem_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			80,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_priceComponent_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_priceComponent"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Invoice_LineItem_PriceComponent") },
			}
		}
	}
}
,{
	Str8Lit("Invoice_LineItem_PriceComponent"),
	128,
	10,
{ 0x40, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Invoice_LineItem_PriceComponent") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_factor"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			96,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_amount"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Money") },
			}
		}
	}
}
,{
	Str8Lit("Library"),
	704,
	57,
{ 0x280000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Library") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subtitle"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_subjectCodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("_subjectReference") },
			}
		},
		{
			Str8LitComp("_subject_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			328,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			336,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			352,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			384,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			392,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			424,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("UsageContext") },
			}
		},
		{
			Str8LitComp("_jurisdiction_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			432,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_jurisdiction"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			440,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_purpose"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			448,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_usage"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			472,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_copyright"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			496,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_approvalDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			520,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_lastReviewDate"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			536,
			16,
			{
				{ ValueType::Date, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_effectivePeriod"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			552,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Period") },
			}
		},
		{
			Str8LitComp("_topic_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			560,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_topic"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			568,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_author_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			576,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_author"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			584,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_editor_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			592,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_editor"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			600,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_reviewer_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			608,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_reviewer"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			616,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_endorser_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			624,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_endorser"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			632,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_relatedArtifact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			640,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_relatedArtifact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			648,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("RelatedArtifact") },
			}
		},
		{
			Str8LitComp("_parameter_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			656,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_parameter"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			664,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ParameterDefinition") },
			}
		},
		{
			Str8LitComp("_dataRequirement_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			672,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_dataRequirement"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			680,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("DataRequirement") },
			}
		},
		{
			Str8LitComp("_content_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			688,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_content"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			696,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Attachment") },
			}
		}
	}
}
,{
	Str8Lit("Linkage"),
	176,
	16,
{ 0x8000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Linkage") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_active"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_author"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_item_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_item"),
			Cardinality::OneToInf,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Linkage_Item") },
			}
		}
	}
}
,{
	Str8Lit("Linkage_Item"),
	96,
	8,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Linkage_Item") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_resource"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("List"),
	328,
	28,
{ 0xc000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("List") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_mode"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			184,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_code"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			240,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_encounter"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			248,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_source"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			272,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_orderedBy"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_note_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_note"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Annotation") },
			}
		},
		{
			Str8LitComp("_entry_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_entry"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("List_Entry") },
			}
		},
		{
			Str8LitComp("_emptyReason"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		}
	}
}
,{
	Str8Lit("List_Entry"),
	104,
	10,
{ 0x200, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("List_Entry") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_flag"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_deleted"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_item"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Location"),
	408,
	35,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Location") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			144,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			152,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			160,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_operationalStatus"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Coding") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			192,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_alias_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			216,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_alias"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			224,
			8,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_mode"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_type"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			288,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_telecom_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			296,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_telecom"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactPoint") },
			}
		},
		{
			Str8LitComp("_address"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Address") },
			}
		},
		{
			Str8LitComp("_physicalType"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			320,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
			}
		},
		{
			Str8LitComp("_position"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Location_Position") },
			}
		},
		{
			Str8LitComp("_managingOrganization"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			336,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_partOf"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_hoursOfOperation_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			352,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_hoursOfOperation"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			360,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Location_HoursOfOperation") },
			}
		},
		{
			Str8LitComp("_availabilityExceptions"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			368,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_endpoint_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			392,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_endpoint"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			400,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		}
	}
}
,{
	Str8Lit("Location_Position"),
	136,
	9,
{ 0xc0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Location_Position") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_longitude"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_latitude"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			88,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_altitude"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			112,
			24,
			{
				{ ValueType::Decimal, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Location_HoursOfOperation"),
	120,
	11,
{ 0x0, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Location_HoursOfOperation") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			40,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			48,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			56,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_daysOfWeek_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			64,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_daysOfWeek"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			72,
			8,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_allDay"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			80,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_openingTime"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			16,
			{
				{ ValueType::Time, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_closingTime"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			104,
			16,
			{
				{ ValueType::Time, Str8LitComp("") },
			}
		}
	}
}
,{
	Str8Lit("Measure"),
	896,
	69,
{ 0x80000, 0x0, 0x0},
	{
		{
			Str8LitComp("resourceType"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			0,
			4,
			{
				{ ValueType::ResourceType, Str8LitComp("Measure") },
			}
		},
		{
			Str8LitComp("_id"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			8,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_meta"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			32,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Meta") },
			}
		},
		{
			Str8LitComp("_implicitRules"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			40,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_language"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			64,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_text"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			88,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Narrative") },
			}
		},
		{
			Str8LitComp("_contained_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			96,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contained"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			104,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Resource") },
			}
		},
		{
			Str8LitComp("_extension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			112,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_extension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			120,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_modifierExtension_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			128,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_modifierExtension"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			136,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Extension") },
			}
		},
		{
			Str8LitComp("_url"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			144,
			24,
			{
				{ ValueType::Uri, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			168,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_identifier"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			176,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("Identifier") },
			}
		},
		{
			Str8LitComp("_version"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			184,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_name"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			208,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_title"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			232,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subtitle"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			256,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_status"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			280,
			24,
			{
				{ ValueType::Code, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_experimental"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			304,
			8,
			{
				{ ValueType::Boolean, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_subject"),
			Cardinality::ZeroToOne,
			ClassMemberType::Union,
			312,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("_subjectCodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("_subjectReference") },
			}
		},
		{
			Str8LitComp("_subject_type"),
			Cardinality::OneToOne,
			ClassMemberType::Enum,
			320,
			4,
			{
				{ ValueType::ClassReference, Str8LitComp("CodeableConcept") },
				{ ValueType::ClassReference, Str8LitComp("Reference") },
			}
		},
		{
			Str8LitComp("_date"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			328,
			16,
			{
				{ ValueType::DateTime, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_publisher"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			344,
			24,
			{
				{ ValueType::String, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			368,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_contact"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			376,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("ContactDetail") },
			}
		},
		{
			Str8LitComp("_description"),
			Cardinality::ZeroToOne,
			ClassMemberType::Single,
			384,
			24,
			{
				{ ValueType::Markdown, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext_count"),
			Cardinality::OneToOne,
			ClassMemberType::Single,
			408,
			8,
			{
				{ ValueType::ArrayCount, Str8LitComp("") },
			}
		},
		{
			Str8LitComp("_useContext"),
			Cardinality::ZeroToInf,
			ClassMemberType::Single,
			416,
			8,
			{
				{ ValueType::ClassReference, Str8LitComp("UsageContext") },
			}
		},
		{
			424,
			8,
			{