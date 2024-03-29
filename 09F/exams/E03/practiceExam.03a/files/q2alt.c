// q2.c    Answer to question 2 E02 practice exam
// Function by John Coffman--test cases P. Conrad

//John Coffman Practice Midterm #2
int sumPositive(int *a, int n)
{
  int i, sum;
  sum = 0;
  for(i=0;i<n;i++)
    {
      if(a[i]>0)
        sum += a[i];
    }
  return sum;
}

//  ****** ANSWER IS EVERYTHING ABOVE THIS LINE
// ******* BELOW THIS LINE IS JUST TESTING CODE



#include <stdio.h>

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


int main()
{

  int a[]={30,-40,50,-20,10}; 

  int failures = 0;

  failures += checkExpectInt("sumPositive(a,5)",
			     sumPositive(a,5),90);


  failures += checkExpectInt("sumPositive(a,4)",
			     sumPositive(a,4),80);

  failures += checkExpectInt("sumPositive(a,3)",
			     sumPositive(a,3),80);

  failures += checkExpectInt("sumPositive(a,2)",
			     sumPositive(a,2),30);

  failures += checkExpectInt("sumPositive(a,1)",
			     sumPositive(a,1),30);


  if (failures)
    printf("%d test cases FAILED!\n",failures);
  else
    printf("All test cases PASSED!\n");

  return failures;
}

