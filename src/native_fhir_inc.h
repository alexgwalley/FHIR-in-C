#ifndef NATIVE_FHIR_H
#define NATIVE_FHIR_H

// NOTE(agw): include high-precision lib
#define R128_IMPLEMENTATION
#include "third_party/r128.h"

#include <iostream>
#include "base/base_inc.h"

#define USE_R128
#include "decimal.h"

#include "iso8601_time/iso8601_time.h"
#include "metadata/metadata.h"


namespace native_fhir
{
	struct ResourceMember
	{
		String8 name;
		String8List value_types;
		String8 content_reference;
		native_fhir::Cardinality cardinality;
	};

	struct ResourceMemberNode
	{
		ResourceMemberNode *next;
		ResourceMember member;
	};

	struct ResourceMemberList
	{
		ResourceMemberNode *first;
		ResourceMemberNode *last;
		U64 count;
	};

	typedef struct FhirResourceList FhirResourceList;

	typedef struct FhirResource FhirResource;
	struct FhirResource
	{
		String8 name;
	
		// All unique members of this resource
		ResourceMemberList members;
    
		// Ex. Account_Coverage for Resource "Account"
		FhirResourceList *sub_resources;
    
		// Ex. DomainResource for Resource "Account"
		String8List inherits;
	};

	typedef struct ResourceNode ResourceNode;
	struct ResourceNode
	{
		ResourceNode *next;
		FhirResource resource;
	};

	struct FhirResourceList
	{
		ResourceNode *first;
		ResourceNode *last;
		U64 count;
	};
};

#include "hash_table.h"
#include "fhir_class/fhir_class.h"
#include "exporter/exporter.h"
#include "fhir_path/fhir_path.h"

#endif