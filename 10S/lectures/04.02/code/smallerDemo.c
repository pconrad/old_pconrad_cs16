// P.Conrad, for CS16, Spring 2010
// smallerDemo.c   a demo of a simple function definition and call
// and what the heck, we'll demo a prototype as well

#include <stdio.h>

// function prototype

int smaller(int a, int b);


// main function

int main()
{
  int x;

  x=smaller(3,4);

  printf("x=%i\n",x);

  return 0;
  
}

// function definition for smaller

int smaller(int a, int b)
{
  if (a<b)
    return a;
  else
    return b;

}
