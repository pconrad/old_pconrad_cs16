// raiseToPower.c
// A program that illustrates command line args with both int and double
// P. Conrad for CS16, Winter 2010

#include <stdio.h>
#include <stdlib.h> // for atoi, atof

int main(int argc, char *argv[]) // for command line args
{
  
  double base;
  int exponent;
  double answer = 1.0; 
  int i;

  // check command line args

  if (argc != 3)
    {
      printf("Usage: raiseToPower base exponent\n");
      return 1;
    }

  // convert command line args

  base = atof(argv[1]); // use atof with double
  exponent = atoi(argv[2]); // use atoi with integer

  // check whether exponent is negative

  if (exponent < 0)
    {
      printf("Sorry: this program doesn't do negative exponents\n");
      return 2;
    }

  // compute answer

  for (i=0; i<exponent; i++)
    {
      answer *= base;
    }

  // print answer

  printf("The answer is %lf\n", answer);

  return 0;
}
