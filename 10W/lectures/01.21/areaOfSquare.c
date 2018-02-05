// areaOfSquare.c   --- cmd line arg program to compute area of square
// P. Conrad for CS16, Fall 2010, UCSB CS Dept., 01/21/2010

// This is one of a pair programs (along with computeAreaOfSquare.c) that 
// provide a constrast between getting input using scanf and getting input
// from the command line.

// In this program, we are using "int" variables only---because we want
// to illustrate the technique with int variables first.    
// (Granted, for area of a square, a "double" variable would make more sense.)


// First we indicate that we need stdio.h to get access to printf
#include <stdio.h>

// Then we #include stdlib.h because we are using atoi
#include <stdlib.h>

// Next we define a function to compute the area of a square (using ints)

int areaOfSquare(int sideLength) 
{
  return sideLength * sideLength;
}


// Next we have our main program that gets a value from the command line
// and then gives back the answer

int main(int argc, char *argv[])  // this is standard for cmd line arg programs
{
  int side;

  // check usage of program

  if (argc!=2)
    {
      printf("Usage: ./areaOfSquare sideLength\n");
      return 1; // indicates an error!
    }

  // convert command line argument from char * (ASCII) to int
  side = atoi(argv[1]);

  // compute and print answer
  printf("Side: %i Area: %i\n", areaOfSquare(side));

  return 0;
}


