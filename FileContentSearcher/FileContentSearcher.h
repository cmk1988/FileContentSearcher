#pragma once
#include "FileAnalyser.h"
#include "FileFinder.h"
#include "WindowsConsoleOutput.h"

class FileContentSearcher
{
public:
	class Result
	{
	public:
		int address;
		string filePath;
	};

	FileContentSearcher(string rootpath);
	~FileContentSearcher();
	vector<Result> find_files_containing(char* c, int count);

private:
	FileFinder* ff;
	vector<string> *filePaths;
};