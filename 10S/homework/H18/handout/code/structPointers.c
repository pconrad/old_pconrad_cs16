// structPointers.c   P. Conrad for CS16, Spring 2010
// 05/01/2010    Illustrate structs with pointers

#include <stdio.h>

struct Time
{
  int hours;
  int minutes;
};

// function prototypes
void setTime(struct Time *t, int h, int m);
struct Time makeTime(int h, int m);
void printTime(struct Time t);

int main()
{
  struct Time t1={7,10},t2={7,15},t3={7,20}; // declare three times

  printf("Before assignments:\n");
  printf(" t1="); printTime(t1); printf("\n");
  printf(" t2="); printTime(t2); printf("\n");
  printf(" t3="); printTime(t3); printf("\n");

  // Three ways to assign a struct Time

  // (1) Use a void function that passes a struct with a pointer

  setTime(&t1, 8, 30); // initialize t1 to 8:30

  // (2) The long way---initialize each member one by one:

  // initialize t2 to 9:40
  t2.hours = 9;
  t2.minutes = 40;

  // (3) Use assignment with a function that returns a struct Time
  
  t3 = makeTime(10,50); // initialize t3 to 10:50
  
  // See the results:

  printf("After assignments:\n");
  printf(" t1="); printTime(t1); printf("\n");
  printf(" t2="); printTime(t2); printf("\n");
  printf(" t3="); printTime(t3); printf("\n");

  return 0;
}

// initialize an existing time struct, using pointers
void setTime(struct Time *t, int h, int m)
{
  (*t).hours = h; // or we could write t->hours = h;
  (*t).minutes = m; // or we could write t->minutes = m;
}

// return a new time struct---can be used with assignment 
struct Time makeTime(int h, int m)
{
  struct Time retVal; // retVal stands for "return value"
  retVal.hours = h;
  retVal.minutes = m;
  return retVal;
}

// print a time, formatted nicely (24 hour clock)
void printTime(struct Time t)
{
  printf("%02d:%02d",t.hours, t.minutes);
}
