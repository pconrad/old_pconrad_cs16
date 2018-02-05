// parameter passing in C++, P.Conrad, 5/24/2010 FOR cs16

// a demonstration of three ways you can pass parameters
//  Two of these work in C as well
//  The third one is specific to C++

// These are not "useful" functions--they are intended
//  to focus on how the language works.  See the labs
//  for some example of functions like these in a
//  "practical" context.   These are like "drills"
//  in sports practice, or "scales" on a musical instrument.
#include <stdio.h>

int twiceTheValue(int x)
{
  x = x*2;
  return x;
}

void doubleIt(int *p)
{
  (*p) = (*p) *2;
}

// an ampersand in front of a FORMAL parameter means "alias"

void tripleIt(int &x) // the & does NOT mean address of
{
  // the & in front of the x creates a "reference" to 
  // the variable in the caller.  & creates an "alias"

  x = x * 3;
}


int main()
{
  int a=3,b=5,c,d=7;

  c = twiceTheValue(a);
  // an ampersand in front of an ACTUAL parameter means ADDRESS OF
  doubleIt(&b); // here the ampersand means "address of"
  tripleIt(d);

  // it means address of when it appears in front of an
  // actual parameter, or on the right hand side of an assignment,etc.

  printf("a=%i b=%i c=%i d=%i\n",a,b,c,d);

  return 0; 
}
