// P. Conrad for CS16, 10W, UCSB
// sumOfArray.c   test-driven development, finding the index of
// the maximum element in an array.

// compile with "cc sumOfArray.c tdd.c testSumOfArrayMain.c -o testSumOfArray"

#include <stdio.h>
#include "tdd.h"
#include <stdlib.h>   // In c++ that would #include <cstdlib>

// find the largest element in the array

int sumOfArrayForLoop(int *a, int n)
{
  int sum=0;
  int i;
  for (i=0;i<n;i++)
    sum += a[i];

  return sum;
}

// find the largest element in the array

int sumOfArrayNoLoop(int *a, int n)
{
  return -42; //@@stub

  if ( n==0)
    return ___;
  else
    return _____ + _____;

}


int testSumOfArrayForLoop()
{
  int failures = 0; // this counts the number of failures
  int a[] = {42,13,56};
  int b[] = {90,80,70,60};
  int c[] = {-50,20,78,43,92,13};
  int d[] = {42,65,23,86,13,98}; 
  printf("Testing sumOfArrayForLoop() function...\n");

  // We use += to add the number of failures each time...
  failures += checkExpectInt(" 1: sumOfArrayForLoop(a,3)",sumOfArrayForLoop(a,3),111);

  // A note about this next test.  Even though the array a contains
  // 3 elements, if we pass in the value 2 for n, the sumOfArrayForLoop function
  // will only CONSIDER the first 2 elements of the array, a[0] and a[1].
  // Thus, the index of max in this case should be 0, the location of 42
  failures += checkExpectInt(" 2: sumOfArrayForLoop(a,2)",sumOfArrayForLoop(a,2),55);

  // We use the same trick on b---but here, since b[0] is the max,
  // we should get 0 regardless of whether we pass in 4,3,2 or 1 for
  // the value of n
  failures += checkExpectInt(" 3: sumOfArrayForLoop(b,4)",sumOfArrayForLoop(b,4),300);


  // print a summary of what happened

  if (failures==0)
      printf("All tests passed!\n");
  else
    printf("%d tests failed\n",failures);

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}

// Next we have a function to run the tests

int testSumOfArrayNoLoop()
{
  int failures = 0; // this counts the number of failures
  int a[] = {42,13,56};
  int b[] = {90,80,70,60};
  int c[] = {-50,20,78,43,92,13};
  int d[] = {42,65,23,86,13,98}; 
  printf("Testing sumOfArrayNoLoop() function...\n");

  // We use += to add the number of failures each time...
  failures += checkExpectInt(" 1: sumOfArrayNoLoop(a,3)",sumOfArrayNoLoop(a,3),111);

  // A note about this next test.  Even though the array a contains
  // 3 elements, if we pass in the value 2 for n, the sumOfArrayNoLoop function
  // will only CONSIDER the first 2 elements of the array, a[0] and a[1].
  // Thus, the index of max in this case should be 0, the location of 42
  failures += checkExpectInt(" 2: sumOfArrayNoLoop(a,2)",sumOfArrayNoLoop(a,2),55);

  // We use the same trick on b---but here, since b[0] is the max,
  // we should get 0 regardless of whether we pass in 4,3,2 or 1 for
  // the value of n
  failures += checkExpectInt(" 3: sumOfArrayNoLoop(b,4)",sumOfArrayNoLoop(b,4),300);


  // print a summary of what happened

  if (failures==0)
      printf("All tests passed!\n");
  else
    printf("%d tests failed\n",failures);

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}


