// printBackwards2.c  P. Conrad for CS16, 09F, UCSB
// print all the elements of an array

#include <stdio.h>

void printBackwards(int *a, int n) // could also be (int a[], int n)
{
  if (n<=0)
    return;

  printBackwards(a+1, n-1); // print the rest of the nums!  
  printf(" %d ",a[0]); // print the first num!

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

  return 0;
}
