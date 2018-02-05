// p02.cpp P. Conrad,
// Sample Exam Question


#include <iostream>
using namespace std;

void mysteryFunction (int *x);

int main() {
  int k = 7;
  mysteryFunction(&k);
  cout << k << endl;
  return 0;
}

void mysteryFunction (int *x) {
  int result;
  result = (*x);
  result = result * 3;
  (*x) = result; 
}
