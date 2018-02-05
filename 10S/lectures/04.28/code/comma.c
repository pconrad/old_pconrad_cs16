// Illustrate comma operator
// The comma operator isn't really that important,
// but it comes up in various "mistakes" that programmers
// make, so for that reason it is worth mentioning.

#include <stdio.h>
int main()
{
 int i,b;

 // A typical "actual" use of the comma operator

 for (i=0,b=1;  b<=1024; i++, b*=2)
   printf(" 2 to the %i power is: %i\n", i,b);
 
 return 0;
}

void badCode(int grade)
{
  // Something that is not a good use of the comma operator:

  if (grade>=90, grade<93) // WRONG: use && instead
    printf("x is between 90 and 93, i.e. it is an A-");
}

// Another bad use: a[2,3]  for a doubly subscripted array.
// That works in some languages, but in C that means a[3]
