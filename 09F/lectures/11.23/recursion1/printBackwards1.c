// printBackwards1.c  P. Conrad for CS16, 09F, UCSB
// print all the elements of an array

#include <stdio.h>

void printBackwards(int *a, int n) // could also be (int a[], int n)
{
  int i;
  for (i=n-1; i>=0; i--)
    printf(" %d ",a[i]);
}

int main()
{
  int nums[] = {12, 45, 32, 76, 17, 42};
  
  printf("Here's the output of printBackwards(nums,6):\n");
  printBackwards(nums, 6);
  printf("\n");

  printf("Here's the output of printBackwards(nums,5):\n");
  printBackwards(nums, 5);
  printf("\n");

  // Moving over one place in the array:

  printf("Here's the output of printBackwards(nums+1,5):\n");
  printBackwards(nums+1, 5);
  printf("\n");

  printf("Here's the output of printBackwards(nums+2,3):\n");
  printBackwards(nums +2,3 );

  printf("\n");
  return 0;
}
