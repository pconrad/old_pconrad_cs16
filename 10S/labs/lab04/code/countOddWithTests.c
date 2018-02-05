// @@@ YOUR NAME HERE     lab04, CS16, Spring 2010
// countOddWithTests.c   test-driven development, counting in an array
//  original tests and stubs by P. Conrad for CS16, Spring 2010, UCSB CS Dept.

// We build on the ideas from lab02 where we used test-driven 
// development.  Here we are working with an array of ints,
// counting how many numbers in the array are odd.


#include <stdio.h>

// return 1 if x is odd, otherwise return 0
int isOdd(int x)
{
  return -42; // stub @@@ FIX THIS 
}

// count how many numbers in the int array a (of size n) are odd

int countOdd(int *a, int n)
{
  return -42; // stub @@@ FIX THIS 
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


// Next we have our main program that runes the tests...
int main()
{
  int failures = 0; // this counts the number of failures
  int a[] = {1,2,3};
  int b[] = {1,2,3,4,5};
  int c[] = {2,4,6};

  // We use += to add the number of failures each time...

  failures += checkExpectInt("1: isOdd(1)",isOdd(1),1);
  failures += checkExpectInt("2: isOdd(2)",isOdd(2),0);
  failures += checkExpectInt("3: isOdd(33)",isOdd(33),1);
  failures += checkExpectInt("4: isOdd(44)",isOdd(44),0);
  failures += checkExpectInt("5: isOdd(-7)",isOdd(-7),1);
  failures += checkExpectInt("6: isOdd(-8)",isOdd(-8),0);


  failures += checkExpectInt("7: countOdd(a,3)",countOdd(a,3), 2);
  failures += checkExpectInt("8: countOdd(b,5)",countOdd(b,5), 3);
  failures += checkExpectInt("9: countOdd(c,3)",countOdd(c,3), 0);


  // print a summary of what happened

  if (failures==0)
    {
      printf("All tests passed!\n");
    }
  else
    printf("%d tests failed\n",failures);

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}
