// assignment.c  Illustrate assignment of structs
// P. Conrad for CS16, Spring 2010
// We see here that we can use assignment statements with entire structs
// Each member of the struct is copied to the destination

#include <stdio.h>
struct Time
{
  int hours;
  int minutes;
};

// If t1 and t2 are both of type struct Time
// then if we write 
//     t1 = t2, 
// this is a shorthand for  writing:
//   t1.hours = t2.hours;
//   t1.minutes = t2.minutes;

void printTime(struct Time t)
{
  printf("%02d:%02d",t.hours, t.minutes);
}

int main()
{
  struct Time t1 = {8,15};
  struct Time t2 = {12,30};
  struct Time temp;

  printf("Before assignment statements:\n");
  printf(" t1="); printTime(t1); printf("\n");
  printf(" t2="); printTime(t2); printf("\n");
  printf("\n");

  temp = t1; 
  t1 = t2;
  t2 = temp;

  printf("After assignment statements:\n");
  printf(" t1="); printTime(t1); printf("\n");
  printf(" t2="); printTime(t2); printf("\n");
  printf(" temp="); printTime(temp); printf("\n");
  printf("\n");

  return 0;
}

