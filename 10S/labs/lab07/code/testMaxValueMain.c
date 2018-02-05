// testMaxValueMain.c     A main program to call a test routine
// P. Conrad for CS16, 10W, UCSB

#include <stdio.h>
#include "tdd.h"

// function prototypes for the test functions
// maxValue.c contains two functions, and test functions for each

int testLarger();
int testMaxValue(); 

int main()
{
  // run the tests
  int failures = 0;
  failures += testLarger();
  failures += testMaxValue();

  // prints a report of how many tests passed or failed
  // Then return the number of failures ( 0 indicates success!)
  tddFinish(failures); 
  return failures;
}
