// squareIt.cpp (using C style I/O)
#include <stdio.h>

void squareIt(int &x)
{
  x = x * x;
}

int main()
{
  int a=5;
  squareIt(a);
  printf("a=%i\n",a);
  return 0;
}
