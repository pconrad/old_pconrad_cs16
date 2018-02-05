// multiplyInteractive.c   P.Conrad for CS16,  10/15/2009
// Multiply two integers, interactive  version

// We would not normally need a program to multiply two integers--
//   a calculator or pencil/paper would do.   
// This is just a simple sample program to illustrate some techniques.

// This program illustrates these concepts:
//   Using printf/scanf to get integer input
//   Calculation using a function with two params, returning an int
//   Use of function prototypes

// Header files

#include <stdio.h>

// Function prototypes---header of function followed by semicolon

int product(int a, int b);

// main function

int main(int argc, char * argv[])
{
  // declare variables

  int num1, num2;

  // prompt for input
  
  printf("This program calculates the product of two integers.\n");
  
  printf("Please enter first integer: ");
  scanf("%i",&num1);

  printf("Please enter second integer: ");
  scanf("%i",&num2);


  // Calculate and print result
  // Yes, its overkill to use a function call instead of just typing
  //     printf("The product is %i\n", num1 * num2 );
  // but the point here is to learn how to use functions with a simple example

  printf("The product is %i\n", product(num1,num2) );

  return 0; // indicates successful completion of main

}


// return the product of two integers, a times b
 
int product(int a, int b)
{
  return a * b;
}





