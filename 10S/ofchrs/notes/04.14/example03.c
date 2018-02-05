// example03.c   A C program to illustrate some things
//               about functions

#include <stdio.h>

// Note that in this program,
// we function prototypes for all of our functions
// (except main) first.   This allows us to call the functions
// in any order.

void greetThreeTimes();
void greet();

int main()
{
  greetThreeTimes();
  return 0;
}

void greetThreeTimes()
{
  greet();
  greet();
  greet();
}


void greet()
{
  printf("Hello there!\n");
}


