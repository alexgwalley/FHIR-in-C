#include "fhir_structure.h"
#include "string.h"

void
FillElementDefinitionFromJson(Arena *arena, ElementDefinition *def, cJSON *json)
{
	if (!json) return;
	cJSON *_id = cJSON_GetObjectItem(json, "id");
	if (_id) {
		def->id = PushStr8Copy(arena, Str8C(cJSON_GetStringValue(_id)));
	}
	cJSON *_path = cJSON_GetObjectItem(json, "path");
	if (_path) {
		def->path = FhirPathFromString8(arena, Str8C(cJSON_GetStringValue(_path)));
	}

	cJSON *_def = cJSON_GetObjectItem(json, "definition");
	if (_def) {
		def->definition = PushStr8Copy(arena, Str8C(cJSON_GetStringValue(_def)));
	}

	cJSON *_min = cJSON_GetObjectItem(json, "min");
	if (_min) {
		def->min = cJSON_GetNumberValue(_min);
	}
	cJSON *_max = cJSON_GetObjectItem(json, "max");
	if (_max) {
		def->max = PushStr8Copy(arena, Str8C(cJSON_GetStringValue(_max)));
	}

	cJSON *_content_reference = cJSON_GetObjectItem(json, "contentReference");
	if (_content_reference) {
		def->content_reference = PushStr8Copy(arena, Str8C(cJSON_GetStringValue(_content_reference)));
	}

	cJSON *_base = cJSON_GetObjectItem(json, "base");
	if (_base) {
		cJSON *_base_path = cJSON_GetObjectItem(_base, "path");
		if (_base_path) {
			def->base_path = FhirPathFromString8(arena, Str8C(cJSON_GetStringValue(_base_path)));
		}
	}

	cJSON *_type = cJSON_GetObjectItem(json, "type");
	if (_type) {
		int num_types = cJSON_GetArraySize(_type);
		for (int i = 0; i < num_types; i++) {
			cJSON *nameless = cJSON_GetArrayItem(_type, i);
			cJSON *code = cJSON_GetObjectItem(nameless, "code");
			if (code) {
				Str8ListPush(arena, &def->value_types, Str8C(cJSON_GetStringValue(code)));
			}
		}
	}
}

void
SDListPush(Arena *arena, StructureDefinitionList *list, StructureDefinition *def)
{
	StructureDefinitionNode *node = PushArray(arena, StructureDefinitionNode, 1);
	node->def = *def;

	QueuePush(list->first, list->last, node);
	list->count += 1;
}

const String8 element_types[] = {
	Str8Lit("BackboneElement"), 
	Str8Lit("Element")
};
B32
StringInElementTypes(String8 str) {
	for (int i = 0; i < sizeof(element_types) / sizeof(element_types[0]); i++) {
		if (Str8Match(str, element_types[i], 0)) return true;
	}
	return false;
}

B32
ElementDefinitionIsResource(ElementDefinition *def)
{
	if (def->value_types.node_count != 1) return false;
	return StringInElementTypes(def->value_types.first->string);
}

StructureDefinition*
StructureDefinitionFromJson(Arena *arena, cJSON *resource)
{
	if (!resource) return nullptr;

	StructureDefinition *result = PushArray(arena, StructureDefinition, 1);

    cJSON *_kind = cJSON_GetObjectItem(resource, "kind");
    if (_kind) {
        char* _kind_value = cJSON_GetStringValue(_kind);
        // TODO(agw): we are ignoring primative type definitions for now
        if (strcmp(_kind_value, "primitive-type") == 0) {
            return nullptr;
        }
    }


#if 1
	cJSON *_id = cJSON_GetObjectItem(resource, "id");
	if (_id) {
		result->id = FhirPathFromString8(arena, Str8C(cJSON_GetStringValue(_id)));
	} else {
		cJSON *name = cJSON_GetObjectItem(resource, "name");
		if (name) {
			result->id = FhirPathFromString8(arena, Str8C(cJSON_GetStringValue(name)));
		}
	}
#endif

	cJSON *_type = cJSON_GetObjectItem(resource, "type");
	result->type = Str8C(cJSON_GetStringValue(_type));


	cJSON *snapshot = cJSON_GetObjectItem(resource, "snapshot");
	if (!snapshot) return result;
	cJSON *element = cJSON_GetObjectItem(snapshot, "element");
	if (!element) return result;
	int element_count = cJSON_GetArraySize(element);

	result->elements.v = PushArray(arena, ElementDefinition, element_count);
	result->elements.count = element_count;
	for (int i = 0; i < element_count; i++) {
		cJSON *elem_json = cJSON_GetArrayItem(element, i);

		ElementDefinition *elem_def = &result->elements.v[i];
		FillElementDefinitionFromJson(arena, elem_def, elem_json);
	}

	return result;
}