// basic file operations
// Original from: http://www.cplusplus.com/doc/tutorial/files/
// modified by P. Conrad for CCS CS1A 14F

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

// argv[][]
// *argv[]
// **argv

int main (int argc, char *argv[]) {
  if (argc!=2) {
    cerr << "Usage: " << argv[0] << " fileToWrite" << endl;
    exit(1);
  }

  ofstream myfile;


  // iostream includes declaration: ostream cout;
  // ofstream "is-a" ostream
  myfile.open (argv[1]); // dot notation
  myfile << "Writing this to a file.\n";
  myfile.close();
  return 0;
}
