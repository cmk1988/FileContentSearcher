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

vector<FileContentSearcher::Result> FileContentSearcher::find_files_containing(char* c, int size)
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
	vector<Result> found;
	for (size_t i = 0; i < count; i++)
	{
		gotoxy(1, 1);
		float f = (i / (count*1.f)) * 100.0f;
		cout << f;
		int result = FileAnalyser::analyse(filePaths->at(i), c, size);
		if (result >= 0)
		{
			Result r;
			r.address = result;
			r.filePath = filePaths->at(i);
			found.push_back(r);
		}
	}
	return found;
}