// starL.c   A demonstration of ASCII Art printing L characters
// P. Conrad for CS16, Winter 2010, UCSB

// A C function that prints the letter L with stars, 
// at any width or height, provided both width and height are >= 2
// If either is less than 2, the function should print nothing.)

#include <stdio.h>
#include <stdlib.h>
void starL(int width, int height)
{
  int i;

  // check if parameters are valid
  if ((width<2) || (height < 2))
    return;  // return without printing anything
  
  // print height-1 rows of *\n
  for (i=0; i<height-1; i++)
    printf("+\n");
  
  // print width stars, followed by a final \n
  for (i=0; i<width; i++)
    printf("*");
  
  printf("\n");
  
  return;   //  we are finished
}

// a main program to demonstrate cmd line arguments

int main(int argc, char *argv[])
{
  int width, height;
  
  if (argc!=3)
    {
      printf("Usage: ./starL width height\n");
      return 1;
    }

  // remember argv[0] is the name of the program
  width = atoi(argv[1]);
  height = atoi(argv[2]);

  // call the function
  starL(width,height);

  return 0;
}
