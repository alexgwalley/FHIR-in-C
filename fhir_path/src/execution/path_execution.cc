using namespace native_fhir;
using namespace nf_fhir_r4;

CollectionEntryNode nil_entry_node = { 0 };

Collection ExecuteExpression(Arena *arena, FP_ExecutionContext *context, Piece* node);

#if 0
SerializedClassMetadata*
GetClassMetadata(ResourceType type)
{
	U8* ptr = (U8*)&metadata_file->class_metadata[0];
	for (int i = 0; i < (int)type; i++)
	{
		SerializedClassMetadata* m_ptr = (SerializedClassMetadata*)ptr;
		ptr += m_ptr->header.offset_to_next;
	}

	return (SerializedClassMetadata*)ptr;
}

ClassMemberMetadata*
GetClassMemberMetadata(SerializedClassMetadata* meta, int index)
{
	Assert(index < meta->members_count);
	return &meta->members[index];
}

#else
#endif

// ~ Collection Helpers

local_function CollectionEntry*
PushCollectionEntry(Arena *arena)
{
	CollectionEntry *ret = PushStruct(arena, CollectionEntry);
	ret->resource = &nil_resource;
	return ret;
}

B32 IsNilCollectionEntry(CollectionEntry *entry) { return entry == NULL; }
B32 IsNilCollectionEntryNode(CollectionEntryNode *node) { return node == NULL || node == &nil_entry_node; }

local_function void
MergeCollections(Collection *dst, Collection *src)
{
	if (dst->last)
	{
		dst->last->next = src->first;
		dst->last = src->first;
	}
	else
	{
		dst->first = src->first;
		dst->last = src->last;
	}

	dst->count += src->count;
}

local_function void
CollectionPushEntry(Arena *arena, Collection *collection, CollectionEntry entry)
{
	CollectionEntryNode *node = PushStruct(arena, CollectionEntryNode);
	node->v = entry;
	DLLPushBack(collection->first, collection->last, node);
	collection->count++;
}

// NOTE(agw): make the tree easily iterable
local_function void
UpdateNextPieces(Piece* piece, Piece *parent, Piece *stack_first)
{
	if (IsNilPiece(piece)) return;
	piece->parent = parent;

	UpdateNextPieces(piece->child[0], piece, stack_first);

	// NOTE(agw): if we have a child left, we will be coming from there
	if (!IsNilPiece(piece->child[0]))
	{
		piece->prev = piece->child[0];
	}

	// NOTE(agw): if we are the root, go right
	if (IsNilPiece(piece->parent))
	{
		piece->next = piece->child[1];
	}

	B32 is_left = parent->child[0] == piece;
	B32 is_leaf = IsNilPiece(piece->child[0]) && IsNilPiece(piece->child[1]);
	if (is_left)
	{
		// NOTE(agw): if we are on the left, we will be going to our parent next
		piece->next = parent;
		if (is_leaf)
		{
			piece->prev = stack_first;
			stack_first = piece;
		}
 }
	else 
	{
		// Right Leaf
		if (is_leaf)
		{
			piece->next = parent->parent;
			piece->prev = parent;
		}
		else if(!IsNilPiece(piece->child[1]))
		{
			piece->next = piece->child[1];
		}
	}


	// ~ Update any function param expressions if any
	for (PieceNode *param_piece = piece->params.first;
		param_piece;
		param_piece = param_piece->next)
	{
		UpdateNextPieces(param_piece->v, &nil_piece, &nil_piece);
	}

	UpdateNextPieces(piece->child[1], piece, stack_first);
}


local_function Collection
GetResourcesOfType(Arena *arena, nf_fhir_r4::Resource *resource, ResourceType type)
{
	Collection ret = { 0 };

	if(resource->resourceType == type)
	{
		CollectionEntry entry = { 0 };
		entry.resource = resource;
		CollectionPushEntry(arena, &ret, entry);
	}

	return ret;
}

