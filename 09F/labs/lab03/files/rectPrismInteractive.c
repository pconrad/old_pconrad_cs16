// rectPrismInteractive.c   P.Conrad for CS16,  10/15/2009
// Compute volume of rectangular prism, interactive version

// This program illustrates these concepts:
//   Simple interactive input with printf/scanf for doubles
//   Calculation using a function with three parameters, returning a double
//   Use of function prototypes

// Header files

#include <stdio.h>

// Function prototypes---header of function followed by semicolon

double volumeRectangularPrism(double w, double h, double l);


// main function

int main()
{
  // declare variables

  double width, height, length, volume;

  // prompt for input
  
  printf("This program calculates the volume of a rectangular prism.\n");
  
  printf("Please enter width: ");
  scanf("%lf",&width);

  printf("Please enter height: ");
  scanf("%lf",&height);

  printf("Please enter length: ");
  scanf("%lf",&length);
  
  // calculate result

  volume = volumeRectangularPrism(width,height,length);

  // print result

  printf("The volume is %lf\n",volume);

  return 0; // indicates successful completion of main

}


// w is width, h is height, l is length; return the volume
 
double volumeRectangularPrism(double w, double h, double l)
{
  return w * h * l;
}
