// printArray2.c  P. Conrad for CS16, 09F, UCSB
// print all the elements of an array

#include <stdio.h>

void printArray(int *a, int n) // could also be (int a[], int n)
{
  if (n<=0)
    return;
  
  printf(" %d ",a[0]); // print the first num!
  printArray(a+1, n-1); // print the rest of the nums!
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

  return 0;
}
