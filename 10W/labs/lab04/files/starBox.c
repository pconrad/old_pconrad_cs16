// starBox.c    boxOfStars problem from CS16, Winter 2010
// P. Conrad

// This program solves the "starBox" problem described in lab04

#include <stdio.h>
#include <stdlib.h>

// function prototype is the first line of the function definition, + ;
void printStarBox(int width, int height);
void lineOfStars(int width);

int main(int argc, char *argv[])
{
  int i;

  // check for legal command line
  if (argc!=3)
    {
      printf("Usage: %s width height\n", argv[0] );
      return 1;
    }

  // get values of command line parameters
  int width=atoi(argv[1]);
  int height=atoi(argv[2]);
  
  printStarBox(width, height); //function call 
  return 0;
}

// function definition for printStarBox

void printStarBox(int width, int height)
{
  int i; int j;   // or int i,j;

  // each time through the outer loop makes one line in the box
  for (i=0;  i<height; i++)
    {
      lineOfStars(width);
    }
  
}

// from this line down to...
void lineOfStars(int width)
{
  int i;
  for (i=0; i<width; i++)
    printf("*");
  printf("\n");
  
}
// ... this line, we have a function definition
