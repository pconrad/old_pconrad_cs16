// printArray1.c  P. Conrad for CS16, 09F, UCSB
// print all the elements of an array

#include <stdio.h>

void printArray(int *a, int n) // could also be (int a[], int n)
{
  int i;
  for (i=0; i<n; i++)
    printf(" %d ",a[i]);
}

int main()
{
  int nums[] = {12, 45, 32, 76, 17, 42};
  
  printf("Here's the output of printArray(nums,6):\n");
  printArray(nums, 6);
  printf("\n");

  printf("Here's the output of printArray(nums,5):\n");
  printArray(nums, 5);
  printf("\n");

  // Moving over one place in the array:

  printf("Here's the output of printArray(nums+1,5):\n");
  printArray(nums+1, 5);
  printf("\n");

  printf("Here's the output of printArray(nums+2,3):\n");
  printArray(nums +2,3 );

  printf("\n");
  return 0;
}
