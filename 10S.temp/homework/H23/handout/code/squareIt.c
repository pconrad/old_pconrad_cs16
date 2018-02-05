// squareIt.c
#include <stdio.h>

void squareIt(int *p)
{
  (*p) = (*p) * (*p);
}

int main()
{
  int a=5;
  squareIt(&a);
  printf("a=%i\n",a);
  return 0;
}
