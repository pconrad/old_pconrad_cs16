// starLDemo.c   A demonstration of ASCII Art printing L characters
// P. Conrad for CS16, Winter 2010, UCSB

// A C function that prints the letter L with stars, 
// at any width or height, provided both width and height are >= 2
// If either is less than 2, the function should print nothing.)

#include <stdio.h>

void starL(int width, int height)
{
  int i;

  // check if parameters are valid
  if ((width<2) || (height < 2))
    return;  // return without printing anything
  
  // print height-1 rows of *\n
  for (i=0; i<height-1; i++)
    printf("*\n");
  
  // print width stars, followed by a final \n
  for (i=0; i<width; i++)
    printf("*");
  
  printf("\n");
  
  return;   //  we are finished
}

// A kind of tedious main program to test our function
// (We'll show a couple of other program that do this more effectively)

int main()
{
  printf("Output of starL(3,4) appears between lines below:\n");
  printf("========================\n");
  starL(3,4);
  printf("========================\n\n");

  printf("Output of starL(4,3) appears between lines below:\n");
  printf("========================\n");
  starL(4,3);
  printf("========================\n");

  printf("Output of starL(1,2) appears between lines below:\n");
  printf("========================\n");
  starL(1,2);
  printf("========================\n");

  printf("Output of starL(2,1) appears between lines below:\n");
  printf("========================\n");
  starL(2,1);
  printf("========================\n");

  return 0;
}
