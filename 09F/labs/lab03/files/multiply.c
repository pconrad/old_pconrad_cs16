// multiply.c   P.Conrad for CS16,  10/15/2009
// Multiply two integers, command line version

// We would not normally need a program to multiply two integers--
//   a calculator or pencil/paper would do.   
// This is just a simple sample program to illustrate some techniques.

// This program illustrates these concepts:
//   Getting input of two integers from command line
//   Calculation using a function with two params, returning an int
//   Use of function prototypes

// Header files

#include <stdio.h>
#include <stdlib.h> // for atoi function

// Function prototypes---header of function followed by semicolon

int product(int a, int b);

// main function

int main(int argc, char * argv[])
{
  // declare variables

  int num1, num2;

  // check command line args

  if (argc!=3)   // 3 = program name, num1, num2
    {
      // argv[0] is the name of the program (what we type to run it)
      printf("Usage: %s num1 num2\n", argv[0]);
      printf(" Calculates product of num1 and num2\n");
      return 1; // Error code for incorrect number of arguments
    }
  
  // convert arguments from strings (char *) to int variables
  // atoi means "ascii to int", and it comes from <stdlib.h>

  num1 = atoi(argv[1]);
  num2 = atoi(argv[2]);

  // Calculate and print result
  // Yes, its overkill to use a function call instead of just typing
  //     printf("%i\n", num1 * num2 );
  // but the point here is to learn how to use functions with a simple example

  printf("%i\n", product(num1,num2) );

  return 0; // indicates successful completion of main

}


// return the product of two integers, a times b
 
int product(int a, int b)
{
  return a * b;
}
