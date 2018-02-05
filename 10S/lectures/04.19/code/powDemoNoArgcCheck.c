// powDemoNoArgcCheck.c    Use cmd line params to illustrate exponentiation
// with the pow function

// This illustrates what happens if you leave out the argc!=3 check.


// I want to be able to type 

//  ./powDemo 3 2   and get the output "The answer is 9.0"

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  double base, exp;

  //The argc check is commented out
  /*  if (argc !=  3)
    {
      printf("Usage: %s base exp\n",argv[0]);
      return 1;
    }
  */

  // get input from command line
  base = atof(argv[1]); // atof is used for double, not atod.
  exp = atof(argv[2]);    

  printf("The answer is %lf\n", pow(base,exp));

  return 0;
}
