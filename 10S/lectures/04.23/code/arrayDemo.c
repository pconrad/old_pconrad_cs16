// arrayDemo.c   talking about arrays in C

#include <stdio.h>

int main()
{

  // values in this array are 10, 37, 14, 99, 72, 56
  // indexes (or indices) that go in the square brackets to
  //  access the numbers, e.g. nums[3], nums[5]
  // the indices for this array are:

  //             0  1  2  3  4 5
  int nums[] = {10,37,14,99,72,56};

  // we are also going to talk about addresses.

  printf("nums[0]=%d &nums[0]=%p\n", nums[0], &nums[0]);
  printf("nums[1]=%d &nums[1]=%p\n", nums[1], &nums[1]);
  printf("nums[2]=%d &nums[2]=%p\n", nums[2], &nums[2]);

  printf("\n\n");

  int i;
  for (i=0;i<6;i++)
    printf("nums[%d]=%d &nums[%d]=%p\n", i, nums[i],i, &nums[i]);

  // the next line shows that the name of an array is
  // the address of the first element of that array
  // That is, it is a POINTER to that array.

  printf("nums=%p",nums);

  // pointer == address == base of array
  
  int a[5];

  
  


  return 0;

}
