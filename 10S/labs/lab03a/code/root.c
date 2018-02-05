// root.c   A simple demo of taking square root of cmd line arg
// P. Conrad for CS16, Spring 2010

#include <stdio.h> // for printf
#include <math.h> // for sqrt
#include <stdlib.h> // for atof

int main(int argc, char *argv[])
{
  if (argc!=2)
    {
      printf("Usage: %s floating-pt-number\n",argv[0]);
      return 1;
    }
  // print square root of command line argument
  printf("%lf\n",sqrt(atof(argv[1])));

  return 0;
}
