// From http://www.cplusplus.com/doc/tutorial/files/
// Modified by P. Conrad for CCS CS1A F14

// reading a text file

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // for exit()

using namespace std;

int main (int argc, char **argv) {

  if (argc!=2) {
    cerr << "Usage: " << argv[0] << " fileToRead" << endl;
    exit(1);
  }

  string line;
  ifstream myfile (argv[1]);

  if (!myfile.is_open()) {
    cerr << "Unable to open file" << endl; 
    exit(1);
  }

  while ( getline (myfile,line) ) {
    cout << line << '\n';
  }
  
  myfile.close();

  return 0;
}// reading a text file
