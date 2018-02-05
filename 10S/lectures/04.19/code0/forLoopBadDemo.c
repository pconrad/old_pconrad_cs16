// forLoopBadDemo.c   Demo of a degenerate for loop

#include <stdio.h>

int main()
{
  int i;

  for(i=0;i<5;i++);
    printf("%d ",i);

  return 0;

}
