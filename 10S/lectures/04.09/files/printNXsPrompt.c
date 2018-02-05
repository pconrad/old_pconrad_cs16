// printNXs.c  P. Conrad 04/07/2010  
// demonstrate a void function to print a bunch of x characters

#include <stdio.h>

void printNXs(int n)
{
  int i;
  for (i=0; i<n; i++)
    printf("x");
}


int main()
{
  int numChars;

  // here is a call to printNXs(6);

  printf("How many x chars do you want: ");
  scanf("%i", &numChars  );
  
  printNXs(numChars);  
  printf("\n");

  return 0;


}
