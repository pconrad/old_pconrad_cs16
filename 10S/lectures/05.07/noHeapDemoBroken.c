/* heapDemo.cpp  A first program in C++
   that demonstrates using the Heap

 If we want a variable sized array... i.e. we want
 an array where the size is not known until we run the program,
 we have to declare that array on the heap.

 We do so by creating a pointer to that array,
 and then allocating space for it. */

/* normally you would not see this in C++ */

#include <stdio.h> 
#include <stdlib.h> /* for atoi */

/* Normally in C++, this would be include <cstdlib>  (no .h) */

int main(int argc, char *argv[])
{
  int sizeOfArray;
  if (argc!=2)
    {
      printf("Usage: %s sizeOfArray\n", argv[0]);
      return 1;
    }

  sizeOfArray = atoi(argv[1]);

  printf("We are going to make an array of size %i\n",sizeOfArray);

  /* insert code to make the array here...

   THIS CODE DOESN'T WORK BECAUSE sizeOfArray is not a
   constant... the value MUST be known at compile time---
   otherwise, you have to use the heap. */

  {
    int nums[sizeOfArray]; /* this doesn't work.... except it does? */

    /* now I have an array---nums points to the first element
       iqt has "sizeOfArray" elements in it.
       so I can initialize them all to be the index value * 2 */
    
    int i;
    for (i=0;i<sizeOfArray;i++)
      nums[i] = i * 2;
    
    /* print out my array */
    
    for (i=0;i<sizeOfArray;i++)
      printf("nums[%i]=%i\n", i, nums[i]);
  }
  return 0;
}
