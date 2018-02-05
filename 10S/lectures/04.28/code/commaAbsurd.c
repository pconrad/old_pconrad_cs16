// Illustrate comma operator---taken to absurd extremes
// See also comma.c
// The comma operator is not that important, 
//  but because it arises in mistaken code, it is helpful to know about.

#include <stdio.h>
int main()
{
 int i,b;

 for (i=0,b=1;  2+2==5, b<=1024; i++, b*=2)
   2+2==5, 56*23, "down", "set", "hutt 1", printf(" 2 to %i is: %i\n", i,b);
 
 return 0;
}
