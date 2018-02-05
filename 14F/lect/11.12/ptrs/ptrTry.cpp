#include <iostream>
using namespace std;

int main() {

  int x=5;
  int *p2=&x;

  cout << "x=" << x << endl;
  cout << "&x=" << &x << endl;
  cout << "(*p2)=" << (*p2) << endl;
  cout << "p2=" << p2 << endl;
}
