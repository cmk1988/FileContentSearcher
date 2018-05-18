#include "FileFinder.h"

int main()
{
	FileFinder ff("E:\\Neuer Ordner\\");
	int count = ff.scan();
	auto v = ff.get_filepaths();
	return EXIT_SUCCESS;
}