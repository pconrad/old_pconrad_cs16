#include "tddFuncs.h"
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;


void assertEquals(std::string expected, 
		  std::string actual, 
		  std::string message="") {
  if (expected==actual) {
    cout << "PASSED: " << message << endl;;
  } else {
    cout << "   FAILED: " << message << endl 
	 << "   Expected:[\n" 
	 << expected << "] actual = [\n" 
	 << actual << "]\n" << endl;
  }
}

void assertEquals(int expected, 
		  int actual, 
		  std::string message="") {
  if (expected==actual) {
    cout << "PASSED: " << message << endl;;
  } else {
    cout << "   FAILED: " << message << endl 
	 << "     Expected: " << expected << " Actual: " << actual << endl; 
  }
}

void assertEquals(double expected, 
		  double actual, 
		  std::string message="",
		  double tolerance=0.00001) {
  if (fabs(expected-actual)<tolerance) {
    cout << "PASSED: " << message << endl;;
  } else {
    cout << "   FAILED: " << message << endl 
	 << "     Expected: " << expected << " Actual: " << actual << endl; 
  }
}
