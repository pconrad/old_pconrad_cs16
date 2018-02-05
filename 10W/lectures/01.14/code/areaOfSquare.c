// write a function to compute area of a square (with integer lengths)

#include <stdio.h>

// input to the function is:  length of a side  (int) 
// output of function is: area  (int)

int areaOfSquare(  int sideLength)
{
  return sideLength * sideLength;
  // return -4; // STUB VALUE!!!
}

int main()
{
  printf("areaOfSquare(3) should be 9, it is %d\n", areaOfSquare(3));
  printf("areaOfSquare(0) should be 0, it is %d\n", areaOfSquare(0));
  printf("areaOfSquare(7) should be 49, it is %d\n", areaOfSquare(7));
 
  return 0;
}
