// ptrDemo.cpp   P. Conrad for UCSB CS16, Fall 2014
// Demo of pointers

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

void usage(int argc, char *argv[]);



int main(int argc, char *argv[]) {
  
  if (argc!=2) {
    usage(argc, argv);
    exit(1);
  }
  
  const char * const option = argv[1];

  // We must use strcmp() and comapre to zero when comparing c-Strings
  // for equality.  This requires #include <cstring>.   A == comparision
  // only checks whether the addresses in memory are equal, not the contents

  if (strcmp(option,"demo1")==0) {
    demo1();
  } else if (strcmp(option,"demo2")==0) {
    demo2();
  } else if (strcmp(option,"demo3")==0) {
    demo3();
  } else if (strcmp(option,"demo4")==0) {
    demo4();
  } else {
    cerr << "Unknown option: " << option << endl;
    usage(argc, argv);
    exit(2);
  }

  return 0;
}

void usage(int argc, char *argv[]) {
  cerr << "Usage: " << argv[0] << " option" << endl;
  cerr << "Options: demo1 demo2 demo3 or demo4" << endl;
}
