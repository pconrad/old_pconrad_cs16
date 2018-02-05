// swapRight.c   The right way to swap two variables---with pointers!
// P. Conrad    for CS16, Winter 2010

// Often in a sort routine, we need to swap two variables

#include <stdio.h>

void printArray(int a[], int n);

void swap(int *a, int *b)
{
  int temp = (*a);
  (*a) = (*b);
  (*b) = temp;
}

int main()
{
  int a[] = {19,4,62,41};

  printf("Before swap: ");
  printArray(a,4);
  printf("\n");

  swap(&a[2],&a[3]);

  printf("After swap: ");
  printArray(a,4);
  printf("\n");
  
  return 0;
}

void printArray(int a[], int n)
{
  int i;
  for (i=0; i<n; i++)
    printf("a[%d]=%d ", i, a[i]);
  
}
