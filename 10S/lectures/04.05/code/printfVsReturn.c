// printfVsReturn.c   P. Conrad for CS16 Spring 2010
// illustrate some things about printf vs. return

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

  w = smaller(x,y);

  printf("w=%i\n",w);

  return 0;
}

// function definition

int smaller(int a, int b)
{
  if (a<b)
    return a;
  else
    return b;
}
