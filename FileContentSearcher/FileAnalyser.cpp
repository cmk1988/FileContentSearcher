#include "FileAnalyser.h"

int FileAnalyser::analyse(string filepath, char* to_find, int size)
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
	int adress = 0;
	while((c = fgetc(file)) != EOF && !b)
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
		adress++;
	}
	free(buffer);
	fclose(file);
	return b ? adress : -1;
}
