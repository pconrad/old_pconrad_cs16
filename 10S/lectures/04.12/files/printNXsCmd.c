// printNXs.c  P. Conrad 04/07/2010  
// demonstrate a void function to print a bunch of x characters

#include <stdio.h>
#include <stdlib.h> // for atoi

void printNXs(int n)
{
  int i;
  for (i=0; i<n; i++)
    printf("x");
}

int main(int argc, char *argv[])
{
  // here is a call to printNXs(6);

  printNXs(atoi(argv[1])); // what the!??   We'll explain this... 
  printf("\n");

  return 0;


}
