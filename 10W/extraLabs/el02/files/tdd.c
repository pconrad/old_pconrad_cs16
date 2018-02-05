// tdd.c   
// Functions for test driven development, cs16 Winter 2010, UCSB CS Dept.
// P. Conrad 

#include "tdd.h"
#include <stdio.h>
#include <math.h>  // needed for fabs (floating point absolute value)




// We see that when testing functions that return a double,
// we may need use use a "tolerance" value---some small degree of
// inaccuracy that we are willing to tolerate.   This is because
// floating point values are subject to round off errors.

int checkExpectDouble(char * label, // the label for this test, e.g. "1: ftoC(32.0)"
		      double check, // the function call we are checking
		      double expect, // what we expect to get
		      double tolerance) // how much error we can tolerate
{
  // With double values, we may have a round off error,
  // fabs conputes the absolute value o
  if (fabs(check-expect) > tolerance)
    {
      printf("Test %s FAILED: got %lf expected %lf (tolerance=%lf): \n",
      		      label, check, expect, tolerance);
      return 1;
    }
  else
    {
      printf("Test %s passed\n",label);
      return 0;
    }
}


// Another function to support test-driven development
// Merely checks whether an assertion is true

int assertTrue(char * label, // the label for this test, e.g. "1: initPoint(&p,1.0,2.0)"
	       int  assertion) // a true/false statement we expect to be true (in C those return int)
{
  if ( assertion ) // assertion is either false (0) or true (1, or any other non-zero value)
    {
      printf("Test %s passed\n",label);
      return 0;
    }
  else
    {
      printf("Test %s FAILED\n",label);
      return 1;
    }
}

int checkExpectInt(char * label, // the label e.g. "1: isE('f')"
		   int check, // the funciton call we are checking
		   int expect) // what we expect to get
  
{
  if (check != expect)
    {
      printf("Test %s FAILED: got %d expected %d\n", label, check, expect);
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
	  printf("Test %s FAILED at element %d.... got %d expected %d\n", 
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


void tddSummary(int failures)
{
  if (failures==0)
    printf("All tests passed!\n");
  else
    printf("%d tests failed\n",failures);
}

// Netbpmtools project -- A project to create a set of tools in C
//  to explore graphics using the netpbm file format.
// Contributors to this project include:
//   Phill Conrad, Tobias Hollerer, Eric Goodman, Alex Wickes,
//   Mark Hamlin, Nick Vaughan

