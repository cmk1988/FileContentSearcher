# FileContentSearcher
This class scans files in a directory and subdirectories for a char sequence and returns a list of file paths, containing the sequence.

In test.cpp you can see how to use it.

The project just contains four classes, FileContentSearcher-, FileAnalyser-, FileFinder- and WindowsConsoleOutput-class. 

<br>

## FileContentSearcher-Class

<br>

The FileContentSearcher-class uses the other three classes to find all files (FileFinder), to check them if they contain the character sqquence (FileAnalyser) and to output the progress (WindowsConsoleOutput).

<br>

![alt text](http://cmk.bplaced.net/pictures/fcs_dep.png "Dependencies")

<br><br>

## FileAnalyser-Class

<br>

The FileAnalyser-class frisks the file for the character sqquence. If you just want to frisk the files, you just need to use this class.

<br><br>

## FileFinder-Class

<br>

The FileFinder-class searches for files in the given directory and subdirectories. If you just want to find files in the directory, you just need to use this class.
