// isOdd.c   Test an isOdd function
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

  failures += CHECK_EXPECT_INT(isOdd(1),1);
  failures += CHECK_EXPECT_INT(isOdd(2),0);
  failures += CHECK_EXPECT_INT(isOdd(33),1);
  failures += CHECK_EXPECT_INT(isOdd(44),0);
  failures += CHECK_EXPECT_INT(isOdd(-7),1);
  failures += CHECK_EXPECT_INT(isOdd(-8),0);

  return failures;
}