local_function Collection
GetMembersFromCollection(Arena *arena, FP_ExecutionContext* context, Collection collection, String8 member_name)
{
	Collection ret = { 0 };

	for (CollectionEntryNode *node = collection.first; !IsNilCollectionEntryNode(node);
	node = node->next)
	{
		CollectionEntry entry = node->v;
		const MemberNameAndOffset *mem = NF_ClassMemberLookup((ResourceType) entry.resource->resourceType, member_name);
		FP_Assert(mem, context, PushStr8F(context->arena, "Could not find member \"%S\" in resource type: %S", member_name, resource_type_pairs[(int)entry.resource->resourceType].str));
		Assert(mem);

		// TODO(agw): this type may change based on build
		SerializedClassMetadata *class_meta = M_GetClassMetadata(context->meta_file, (int)entry.resource->resourceType);
		SerializedClassMemberMetadata *member_meta = M_GetClassMemberMetadata(class_meta, mem->member_index);

		void* mem_ptr = (U8*)entry.resource + mem->offset;
		
		// ~ Single Cardinality
		if (IS_SINGLE_CARDINALITY(mem->cardinality))
		{
			// ~ Non-union
			if (member_meta->type == ClassMemberType::Single)
			{
				CollectionEntry ent = { 0 };

				ValueType value_type = M_GetClassMemberType(member_meta, 0).type;
				switch (value_type)
				{
					case VALUE_TYPE_STRING_CASES:
					{

						NullableString8 str = *(NullableString8*)mem_ptr;
						if (str.has_value) { ent.str = str; ent.type = FP_Entry_String; }
						CollectionPushEntry(arena, &ret, ent);

					} break;
					case ValueType::ClassReference:
					{ 
						nf_fhir_r4::Resource* ptr = DEREF_STRUCT(entry.resource, mem->offset, nf_fhir_r4::Resource);
						if (ptr)
						{
							ent.resource = ptr;
							ent.type = FP_Entry_Resource;
							CollectionPushEntry(arena, &ret, ent); 
						}
						else { NotImplemented; }
					} break;
					case VALUE_TYPE_TIME_CASES:
					{
						ISO8601_Time time = *(ISO8601_Time*)mem_ptr;
						if (time.precision != Precision::Unknown) { ent.time = time; ent.type = FP_Entry_Iso8601; }
						CollectionPushEntry(arena, &ret, ent);
					} break;
					case ValueType::Decimal:
					{
						NullableString8 str = *(NullableString8*)mem_ptr;
						if (str.has_value) { 
							Decimal decimal = DecimalFromString(Str8(str.str, str.size));
							ent.number.decimal = decimal;
							ent.number.type = Number_Decimal;
							ent.type = FP_Entry_Number;
						}
						CollectionPushEntry(arena, &ret, ent);
					} break;
					default: NotImplemented;
				}
			}
			// ~ Union Type
			else if (member_meta->type == ClassMemberType::Union)
			{
				NotImplemented;
			}
		}
		else if (IS_MULTIPLE_CARDINALITY(mem->cardinality))
		{

			// ~ Non-union
			if (member_meta->type == ClassMemberType::Single)
			{
				ValueType value_type = M_GetClassMemberType(member_meta, 0).type;
				SerializedClassMemberMetadata *count_meta = M_GetClassMemberMetadata(class_meta, mem->member_index - 1);
				size_t count = DEREF_COUNT(entry.resource, count_meta->offset);

				switch (value_type)
				{
					case ValueType::ClassReference:
					{
						Resource** resources = DEREF_STRUCT_ARRAY(entry.resource, mem->offset, Resource);
						for (int i = 0; i < count; i++)
						{
							CollectionEntry ent = { 0 };
							Assert(resources[i]);
							ent.resource = resources[i];
							ent.type = FP_Entry_Resource;
							CollectionPushEntry(arena, &ret, ent);
						}
					} break;
					case ValueType::String:
					{
						NullableString8* strings = DEREF_VALUE_ARRAY(entry.resource, mem->offset, NullableString8);
							for (int i = 0; i < count; i++)
							{
								CollectionEntry ent = { 0 };
								ent.str = strings[i];
								ent.type = FP_Entry_String;
								CollectionPushEntry(arena, &ret, ent);
							}
					} break;

					default: NotImplemented; // TODO(agw): fill out all types
				}

			}
		}
	}

	
	return ret;
}

