// printArrayCorrect.c  P. Conrad for CS16, Fall 2009, UCSB CS Dept.
//   showing how to print all elements of an array of ints 

#include <stdio.h>

// print an array of integers, all on one line.
void printIntArray(int *a, int n)
{
  // a and n are the "formal parameters" of the printIntArray function.
  // They also act like "local variables" inside printIntArray
  //  in the sense that they are only "known" inside the function.
  // Both of them get initialized with actual values when we call the function,
  //  and their values disappear forever when we leave the function.

  int i; // i is also a "local variable" inside printIntArray

  // A loop that prints every value in the array
  for (i=0; i<n; i++)
    printf("a[%d]=%d ",i,a[i]);

  printf("\n"); // Then we end with a new line"
}

// A main to demonstrate the printIntArray function...

int main()
{

  int b[] = {22,13,78,9,42};

  // Note that in the main program, the array is called b.
  // b becomes the 'actual parameter' to printIntArray
  // some authors call this the 'argument' to printIntArray

  printIntArray(b, 5);

  return 0; // indicates success
}
