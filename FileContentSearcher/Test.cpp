#include "FileContentSearcher.h"

int main(int argc, char** argv)
{
	if (argc != 3)
		return EXIT_FAILURE;
	FileContentSearcher fcs(argv[1]);
	auto a = fcs.find_files_containing(argv[2], 4);
	return EXIT_SUCCESS;
}