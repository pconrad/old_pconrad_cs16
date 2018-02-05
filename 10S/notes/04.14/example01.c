// example01.c   A C program to illustrate some things
//               about functions

#include <stdio.h>

// Note that in this program,
// every function is defined before the
// the first function call to that function appears
// Therefore, we don't need any function prototypes

void greet()
{
  printf("Hello there!\n");
}

void greetThreeTimes()
{
  greet();
  greet();
  greet();
}

int main()
{
  greetThreeTimes();
  return 0;
}
