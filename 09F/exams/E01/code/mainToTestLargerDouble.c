// main program to test largerDouble.c

#include <stdio.h>
#include <stdlib.h> // for atof

// Answer to question 1 on practice exam 1, P. Conrad for CS16, F09

// return the larger of two doubles:

double larger(double a, double b)
{
  if (a > b)
    return a;
  else 
    return b;
}


int main(int argc, char * argv[])
{
  double num1, num2;
  if (argc!=3)
    {
      printf("Usage: %s num1 num2\n", argv[0]);
      return 1;
    }
  
  num1 = atof(argv[1]);
  num2 = atof(argv[2]);

  // print result
  printf("%lf\n",larger(num1, num2));
 
}
