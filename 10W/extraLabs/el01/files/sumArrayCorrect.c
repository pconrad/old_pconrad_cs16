// sumArrayCorrect.c  test-driven development, finding sum of numbers in an array
//   P. Conrad for CS16, Fall 2009, UCSB CS Dept.

// We build on the ideas from lab02 where we used test-driven 
// development.  Here we are working with an array of ints,
// counting how many numbers in the array are odd.


#include <stdio.h>


// add up all the numbers in an array of ints

int sumArray(int *a, int n)
{
  int i;
  int sum=0;

  // add up every element in the array
  for (i=0;i<n; i++)
    sum += a[i];

  return sum;
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


// main program to run the tests
int main()
{
  int failures = 0; // this counts the number of failures
  int a[] = {4,8,10}; // sum 22
  int b[] = {10,20,30,40}; // sum 100
  int c[] = {-1,1,2,-2,3,-3}; // sum 0

  // We use += to add the number of failures each time...

  failures += checkExpectInt("1: sumArray(a,3)",sumArray(a,3),22);
  failures += checkExpectInt("2: sumArray(b,4)",sumArray(b,4),100);
  failures += checkExpectInt("3: sumArray(c,6)",sumArray(c,6),0);

  // We can also ask for partial sums--sum only up to a certain value
  // This is because we can "lie" about the size of the array, if we
  //  say that the array is smaller than it actually is.
  // (If we say it is larger than it actualy is, we'll probably get a seg fault.)

  failures += checkExpectInt("4: sumArray(a,2)",sumArray(a,2),12);
  failures += checkExpectInt("5: sumArray(a,1)",sumArray(a,1),4);
  failures += checkExpectInt("6: sumArray(a,0)",sumArray(a,0),0); // the sum of zero things is zero
  failures += checkExpectInt("7: sumArray(b,3)",sumArray(b,3),60);
  failures += checkExpectInt("8: sumArray(b,2)",sumArray(b,2),30);

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
