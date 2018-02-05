// arrayName.c  P. Conrad for CS16, Fall 2009
// A program to demonstrate some facts about arrays and pointers

#include <stdio.h>

int main()
{
  int a[] = {42,34,67,32,9};

  int *b;

  b = a; // now a and b point to the same place

  printf("a[0]=%d a[1]=%d a[2]=%d\n",a[0],a[1],a[2]);
  printf("b[0]=%d b[1]=%d b[2]=%d\n",b[0],b[1],b[2]);
  printf("a=%p\n",a);
  printf("b=%p\n",b);
  printf("&a=%p\n",&a);
  printf("&b=%p\n",&b);
  
  return 0;

}
