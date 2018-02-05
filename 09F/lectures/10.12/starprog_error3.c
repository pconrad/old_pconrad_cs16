// starprog_error3.c  P. Conrad for CS16, 10/12/2009

#include <stdio.h>

// function prototype
void printNStars(int n);

int main()
{
  printNStars(3); // function call
  printf("\n");
  return 0;
}

// function definition is everything from the next line...
void printNStars(int n);   // here's the error
{
  for (n; n>0; n--)
    {
      printf("*");
    }

} // to this line
