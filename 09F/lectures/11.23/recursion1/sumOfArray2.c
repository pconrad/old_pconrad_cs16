// sumOfArray1.c  P. Conrad for CS16, 09F, UCSB
// sum all of the elements in an array

#include <stdio.h>



void printArray(int *a, int n) // could also be (int a[], int n)
{
  if (n<=0)
    return;
  
  printf(" %d ",a[0]); // print the first num!
  printArray(a+1, n-1); // print the rest of the nums!
}

int sumArray(int *a, int n) // could also be (int a[], int n)
{
  if (n<=0)
    return 0;
  else // return the first, plus the sum of all the rest
    return a[0] + sumArray(a+1,n-1);
}

int main()
{
  int nums[] = {10,30,15,5,22};
  
  printf("Here's the output of printArray(nums,5):\n");
  printArray(nums, 5);
  printf("\n");

  printf("sumArray(nums,5)  =%d\n",sumArray(nums,5));
  printf("sumArray(nums,3)  =%d\n",sumArray(nums,3));
  printf("sumArray(nums+2,3)=%d\n",sumArray(nums+2,3));
  printf("sumArray(nums+4,1)=%d\n",sumArray(nums+4,1));
  printf("sumArray(nums,0)  =%d\n",sumArray(nums,0));


  return 0;
}
