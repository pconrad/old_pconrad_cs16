// @@@ YOUR NAME HERE     lab05, CS16, Fall 2009
// selectionSortWithTests.c   test-driven development, finding the index of
// the maximum element in an array.
//  original tests and stubs by P. Conrad for CS16, Fall 2009, UCSB CS Dept.

// We build on the ideas from lab02 where we used test-driven 
// development.  Here we are working with an array of ints, first to 
// find the max, then to apply that idea to selection sort.

#include <stdio.h>

// find the largest element in the array

int indexOfMax(int *a, int n)
{
  return -42; // stub @@@ FIX THIS 
}

void selectionSort(int *a, int n)
{
  // inside selectionSort use your indexOfMax function
  // See homework H07 for more clues:
  //  http://www.cs.ucsb.edu/~pconrad/cs16/09F/homework/H07/

  return; //@@@ FIX ME--- for a void function, doing "nothing" is a valid stub
}


int checkExpectInt(char * label, // the label e.g. "1: isE('f')"
		   int check, // the funciton call we are checking
		   int expect) // what we expect to get
  
{
  if (check != expect)
    {
      printf("Test %s failed: got %d expected %d\n", label, check, expect);
      return 1;
    }
  else
    {
      printf("Test %s passed\n",label);
      return 0;
    }
}

int checkExpectIntArray(char * label, // the label e.g. "1: isE('f')"
			int * check, // the funciton call we are checking
			int * expect, // what we expect to get
			int n)  // how many elements to compare
  
{
  int i; // index variable used in for loop

  // For comparing an array, we need a for loop that compares every element.
  // That's why we need the extra parameter, n, and the index variable i

  // If we forget the n parameter, or get the value of n wrong,
  //  a "segmentation fault" is likely, since we'll access elements
  //  that are "outside the boundaries" of the check or expect arrays.

  for (i=0; i<n; i++)
    {
      if (check[i] != expect[i])
	{
	  printf("Test %s failed at element %d.... got %d expected %d\n", 
		 label, i, check[i], expect[i]);
	  return 1;
	}
      // Question: We do NOT have an else "return 0" here, inside the loop.
      // Ask yourself: if we did, why would that be wrong?
      // (The answer appears below.)
    }
  
  // Answer: We wait until after the entire loop is over and we've examined
  // EVERY element in the array to determine that the test passes

  printf("Test %s passed\n",label);
  return 0;
    
}

// run tests on indexOfMax---return the number of failed tests

int testIndexOfMax()
{
  int failures = 0; // this counts the number of failures from this function

  int a[] = {42,13,56};
  int b[] = {90,80,70,60};
  int c[] = {-50,20,78,43,92,13};

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

  return failures; // return the number of tests that failed
}

// run tests on selectionSort---return the number of failed tests

int testSelectionSort()
{
  int failures = 0; // this counts the number of failures from this function

  int a[] = {42,13,56};
  int b[] = {90,80,70,60};
  int c[] = {-50,20,78,43,92,13};
  int d[] = {42,65,23,86,13,98};  // for you to work with 

  int aSorted[] = {13,42,56};
  int bSorted[] = {60,70,80,90};
  int cSorted[] = {-50,13,20,43,78,92};
  int dSorted[] = {0,0,0,0,0,0}; //@@@ REPLACE ZEROS WITH SORTED version of d

  // For each test case, we first run selectionSort on the array.
  // Then we run the test case to compare what we are checking with
  // what we expect.

  selectionSort(a,3);
  failures += checkExpectIntArray(" 1: a array ",a,aSorted,3);

  selectionSort(b,4);
  failures += checkExpectIntArray(" 2: b array ",b,bSorted,4);
  
  selectionSort(c,6);
  failures += checkExpectIntArray(" 3: c array ",c,cSorted,6);

  // @@@ FOR YOU TO FILL IN...
  //selectionSort(d,6);
  //failures += checkExpectIntArray(" 4: d array ",d,dSorted,6);

  return failures; // return the number of tests that failed
}



// Next we have our main program that runs the tests.
// We've "factored out" the part that runs the tests of indexOfMax
// and the part that runs the tests of selection sort to separate functions

int main()
{
  int failures = 0;

  // We use += to add the number of failures each time...

  failures += testIndexOfMax();
  failures += testSelectionSort();

  // print a summary of what happened

  if (failures==0)
      printf("All tests passed!\n");
  else
    printf("%d tests failed\n",failures);

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}
