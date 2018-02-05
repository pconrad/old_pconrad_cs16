// readStudents.cpp   P. Conrad  for CS16, Winter 2015
// Example program to read students nto array of structs

#include <iostream>
#include <cstdlib> // for exit()
#include <string> // C++ strings
#include <fstream> // for ifstream

#include "student.h" // defines struct Airport
#include "studentFuncs.h" // function prototypes

using namespace std;

int main(int argc, char *argv[])
{
  ifstream ifs; // the stream we will use for the input file
  string thisLine; // a line of input from the file

  Student students[100]; // where we will store the students
  int studentCount = 0; // current occupancy of students array

  // check to see if there is a command line argument
  // with the name of the student file we are going to read

  if (argc!=2) {
    cerr << "Usage: "<< argv[0] << " studentDataFileName" << endl;
    exit(1); // defined in cstdlib
  }

  // try to open the input file

  ifs.open(argv[1]);  
  if (ifs.fail()) {
    cerr << "Could not open input file" << endl;
    exit(2); 
  }
  
  // Try to read past the header line.
  getline(ifs,thisLine);

  // Test if we hit the end of the file, or experienced an error:

  if ( ifs.eof() || ifs.fail() ) {
    cerr << "Unable to read first line in input file" << endl;
    exit(3);
  }

  // Now read the rest of the lines

  // start by trying to read the first line
  
  getline(ifs,thisLine);
  while (  !ifs.eof() && !ifs.fail() ) {
      // If we get here, it means the most recent attempt to read succeeded!
      // So do something with thisLine
      
      initStudentFromString(&(students[studentCount]), thisLine);
      studentCount++;
    
      // try to read another line
      getline(ifs,thisLine);
  }

  for (int i=0; i<studentCount; i++) {
    cout << "students[" << i << "]=" << toString(students[i]) 
	 << endl;
  }
  return 0;

}
