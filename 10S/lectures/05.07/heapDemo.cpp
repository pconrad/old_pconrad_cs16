// heapDemo.cpp  A first program in C++
//   that demonstrates using the Heap

// If we want a variable sized array... i.e. we want
// an array where the size is not known until we run the program,
// we have to declare that array on the heap.

// We do so by creating a pointer to that array,
// and then allocating space for it.

#include <stdio.h> // normally you would not see this in C++
#include <stdlib.h> // for atoi.  

// Normally in C++, this would be #include <cstdlib>  (no .h)

int main(int argc, char *argv[])
{
  if (argc!=2)
    {
      printf("Usage: %s sizeOfArray\n", argv[0]);
      return 1;
    }

  int sizeOfArray = atoi(argv[1]);

  printf("We are going to make an array of size %i\n",sizeOfArray);

  // insert code to make the array here...

  int *nums; // this only declares a pointer--so far no array yet!

  nums = new int[sizeOfArray];

  // now I have an array---nums points to the first element
  // it has "sizeOfArray" elements in it.
  // so I can initialize them all to be the index value * 2
  
  int i;
  for (i=0;i<sizeOfArray;i++)
    nums[i] = i * 2;

  // print out my array

  for (i=0;i<sizeOfArray;i++)
    printf("nums[%i]=%i\n", i, nums[i]);

  return 0;
}
