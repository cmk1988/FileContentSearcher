# FileContentSearcher
This class scans files in a directory and subdirectories for a char sequence and returns a list of file paths, containing the sequence.

In Test.cpp you can see how to use it.

The project just contains four classes, FileContentSearcher-, FileAnalyser-, FileFinder- and WindowsConsoleOutput-class. 

<br>

## FileContentSearcher-Class

<br>

The FileContentSearcher-class uses the other three classes to find all files (FileFinder), to check them if they contain the character sequence (FileAnalyser) and to output the progress (WindowsConsoleOutput).

<br>

![alt text](http://cmk.bplaced.net/pictures/fcs_dep.png "Dependencies")

<br><br>

## FileAnalyser-Class

<br>

The FileAnalyser-class frisks a file for the given character sequence. If you just want to frisk a file, you just need to use this class.

<br><br>

## FileFinder-Class

<br>

The FileFinder-class searches for files in the given directory and subdirectories. If you just want to find files in a directory, you just need to use this class.
