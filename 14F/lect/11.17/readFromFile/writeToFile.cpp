// basic file operations
// Original from: http://www.cplusplus.com/doc/tutorial/files/
// modified by P. Conrad for CCS CS1A 14F

#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  // iostream includes declaration: ostream cout;
  // ofstream "is-a" ostream
  myfile.open ("example.txt"); // dot notation
 

 myfile << "Writing this to a file.\n";
  myfile.close();
  return 0;
}
