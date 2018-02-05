// computeAreaOfSquare.c   --- interactive program to compute area of square
// P. Conrad for CS16, Fall 2010, UCSB CS Dept., 01/21/2010

// This is one of a pair programs (along with areaOfSquare.c) that 
// provide a constrast between getting input using scanf and getting input
// from the command line.

// In this program, we are using "int" variables only---because we want
// to illustrate the technique with int variables first.    
// (Granted, for area of a square, a "double" variable would make more sense.)


// First we indicate that we need stdio.h to get access to printf
#include <stdio.h>

// Next we define a function to compute the area of a square (using ints)

int areaOfSquare(int sideLength) 
{
  return sideLength * sideLength;
}


// Next we have our main program that prompts for a value and
// gives back the answer

int main()
{
  int side;

  // prompt for input
  printf("Please enter a value for the side of the square: ");
  scanf("%i",&side);

  // compute and print answer
  printf("Side: %i Area: %i\n", areaOfSquare(side));

  return 0;
}


