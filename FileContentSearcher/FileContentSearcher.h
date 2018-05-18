#pragma once
#include "FileAnalyser.h"
#include "FileFinder.h"

class FileContentSearcher
{
public:
	FileContentSearcher(string rootpath);
	~FileContentSearcher();
	vector<string> find_files_containing(char* c, int count);

private:
	FileFinder* ff;
	vector<string> *filePaths;
};