// tdd.c   Functions for test driven development, cs16 Spring 2010, 
// P. Conrad, UCSB CS Dept.

#include "tdd.h"
#include <stdio.h>
#include <math.h>  // needed for fabs (floating point absolute value)


// We see that when testing functions that return a double,
// we may need use use a "tolerance" value---some small degree of
// inaccuracy that we are willing to tolerate.   This is because
// floating point values are subject to round off errors.

int checkExpectDouble(char * label, // label for this test, e.g. "ftoC(32.0)"
		      double check, // the function call we are checking
		      double expect, // what we expect to get
		      double tolerance) // how much error we can tolerate
{
  // With double values, we may have a round off error,
  // fabs conputes the absolute value o
  if (fabs(check-expect) > tolerance)
    {
      printf("TEST FAILED: %s got %lf expected %lf (tolerance=%lf): \n",
      		      label, check, expect, tolerance);
      return 1;
    }
  else
    {
      printf(" test passed: %s\n",label);
      return 0;
    }
}


// Another function to support test-driven development
// Merely checks whether an assertion is true

int assertTrue(char * label, //  label for this test, e.g. "smaller(3,2)==2"
	       int  assertion) // boolean (int) expression expected to be true
{
  // assertion is either false (0) or true (1, or any other non-zero value)
  if ( assertion ) 
    {
      printf(" test passed: %s\n",label);
      return 0;
    }
  else
    {
      printf("TEST FAILED: %s \n",label);
      return 1;
    }
}

int checkExpectDoubleWithFileAndLine(char * file, 
				  int line, 
				  char * label,
				  double check, // expression we are checking
				  double expect, // what we expect to get
				  double tolerance) // allowable error
{
  // With double values, we may have a round off error,
  // fabs conputes the absolute value o
  if (fabs(check-expect) > tolerance)
    {
      printf("TEST FAILED: %s line %d %s got %lf expected %lf (tolerance=%lf): \n",
	     file, line, label, check, expect, tolerance);
      return 1;
    }
  else
    {
      printf(" test passed: %s line %d %s\n",file, line, label);
      return 0;
    }

}


int checkExpectIntWithFileAndLine(char * file, 
				  int line, 
				  char * label,
				  int check, // expression we are checking
				  int expect) // what we expect to get
{
  if (check != expect)
    {
      printf("TEST FAILED: %s line %d %s got %d expected %d\n",
	     file, line, label, check, expect);
      return 1;
    }
  else
    {
      printf(" test passed: %s line %d %s got %d\n",file, line, label, check);
      return 0;
    }
  
}

int assertTrueWithFileLine(char * file, int line, char * label, int assertion)
{
  // assertion is either false (0) or true (1, or any other non-zero value)
  if ( assertion ) 
    {
      printf(" test passed: %s line %d %s\n",file, line, label);
      return 0;
    }
  else
    {
      printf("TEST FAILED: %s line %d %s \n",file, line, label);
      return 1;
    }
  
}

int checkExpectInt(char * label, // the label e.g. "isE('f')"
		   int check, // the funciton call we are checking
		   int expect) // what we expect to get
  
{
  if (check != expect)
    {
      printf("TEST FAILED: %s got %d expected %d\n", label, check, expect);
      return 1;
    }
  else
    {
      printf(" test passed: %s\n",label);
      return 0;
    }
}

int checkExpectIntArray(char * label, // the label e.g. "isE('f')"
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
	  printf("TEST FAILED: %s at element %d.... got %d expected %d\n", 
		 label, i, check[i], expect[i]);
	  return 1;
	}
      // Question: We do NOT have an else "return 0" here, inside the loop.
      // Ask yourself: if we did, why would that be wrong?
      // (The answer appears below.)
    }
  
  // Answer: We wait until after the entire loop is over and we've examined
  // EVERY element in the array to determine that the test passes

  printf(" test passed: %s\n",label);
  
  return 0;
  
}

// A function to call when finishing up a TDD program.
// You can call "return tddFinish(failures)" and it will
// both print a summary, as well as return the number of failures

int tddFinish(int failures)
{
  if (failures==0)
    printf(" :-)  All tests passed! \n");
  else
    printf(" :-(  %d tests FAILED! \n",failures);

  return failures; // 0 failures means success!
}
