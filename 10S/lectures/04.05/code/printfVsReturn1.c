// printfVsReturn1.c   P. Conrad for CS16 Spring 2010
// illustrate some things about printf vs. return
// Here is the version where we do the WRONG thing...
//  and put printf inside smaller instead of return
// Presented in lecture on 04/05/2010

#include <stdio.h>

// function prototype
//   allows me to have a function call 
//   EARLIER than function definition

int smaller(int a, int b);

// main, which contains function calls to smaller

int main()
{
  int w, x, y, z;
  x = 5; y = 3; z = -2;

  w = smaller(x,y); // this DOES NOT WORK; smaller prints, not returns

  printf("w=%i\n",w);

  return 0;
}

// function definition
// If the instructions say: "write a function that
//  takes two parameters a and b, and returns the smaller,
//  DON'T write a function that prints the smaller.

int smaller(int a, int b)
{
  if (a<b)
    printf("%i", a);
  else
    printf("%i", b);

  // note: no return value---that's bad!
}
