/* date = January 7th 2024 4:51 pm */

#ifndef OS_H
#define OS_H
#include <stdint.h>

#define FileAttributes_DoesNotExist (1 << 0)
#define FileAttributes_Directory (1 << 1)
typedef uint8_t FileAttributes;

struct FileEntry
{
    String8 file_name;
    FileAttributes attr;
	size_t file_size_low;
	size_t file_size_high;
};

struct FileEntries
{
    int count;
    FileEntry *v;
};


bool OS_FileExists(String8 path);
bool OS_CreateDirectory(String8 path);
FileEntries 
OS_EnumerateDirectory(Arena *arena, String8 file_path);
FileAttributes 
OS_GetFileAttributes(String8 file_path);

#endif //OS_H
