// p03.cpp

#include <iostream>
using namespace std;

int yetAnotherFunction (int x) {
  x = x * 3;
  return x;
}

int main() {
  int x = 7;
  int k = yetAnotherFunction(x);
  cout << x << endl;
  return 0;
}

