// printArrayWrong.c  P. Conrad for CS16, Fall 2009, UCSB CS Dept.
//   Showing how to print all elements of an array of ints,
//   but with a subtle bug that may lead to a "segmentaion fault"

#include <stdio.h>

// print an array of integers, all on one line.
void printIntArray(int *a, int n)
{
  // a and n are formal parameters of printIntArray
  // inside printIntArray, we can use a and n
  // We don't have any direct access to the b array in the main program

 int i; // i is a "local variable" inside printIntArray

  // A loop that prints every value in the array
  for (i=0; 1<n; i++)   // @@@ THIS LINE IS WRONG
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
