#include <iostream>
using namespace std;

#include "demos.h"

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

