// volRectPrism.c   P.Conrad for CS16,  10/15/2009
// Compute volume of rectangular prism, command line version

// This program illustrates these concepts:
//   Getting input of three doubles from command line
//   Calculation using a function with three parameters, returning a double
//   Use of function prototypes

// Header files

#include <stdio.h>
#include <stdlib.h> // MUST have this for atof, otherwise we get bad results

// Function prototypes---header of function followed by semicolon

double volumeRectangularPrism(double w, double h, double l);

// main function

int main(int argc, char * argv[])
{
  // declare variables

  double width, height, length;

  // check command line args

  if (argc!=4)   // 4 = program name, width, height, length
    {
      // argv[0] is the name of the program (what we type to run it)
      printf("Usage: %s width height length\n", argv[0]);
      printf(" Calculates volume of rectangular prism\n");
      return 1; // Error code for incorrect number of arguments
    }
  
  // convert arguments from strings to double variables
  // atof means "ascii to float"  (but it returns a "double"; go figure)

  width = atof(argv[1]);
  height = atof(argv[2]);
  length = atof(argv[3]);

  // calculate and print result

  printf("%lf\n", volumeRectangularPrism(width,height,length) );

  return 0; // indicates successful completion of main

}


// w is width, h is height, l is length; return the volume
 
double volumeRectangularPrism(double w, double h, double l)
{
  return w * h * l;
}
