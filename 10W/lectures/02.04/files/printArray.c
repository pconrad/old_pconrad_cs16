// myFirstArray.c 
// P. Conrad for CS16, Winter 2010

#include <stdio.h>

void printArray(int a[], int size);

int main()
{
  int a[]={45, 23, 12, 81};

  printArray(a, 4);

  return 0;
}

void printArray(int a[], int size)
{
  int i;
  for (i=0; i<size; i++)
    printf("a[%d]=%d\n", i  ,a[i]  );

  
}
