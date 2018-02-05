#include <iostream>
#include <string>
using namespace std;

bool aDivisibleByB(int a, int b) {
  return ( a % b == 0 );
}

void assertTrue(bool test, string message) {
  if (test) 
    cout << message << "Passed" << endl;
  else
    cout << "  " << message << "FAILED" << endl;
}

void assertFalse(bool test, string message) {
  assertTrue(!test,message);
}



int main() {
  assertTrue(aDivisibleByB(10,2),"aDivisibleByB(10,2)");
  assertTrue(aDivisibleByB(15,5),"aDivisibleByB(15,5)");
  assertTrue(aDivisibleByB(15,3),"aDivisibleByB(15,3)");
  assertTrue(aDivisibleByB(49,7),"aDivisibleByB(49,7)");
  assertTrue(aDivisibleByB(13,1),"aDivisibleByB(13,1)");

  assertFalse(aDivisibleByB(3,2), "aDivisibleByB(3,2)");
  assertFalse(aDivisibleByB(15,8),"aDivisibleByB(15,8)");
  assertFalse(aDivisibleByB(15,4),"aDivisibleByB(15,4)");
  assertFalse(aDivisibleByB(49,8),"aDivisibleByB(49,8)");
  assertFalse(aDivisibleByB(13,2),"aDivisibleByB(13,2)");



}
