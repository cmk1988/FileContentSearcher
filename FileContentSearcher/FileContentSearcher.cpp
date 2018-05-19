#include "FileContentSearcher.h"

FileContentSearcher::FileContentSearcher(string rootpath)
{
	ff = new FileFinder(rootpath);
	filePaths = NULL;
}

FileContentSearcher::~FileContentSearcher()
{
	free(ff);
	if (filePaths != NULL)
		free(filePaths);
}

vector<string> FileContentSearcher::find_files_containing(char* c, int size)
{
	int count = 0;
	if (filePaths == NULL)
	{
		count = ff->scan();
		filePaths = new vector<string>(ff->get_filepaths());
	}
	else
	{
		count = filePaths->size();
	}
	vector<string> found;
	for (size_t i = 0; i < count; i++)
	{
		gotoxy(1, 1);
		float f = (i / (count*1.f)) * 100.0f;
		cout << f;
		if (FileAnalyser::analyse(filePaths->at(i), c, size))
			found.push_back(filePaths->at(i));
	}
	return found;
}