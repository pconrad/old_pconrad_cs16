// starprog.c  P. Conrad for CS16, 10/12/2009

#include <stdio.h>
#include <stdlib.h> // for exit() function

// function prototype
void printNStars(int n);

int main(int argc, char *argv[])
{
  int numStars; // how many stars

  // check if we have one cmd line argument.
  // If we do, then argc should be two: ./starProgCmd counts as the first one
  // and the number of stars counts as the second one.  If we don't get
  // exactly argc==2, we print an error message
  
  if (argc!=2)
    {
      printf("Usage: %s numstars\n",argv[0]); // argv[0] is the name of program
      exit(1); // quit the entire program. 
    }
  
  // atoi stands for "ascii to integer".  
  numStars = atoi(argv[1]); // convert first cmd line argument to an integer
 
 
  printNStars(numStars ); // function call
  printf("\n");
  return 0;
}

// function definition is everything from the next line...
void printNStars(int n)
{
  for (n; n>0; n--)
    {
      printf("*");
    }

} // to this line
