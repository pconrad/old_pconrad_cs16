#include "student.h"
#include <cstdlib>
#include <iostream>

#include "studentFuncs.h"

using namespace std;


int main(int argc, char *argv[]) {

  if (argc!=4) {
    cerr << "Usage: " << argv[0] << " perm gpa name" << endl;
    exit(1);
  }

  Student *s = new Student;

  s->perm = atoi(argv[1]);
  s->gpa = atof(argv[2]);
  s->name = string(argv[3]);
  
  cout << toString(*s) << endl;

  return 0;
}
