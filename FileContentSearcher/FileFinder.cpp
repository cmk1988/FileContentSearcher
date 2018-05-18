#include "FileFinder.h"

FileFinder::FileFinder(string rootpath)
{
	this->rootpath = rootpath;
}

FileFinder::~FileFinder()
{
}

int FileFinder::scan()
{
	filePaths = _scan(rootpath);
	return filePaths.size();
}

vector<string> FileFinder::get_filepaths()
{
	return filePaths;
}

vector<string> FileFinder::_scan(string path)
{
	vector<string> filepaths;
	for (auto & p : directory_iterator(path))
	{
		string pth = p.path().generic_string();
		if (is_directory(pth))
		{
			vector<string> subpaths = _scan(pth);
			filepaths.insert(filepaths.end(), subpaths.begin(), subpaths.end());
		}
		else
		{
			filepaths.push_back(pth);
		}
	}
	return filepaths;
}

bool FileFinder::is_directory(string path)
{
	struct stat s;
	if (stat(path.c_str(), &s) == 0)
	{
		if (s.st_mode & S_IFDIR)
		{
			return true;
		}
		else if (s.st_mode & S_IFREG)
		{
			return false;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}