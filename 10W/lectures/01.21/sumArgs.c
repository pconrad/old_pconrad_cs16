// sumArgs.c   Add two cmd line args, both ints
//  and print the sum

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  int num1;
  int num2;

  if (argc != 3  )
    {
      printf("Usage: ./sumArgs num1 num2\n");
      return 1;
    }

  num1 = atoi(argv[1]);
  num2 = atoi(argv[2]);

  printf("Sum is %i\n", num1 + num2);

  return 0;
}