local_function B32 
EqualCompareCollectionEntries(FP_ExecutionContext *context, CollectionEntry *ent, CollectionEntry* ent2, CompareTypeFlags flags)
{
	B32 result = FALSE;

	// TODO(agw): this may need to change for implicit conversion
	FP_Assert(ent->type == ent2->type, context, Str8Lit("Entries must have the same type to compare"));
	switch (ent->type)
	{
		case FP_Entry_String:
		{

			if(ent->str.size != ent->str.size) result = FALSE;
			else if (ent->str.has_value != ent2->str.has_value) result = FALSE;
			else
			{
				MatchFlags match_flags = (flags & CompareType_Equivalent) ? MatchFlag_CaseInsensitive : 0;
				result = Str8Match(ent->str.str8, ent2->str.str8, match_flags);
			}

		} break;
		case FP_Entry_Iso8601:
		{
			B32 equal = FALSE;
			Precision min_precision = (Precision)Min((int)ent->time.precision, (int)ent2->time.precision);
			if (min_precision >= Precision::Year) 					{ equal = ent->time.year   == ent2->time.year; }
			if (min_precision >= Precision::Month) 				{ equal = ent->time.month  == ent2->time.month; }
			if (min_precision >= Precision::Day)       { equal = ent->time.day    == ent2->time.day; }
			if (min_precision >= Precision::Hour)      { equal = ent->time.hour   == ent2->time.hour; }
			if (min_precision >= Precision::Minute)    { equal = ent->time.minute == ent2->time.minute; }
			if (min_precision >= Precision::Second)    { equal = ent->time.second == ent2->time.second; }
			if (min_precision >= Precision::Millisecond && !equal) NotImplemented;
			result = equal;
		} break;

		case FP_Entry_Number:
		{
			switch (ent->number.type)
			{
				case Number_Decimal:
				{
					result = DecimalEqual(ent->number.decimal, ent2->number.decimal);
				} break;
				case Number_Integer:
				{
					result = ent->number.s64 == ent2->number.s64;
				} break;
				default: NotImplemented;
			} 
		} break;

		default: NotImplemented;
	}

	if (flags & CompareType_Negate)
	{
		result = !result;
	}

	return result;
}

local_function B32 
QuantityCompareCollectionEntries(FP_ExecutionContext *context, CollectionEntry *ent, CollectionEntry* ent2, QuantityCompareFlags flags)
{
	B32 result = FALSE;

	// TODO(agw): this may need to change for implicit conversion
	FP_Assert(ent->type == ent2->type, context, Str8Lit("Entries must have the same type to compare"));

	B32 ent_greater = FALSE;
	switch (ent->type)
	{
		case FP_Entry_String:
		{

			if (ent->str.size != ent->str.size) result = FALSE;
			else if (ent->str.has_value != ent2->str.has_value) result = FALSE;
			else
			{
				NotImplemented;
			}

		} break;

		case FP_Entry_Number:
		{
			FP_Assert(ent->number.type == ent2->number.type, context, Str8Lit("Number types must match"));
			switch (ent->number.type)
			{
				case Number_Integer:
				{
					ent_greater = ent->number.s64 > ent2->number.s64;
				} break;
				default: NotImplemented;
				case Number_Decimal:
				{
					ent_greater = DecimalCompare(ent->number.decimal, ent2->number.decimal) > 0;
				} break;
			} break;

		} break;

		case FP_Entry_Iso8601:
		{
			Precision min_precision = (Precision)Min((int)ent->time.precision, (int)ent2->time.precision);
			if (min_precision >= Precision::Year) 					{ ent_greater = ent->time.year > ent2->time.year; }
			if (min_precision >= Precision::Month) 				{ ent_greater = ent->time.month > ent2->time.month; }
			if (min_precision >= Precision::Day)       { ent_greater = ent->time.day > ent2->time.day; }
			if (min_precision >= Precision::Hour)      { ent_greater = ent->time.hour > ent2->time.hour; }
			if (min_precision >= Precision::Minute)    { ent_greater = ent->time.minute > ent2->time.minute; }
			if (min_precision >= Precision::Second)    { ent_greater = ent->time.second > ent2->time.second; }
			if (min_precision >= Precision::Millisecond && !ent_greater) NotImplemented;
		} break;

		default: NotImplemented;
	}

	B32 equal = EqualCompareCollectionEntries(context, ent, ent2, CompareType_Equal);

	if (flags & QuantityCompare_Less)
	{
		result = !ent_greater && !equal;
	}
	else if (flags & QuantityCompare_Greater)
	{
		result = ent_greater && !equal;
	}

	if (flags & QuantityCompare_Equal)
	{
		result = result || equal;
	}

	return result;
}


