// starStep1.c  P. Conrad for CS16, 10/12/2009
// with help from Edwin D.

#include <stdio.h>

// function prototype
void printStarSteps(int n);

int main()
{
  printStarSteps(3); // function call
  printf("\n");
  return 0;
}

// function definition is everything from the next line...
void printStarSteps(int n)
{
  int i=0;
  
  for (i; i<n; i++)
    {
      printf("*");
    }
  printf("\n");

} // to this line
