#include <iostream>
#include <string>
#include <string>
#include <fstream>
#include <streambuf>
#include <cstdlib>

using namespace std;

string getFileContents (string filename) { 
  ifstream ifs(filename.c_str()); // create an input file stream object
  if (!ifs) {
    cerr << "ERROR: could not open file " << filename << endl;
    exit(1);
  }
  // return contents of that object as a C++ string
  return string((std::istreambuf_iterator<char>(ifs)),
		std::istreambuf_iterator<char>());
}

int getNCharsTotal(string filename)
{
  string contents = getFileContents(filename);
  return contents.length();
  // return -1; // stub
}

int countEs(string filename)
{
  string contents = getFileContents(filename);
  int numEs = 0;
  for (int i=0; i<contents.length(); i++) {
    if (contents[i] == 'E' or contents[i]=='e') {
      numEs++;
    }
  }
  // return -1; // stub
  return numEs;
}

int getNCharsWhiteSpace(string filename)
{
  return -1; // stub
}

int getNCharsPunctuation(string filename)
{
  return -1; // stub
}

int isWhiteSpace(char ch)
{
  return -1; // stub
}

int isPunctuation(char ch)
{
  return -1; // stub
}

int getNLines(string filename)
{
  return -1; // stub
}

int getNWords(string filename)
{
  return -1; // stub
}

void printTextFileStats(string filename)
{
  int nCharsTotal = getNCharsTotal(filename);
  int numEs = countEs(filename);
  int nCharsWhiteSpace = getNCharsWhiteSpace(filename);
  int nCharsPunctuation = getNCharsPunctuation(filename);
  int nLines = getNLines(filename);
  int nWords = getNWords(filename);
  
  cout << filename << " has " << nCharsTotal << " total characters" << endl;
  cout << filename << " has " << numEs << " E or e characters" << endl;
  cout << filename << " has " << nCharsWhiteSpace << " white space characters" << endl;
  cout << filename << " has " << nCharsPunctuation << " punctuation characters" << endl;
  cout << filename << " has " << nLines << " lines" << endl;
  cout << filename << " has " << nWords << " words" << endl;
  
  cout.setf(ios_base::fixed, ios_base::floatfield);
  cout.precision(2);
  
  if(nWords > 0)
    {
      cout << filename << " has average word length of " << 
	(nCharsTotal - nCharsWhiteSpace - nCharsPunctuation)/(double)nWords << 
	" characters." << endl; 
    }
  
  cout << filename << " has average line length of " <<
    (nCharsTotal - nLines + 1)/(double)nLines << 
    " characters and " << nWords/(double)nLines << " words." << endl;
  cout << endl << endl;
}

int main()
{
  
  printTextFileStats("test.txt");
  printTextFileStats("Fox-In-Socks.txt");
  printTextFileStats("The-Fox.txt");
  
  return 0;
}