local_function Collection
CollectionFromLiteralPiece(Arena *arena, FP_ExecutionContext *context,  Piece* expr)
{
	Collection ret = { 0 };
	switch (expr->type)
	{
		case Piece_String:
		{
			CollectionEntry entry = { 0 };
			entry.type = FP_Entry_String;
			entry.str = expr->value.str;
			CollectionPushEntry(arena, &ret, entry);
		} break;
		case Piece_Literal:
		{
			CollectionEntry entry { 0 };
			const ResourceNameTypePair* pair = NF_ResourceNameTypePairFromString8(expr->slice);
			FP_Assert(pair, context, PushStr8F(context->arena, "Could not find resource with name: %S", expr->slice));
			entry.type = FP_Entry_ResourceType;
			entry.resource_type = (ResourceType)pair->type;
			CollectionPushEntry(arena, &ret, entry);
		} break;
	}
	return ret;
}

local_function Collection
CollectionFromResourceMember(Arena *arena, FP_ExecutionContext* context,  CollectionEntry *ent, String8 member_name)
{
	Assert(ent->type == FP_Entry_Resource);

	Temp temp = ScratchBegin(&arena, 1);
	// NOTE(agw): we don't need to keep this temp collection, only to feed to function
	Collection temp_col = { 0 };
	CollectionPushEntry(temp.arena, &temp_col, *ent);
	Collection ret = GetMembersFromCollection(arena, context, temp_col, member_name);
	ScratchEnd(temp);
	return ret;
}

local_function B32
ExecuteBooleanExpressionOnCollectionEntry(Arena* arena, FP_ExecutionContext* context, CollectionEntry *ent, Piece* expr)
{
	B32 result = FALSE;

	Collection left_col = ExecuteExpression(arena, context, expr->child[0]);
	Collection right_col = ExecuteExpression(arena, context, expr->child[1]);

	Assert(left_col.count == 1);
	Assert(right_col.count == 1);

	switch (expr->type)
	{
		case Piece_EqualCompare:
		{
			result = EqualCompareCollectionEntries(context, &left_col.first->v,  &right_col.first->v, expr->meta.equal_compare_data);
		} break;
		case Piece_QuantityCompare:
		{
			result = QuantityCompareCollectionEntries(context, &left_col.first->v,  &right_col.first->v, expr->meta.quantity_compare_data);
		} break;
		case Piece_Is:
		{
			ResourceType col_first_type = ResourceType::Unknown;
			if(right_col.first->v.type == FP_Entry_Resource) col_first_type = right_col.first->v.resource->resourceType;
			else if (right_col.first->v.type == FP_Entry_ResourceType) col_first_type = right_col.first->v.resource_type;
			else Assert(false);

			result = col_first_type == ent->resource->resourceType;
		} break;
		default: Assert(false);
	}

	return result;
}

typedef U8 NF_SubsettingFlags;
enum
{
	NF_Subsetting_FailOnMultiple = (1 << 0)
};

