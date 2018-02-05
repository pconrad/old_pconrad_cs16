// recursiveMain.c --- show a stack overflow
// P. Conrad for CS1A, 11/18/2010

#include <stdio.h>

int i=0;

int main()
{
  int j=0;
  i++;
  j++;
  printf("%d %d\n",i,j);
  return main();
}

