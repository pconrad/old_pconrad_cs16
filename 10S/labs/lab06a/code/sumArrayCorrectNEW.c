// sumArrayCorrect.c  test-driven development, 
// finding sum of numbers in an array
//   P. Conrad for CS16, Fall 2009, UCSB CS Dept.

// We build on the ideas from lab02 where we used test-driven 
// development.  Here we are working with an array of ints,
// counting how many numbers in the array are odd.


#include <stdio.h>
#include "tdd.h"

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


// main program to run the tests
int main()
{
  int failures = 0; // this counts the number of failures
  int a[] = {4,8,10}; // sum 22
  int b[] = {10,20,30,40}; // sum 100
  int c[] = {-1,1,2,-2,3,-3}; // sum 0

  // We use += to add the number of failures each time...

  failures += CHECK_EXPECT_INT(sumArray(a,3),22);
  failures += CHECK_EXPECT_INT(sumArray(b,4),100);
  failures += CHECK_EXPECT_INT(sumArray(c,6),0);

  // We can also ask for partial sums--sum only up to a certain value
  // This is because we can "lie" about the size of the array, if we
  //  say that the array is smaller than it actually is.
  // (If we say it is larger than it actualy is, we'll probably get a seg fault.)

  failures += CHECK_EXPECT_INT(sumArray(a,2),12);
  failures += CHECK_EXPECT_INT(sumArray(a,1),4);
 // the sum of zero things is zero
  failures += CHECK_EXPECT_INT(sumArray(a,0),0);
  failures += CHECK_EXPECT_INT(sumArray(b,3),60);
  failures += CHECK_EXPECT_INT(sumArray(b,2),30);

  // print a summary of what happened
  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return tddFinish(failures);
}
