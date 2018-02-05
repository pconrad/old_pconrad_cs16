// maxValue.c    maximum value in an array of doubles
// P. Conrad and D. Cattan for CS16, Fall 2009, UCSB CS Dept.

#include "tdd.h"

// find the larger of two numbers
double larger(double num1, double num2)
{
    return 4242.42; // stub @@@ FIX THIS LINE 
}

// find the largest number in an array of numbers (double)
double maxValue(double *numbers, int n)
{
     return 2424.24; // stub @@@ FIX THIS LINE
}

// Next we have our main program that tests the larger and findMax functions:
int testLarger()
{
  int failures = 0; // this counts the number of failures
  double tol = 0.0000001; // we expect a very accurate result

  failures += CHECK_EXPECT_DOUBLE(larger(0.1, 0.2),0.2,tol);
  failures += CHECK_EXPECT_DOUBLE(larger(1.0, 10.0),10.0,tol);
  failures += CHECK_EXPECT_DOUBLE(larger(3.14, 3.0),3.14,tol);
  failures += CHECK_EXPECT_DOUBLE(larger(-12.0, -11.5),-11.5,tol);

  // return number of failures ( 0 failures indicates success!)
  return failures;
}

int testMaxValue()
{
  int failures = 0;
  double tol = 0.0000001; // we expect a very accurate result

  // create the arrays to find the largest element of
  double a[] = {0.01};
  double b[] = {0.01, 1.01, 0.002};
  double c[] = {-12.3, -1.31, 0, 12.0};
  double d[] = {1.1, 1.01, 1.001, 1.0001};

  failures += CHECK_EXPECT_DOUBLE(maxValue(a, 1), 0.01, tol);
  failures += CHECK_EXPECT_DOUBLE(maxValue(b, 3), 1.01, tol);
  failures += CHECK_EXPECT_DOUBLE(maxValue(c, 4), 12.0, tol);
  failures += CHECK_EXPECT_DOUBLE(maxValue(d, 4), 1.1, tol); 

  // return number of failures ( zero failures indicates success)
  return failures;
}

