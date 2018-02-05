// starprog_error1.c  P. Conrad for CS16, 10/12/2009

#include <stdio.h>

// oops, no function prototype... that's the error

int main()
{
  printNStars(3); // function call
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