// NOTE(agw): indices are inclusive
local_function Collection
ExecuteSubsetting(Arena *arena, FP_ExecutionContext *context, Piece *node, S64 min_index, S64 max_index, NF_SubsettingFlags flags)
{
		Collection ret = { 0 };
		Temp temp = ScratchBegin(&arena, 1);
		Collection left_col = ExecuteExpression(temp.arena, context, node->child[0]);

		if (min_index >= left_col.count)
		{
			ScratchEnd(temp);
			return ret;
		}

		// Convert negative indices
		S64 min = min_index < 0 ? left_col.count + min_index : min_index;
		S64 max = max_index < 0 ? left_col.count + max_index : max_index;

		min = Min(min, max);
		max = Max(min, max);

		Assert(min >= 0);
		Assert(max >= 0);

		CollectionEntryNode *entry_node = left_col.first;
		int index = 0;
		while (index < min)
		{
			FP_Assert(node, context, Str8Lit("Error Evaluating Subset, entry node is null"));
			entry_node = entry_node->next;
			index++;
		}

		for (; index <= max; index++)
		{
			CollectionPushEntry(arena, &ret, entry_node->v);
		}

		if (flags & NF_Subsetting_FailOnMultiple && ret.count > 1)
		{
			FP_Assert(false, context, Str8Lit("Cardinality error, more than one entry in collection"));
		}

		ScratchEnd(temp);

		return ret;
}

local_function B32
IsBinaryExpression(Piece *piece)
{
	for (int i = 0; i < ArrayCount(g_binary_ops); i++)
	{
		if (piece->type == g_binary_ops[i].type) return true;
	}

	return false;
}

local_function Collection
ExecuteFunction(Arena *arena, FP_ExecutionContext *context, Piece* node)
{
	Collection ret = { 0 };

	Temp temp = ScratchBegin(&arena, 1);

	// ~ Get Function Type
	Function function_type = Function::Unknown;
	for (int i = 0; i < ArrayCount(pe_functions); i++)
	{
		if (Str8Match(pe_functions[i].name, node->child[1]->name, 0))
		{
			function_type = pe_functions[i].func;
		}
	}

	// ~ Execute Function
	Piece *func_node = node->child[1];
	switch (function_type)
	{
		case Function::Count:
		{
			Temp temp = ScratchBegin(&arena, 1);
			Collection left_col = ExecuteExpression(temp.arena, context, node->child[0]);

			CollectionEntry ent = { 0 };
			ent.number.type = Number_Integer;
			ent.number.s64 = left_col.count;
			ent.type = FP_Entry_Number;

			CollectionPushEntry(arena, &ret, ent);
		} break;
		case Function::Where:
		{
			Collection left_col = ExecuteExpression(arena, context, node->child[0]);
			FP_Assert(func_node->params.first, context, Str8Lit("Where must have parameters"));

			for (CollectionEntryNode *n = left_col.first; !IsNilCollectionEntryNode(n); n = n->next)
			{
				//NOTE(agw): need to make a copy so that we don't overwrite the "next" value
				CollectionEntryNode *cpy = PushStruct(temp.arena, CollectionEntryNode);
				MemoryCopy(cpy, n, sizeof(*n));

				SLLStackPush(context->entry_stack_first, cpy);

				B32 result = ExecuteBooleanExpressionOnCollectionEntry(temp.arena, context, &n->v, func_node->params.first->v);

				if (!result)
				{
					// TODO(agw): we _may_ want to have some type of collection entry free list for speed
					DLLRemove(left_col.first, left_col.last, n);
					left_col.count--;
				}

				SLLStackPop(context->entry_stack_first);
			}

			ScratchEnd(temp);

			ret = left_col;
		} break;
		case Function::Select:
		{
			Assert(func_node->params.first);

			Temp temp = ScratchBegin(&arena, 1);
			Collection left_col = ExecuteExpression(temp.arena, context, node->child[0]);

			for (CollectionEntryNode *n = left_col.first; !IsNilCollectionEntryNode(n); n = n->next)
			{
				CollectionEntryNode *cpy = PushStruct(temp.arena, CollectionEntryNode);
				MemoryCopy(cpy, n, sizeof(*n));
				SLLStackPush(context->entry_stack_first, cpy);

				Collection child_col = ExecuteExpression(arena, context, func_node->params.first->v);
				if (child_col.count > 0)
				{
					MergeCollections(&ret, &child_col);
				}

				SLLStackPop(context->entry_stack_first);
			}
			ScratchEnd(temp);
		} break;
		case Function::First:  { ret = ExecuteSubsetting(arena, context, node, 0, 0, 0); } break;
		case Function::Last:   { ret = ExecuteSubsetting(arena, context, node, -1, -1, 0); } break;
		case Function::Tail:   { ret = ExecuteSubsetting(arena, context, node, 1, -1, 0); } break;
		case Function::Single: { ret = ExecuteSubsetting(arena, context, node, 0, -1, NF_Subsetting_FailOnMultiple); } break;
		// TODO(agw): these two can be merged
		case Function::Skip:
		case Function::Take:
		{
			FP_Assert(func_node->params.count > 0, context, Str8Lit("Skip function requires a parameter of type integer"));
			FP_Assert(func_node->params.first, context, Str8Lit("Skip function first parameter is null"));
			FP_Assert(func_node->params.first->v->type == Piece_Number, context, Str8Lit("Skip function parameter must be an integer"));
			FP_Assert(func_node->params.first->v->value.num.type == Number_Integer, context, Str8Lit("Skip function parameter must be an integer"));

			S64 num = func_node->params.first->v->value.num.s64;

			S64 min = (function_type == Function::Skip) ? num : 0;
			S64 max = (function_type == Function::Skip) ? -1  : num - 1;
			min = Max(0, min);

			// NOTE(agw): due to rule on "take" function: 
			// "If num is less than or equal to 0,
			// or if the input collection is empty ({ }) take returns an empty collection."
			if (num <= 0 && function_type == Function::Take) ret = { 0 };
			else ret = ExecuteSubsetting(arena, context, node, min, max, 0);
		} break;
		default:
		{
			FP_Assert(false, context, PushStr8F(context->arena, "No known function with name: \"%S\"", func_node->name))
		} break;
	}

	ScratchEnd(temp);
	return ret;
}

