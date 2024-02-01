void
AddError(Log *log, LogType type, char* format, ...)
{
    return;
	va_list args = 0;
	va_start(args, format);
	String8 log_message = PushStr8FV(log->arena, format, args);
	va_end(args);
    
	LogNode *node = PushStruct(log->arena, LogNode);
	node->type = type;
	node->log_message = log_message;
	QueuePush(log->logs.first, log->logs.last, node);
}

void
PrintLog(Log *log)
{
	for (LogNode *node = log->logs.first; node; node = node->next)
	{
		switch (node->type)
		{
			case LogType::Error:
            printf("LOG_ERROR: ");
            break;
			case LogType::Information:
            printf("LOG_INFORMATION: ");
            break;
			case LogType::Warning:
            printf("LOG_WARNING: ");
            break;
		}
		printf("%.*s\n", (int)node->log_message.size, node->log_message.str);
	}
}