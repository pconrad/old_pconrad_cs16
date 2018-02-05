// Problem 1 from lab03, Winter 2010, CS16

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

  // get one integer from the first command line argument

  int width=atoi(argv[1]);

  // use that integer to print a bar of that many stars
  for (i=0; i<width; i++)
    printf("+");

  // print a new line before we finish the program
  printf("\n");
  
  return 0;
}
