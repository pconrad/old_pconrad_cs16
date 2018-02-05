// ifDemo03.c First of several demos of if/else
// Not all of these are written in good style---some of these
// are here to show what can go wrong.

#include <stdio.h>

int main()
{
  int x=5;

  // this fixes it ... sort of

  if (x==5)
    {
     printf("Yo!\n");
     printf("X is\n");
     printf("Five!\n");
    }
  else
    printf("Yowza\n");
    printf("X is not five!\n");  // without the brace, this is not in else
    printf("Drat!\n"); 

  return 0;
}
