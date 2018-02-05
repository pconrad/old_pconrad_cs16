// p4WithFunc.c  Problem 1 from 12.04 lecture, CS16, Fall 2009

// Write a C program that takes one command line argument,
// an integer.   We'll call that integer "width".
//
// Write that many stars on one line as output
// then return 0 indicating success.
//
// If there isn't one item on the command line, 
// print the message: "Usage: p1 width" and return 1 indicating an error

// For the exam, be able to distinguish between:
//   function prototype, call, and definition

#include <stdio.h>
#include <stdlib.h>

// function prototype is the first line of the function definition, + ;
void printStarBox(int width, int height);


int main(int argc, char *argv[])
{
  int i;

  if (argc!=3)
    {
      printf("Usage: %s width height\n", argv[0] );
      return 1;
    }

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
      // print a line of stars (with proper width)
      for (j=0; j< width; j++)
	printf("*");

      // print a new line
      printf("\n");
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
