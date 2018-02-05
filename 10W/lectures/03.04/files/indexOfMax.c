// P. Conrad for CS16, 10W, UCSB
// indexOfMax.c   test-driven development, finding the index of
// the maximum element in an array.

// compile with "cc indexOfMax.c tdd.c testIndexOfMaxMain.c -o testIndexOfMax"

#include <stdio.h>
#include "tdd.h"

// find the largest element in the array

int indexOfMax(int *a, int n)
{
  int i;
  int max = a[0];
  int maxInd = 0;
  for (i=0; i<n; i++)
    {
      if(a[i]>max)
	{ 
	  max = a[i];
	  maxInd = i;
	}
    }
  return maxInd;
  //return -42; // stub @@@ FIX THIS 
}


// Next we have a function to run the tests

int testIndexOfMax()
{
  int failures = 0; // this counts the number of failures
  int a[] = {42,13,56};
  int b[] = {90,80,70,60};
  int c[] = {-50,20,78,43,92,13};
  int d[] = {42,65,23,86,13,98}; 
  printf("Testing indexOfMax() function...\n");

  // We use += to add the number of failures each time...
  failures += checkExpectInt(" 1: indexOfMax(a,3)",indexOfMax(a,3),2);

  // A note about this next test.  Even though the array a contains
  // 3 elements, if we pass in the value 2 for n, the indexOfMax function
  // will only CONSIDER the first 2 elements of the array, a[0] and a[1].
  // Thus, the index of max in this case should be 0, the location of 42
  failures += checkExpectInt(" 2: indexOfMax(a,2)",indexOfMax(a,2),0);

  // We use the same trick on b---but here, since b[0] is the max,
  // we should get 0 regardless of whether we pass in 4,3,2 or 1 for
  // the value of n
  failures += checkExpectInt(" 3: indexOfMax(b,4)",indexOfMax(b,4),0);
  failures += checkExpectInt(" 4: indexOfMax(b,3)",indexOfMax(b,3),0);
  failures += checkExpectInt(" 5: indexOfMax(b,2)",indexOfMax(b,2),0);
  failures += checkExpectInt(" 6: indexOfMax(b,1)",indexOfMax(b,1),0);

  // For the c array, the value of index of max changes
  // depending on the value we pass in for n
  // As a reminder, here's c:   int c[] = {-50,20,78,43,92,13};

  failures += checkExpectInt(" 7: indexOfMax(c,6)",indexOfMax(c,6),4);
  failures += checkExpectInt(" 8: indexOfMax(c,5)",indexOfMax(c,5),4);
  failures += checkExpectInt(" 9: indexOfMax(c,4)",indexOfMax(c,4),2);
  failures += checkExpectInt("10: indexOfMax(c,3)",indexOfMax(c,3),2);
  failures += checkExpectInt("11: indexOfMax(c,2)",indexOfMax(c,2),1);
  failures += checkExpectInt("12: indexOfMax(c,1)",indexOfMax(c,1),0);

  // print a summary of what happened

  if (failures==0)
      printf("All tests passed!\n");
  else
    printf("%d tests failed\n",failures);

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}
