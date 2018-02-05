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
  // here is a call to printNXs(6);
  
  printf("The next line should be 17 x chars\n");
  printNXs(17);  
  printf("\n");

  printf("The next line should be 3 x chars\n");
  printNXs(3);  
  printf("\n");
  return 0;


}
