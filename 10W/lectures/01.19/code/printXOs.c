// printXOs.c   a void function that
//   uses a for loop to print some stars
// This one uses a while loop so that we can
//  print lots of different lines
// We stop when the user enters 0

// Extra credit for Patrick and Sam for the body of printXOs

#include <stdio.h>

// print n hugs and kisses. 
// I will always start with an X
// and alternate between Xs and Os
// printing exactly n characters.
void printXOs(int n)
{
  int i;
  for (i=0; i<n; i++)
    {
     if(i%2==0)
      printf("X");
    else
      printf("O");
    }
  return; // returns "void", i.e. nothing at all
}

int main()
{
  // to make sure we go into the loop the first time
  // we initialize howMany to 1
  
  int howMany=1; 
  
  
  while (howMany > 0)
    {
      printf("How many hugs and kisses do you want? ");
      scanf("%i",&howMany);

      printXOs(howMany);
      printf("\n");
    }
  return 0;
}
