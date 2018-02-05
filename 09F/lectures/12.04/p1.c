// p1.c  Problem 1 from 12.04 lecture, CS16, Fall 2009

// Write a C program that takes one command line argument,
// an integer.   We'll call that integer "width".
//
// Write that many stars on one line as output
// then return 0 indicating success.
//
// If there isn't one item on the command line, 
// print the message: "Usage: p1 width" and return 1 indicating an error


#include <stdio.h>

int main(int argc, char *argv[])
{
  int i;

  if (argc!=2)
    {
      printf("Usage: p1 width\n");
      return 1;
    }

  int width=atoi(argv[1]);
  for (i=0; i<width; i++)
    printf("*");
  printf("\n");
  
  return 0;
}
