// myFirstPointer.c
// P. Conrad, Winter 2010

#include <stdio.h>

int main()
{

  int *ptr; // declares ptr as a pointer to int, or int *
            // we read "int *" as "int star"
  int x;
  x = 5;

  printf("Value of x=%d\n",x);
  printf("Address of x=%p\n",&x);

  ptr = &x;

  printf("What ptr points to has the value %d\n", *ptr);
  printf("Ptr itself has the value %p\n", ptr);

  return 0;
  
}
