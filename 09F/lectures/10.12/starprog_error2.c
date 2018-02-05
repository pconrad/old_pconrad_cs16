// starprog_error2.c  P. Conrad for CS16, 10/12/2009

#include <stdio.h>

// function prototype
void printNStars(int n);

int main()
{
  printNStarz(3); // function call (error, wrong name)
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
