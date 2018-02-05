// printNStarsInteractive2.c   a void function that
//   uses a for loop to print some stars
// This one uses a while loop so that we can
//  print lots of different lines
// We stop when the user enters 0


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
  // to make sure we go into the loop the first time
  // we initialize howMany to 1
  
  int howMany=1; 
  
  
  while (howMany > 0)
    {
      printf("How many stars do you want? ");
      scanf("%i",&howMany);

      printNStars(howMany);
      printf("\n");
    }
  return 0;
}
