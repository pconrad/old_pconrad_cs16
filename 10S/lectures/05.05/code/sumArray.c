// sumArray.c find the sum of an array of ints
// P. Conrad for CS16, Spring 2010

#include "tdd.h"
#include <stdio.h>

int sumArray(int *nums, int n)
{
  if (n==0)
    return 0;

  return nums[0]   + sumArray(nums + 1, n-1);
}

int testSumArray()
{
  int failures = 0 ;

  int a[]={40,20,30,10}; // that adds up to 100
  int b[]={7,12,15}; // that adds up 34
  failures += ASSERT_TRUE(sumArray(a,4)==100);
  failures += ASSERT_TRUE(sumArray(b,3)==34);

  return failures;
}
