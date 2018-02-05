// write a function to compute area of a square (with integer lengths)

#include <stdio.h>

// input to the function is:  length of a side  (int) 
// output of function is: area  (int)

int areaOfSquare(  int sideLength)
{
  return sideLength * sideLength;
  
}

// see whether the value we are checking matches
// the value that we expect.

void checkExpect(int check, int expect)
{
  printf("Testing with expected value: %d ...",expect);
  if (check==expect)
    printf("Test passes!\n");
  else
    printf("Test fails! check=%d \n",check);
}

int main()
{
  //printf("areaOfSquare(3) should be 9, it is %d\n", areaOfSquare(3));
  //printf("areaOfSquare(0) should be 0, it is %d\n", areaOfSquare(0));
  //printf("areaOfSquare(7) should be 49, it is %d\n", areaOfSquare(7));
 
  checkExpect(areaOfSquare(3),9);
  checkExpect(areaOfSquare(0),0);
  checkExpect(areaOfSquare(7),49);
  checkExpect(areaOfSquare(9),81);
  checkExpect(areaOfSquare(17),289);

  return 0;
}
