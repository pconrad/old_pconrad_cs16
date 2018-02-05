// printNStars.c   a void function that
//   uses a for loop to print some stars

#include <stdio.h>

// print n stars, with no \n afterwards
void printNStars(int n)
{
  int i;
  for (i=0; i<n; i++)
    printf("*");
  return; // returns "void", i.e. nothing at all
}

int main()
{
  int howMany;

  printf("How many stars do you want? ");
  scanf("%i",&howMany);

  printNStars(howMany);
  printf("\n");
  
  return 0;
}
