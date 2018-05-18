#include "FileContentSearcher.h"

int main()
{
	FileContentSearcher fcs("E:\\Neuer Ordner\\");
	auto a = fcs.find_files_containing("test",4);
	return EXIT_SUCCESS;
}