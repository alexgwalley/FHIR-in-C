#ifndef LOGGING_H
#define LOGGING_H
enum class LogType
{
	Unknown,
	Information,
	Warning,
	Error
};


struct LogNode
{
	LogNode* next;
	LogType type;
	String8 log_message;
};

struct LogList 
{
	LogNode* first;
	LogNode* last;
	size_t node_count;
};

struct Log
{
	Arena *arena;
	LogList logs;
};


void
AddError(Log *log, LogType type, char* format, ...);
void
PrintLog(Log *log);

#endif