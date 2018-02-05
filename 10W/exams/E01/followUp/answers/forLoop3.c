// forLoop3.c   P. Conrad for CS16 Midterm 1 Winter 2010

#include <stdio.h>
void checkInf(); // prints ... and exits if called more than "limit" times

int main()
{
  int i;
  for (i=1; i<3; i--)
  {
    checkInf(3);
    printf("%d ",i);
  }            
  return 0;
}

void checkInf(int limit)
{
  static int count=0;

  count++;

  if (count>limit)
  {
    printf("...\n");
    exit(1);
  }
}
