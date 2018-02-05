 // p01.cpp Program for Sample Exam Question
 // P. Conrad, 01/28/2015
 // test a function that calculates discriminant of a quadratic eqn

#include <iostream> // for cout and endl
#include <cmath> // for fabs
using namespace std;

double discriminant(double a, double b, double c)  {
  return b*b - 4*a*c;
}

const double tolerance = 0.00001;

int main()
{
  // run a test case on our discriminant function
  
  double expectedValue = -108.0;
  double actualValue = discriminant(4.0, 6.0, 9.0);
  
  cout << "Test 1: ";
  
  // missing code

    cout << "Passed" << endl;
  else
    cout << "Failed" << endl;
  
  return 0;
}
