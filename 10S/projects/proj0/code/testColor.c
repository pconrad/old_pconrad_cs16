// testColor.c    A main for testing the color function in colorFunc.c
// P. Conrad for CS16, proj0, Winter 2010, UCSB
// Compile with: gcc testColor.c colorFunc.c tdd.c -o testColor

#include <stdio.h>
#include "tdd.h"

int rgbToColorVal(int r, int g, int b);

// testDistanceBetween() returns the number of failed tests
// it can be called in our main()

int testColorFunc()
{
  int failures = 0; // this counts the number of failures

  failures += checkExpectInt("rgbToColorVal(255,0,0)",
				rgbToColorVal(255,0,0),
				0xFF0000);

  failures += checkExpectInt("rgbToColorVal(0,255,0)",
				rgbToColorVal(0,255,0),
				0x00FF00);

  failures += checkExpectInt("rgbToColorVal(0,0,255)",
				rgbToColorVal(0,0,255),
				0x0000FF);

  failures += checkExpectInt("rgbToColorVal(0,0,0)",
				rgbToColorVal(0,0,0),
				0x000000);

  failures += checkExpectInt("rgbToColorVal(161,161,0)",
				rgbToColorVal(161,161,0),
				0xA1A100);

  // 18 decimal is 12 hex, 52 decimal is 34 hex, 86 decimal is 56 hex
  failures += checkExpectInt("rgbToColorVal(18,52,86)",
				rgbToColorVal(18,52,86),
				0x123456);
  // 65 hex is 101 dec, 43 hex is 67 dec, 21 hex is 33 dec 
  failures += checkExpectInt("rgbToColorVal(101,67,33)",
				rgbToColorVal(101,67,33),
				0x654321);

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}

// Next we have our main program that runs the tests

int main()
{
  int failures = 0;

  // First, test our basic functions: distanceBetween and pointsApproxEqual
  
  failures += testColorFunc();
 
  // print a summary of what happened

  if (failures==0)
    printf("All tests passed!\n");
  else
    printf("%d tests failed\n",failures);

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}



