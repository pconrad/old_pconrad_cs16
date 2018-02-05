// P. Conrad for CS16, 10W, UCSB
// indexOfMax.c   test-driven development, finding the index of
// the maximum element in an array.

// compile with "cc indexOfMax.c tdd.c testIndexOfMaxMain.c -o testIndexOfMax"

#include <stdio.h>
#include "tdd.h"

// Find the index of the largest element in the array
// In the case of duplicates, find the first occurence
// (the one with the lowest index)

int indexOfMax(int *a, int n)
{
  return -42; // stub @@@ FIX THIS 
}


// Next we have a function to run the tests

int testIndexOfMax()
{
  int failures = 0; // this counts the number of failures
  // We use += to add the number of failures each time...

  printf("Testing indexOfMax() function...\n");

  int a[] = {42,13,56};
  failures += checkExpectInt("indexOfMax(a,3)",indexOfMax(a,3),2);
  
  // A note about this next test.  Even though the array a contains
  // 3 elements, if we pass in the value 2 for n, the indexOfMax function
  // will only CONSIDER the first 2 elements of the array, a[0] and a[1].
  // Thus, the index of max in this case should be 0, the location of 42

  failures += checkExpectInt("indexOfMax(a,2)",indexOfMax(a,2),0);
  
  // We use the same trick on b---but here, since b[0] is the max,
  // we should get 0 regardless of whether we pass in 4,3,2 or 1 for
  // the value of n

  int b[] = {90,80,70,60};
  failures += checkExpectInt("indexOfMax(b,4)",indexOfMax(b,4),0);
  failures += checkExpectInt("indexOfMax(b,3)",indexOfMax(b,3),0);
  failures += checkExpectInt("indexOfMax(b,2)",indexOfMax(b,2),0);
  failures += checkExpectInt("indexOfMax(b,1)",indexOfMax(b,1),0);
  
  // For the c array, the value of index of max changes
  // depending on the value we pass in for n

  int c[] = {-50,20,78,43,92,13};
  failures += checkExpectInt("indexOfMax(c,6)",indexOfMax(c,6),4);
  failures += checkExpectInt("indexOfMax(c,5)",indexOfMax(c,5),4);
  failures += checkExpectInt("indexOfMax(c,4)",indexOfMax(c,4),2);
  failures += checkExpectInt("indexOfMax(c,3)",indexOfMax(c,3),2);
  failures += checkExpectInt("indexOfMax(c,2)",indexOfMax(c,2),1);
  failures += checkExpectInt("indexOfMax(c,1)",indexOfMax(c,1),0);

  // Check what happens when there are duplicates—we should return
  // the index of the first occurence.

  int d[] = {42,65,65,13}; // correct answer 1 
  int e[] = {42,42,42,42}; // correct answer 0
  
  failures += checkExpectInt("indexOfMax(d,4)",indexOfMax(d,4),1);
  failures += checkExpectInt("indexOfMax(e,4)",indexOfMax(e,4),0);

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}
