#pragma once
#include "FileAnalyser.h"
#include "FileFinder.h"

class FileContentSearcher
{
public:
	FileContentSearcher(string rootpath);
	~FileContentSearcher();



private:
	FileFinder* ff;
};

FileContentSearcher::FileContentSearcher(string rootpath)
{
	ff = new FileFinder(rootpath);
}

FileContentSearcher::~FileContentSearcher()
{
	free(ff);
}

