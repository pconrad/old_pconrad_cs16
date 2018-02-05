// fToCWithTests.c    fToC() with tests
// P. Conrad for CS16, Fall 2009, UCSB CS Dept.

// This file illustrates how to develop a function
// plus a test harness for that function in C.
// This file illustrates using a test harness that returns
// an int value: 0 if the test passes, and 1 if it fails.
// It also illustrates testing with doubles (and a tolerance value)


// First we indicate that we need two libraries
//   math.h for computing an absolute value, and
//   stdio.h for doing simple input/output (e.g. printf)

#include <math.h>
#include <stdio.h>

// convert fahrenheit to celsius

double fToC(double fTemp)
{
  return -1234.56789;   // @@@ stub---test with this, then remove it
  return (fTemp - 32.0)*(5.0/9.0);
}


// We see that when testing functions that return a double,
// we may need use use a "tolerance" value---some small degree of
// inaccuracy that we are willing to tolerate.   This is because
// floating point values are subject to round off errors.

int checkExpectDouble(char * label, // the label for this test, e.g. "1: ftoC(32.0"
		      double check, // the funciton call we are checking
		      double expect, // what we expect to get
		      double tolerance) // how much error we can tolerate
{
  // With double values, we may have a round off error,
  // fabs conputes the absolute value o
  if (fabs(check-expect) > tolerance)
    {
      printf("Test %s failed: expected %lf got %lf (tolerance=%lf): \n",
      		      label, check, expect, tolerance);
      return 1;
    }
  else
    {
      printf("Test %s passed\n",label);
      return 0;
    }
}


// Next we have our main program that tests the fToC function:
int main()
{
  int failures = 0; // this counts the number of failures
  double tol = 0.0000001; // we expect a very accurate result

  failures += checkExpectDouble("1: fToC(32.0)",fToC(32.0),0.0,tol);
  failures += checkExpectDouble("2: fToC(212.0)",fToC(212.0),100.0,tol);
  failures += checkExpectDouble("3: fToC(68.0)",fToC(68.0),20.0,tol);
  failures += checkExpectDouble("4: fToC(-40.0)",fToC(-40.0),-40.0,tol);

  // print a summary of what happened

  if (failures==0)
    {
      printf("All tests passed!\n");
    }
  else
    printf("%d tests failed\n",failures);

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}


