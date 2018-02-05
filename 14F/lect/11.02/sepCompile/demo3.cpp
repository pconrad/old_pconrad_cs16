
#include <iostream>
using namespace std;

#include "demos.h"

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
