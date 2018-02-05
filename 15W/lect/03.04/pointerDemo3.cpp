#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  int *p;
  int x=5;
  cout << x << endl;
  p = &x;

  (*p) = 42;
  cout << x << endl;

  p[0] = -127;
  cout << x << endl;

}
