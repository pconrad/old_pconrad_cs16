#include <iostream>
using namespace std;

#include "demos.h"


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


