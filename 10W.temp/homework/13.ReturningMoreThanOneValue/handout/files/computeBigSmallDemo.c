// computeBigSmallDemo.c  P. Conrad for CS16, Winter 2010

#include <stdio.h>
void computeBigAndSmall(int first, int second, 
			int *bigOnePtr, int *smallOnePtr);

int main(int argc, char *argv[])
{
  int firstOne, secondOne;
  int bigOne, smallOne;
  
  if (argc!=3)
    {
      printf("Usage: %s num1 num2\n", argv[0]); return 1;
    }
  
   // convert command line args
  firstOne = atoi(argv[1]); secondOne = atoi(argv[2]);
  // compute result
  computeBigAndSmall(firstOne, secondOne, &smallOne, &bigOne); 
  // print result
  printf("The small one is %i and the big one is %i\n", smallOne, bigOne);

  return 0;
}

void computeBigAndSmall(int first, int second,
			int *smallOnePtr, int *bigOnePtr)
{
  if (first < second)
    {
      // this reaches back to the variables pointed to in the calling function
      // and THOSE variables receive the values of first and second    
      (*smallOnePtr) = first; (*bigOnePtr) = second;
    }
  else // first one is bigger, or they are the same
    {
      (*smallOnePtr) = second; (*bigOnePtr) = first;
    }
}
