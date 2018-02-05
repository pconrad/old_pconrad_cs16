// ptrDemo.cpp   P. Conrad for UCSB CS16, Fall 2014
// Demo of pointers

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

void usage(int argc, char *argv[]);
void demo1();
void demo2();
void demo3();
void demo4();

int main(int argc, char *argv[]) {
  
  if (argc!=2) {
    usage(argc, argv);
    exit(1);
  }
  
  char * option = argv[1];

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

void demo1() {
  cout << "Entering demo1" << endl;
  int x;
  int *p;
  cout << "Uninitialized values: x=" << x << " p=" << p << endl;
  x = 7;
  p = &x;
  cout << "Initialized values: x=" << x << " p=" << p << " (*p)= " << (*p) << endl;
  cout << "Exiting demo1" << endl;
}

void demo2() {
  cout << "Entering demo2" << endl;
  int x;
  int *p;
  int *q;
  int *r;
  int *s;
  cout << "Uninitialized values: x=" << x << " p=" << p << endl
       << " q=" << q << " r=" << r << " s=" << s << endl;
  cout << "Dereferencing an uninitialized pointer is likely to fail" << endl
       << "  (though not guaranted to fail)" << endl;
  cout << "*p=" << (*p) << endl;
  cout << "*q=" << (*q) << endl;
  cout << "*r=" << (*r) << endl;
  cout << "*s=" << (*s) << endl;
  cout << "Exiting demo2" << endl;
}


void demo3() {
  cout << "Entering demo3 " << endl;

  // The name of an array is treated as a pointer to the first element

  int a[5]={13,17,19,23,29};

  cout << "a=       " << a << endl;
  cout << "&(a[0])= " << ( &(a[0]) ) << endl;
  cout << "a[0]=    " << a[0] << endl;
  cout << "*a=      " << ( *a ) << endl << endl;

  cout << "(a+1)=    " << (a+1) << endl;
  cout << "&(a[1])=  " << ( &(a[1]) ) << endl;
  cout << "a[1]=     " << a[1] << endl;
  cout << "*(a+1)=   " << ( *(a+1) ) << endl << endl;

  cout << "(a+2)=    " << (a+2) << endl;
  cout << "&(a[2])=  " << ( &(a[2]) ) << endl;
  cout << "a[2]=     " << a[2] << endl;
  cout << "*(a+2)=   " << ( *(a+2) ) << endl << endl;

  cout << "(a+3)=    " << (a+3) << endl;
  cout << "&(a[3])=  " << ( &(a[3]) ) << endl;
  cout << "a[3]=     " << a[3] << endl;
  cout << "*(a+3)=   " << ( *(a+3) ) << endl << endl; 

  cout << "Exiting demo3" << endl;
}

void demo4() {
  cout << "Entering demo4" << endl;

  int a[5]={13,17,19,23,29};

  cout << "sizeof(a[0])=" << (  sizeof(a[0]) ) << endl;
  cout << "sizeof(*a)=" << (  sizeof(*a) ) << endl;
  cout << "sizeof(a)=" << (  sizeof(a) ) << endl;
  cout << "( sizeof(a) / sizeof(*a) ) =" 
       << (  sizeof(a) / sizeof(*a)  ) << endl;

  int len = sizeof(a) / sizeof(*a);

  for (int i=0; i < len; i++ ) {
    cout << "i="                <<     i   << " " 
	 << "(a+i)="            <<   (a+i) << " "
	 << "*(a+" << i << ")=" <<  *(a+i) << " "
	 << "a["   << i << "]=" <<   a[i]  << endl;
  }

  cout << "Exiting demo4" << endl;
}
