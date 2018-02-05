// howManySpaces.c   Count occurences of space in a string
// P. Conrad for CS16, Spring 2010

#include "tdd.h"

// Return sum of an array of n ints, a[0], a[1], .. a[n-1]
int sumArray(int *a, int n) 
{
  return -42;
}

// return number of failed tests
int testSumArray()
{
  int failures=0;
  
  int nums[3]={21,32,55}; // sum is 103
  
  failures += CHECK_EXPECT_INT(sumArray(nums,3),103);

  // We can lie about the size of array if we say that the
  // array is smaller than it really is.  In this case, the
  // sumArray function will only look at the first 2 elems of nums

  failures += CHECK_EXPECT_INT(sumArray(nums,2),53);

  // a good sumArray function should work on an empty array, 
  // returning that the sum is zero

  failures += CHECK_EXPECT_INT(sumArray(nums,0),0);

  int moreNums[10]={1,2,3,4,5,6,7,8,9,10}; // sum is 55

  failures += CHECK_EXPECT_INT(sumArray(nums,10),55);

  int negNums[10]={-1,-2,-3,-4,-5,-6,-7,-8,-9,-10}; // sum is 55

  failures += CHECK_EXPECT_INT(sumArray(nums,10),-55);

  int sumsToZero[12]={-1,0,1,0,-1,0,1,0,-1,0,1,0}; // sum is zero

  failures += CHECK_EXPECT_INT(sumArray(nums,10),0);

  return failures;
}

