#ifndef FHIR_CLASS_H
#define FHIR_CLASS_H

#define ENUM_SIZE 4

namespace native_fhir
{

	typedef struct ValueTypeMetaInformation ValueTypeMetaInformation;
	struct ValueTypeMetaInformation
	{
		ValueType type;
		size_t size;
		String8 string;
		String8 fhir_names[3];
		String8 hl7_fhir_name;
		String8 cs_name;
		String8 cpp_name;
	};

	ValueTypeMetaInformation value_type_meta[(int)ValueType::Count] =
	{
		{ ValueType::Unknown, 		0, 					     Str8Lit("Unknown"), 		{}, 																			Str8Lit(""), 								Str8Lit(""), 			Str8Lit("")},
		{ ValueType::Base64Binary, 	sizeof(NullableString8), 	     Str8Lit("Base64Binary"), 	{Str8Lit("base64Binary")}, 														Str8Lit("Hl7.Fhir.Model.Base64Binary"), 	Str8Lit("NullableString8"),		Str8Lit("NullableString8") },
		{ ValueType::Canonical, 	sizeof(NullableString8), 	     Str8Lit("Canonical"), 		{Str8Lit("canonical")}, 														Str8Lit("Hl7.Fhir.Model.Canonical"), 		Str8Lit("NullableString8"),		Str8Lit("NullableString8") },
		{ ValueType::Code, 			sizeof(NullableString8), 	     Str8Lit("Code"), 			{Str8Lit("code")}, 																Str8Lit("Hl7.Fhir.Model.Code"), 			Str8Lit("NullableString8"),		Str8Lit("NullableString8")},
		{ ValueType::Id, 			sizeof(NullableString8), 	     Str8Lit("Id"), 				{Str8Lit("id")}, 																Str8Lit("Hl7.Fhir.Model.Id"), 				Str8Lit("NullableString8"),		Str8Lit("NullableString8")	},
		{ ValueType::Markdown, 		sizeof(NullableString8), 	     Str8Lit("Markdown"),	 	{Str8Lit("markdown")}, 															Str8Lit("Hl7.Fhir.Model.Markdown"), 		Str8Lit("NullableString8"),		Str8Lit("NullableString8")},
		{ ValueType::Oid, 			sizeof(NullableString8), 	     Str8Lit("Oid"), 			{Str8Lit("oid")}, 																Str8Lit("Hl7.Fhir.Model.Oid"), 				Str8Lit("NullableString8"),		Str8Lit("NullableString8")},
		{ ValueType::String, 		sizeof(NullableString8), 	     Str8Lit("String"), 			{Str8Lit("string"), 		Str8Lit("http://hl7.org/fhirpath/System.String")}, 	Str8Lit("Hl7.Fhir.Model.FhirString"), 		Str8Lit("NullableString8"),		Str8Lit("NullableString8") },
		{ ValueType::Xhtml, 		sizeof(NullableString8), 	     Str8Lit("Xhtml"), 			{Str8Lit("xhtml")}, 															Str8Lit("Hl7.Fhir.Model.Xhtml"), 			Str8Lit("NullableString8"),		Str8Lit("NullableString8") },
		{ ValueType::Uri, 			sizeof(NullableString8), 	     Str8Lit("Uri"), 			{Str8Lit("uri")}, 																Str8Lit("Hl7.Fhir.Model.FhirUri"), 			Str8Lit("NullableString8"),		Str8Lit("NullableString8") },
		{ ValueType::Url, 			sizeof(NullableString8), 	     Str8Lit("Url"), 			{Str8Lit("url")}, 																Str8Lit("Hl7.Fhir.Model.FhirUrl"), 			Str8Lit("NullableString8"),		Str8Lit("NullableString8")	},
		{ ValueType::Uuid, 			sizeof(NullableString8), 	     Str8Lit("Uuid"), 			{Str8Lit("uuid")}, 																Str8Lit("Hl7.Fhir.Model.Uuid"), 			Str8Lit("NullableString8"),     Str8Lit("NullableString8") },
		{ ValueType::Boolean, 		sizeof(NullableBoolean), Str8Lit("Boolean"),	{Str8Lit("boolean"), 		Str8Lit("http://hl7.org/fhirpath/System.Boolean")}, Str8Lit("Hl7.Fhir.Model.FhirBoolean"), 		Str8Lit("NullableBoolean"), Str8Lit("NullableBoolean") },
		{ ValueType::Integer, 		sizeof(NullableInt32), 	 Str8Lit("Integer"), 	{Str8Lit("integer"), 		Str8Lit("http://hl7.org/fhirpath/System.Integer")}, Str8Lit("Hl7.Fhir.Model.Integer"), 			Str8Lit("NullableInt32"),                 Str8Lit("NullableInt32") },
		{ ValueType::Integer64, 	sizeof(NullableInt64),   Str8Lit("Integer64"),{Str8Lit("integer64")}, 														Str8Lit("Hl7.Fhir.Model.Integer64"), 	    Str8Lit("NullableInt64"),                 Str8Lit("NullableInt64") },
		{ ValueType::PositiveInt, 	sizeof(NullableInt32), 	 Str8Lit("PositiveInt"),{Str8Lit("positiveInt")}, 														Str8Lit("Hl7.Fhir.Model.PositiveInt"), 		Str8Lit("NullableInt32"),                 Str8Lit("NullableInt32") },
		{ ValueType::UnsignedInt, 	sizeof(NullableInt32),   Str8Lit("UnsignedInt"),{Str8Lit("unsignedInt")}, 														Str8Lit("Hl7.Fhir.Model.UnsignedInt"), 	    Str8Lit("NullableInt32"),                 Str8Lit("NullableInt32") },
		{ ValueType::Decimal, 		sizeof(NullableString8),  Str8Lit("Decimal"), 	{Str8Lit("double"), Str8Lit("decimal"), 		Str8Lit("http://hl7.org/fhirpath/System.Decimal")}, Str8Lit("Hl7.Fhir.Model.FhirDecimal"), 	        Str8Lit("NullableString8"),      Str8Lit("NullableString8") },
		{ ValueType::Date, 			sizeof(ISO8601_Time), 	 Str8Lit("Date"), 		{Str8Lit("date"), 			Str8Lit("http://hl7.org/fhirpath/System.Date")}, 	Str8Lit("Hl7.Fhir.Model.Date"), 		    Str8Lit("ISO8601_Time"),        Str8Lit("ISO8601_Time") },
		{ ValueType::DateTime, 		sizeof(ISO8601_Time), 	 Str8Lit("DateTime"), 	{Str8Lit("dateTime"), 		Str8Lit("http://hl7.org/fhirpath/System.DateTime")},Str8Lit("Hl7.Fhir.Model.FhirDateTime"),     Str8Lit("ISO8601_Time"),        Str8Lit("ISO8601_Time") },
		{ ValueType::Time, 			sizeof(ISO8601_Time), 	 Str8Lit("Time"), 		{Str8Lit("time"), 			Str8Lit("http://hl7.org/fhirpath/System.Time")}, 	Str8Lit("Hl7.Fhir.Model.Time"), 			Str8Lit("ISO8601_Time"),        Str8Lit("ISO8601_Time") },
		{ ValueType::Instant, 		sizeof(ISO8601_Time), 	 Str8Lit("Instant"), 	{Str8Lit("instant")}, 															Str8Lit("Hl7.Fhir.Model.Instant"), 		Str8Lit("ISO8601_Time"),            Str8Lit("ISO8601_Time") },
		{ ValueType::ClassReference,sizeof(void*),      Str8Lit("ClassReference"),  {},                                                               Str8Lit(""),                                Str8Lit(""),            Str8Lit("ClassReference") },
		{ ValueType::ResourceType, 	ENUM_SIZE, 			Str8Lit("ResourceType"),	{}, 																			Str8Lit(""),								Str8Lit("ResourceType"),Str8Lit("ResourceType")	},
		{ ValueType::ArrayCount, 	sizeof(U64), 		Str8Lit("ArrayCount"), 		{}, 																			Str8Lit(""), 								Str8Lit("UIntPtr"),     Str8Lit("size_t")},
		{ ValueType::Choice, 	0, 		Str8Lit("Choice"), 		{}, 																			Str8Lit(""), 								Str8Lit(""),     Str8Lit("")}
	};



