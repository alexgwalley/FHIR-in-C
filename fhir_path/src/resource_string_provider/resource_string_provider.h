#ifndef NF_RESOURCE_STRING_PROVIDER_H
#define NF_RESOURCE_STRING_PROVIDER_H

namespace native_fhir
{
 typedef U64 ResourceStringHandle;

 struct ResourceStringProvider
 {
  Arena *arena;

  String8List json_file_names;
  String8List strings;

  NullableString8 json_strings[50];
  Arena *string_arenas[50];


  void
  AddJsonFile(String8 file_name)
  {
   Str8ListPush(arena, &json_file_names, file_name);
  }

  void
  AddResourceString(String8 string)
  {
   Str8ListPush(arena, &strings, string);
  }

  ResourceStringHandle GetNextString();

  NullableString8 GetStringValue(ResourceStringHandle handle)
  {
   NullableString8 ret = json_strings[handle];
   return ret;
  }

  void 
  ReleaseString(ResourceStringHandle handle)
  {
   /*
     NOTE(agw): when dealing with NDJSON files, we want to know when we can remove
     or release a certain part of the file (so we don't have to keep the whole thing 
     in memory

     alternatively...we could just pre-read the entire file, find the string slices
     and then load a certain section of a file at a time... :)
   */

   json_strings[handle].has_value = false;
   ArenaPopTo(string_arenas[handle], 0);
  }

 };

};

#endif