#include <iostream> 
#include <cstdlib> // for exit()
#include <string>
#include <fstream> // for ifstream


using namespace std;

int main(int argc, char *argv[]) {



  // check to see if there is a command line argument
  // with the name of the airport file we are going to read

  if (argc!=2) {
    cerr << "Usage: "<< argv[0] << " dataFileName" << endl;
    exit(1); // defined in cstdlib
  }

  // try to open the input file

  ifstream ifs; // the stream we will use for the input file
  ifs.open(argv[1]);
  
  if (ifs.fail()) {
    cerr << "Could not open input file" << endl;
    exit(2); 
  }
  
  // start by trying to read the first line
  string thisLine; // a line of input from the file
  getline(ifs,thisLine);
  while (  !ifs.eof() && !ifs.fail() ) {
      // If we get here, it means the most recent attempt to read succeeded!
      // So do something with thisLine
    cout << "line from file: " << thisLine << endl;
    
    // try to read another line
    getline(ifs,thisLine);
  }
  
  return 0;
}
