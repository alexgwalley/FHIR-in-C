
#if defined(_MSC_VER)
#include <windows.h>
bool
OS_FileExists(String8 path)
{
	return !(OS_GetFileAttributes(path) & FileAttributes_DoesNotExist);
}

bool
OS_CreateDirectory(String8 path)
{
	return (bool)CreateDirectoryA((char*)path.str, 0);
}

FileEntries
OS_EnumerateDirectory(Arena *arena, String8 file_path)
{
	FileEntries ent = {};
	Temp scratch = ScratchBegin(&arena, 1);
	String8 file_search_path = PushStr8F(scratch.arena, "%S*", file_path);
	String8List str_list = {};

	WIN32_FIND_DATAA data;
	HANDLE handle = FindFirstFileA((char*)file_search_path.str, &data);

	int count = 0;
	do
	{
		count++;
	} while (FindNextFileA(handle, &data));


	handle = FindFirstFileA((char*)file_search_path.str, &data);

	ent.v = PushArray(arena, FileEntry, count);
	ent.count = count;

	int i = 0;
	do
	{
		String8 copy = PushStr8Copy(arena, Str8C(data.cFileName));
		Str8ListPush(scratch.arena, &str_list, copy);

		ent.v[i].file_name = PushStr8Copy(arena, Str8C(data.cFileName));
		// TODO(agw): this can be slow on large directories

		if (data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
		{
			ent.v[i].attr |= FileAttributes_Directory;
		}
		ent.v[i].file_size_low = data.nFileSizeLow;
		ent.v[i].file_size_high = data.nFileSizeHigh;

		i++;
	} while (FindNextFileA(handle, &data));

	ScratchEnd(scratch);
	return ent;
}

FileAttributes
OS_GetFileAttributes(String8 file_path)
{
	FileAttributes result = 0;
	DWORD attr = GetFileAttributesA((char*)file_path.str);
	if(attr == INVALID_FILE_ATTRIBUTES)
	{
		result |= FileAttributes_DoesNotExist;
		return result;
	}

	if (attr & FILE_ATTRIBUTE_DIRECTORY)
	{
		result |= FileAttributes_Directory;
	}
	return result;
}

#else
#include <stdio.h>
#include <sys/stat.h>
#include <dirent.h>
#include <sys/types.h>


bool
OS_CreateDirectory(String8 path)
{
    mkdir((char*)path.str, S_IFREG | S_IFDIR);
}


FileAttributes
OS_GetFileAttributes(String8 file_path)
{
    FileAttributes attrib = 0;
    struct stat file_stat;
    stat((char*)file_path.str, &file_stat);
    
    if(S_ISDIR(file_stat.st_mode))
    {
        attrib |= FileAttributes_Directory;
    }
    
    return attrib;
}


FileEntries
OS_EnumerateDirectory(Arena *arena, String8 file_path)
{
    FileEntries ent = {};
    struct dirent **entries = NULL;
    ent.count = scandir((char*)file_path.str, &entries, NULL, NULL);
    
    ent.v = PushArray(arena, FileEntry, ent.count);
    
    for(int i = 0; i < ent.count; i++)
    {
        ent.v[i].file_name = Str8C(entries[i]->d_name);
        ent.v[i].attr = OS_GetFileAttributes(Str8C(entries[i]->d_name));
        free(entries[i]);
    }
    
    free(entries);
}




#endif