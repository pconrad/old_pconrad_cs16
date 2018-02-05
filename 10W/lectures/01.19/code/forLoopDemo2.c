// forLoopDemo.c  P. Conrad for Winter 2010 CS16
// Demo of a simple for loop

// We want to print the following, all on one line:
//  10 9 8 7 6

#include <stdio.h>

int main()
{
  int i;

  for (i=10; i>5; i--)
    {
      printf("%i ",i); // put a space between each number
    }
  printf("\n");  // print a newline only at the end
  return 0;

