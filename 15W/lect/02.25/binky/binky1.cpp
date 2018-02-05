#include <iostream>
using namespace std;

int main() {

  int *x;
  int *y;

  x = new int;

  *x = 42;

  cout << "*x=" << (*x) << endl;

  *y = 13; // Binky may explode!

  cout << "*y=" << (*y) << endl;

  return 0;
}
