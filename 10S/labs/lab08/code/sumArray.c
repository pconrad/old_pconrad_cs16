// sumArray.c   find the sum of an array of integers
// P. Conrad and D. Cattan for CS16, Fall 2009, UCSB CS Dept.

#include <stdio.h>
#include "tdd.h"

// find the sum of the array of intergers
int sumArray(int * array, int n)
{
  return -42; // @@@ STUB!!
}

// a function that runs tests on sumArray

int testSumArray()
{
  int failures = 0; // this counts the number of failures
  int a[] = {1};
  int b[] = {-1, 0, 1};
  int c[] = {1, 2, 3, 4};
  int d[] = {50, 11, 14, 19, 6};  

  // We use += to add the number of failures each time...

  failures += CHECK_EXPECT_INT(sumArray(a, 1),1);
  failures += CHECK_EXPECT_INT(sumArray(b, 3),0);
  failures += CHECK_EXPECT_INT(sumArray(c, 4),10);
  failures += CHECK_EXPECT_INT(sumArray(d, 5),100);

  // return number of failures ( 0 failures means success!)
  return failures;
}
