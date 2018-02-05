// q3.c    Answer to question 3 E02 practice exam
// Function by an anonymous CS16 student--test cases P. Conrad

double averageOfIntArray(int *array, int size)
{
  int n = 0 ;
  double total = 0.0; // make total a double to avoid int division later
  double avg = 0.0;
  
  for(n=0;n<size;n++)
    {
      total += array[n];
    }

  avg = total/size; // since total is a double, this works 

  return avg;
}//end averageOfIntArray

//  ****** ANSWER IS EVERYTHING ABOVE THIS LINE
// ******* BELOW THIS LINE IS JUST TESTING CODE



#include <stdio.h>
#include <math.h>


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
      printf("Test %s failed: got %lf expected %lf (tolerance=%12.10lf): \n",
      		      label, check, expect, tolerance);
      return 1;
    }
  else
    {
      printf("Test %s passed\n",label);
      return 0;
    }
}

int main()
{
  const double tol=0.0001;

  int a[]={30,40,50,20}; 

  int failures = 0;

  failures += checkExpectDouble("averageOfIntArray(a,4)",
				averageOfIntArray(a,4),35.0,tol);

  failures += checkExpectDouble("averageOfIntArray(a,3)",
			 averageOfIntArray(a,3),40.0,tol);

  failures += checkExpectDouble("averageOfIntArray(a,2)",
			 averageOfIntArray(a,2),35.0,tol);

  failures += checkExpectDouble("averageOfIntArray(a,1)",
			 averageOfIntArray(a,1),30.0,tol);
			 
  {
    int b[]={1,2}; 

    failures += checkExpectDouble("averageOfIntArray(b,2)",
			 averageOfIntArray(b,2),1.5,tol);
  }

  if (failures)
    printf("%d test cases FAILED!\n",failures);
  else
    printf("All test cases PASSED!\n");

  return failures;
}

