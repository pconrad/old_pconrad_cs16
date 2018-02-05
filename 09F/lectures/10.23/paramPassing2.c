// paramPassing.c   Demonstrate different ways of passing parameters
//  in C.   P.Conrad for CS16, Fall 2009

#include <stdio.h>

int square(int x)   // passing by value, returning a value
{
  return x * x;
}

// pass by value, and there is basically not useful work done here
void squareItWrong(int x) // example of what NOT to do
{
  x = x * x;  
}


void squareIt(int *x) // function with a side effect, passed by pointer
{
  (*x) = (*x) * (*x);  
}


int main()
{
  int i = 3;

  squareIt(&i); // & means "address of"
  printf("value of i after squareIt(i)=%d\n",i);
  
  return 0;

}
