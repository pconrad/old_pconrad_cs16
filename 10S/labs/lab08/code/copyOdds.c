// copyOdds.c   copy all the odd integers from one array into a second array
// P. Conrad and D. Cattan, Fall 2009 and Winter 2010, for CS16, UCSB

#include <stdio.h>
#include "tdd.h"

int isOdd(int x); // function prototype for function defined in isOdd.c

// Copy all odd numbers from array src  into array dest. 
// n is the occupancy of array a.
// Destination array should have capacity at least of size n.

int copyOdds(int *src, int *dest, int n)
{
  return -42; // stub @@@ FIX THIS 
}

// A test function for copyOdds
int testCopyOdds()
{
  int failures = 0; // count failures, use += to add in failures from each test

  // TEST CASE 1: source and destination array are of equal sizes

  int a[] = {1,2,3};
  int aOdds[3] = {-42,-42,-42}; // fill with dummy values
  int aOddsExpected[3] = {1,3}; // occupancy is 2 
  int aNumOdds;

  aNumOdds = copyOdds(a,aOdds,3);
  printf("copyOdds(a,aOdds,3)--checking return--\n");
  failures += CHECK_EXPECT_INT(aNumOdds, 2);
  failures += CHECK_EXPECT_INT_ARRAY("copyOdds(a,aOdds,3)--checking array---",aOdds, aOddsExpected, 2);
  
  // TEST CASE 2: destination array is larger than source array

  int b[] = {1,2,3,4,5};
  int bOdds[7] = {-42,-42,-42,-42,-42,-42,-42}; // fill with dummy values
  int bOddsExpected[5] = {1,3,5}; // occupancy is 3
  int bNumOdds;

  bNumOdds = copyOdds(b,bOdds,5);
  printf("copyOdds(b,bOdds,5)--checking return--\n");
  failures += CHECK_EXPECT_INT(bNumOdds, 3);
  failures += CHECK_EXPECT_INT_ARRAY("copyOdds(b,bOdds,5)--checking array---",
				  bOdds, bOddsExpected, 3);

  // TEST CASE 3: destination array > source array, but no odds found

  int c[] = {2,4,6};
  int cOdds[4] = {-42,-42,-42,-42}; // fill with dummy values
  int cNumOdds;

  cNumOdds = copyOdds(c,cOdds,3);
  printf("copyOdds(c,cOdds,3)--checking return--\n");
  failures += CHECK_EXPECT_INT(cNumOdds, 0);
  
  // no need to check destination array (or is there? discuss...)

  
  // return number of failures ( 0 failures => success!)
  return failures;
}
