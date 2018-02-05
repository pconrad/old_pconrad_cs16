// demoProgramBad.c
 
// P.Conrad for CS16, 05.03.2010
// This is just a silly program that we used to illustrate
// how local variables work, and parameter passing as well
// We talked about what happens on the stack when you call functions


// BAD: In this program, the printf is WRONG

#include <stdio.h>

int foo(int x);
void bar(int *p);

int main()
{
  int a,b,c;
  a=5;
  b=foo(a);

  printf("a=%d b=%d\n"); // WRONG: we need a and b after the ""
  return 0;
}

int foo(int x)
{
  x = x*2;
  bar(&x);
  return x+1;
}

void bar(int *p)
{
  (*p) = (*p) * 3 + 1;
}
