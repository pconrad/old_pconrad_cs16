// p1WithFunc.c  Problem 1 from 12.04 lecture, CS16, Fall 2009

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
void lineOfStars(int width);


int main(int argc, char *argv[])
{
  int i;

  if (argc!=2)
    {
      printf("Usage: p1 width\n");
      return 1;
    }

  int width=atoi(argv[1]);
  
  lineOfStars(width); //function call 
  return 0;
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