// TODO
// NOTE(agw): what if we can pass _in_ a collection,
// Thinking for statements like Patient.where(name.family = 'Walley')
// We could pass a collection (with one element) to set 'ret' as 
local_function Collection
ExecuteExpression(Arena *arena, FP_ExecutionContext *context, Piece* node)
{
	if (IsNilPiece(node->prev))
	{
		FP_Assert(node->type == Piece_Literal, context, Str8Lit("First fhir_path piece must be a literal, (empty string?)"));
	}

	// TODO(agw): eventually we want to make this a loop and manage the stack on our own...

	Collection next_ret = { 0 };
	switch (node->type)
	{
		case Piece_Literal:
		{
			// NOTE(agw): When we have a word as the first part of the first expression (may break inside function params)
			if (IsNilPiece(node->prev))
			{
				if (IsNilCollectionEntryNode(context->entry_stack_first))
				{
					// We are _not_ inside a function
					const ResourceNameTypePair *pair = NF_ResourceNameTypePairFromString8(node->slice);
					FP_Assert(pair != NULL, context, PushStr8F(context->arena, "Could not find resource type \"%S\"", node->slice));
					return GetResourcesOfType(arena, context->base_res, (ResourceType)pair->type);
				}
				else if (Str8Match(node->slice, Str8Lit("$this"), 0))
				{
					Assert(!IsNilCollectionEntryNode(context->entry_stack_first));
					Collection col = { 0 };
					CollectionPushEntry(arena, &col, context->entry_stack_first->v);
					return col;
				}
				else
				{
					// NOTE(agw): first thing inside a function...expecting to get members
					String8 member_or_res_name = node->slice;
					nf_fhir_r4::Resource* resource = context->base_res;

					// NOTE(agw): we want to use this rather than ret
					Assert(context->entry_stack_first->v.type == FP_Entry_Resource);
					resource = context->entry_stack_first->v.resource;

					Temp temp = ScratchBegin(&arena, 1);
					Collection col = { 0 };
					CollectionPushEntry(temp.arena, &col, context->entry_stack_first->v);
					Collection ret = GetMembersFromCollection(arena, context,  col, member_or_res_name);
					ScratchEnd(temp);

					return ret;
				}
			}
			else
			{
				// See if we are a resource Literal
				const ResourceNameTypePair *pair = NF_ResourceNameTypePairFromString8(node->slice);
				FP_Assert(pair, context, PushStr8F(context->arena, "Could not find resource type \"%S\"", node->slice))
				return CollectionFromLiteralPiece(arena, context, node);
			}
		} break;
		case Piece_As:
		case Piece_Is:
		{
			Temp temp = ScratchBegin(&arena, 1);
			Collection left_res = ExecuteExpression(temp.arena, context, node->child[0]);
			Collection right_res = ExecuteExpression(temp.arena, context, node->child[1]);

			Assert(left_res.count == 1);
			Assert(right_res.count == 1 && right_res.first->v.type == FP_Entry_ResourceType);

			ResourceType col_first_type = right_res.first->v.resource_type;
			B32 types_equal = col_first_type == left_res.first->v.resource->resourceType;

			Collection col = { 0 };
			if(node->type == Piece_Is)
			{
				CollectionEntry ent = { 0 };
				ent.type = FP_Entry_Boolean;
				ent.b = types_equal;
				CollectionPushEntry(arena, &col, ent);
			}
			else if(node->type == Piece_As && types_equal)
			{
				CollectionEntry ent = left_res.first->v;
				CollectionPushEntry(arena, &col, ent);
			}

			ScratchEnd(temp);

			return col;
		} break;
		case Piece_Dot:
		{
			FP_Assert(!IsNilPiece(node->child[1]) && node->child[1]->type != Piece_Unknown, context, Str8Lit("Must have right hand side"));
			// ~ NOTE(agw): Parse Invokation
			if (node->child[1]->type != Piece_FunctionInvoke)
			{
				Temp temp = ScratchBegin(&arena, 1);
				Collection left_col = ExecuteExpression(temp.arena, context, node->child[0]);
				String8 member_name = node->child[1]->slice;
				Collection ret = GetMembersFromCollection(arena, context, left_col, member_name);
				ScratchEnd(temp);
				return ret;
			}
			else
			{
				Collection ret = ExecuteFunction(arena, context, node);
				return ret;
			}

		} break;
		case Piece_String: { return CollectionFromLiteralPiece(arena, context, node); } break;
		case Piece_QuantityCompare:
		{
			Temp temp = ScratchBegin(&arena, 1);

			Collection left = ExecuteExpression(temp.arena, context,  node->child[0]);
			Collection right = ExecuteExpression(temp.arena, context, node->child[1]);
			if (left.count == 0 || right.count == 0) return { 0 };

			FP_Assert(left.count == 1, context, Str8Lit("Quantity Compare (>, <, >=, <=) must have cardinality of 1 on left side"));
			FP_Assert(right.count == 1, context, Str8Lit("Quantity Compare (>, <, >=, <=) must have cardinality of 1 on right side"));
			B32 result = QuantityCompareCollectionEntries(context, &left.first->v, &right.first->v, node->meta.quantity_compare_data);
			ScratchEnd(temp);
			Collection ret = {};
			CollectionEntry ent = { 0 };
			ent.type = FP_Entry_Boolean;
			ent.b = result;
			CollectionPushEntry(arena, &ret, ent);
			return ret;
		} break;
		case Piece_Number:
		{
			Collection ret = { 0 };
			CollectionEntry entry = { 0 };
			entry.number = node->value.num;
			entry.type = FP_Entry_Number;
			CollectionPushEntry(arena, &ret, entry);
			return ret;
		} break;
		case Piece_Date:
		{
			Collection ret = { 0 };
			CollectionEntry entry = { 0 };
			entry.time = node->value.time;
			entry.type = FP_Entry_Iso8601;
			CollectionPushEntry(arena, &ret, entry);
			return ret;
		} break;
	}

	return { 0 };
}

Collection
ExecutePieces(Arena *arena, FP_ExecutionContext* context)
{
	TimeFunction;
	Collection ret = { 0 };
	UpdateNextPieces(context->root_node, &nil_piece, &nil_piece);

	Piece* node = context->root_node;
	return ExecuteExpression(arena, context, node);
}