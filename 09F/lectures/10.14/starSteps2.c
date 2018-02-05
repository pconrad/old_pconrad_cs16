// starSteps2.c  P. Conrad for CS16, 10/12/2009
// with help from Eric G.

#include <stdio.h>

// function prototype
void printNStars(int n);
void printStarSteps(int n);

int main(int argc, char *argv[])
{
  int numSteps;

  if (argc!=2)
    {
      printf("usage: %s numlevels",argv[0]);
      return 1;
    }

  numSteps=atoi(argv[1]);

  printStarSteps(numSteps); // function call
  printf("\n");
  return 0;
}

// function definition is everything from the next line...
void printNStars(int n)
{
  for (n; n>0; n--)
    {
      printf("*");
    }

} // to this line

// By Eric Goodman
void printStarSteps(int n)
{
  int a;
  for (a=1; a< n+1; a++)
    {
      printNStars(a);
      printf("\n");
    }

} // to this line
