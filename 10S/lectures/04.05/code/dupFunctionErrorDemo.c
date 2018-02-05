// P.Conrad, for CS16, Spring 2010
// dupFunctionErrorDemo.c   Show what happens if there
// are two functions with the same name


#include <stdio.h>

// function prototype

int smaller(int a, int b);
double smaller(double a, double b);


// main function

int main()
{
  int x;
  double y;

  x=smaller(3,4);
  y=smaller(5.0,4.5);

  printf("x=%i\n",x); // %i and %d are both for int
  printf("y=%lf\n",y); // %lf is "long float", i.e. double

  return 0;
  
}

// function definition for smaller

int smaller(int a, int b)
{
  if (a<b)
    return a;
  else
    return b;

}

double smaller(double a, double b)
{
  if (a<b)
    return a;
  else
    return b;

}
