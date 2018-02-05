// printNStars.c   a void function that
//   uses a for loop to print some stars

#include <stdio.h>

// print n stars, with no \n afterwards
void printNStars(int n)
{
  int i;
  for (i=0; i<n; i++)   // or for (i=1; i<=n; i++)
    printf("*");
  return; // returns "void", i.e. nothing at all
}

int main()
{
  printf("Here is a call to printNStars(3): \n");
  printNStars(3);
  printf("\n");
  
  return 0;
}
