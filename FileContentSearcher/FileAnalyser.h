#pragma once
#include <vector>
#include <string>
using namespace std;

class FileAnalyser
{
public:
	int static analyse(string filepath, char* to_find, int size);
};