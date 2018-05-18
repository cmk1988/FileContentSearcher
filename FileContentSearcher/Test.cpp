#include "FileContentSearcher.h"

int main(int argc, char** argv)
{
	if (argc != 3)
		return EXIT_FAILURE;
	FileContentSearcher fcs(argv[1]);
	int count = 0;
	while (argv[2][count] != '\0')count++;
	auto a = fcs.find_files_containing(argv[2], count);
	return EXIT_SUCCESS;
}