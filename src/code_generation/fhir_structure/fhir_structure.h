#ifndef NF_FHIR_STRUCTURE_H
#define NF_FHIR_STRUCTURE_H

namespace native_fhir
{

	struct FhirPath
	{
		String8List parts;
	};

	FhirPath
	FhirPathFromString8(Arena *arena, String8 path);

	struct ElementDefinition 
	{
		String8 id;
		FhirPath path;
		FhirPath base_path;
		String8 short_;
		String8 definition;
		double min;
		String8 max;
		String8List value_types;
		String8 content_reference;
	};


	B32 ElementDefinitionIsResource(ElementDefinition *def);

	typedef struct ElementDefinitionArray ElementDefinitionArray;
	struct ElementDefinitionArray
	{
		U64 count;
		ElementDefinition *v;
	};

	class StructureDefinition
	{
	public:
		// Map of path to element 
		ElementDefinitionArray elements;
		FhirPath id;
		String8 type;
	};

	StructureDefinition*
	StructureDefinitionFromJson(Arena *arena, cJSON *resource);

	typedef struct StructureDefinitionNode StructureDefinitionNode;
	struct StructureDefinitionNode
	{
		StructureDefinitionNode *next;
		StructureDefinition def;
	};

	typedef struct StructureDefinitionList StructureDefinitionList;
	struct StructureDefinitionList
	{
		StructureDefinitionNode *first;
		StructureDefinitionNode *last;
		U64 count;
	};

	void
	SDListPush(Arena *arena, StructureDefinitionList *list, StructureDefinition def);

};
#endif