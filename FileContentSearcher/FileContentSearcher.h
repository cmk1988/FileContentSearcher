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
};

FileContentSearcher::FileContentSearcher(string rootpath)
{
	ff = new FileFinder(rootpath);
}

FileContentSearcher::~FileContentSearcher()
{
	free(ff);
}

vector<string> FileContentSearcher::find_files_containing(char* c, int size)
{
	int count = ff->scan();
	auto v = ff->get_filepaths();
	vector<string> found;
	for (size_t i = 0; i < count; i++)
	{
		if (FileAnalyser::analyse(v.at(i), c, size))
			found.push_back(v.at(i));
	}
	return found;
}

