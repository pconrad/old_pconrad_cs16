// firstCProgram.c  convert Fahrenheit to Celsius
// P. Conrad for CS16, Spring 2010, UCSB CS Dept., 03/31/2010

// First we indicate that we need stdio.h to get access to printf
#include <stdio.h>

// Next we defined a function to convert Fahrenheit to Celsius

double fToC(double fTemp) // ftemp is temperature in Fahrenheit
{
  return (fTemp - 32.0)*(5.0/9.0); // return Celsius temperature
}


// Next we have our main program that tests the fToC function:
int main()
{
  // In C, all variables must be declared at the top of block of code
  // A block, for our purposes today, is a set of statements in { }

  double fTemp, cTemp;
  int again = 1; // 0 means false

  while (again)
    {
      // prompt user for input
      printf("Please enter a fahrenheit temperature: ");
      scanf("%lf",&fTemp);  // reads a double into "fTemp"
      
      // call our function

      cTemp = fToC(fTemp);

      // provide output to user
      printf("%lf degrees F is %lf degrees C\n",fTemp,cTemp);

      // See if the user wants to continue
      printf("More conversions? Enter 0 for no, 1 for yes: ");
      scanf("%d",&again);
    }

  // We're done!
  printf("Goodbye!\n");

  return 0; // indicates the program was a success
}


