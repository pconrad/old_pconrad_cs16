// ptrPractice3.c  P.Conrad for CS16, Winter 2010

#include <stdio.h>

int main()
{

  int a=2, b=3, c=5, *p1=&a, *p2=&b , *p3;

  p3 = p1;
  p1 = p2;
  p2 = &c;

  (*p1) = 7;

  // draw a diagram of what memory looks like at this point

  return 0;
}
