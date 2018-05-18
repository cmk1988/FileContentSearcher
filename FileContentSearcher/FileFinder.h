#pragma once
#include <vector>
#include <filesystem>
#include <string>
using namespace std;
using namespace std::experimental::filesystem;

class FileFinder
{
public:
	FileFinder(string rootpath);
	~FileFinder();

	int scan();
	vector<string> get_filepaths();

private:
	string rootpath;
	vector<string> filePaths;
	vector<string> _scan(string path);
	bool is_directory(string path);
};