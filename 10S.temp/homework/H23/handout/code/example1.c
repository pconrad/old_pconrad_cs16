// example1.c from H23, CS16, S10
#include <stdio.h>

int squared(int x)
{
  return x * x;
}

int main()
{
  int a,b;
  a=5;
  b=squared(a);
  printf("a=%i b=%i\n",a,b);
  return 0;
}
