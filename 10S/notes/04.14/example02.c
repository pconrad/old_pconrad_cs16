// example02.c   A C program to illustrate some things
//               about functions

#include <stdio.h>

// Note that in this program,
// we have function calls to function that have
// not been defined yet---they are defined later in the file.
// The compiler is not going to be happy about this.
// Function prototypes are the solution---we'll see that in
// example03.c


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