	String8 class_member_type_str[] = {
		Str8Lit("Unknown"),
		Str8Lit("Single"),
		Str8Lit("Enum"),
		Str8Lit("Union")
	};

	struct ClassMember
	{
		String8 clean_name;
		String8 fhir_name;
		Cardinality cardinality;
		ClassMemberType type;

		size_t types_count;
		ValueTypeAndName *types;

		bool IsArray() {
			return cardinality == Cardinality::ZeroToInf ||
			cardinality == Cardinality::OneToInf;
		}
	};

	typedef struct ClassMemberNode ClassMemberNode;
	struct ClassMemberNode
	{
		ClassMemberNode *next;
		ClassMember mem;
	};

	struct ClassMemberList 
	{
		ClassMemberNode *first;
		ClassMemberNode *last;
		U64 count;
	};

	typedef struct ClassDefinition ClassDefinition;
	struct ClassDefinition
	{
		String8 name;
		String8List inherits;
		ClassMemberList members;
	};

	typedef struct ClassDefinitionNode ClassDefinitionNode;
	struct ClassDefinitionNode
	{
		ClassDefinitionNode *next;
		ClassDefinition def;
	};

	typedef struct ClassDefinitionList ClassDefinitionList;
	struct ClassDefinitionList
	{
		ClassDefinitionNode *first;
		ClassDefinitionNode *last;
		U32 count;
	};

	void CDListPush(Arena *arena, ClassDefinitionList *list, ClassDefinition def);
	ClassDefinitionList CDListMerge(ClassDefinitionList a, ClassDefinitionList b);

	String8 ClassNameFromResourceName(Arena *arena, String8 res_name);

};
#endif