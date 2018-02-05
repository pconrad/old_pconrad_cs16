// p04.cc P. Conrad, for CISC181 07S
// Exam question for E01


#include <iostream>
using namespace std;

void foo();

void bar (int n) {
  for (int i=0; i<n; i++)
    cout << "a";
  cout << endl;
}

int main() {
  cout << "b" << endl;
  foo();
  bar(2);
  cout << "c" << endl;
  return 0;
}

void foo() {
 cout << "d" << endl;
}
