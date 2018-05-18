#include "FileAnalyser.h"

bool FileAnalyser::analyse(string filepath, char* to_find, int size)
{
	FILE *file;
	fopen_s(&file, filepath.c_str(), "r+b");
	if (file == NULL)
	{
		return false;
	}
	char* buffer = (char*)malloc(size);
	int c;
	bool b = false;
	while((c = fgetc(file)) > 0 && !b)
	{
		for (size_t i = 0; i < size-1; i++)
		{
			buffer[i] = buffer[i+1];
		}
		buffer[size-1] = c;
		b = true;
		for (size_t i = 0; i < size; i++)
		{
			if (buffer[i] != to_find[i])
			{
				b = false;
				break;
			}
		}
	}
	free(buffer);
	fclose(file);
	return b;
}
