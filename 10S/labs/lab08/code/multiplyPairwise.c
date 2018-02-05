// multiplyPairwise.c   
// multiply two arrays together, pairwise (element by element)
//    (i.e. result[i] = a[i]*b[i])
// P. Conrad and D. Cattan for CS16, Fall 2009, UCSB CS Dept.

#include <stdio.h>
#include "tdd.h"

// create a void function that multiplies two arrays of the same size and
// place the product into a third array 
void multiplyPairwise(int *a, int *b, int *result, int n)
{
  return;  // stub @@@ FIX THIS
}

// Now we have the main program to test the pairwiseMult function:
int testMultiplyPairwise() {

  int failures = 0; // this counts the number of failures

  // We use a separate set of braces for each test to 
  // redeclare the arrays--this allows to put the definitions
  // close to each test

  {
    int a[] = {1,2,3,4};
    int b[] = {2,4,6,8};
    int abExpected[] = {2,8,18,32};
    int abResult[] = {-42, 42, -42, 42};

    // Since the pairwiseMult function is void, we call the function first
    // and then check the results

    multiplyPairwise(a,b,abResult, 4);
    failures += CHECK_EXPECT_INT_ARRAY("multiplyPairwise(a,b,abResult,4)", 
				    abResult, abExpected, 4);
  }

  {
    int a[] = {1,2,3,4};
    int c[] = {-1,-10,5,0};
    int acExpected[] = {-1,-20,15,0};
    int acResult[] = {42, -42, 42, -42};  multiplyPairwise(a,c,acResult, 4);
    failures += CHECK_EXPECT_INT_ARRAY("multiplyPairwise(a,c,acResult,4)", 
				    acResult, acExpected, 4);
  }

  {
    int a[] = {1,2,3,4};
    int d[] = {-3,3,0,-2};
    int adExpected[] = {-3,6,0,-8};
    int adResult[] = {42, -42, 42, -4242};
    multiplyPairwise(a,d,adResult, 4);
    failures += CHECK_EXPECT_INT_ARRAY("multiplyPairwise(a,d,adResult,4)", 
				    adResult, adExpected, 4);
  }

  {
    int b[] = {2,4,6,8};
    int c[] = {-1,-10,5,0};

    // for this one, we use a result array that is larger than
    // needed, just to test it still works---we only check
    // the first four elements of the result

    int bcExpected[] = {-2,-40,30,0,-999,-999}; 
    int bcResult[] = {2424, -4242, -2424, 4242, 42424, 24242};
    multiplyPairwise(b,c,bcResult, 4);
    failures += CHECK_EXPECT_INT_ARRAY("multiplyPairwise(b,c,bcResult,4)",
				    bcResult, bcExpected, 4);
  }
  
  {
    int c[] = {-1,-10,5,0};
    int d[] = {-3,3,0,-2};
    int cdExpected[] = {3,-30,0,0};
    int cdResult[] = {242, 424, -242, -424};
    multiplyPairwise(c,d,cdResult, 4);
    failures += CHECK_EXPECT_INT_ARRAY("multiplyPairwise(c,d,cdResult,4)", 
				    cdResult, cdExpected, 4);
  }

  // return number of failures (0 if all tests passe, i.e. success)
  return failures;
} 
