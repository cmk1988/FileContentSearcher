#include "FileContentSearcher.h"

// Use parameter 1 for path and parameter 2 for char sequence to search
int main(int argc, char** argv)
{
	if (argc != 3)
		return EXIT_FAILURE;
	FileContentSearcher fcs(argv[1]);
	int count = 0;
	while (argv[2][count] != '\0')count++;
	auto a = fcs.find_files_containing(argv[2], count);
	for (size_t i = 0; i < a.size(); i++)
	{
		auto f = a.at(i);
		cout << f.filePath << " found at: " << f.address << endl;
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}