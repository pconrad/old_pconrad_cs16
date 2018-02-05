// P. Conrad for CS16, 10W, UCSB
// indexOfMax.c   test-driven development, finding the index of
// the maximum element in an array.

// compile with "cc indexOfMax.c tdd.c testIndexOfMaxMain.c -o testIndexOfMax"

#include <stdio.h>
#include "tdd.h"
#include <stdlib.h>   // In c++ that would #include <cstdlib>

// find the largest element in the array

int indexOfMaxForLoop(int *a, int n)
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

// find the largest element in the array

int indexOfMaxNoLoop(int *a, int n)
{
  if (n==0)
    {
      printf("ERROR: cannot call indexOfMaxNoLoop when n==0");
      exit(1);
    }
  else if (n==1)
    return 0; // a[0] is the only element, so its the max.
  else
    {
      int indexOfMaxOfRest = indexOfMaxNoLoop(a+1,n-1) + 1;
      // We add one, because the position in the larger array
      // is one bigger than the position in the smaller array

      // the answer is either going to be 0, if a[0] is larger
      // then the value referred to by indexOfMaxOfRest...
      // Or the answer will be indexOfMaxOfRest + 1 ---
      // Because in the smaller array, that index is "off by one"
      // from the index in the larger array.

      if (  a[0] >= a[indexOfMaxOfRest]  )
	return 0;
      else
	return indexOfMaxOfRest;
      
    }
  
}


// Next we have a function to run the tests

int testIndexOfMaxForLoop()
{
  int failures = 0; // this counts the number of failures
  int a[] = {42,13,56};
  int b[] = {90,80,70,60};
  int c[] = {-50,20,78,43,92,13};
  int d[] = {42,65,23,86,13,98}; 
  printf("Testing indexOfMaxForLoop() function...\n");

  // We use += to add the number of failures each time...
  failures += checkExpectInt(" 1: indexOfMaxForLoop(a,3)",indexOfMaxForLoop(a,3),2);

  // A note about this next test.  Even though the array a contains
  // 3 elements, if we pass in the value 2 for n, the indexOfMaxForLoop function
  // will only CONSIDER the first 2 elements of the array, a[0] and a[1].
  // Thus, the index of max in this case should be 0, the location of 42
  failures += checkExpectInt(" 2: indexOfMaxForLoop(a,2)",indexOfMaxForLoop(a,2),0);

  // We use the same trick on b---but here, since b[0] is the max,
  // we should get 0 regardless of whether we pass in 4,3,2 or 1 for
  // the value of n
  failures += checkExpectInt(" 3: indexOfMaxForLoop(b,4)",indexOfMaxForLoop(b,4),0);
  failures += checkExpectInt(" 4: indexOfMaxForLoop(b,3)",indexOfMaxForLoop(b,3),0);
  failures += checkExpectInt(" 5: indexOfMaxForLoop(b,2)",indexOfMaxForLoop(b,2),0);
  failures += checkExpectInt(" 6: indexOfMaxForLoop(b,1)",indexOfMaxForLoop(b,1),0);

  // For the c array, the value of index of max changes
  // depending on the value we pass in for n
  // As a reminder, here's c:   int c[] = {-50,20,78,43,92,13};

  failures += checkExpectInt(" 7: indexOfMaxForLoop(c,6)",indexOfMaxForLoop(c,6),4);
  failures += checkExpectInt(" 8: indexOfMaxForLoop(c,5)",indexOfMaxForLoop(c,5),4);
  failures += checkExpectInt(" 9: indexOfMaxForLoop(c,4)",indexOfMaxForLoop(c,4),2);
  failures += checkExpectInt("10: indexOfMaxForLoop(c,3)",indexOfMaxForLoop(c,3),2);
  failures += checkExpectInt("11: indexOfMaxForLoop(c,2)",indexOfMaxForLoop(c,2),1);
  failures += checkExpectInt("12: indexOfMaxForLoop(c,1)",indexOfMaxForLoop(c,1),0);

  // print a summary of what happened

  if (failures==0)
      printf("All tests passed!\n");
  else
    printf("%d tests failed\n",failures);

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}


int testIndexOfMaxNoLoop()
{
  int failures = 0; // this counts the number of failures
  int a[] = {42,13,56};
  int b[] = {90,80,70,60};
  int c[] = {-50,20,78,43,92,13};
  int d[] = {42,65,23,86,13,98}; 
  printf("Testing indexOfMaxNoLoop() function...\n");

  // We use += to add the number of failures each time...
  failures += checkExpectInt(" 1: indexOfMaxNoLoop(a,3)",indexOfMaxNoLoop(a,3),2);

  // A note about this next test.  Even though the array a contains
  // 3 elements, if we pass in the value 2 for n, the indexOfMaxNoLoop function
  // will only CONSIDER the first 2 elements of the array, a[0] and a[1].
  // Thus, the index of max in this case should be 0, the location of 42
  failures += checkExpectInt(" 2: indexOfMaxNoLoop(a,2)",indexOfMaxNoLoop(a,2),0);

  // We use the same trick on b---but here, since b[0] is the max,
  // we should get 0 regardless of whether we pass in 4,3,2 or 1 for
  // the value of n
  failures += checkExpectInt(" 3: indexOfMaxNoLoop(b,4)",indexOfMaxNoLoop(b,4),0);
  failures += checkExpectInt(" 4: indexOfMaxNoLoop(b,3)",indexOfMaxNoLoop(b,3),0);
  failures += checkExpectInt(" 5: indexOfMaxNoLoop(b,2)",indexOfMaxNoLoop(b,2),0);
  failures += checkExpectInt(" 6: indexOfMaxNoLoop(b,1)",indexOfMaxNoLoop(b,1),0);

  // For the c array, the value of index of max changes
  // depending on the value we pass in for n
  // As a reminder, here's c:   int c[] = {-50,20,78,43,92,13};

  failures += checkExpectInt(" 7: indexOfMaxNoLoop(c,6)",indexOfMaxNoLoop(c,6),4);
  failures += checkExpectInt(" 8: indexOfMaxNoLoop(c,5)",indexOfMaxNoLoop(c,5),4);
  failures += checkExpectInt(" 9: indexOfMaxNoLoop(c,4)",indexOfMaxNoLoop(c,4),2);
  failures += checkExpectInt("10: indexOfMaxNoLoop(c,3)",indexOfMaxNoLoop(c,3),2);
  failures += checkExpectInt("11: indexOfMaxNoLoop(c,2)",indexOfMaxNoLoop(c,2),1);
  failures += checkExpectInt("12: indexOfMaxNoLoop(c,1)",indexOfMaxNoLoop(c,1),0);

  // print a summary of what happened

  if (failures==0)
      printf("All tests passed!\n");
  else
    printf("%d tests failed\n",failures);

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}
