// printNStars.c    Program that prints a line of stars
// P. Conrad for CS16, Winter 2010

// This program is a solution to the following problem:

// Problem: 
//   Write a C program that takes one command line argument,
//   an integer.   We'll call that integer "width".
//
//   Write that many stars on one line as output
//   then return 0 indicating success.
//
//   If there isn't one item on the command line, 
//   print the message: "Usage: p1 width" and return 1 indicating an error
//
//   Your program should define and use a function with the prototype:
//      void printNStars(int n); 
//   that prints n stars on the line (with no \n after it).

// Note: For the exam, be able to distinguish between:
//   function prototype, call, and definition

#include <stdio.h>
#include <stdlib.h>

// function prototype is the first line of the function definition, plus a ;
void printNStars(int n);

int main(int argc, char *argv[])
{
  int i;
  int width;

  if (argc!=2)
    {
      printf("Usage: %s width\n",argv[0]);
      return 1;
    }

  width=atoi(argv[1]);
  
  printNStars(width); //function call 
  printf("\n");

  return 0;
}

// from this line down to...

void printNStars(int n)
{
  int i;
  
  // print a line of *
  for (i=0; i<n; i++)
    printf("*");

}
// ... this line, we have a function definition
