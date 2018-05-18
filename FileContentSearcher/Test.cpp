#include "FileFinder.h"
#include "FileAnalyser.h"

int main()
{
	FileFinder ff("E:\\Neuer Ordner\\");
	int count = ff.scan();
	auto v = ff.get_filepaths();
	vector<string> found;
	for (size_t i = 0; i < count; i++)
	{
		if (FileAnalyser::analyse(v.at(i), "test", 4))
			found.push_back(v.at(i));
	}
	return EXIT_SUCCESS;
}