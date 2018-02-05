// P.Conrad, for CS16, Spring 2010
// dupFunctionErrorFixed.c   
// Show how to get around the fact that you can't
// have two functions both named "smaller" of
// different types in C

#include <stdio.h>

// function prototype

int smaller_int(int a, int b);
double smaller_double(double a, double b);


// main function

int main()
{
  int x;
  double y;

  x=smaller_int(3,4);
  y=smaller_double(5.0,4.5);

  printf("x=%i\n",x); // %i and %d are both for int
  printf("y=%lf\n",y); // %lf is "long float", i.e. double

  return 0;
  
}

// function definition for smaller

int smaller_int(int a, int b)
{
  if (a<b)
    return a;
  else
    return b;

}

double smaller_double(double a, double b)
{
  if (a<b)
    return a;
  else
    return b;

}
