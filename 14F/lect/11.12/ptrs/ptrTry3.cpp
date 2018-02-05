#include <iostream>
using namespace std;

int main() {

  int x=0x7fffcc92a8e4;
  int *p2;
  p2=&x;

  cout << "x=" << x << endl;
  cout << "&x=" << &x << endl;
  cout << "(*p2)=" << (*p2) << endl;
  cout << "p2=" << p2 << endl;
}
