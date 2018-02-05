// sumArrayRec.c    RecursiveSum
// Function by J. Balkind, main by P. Conrad

int mysteryFunction(int *a, int n)
{
  if (n<=0)
    return 0;
  else
    return a[0] + mysteryFunction(a+1,n-1);
}

//  ****** ANSWER IS EVERYTHING ABOVE THIS LINE
// ******* BELOW THIS LINE IS JUST TESTING CODE

#include <stdio.h>
#include "tdd.h"


int main()
{
  int a[]={30,40,50,20,50,20}; // 210
  int b[]={30,40,50}; // 120
  int c[]={50,50,50}; // 150
  int d[]={10,10,20,20}; // 60
  int f[]={10}; // 10

  int failures = 0;

  failures += checkExpectInt("mysteryFunction(a,6)",
			     mysteryFunction(a,6), 210);

  failures += checkExpectInt("mysteryFunction(b,3)",
			     mysteryFunction(b,3), 120);

  failures += checkExpectInt("mysteryFunction(c,3)",
			     mysteryFunction(c,3), 150);

  failures += checkExpectInt("mysteryFunction(d,4)",
			     mysteryFunction(d,4), 60);

  failures += checkExpectInt("mysteryFunction(f,1)",
			     mysteryFunction(f,1), 10);

  failures += checkExpectInt("mysteryFunction(f,0)",
			     mysteryFunction(f,0), 0);

  if (failures > 0)
    printf("%d tests FAILED!!!!!!\n", failures);
  else
    printf("All tests passed!\n");

  return failures;
}

