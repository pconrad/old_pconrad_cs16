// starE.c   A demonstration of ASCII Art printing L characters
// P. Conrad for CS16, Winter 2010, UCSB

// A C function that prints the letter E with stars, 
// at any width or height, provided height is at least 5 and odd,
// and width is at least 2 (otherwise print nothing).

#include <stdio.h>
#include <stdlib.h>

void printNStars(int n)
{
  int i;
  for (i=0;i<n;i++)
    printf("*");
}

void starE(int width, int height)
{
  int i;

  // check if parameters are valid
  if ((height<5) || (height%2 == 0) || width < 2)
    return;  // return without printing anything
  
  // go through every row of the E
  for (i=0; i<height; i++)
    {
      // determine what kind of row it is

      if (i==0 || i==height-1 || i==height/2)
	{
	  // this is a row that is a long bar of the E
	  // i.e. the top, bottom or middle
	  printNStars(width); printf("\n");
	}
      else
	{
	  // this is one of the other rows, 
	  // where we just have one star and a \n
	  printf("*\n");
	}

    }
  return;   //  we are finished
}

// a main program to demonstrate cmd line arguments

int main(int argc, char *argv[])
{
  int width, height;
  
  if (argc!=3)
    {
      printf("Usage: %s width height\n",argv[0]);
      return 1;
    }

  // remember argv[0] is the name of the program
  width = atoi(argv[1]);
  height = atoi(argv[2]);

  // call the function
  starE(width,height);

  return 0;
}
