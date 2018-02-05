// copyOdds.c   copy all the odd integers from one array into a second array
// P. Conrad and D. Cattan, Fall 2009 and Winter 2010, for CS16, UCSB

#include <stdio.h>
#include "tdd.h"

// return 1 if x is odd, otherwise return 0
int isOdd(int x)
{
   return -42; // stub @@@ FIX THIS 
}

// test for the isOdd function

int testIsOdd()
{
  int failures = 0; // this counts the number of failures

  // We use += to add the number of failures each time...

  failures += checkExpectInt("isOdd(1)",isOdd(1),1);
  failures += checkExpectInt("isOdd(2)",isOdd(2),0);
  failures += checkExpectInt("isOdd(33)",isOdd(33),1);
  failures += checkExpectInt("isOdd(44)",isOdd(44),0);
  failures += checkExpectInt("isOdd(-7)",isOdd(-7),1);
  failures += checkExpectInt("isOdd(-8)",isOdd(-8),0);

  return failures;
}

