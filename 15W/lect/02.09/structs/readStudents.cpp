#include <iostream> 
#include <cstdlib> // for exit(), perror()
#include <string>
#include <cmath> // for fabs()
#include <fstream> // for ifstream


#include "student.h" // defines struct Airport
#include "courseRoster.h" // function prototypes

using namespace std;

int main(int argc, char *argv[]) {
  ifstream ifs; // the stream we will use for the input file
  string thisLine; // a line of input from the file

  CourseRoster cr;
  initCourseRoster(&cr,"CMPSC16");
  

  // check to see if there is a command line argument
  // with the name of the airport file we are going to read

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
    Student s;
    initStudentFromCSVString(&s, thisLine);
    addStudentPermNumberOrder(&cr, s);
    
    // try to read another line
    getline(ifs,thisLine);
  }
  
  for (int i=0; i<cr.numStudents; i++) {
    cout << cr.students[i].perm << " " 
	 << cr.students[i].firstName << " "
	 << cr.students[i].lastName << endl;
  }
  
  return 0;

}
