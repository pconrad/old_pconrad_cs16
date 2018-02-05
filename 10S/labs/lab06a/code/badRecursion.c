// badRecursion.c --- show a stack overflow
// P. Conrad for CS1A, 11/18/2010

#include <stdio.h>

// This is a bad recursive function because it 
// has no base case.  The variable i will grow
// by 1 with each function call.

void noBaseCase(int i)
{
  i++;
  noBaseCase(i);
}

int main()
{
  noBaseCase(0);
  return 0;
}

