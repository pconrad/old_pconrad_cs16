// countOdd.cpp 
// P. Conrad for CS16 lab01 Winter 2015
// Example program to read from file and count occurences
//   when dealing with numbers.  Uses functions

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream
#include <string>

using namespace std;

// FUNCTION PROTOTYPES

bool is_odd(int x);  // true if x is odd
int string_to_int(string s); // convert to int

// FUNCTION DEFINITIONS

int main(int argc, char *argv[])
{
  ifstream ifs; // the stream we will use for the input file
  string thisLine; // a line of input from the file

  int oddCount = 0;

  if (argc!=2) {
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }

  ifs.open(argv[1]);
  if (ifs.fail()) {
    cerr << "Could not open file:" << argv[1] << endl;
    exit(2); 
  }

  // read every line from file and process it
  
  getline(ifs,thisLine);
  while (  !ifs.eof() ) {
    if (is_odd(string_to_int(thisLine))) {
      oddCount++;
    }
    getline(ifs,thisLine);
  }

  cout << "There were " << oddCount << " odd numbers in " << argv[1] << endl;

  return 0;
}


bool is_odd(int x) {
  // odd when remainder after dividing by two isn't zero
  return (x%2!=0);
}


int string_to_int(string s) {
  // convert to C-string, then use atoi
  return atoi(s.c_str());
}
