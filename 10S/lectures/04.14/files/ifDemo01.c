// ifDemo01.c First of several demos of if/else
// Not all of these are written in good style---some of these
// are here to show what can go wrong.

#include <stdio.h>

int main()
{
  int x=5;

  // We expect to not get Yo, but we do!
  // How come?  (Clue: look at the semicolons!)

  if (x==1);
    printf("Yo!\n");

  return 0;
}
