// From http://www.cplusplus.com/doc/tutorial/files/
// Modified by P. Conrad for CCS CS1A F14

// reading a text file

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // for exit()

using namespace std;

#define DEFAULT_CENSUS_LAST_NAME_FILE \
    "/cs/faculty/pconrad/public_html/data/census/1990NameData/dist.all.last"

int main (int argc, char **argv) {
  
  const char * lastNameFilename = NULL;

  if (argc>2) {
    cerr << "Usage: " << argv[0] << " [fileToRead]" << endl;
    cerr << "  Default fileToRead: " << DEFAULT_CENSUS_LAST_NAME_FILE << endl;
    exit(1);
  }

  if (argc==1) {
    lastNameFilename = DEFAULT_CENSUS_LAST_NAME_FILE;
  } else {
    lastNameFilename = argv[1];
  };

  string line;
  ifstream myfile (lastNameFilename);

  if (!myfile.is_open()) {
    cerr << "Unable to open file" << endl; 
    exit(1);
  }

  // START TEMPORARY HACK
  
  int numLines = 10; // ONLY OUTPUT THIS MANY LINES

  // END TEMPORARY HACK
  
  while ( getline (myfile,line) && numLines>0 ) {
    cout << line << '\n';
    numLines--;
  }
  
  myfile.close();

  return 0;
}// reading a text file
