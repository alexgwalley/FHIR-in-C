namespace native_fhir
{

 ResourceStringProvider::ResourceStringProvider() :  mutex(), json_strings(), string_arenas(), json_file_names(), strings()
 {
  count = 0;
  arena = ArenaAlloc(Megabytes(1));
 }

 ResourceStringProvider::ResourceStringProvider(String8 folder) :  mutex(), json_strings(), string_arenas(), json_file_names(), strings()
 {
  count = 0;
  arena = ArenaAlloc(Megabytes(1));
  Temp temp = ScratchBegin(0, 0);

  char last_byte = folder.str[folder.size - 1];
  while (folder.size > 0 && (last_byte == '/' || last_byte == '\\'))
  {
   folder.size--;
   last_byte = folder.str[folder.size - 1];
  }

  if (folder.size == 0)
  {
   std::cerr << "Invalid folder name" << std::endl;
   throw -1;
  }

  FileEntries entries = OS_EnumerateDirectory(temp.arena, PushStr8F(temp.arena, "%S/*", folder));
  for (int i = 0; i < entries.count; i++)
  {
   FileEntry entry = entries.v[i];
   if (Str8Match(Str8Lit("."), entry.file_name, 0) ||
    Str8Match(Str8Lit(".."), entry.file_name, 0))
   {
    continue;
   }

   String8 full_name = PushStr8F(temp.arena, "%S/%S", folder, entry.file_name);
   this->AddJsonFile(full_name);
  }

  ScratchEnd(temp);
 }

 ResourceStringProvider::~ResourceStringProvider()
 {
  ArenaRelease(arena);
 }


 NullableString8
 ReadEntireFileWithPadding(Arena *arena, String8 file_name, U64 padding)
 {
  TimeFunction;
  NullableString8 ns = {};
  FILE *f;
  errno_t error = fopen_s(&f, (const char*)file_name.str, "r");
  if (!f) return ns;

  fseek(f,  0, SEEK_END);
  size_t length = ftell(f);

  void *result = ArenaPush(arena, length + padding);
  fseek(f, 0, SEEK_SET);
    
  fread(result, length, 1, f);
  fclose(f);

  ns.str = (U8 *)result;
  ns.size = length + padding;
  ns.has_value = true;
  return ns;
 }

 ResourceStringHandle
 ResourceStringProvider::GetNextString()
 {
  TimeFunction;

  for (int i = 1; i < ArrayCount(json_strings); i++)
  {
   if (json_strings[i].has_value == false)
   {
    // Raw Strings
    if (strings.node_count > 0)
    {
     json_strings[i].has_value = true;
     json_strings[i].str8 = strings.first->string;
     SLLStackPop(strings.first);
     strings.node_count--;

     return i;
    }
    // To Load From JSON File 
    else if (json_file_names.node_count > 0)
    {
     if (string_arenas[i] == NULL)
     {
      string_arenas[i] = ArenaAlloc(Megabytes(64));
     }

     size_t len = 0;
     NullableString8 data = ReadEntireFileWithPadding(string_arenas[i],
                                                      json_file_names.first->string,
                                                      128);

     Assert(data.has_value);
     json_strings[i] = data;

     // TODO(agw): not sure why there isn't a function to do this
     SLLStackPop(json_file_names.first);
     json_file_names.node_count--;

     return i;
    }
   }
  }

  return 0;
 }


  ResourceSource 
  ResourceStringProvider::GetNextSource()
  {
   ResourceSource ret = {};
   std::lock_guard<std::mutex> lock(mutex);

   count++;
   ret.id = count;
   if (strings.node_count > 0)
   {
    ret.type = ResourceSourceType::String;
    ResourceStringHandle handle = GetNextString();
    ret.string_handle = handle;
   }
   else if (json_file_names.node_count > 0)
   {
    ret.type = ResourceSourceType::FileName;
    ret.file_name = json_file_names.first->string;

    SLLStackPop(json_file_names.first);
    json_file_names.node_count--;
   }

   return ret;
  }

};
