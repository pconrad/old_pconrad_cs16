#include <iostream>
using namespace std;

#include "demos.h"

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
