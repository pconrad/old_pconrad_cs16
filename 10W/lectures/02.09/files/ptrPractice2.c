// ptrPractice2.c  P.Conrad for CS16, Winter 2010

#include <stdio.h>

int main()
{

  int a=2, b=3, *p1=&a, *p2=&b;

  (*p1) = 4;
  (*p2) = 5;

  // draw a diagram of what memory looks like at this point

  return 0;
}
