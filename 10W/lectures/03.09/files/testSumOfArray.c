// testSumOfArrayMain.c
// A main program to call the test routine for index of max.
// P. Conrad for CS16, 10W, UCSB

#include <stdio.h>
#include "tdd.h"

int sumOfArrayForLoop(int a[], int n);
// could also be int sumOfArrayForLoop(int *a, int n);

int sumOfArrayNoLoop(int a[], int n);


// Next we have our main program that runs the tests

int main()
{
  // A simple main for test-driven development
  // This just calls our test function
  // Once the function is tested, we could incorporate it
  // into some other piece of software.


  int failures = 0;
  failures += testSumOfArrayForLoop();
  failures += testSumOfArrayNoLoop();

  if (failures==0)
    printf("All tests passed!\n");
  else
    printf("%d tests failed\n",failures);

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}
