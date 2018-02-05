// testMultiplyPairwiseMain.c     A main program to call a test routine
// P. Conrad for CS16, 10W, UCSB

#include <stdio.h>
#include "tdd.h"

int testMultiplyPairwise(); // function prototype for the test function

int main()
{
  // run the tests
  int failures = 0;
  failures += testMultiplyPairwise();

  // prints a report of how many tests passed or failed
  // Then return the number of failures ( 0 indicates success!)
  tddFinish(failures); 
  return failures;
}
