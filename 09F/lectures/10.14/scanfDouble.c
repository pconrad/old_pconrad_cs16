// scanfDouble.c  P. Conrad for CS16, 10/14/2009
// Simple demo of scanf with a double 

#include <stdio.h>

int main()
{
  double d;

  // prompt for input...  (no \n belongs on a prompt, usually)

  printf("Please enter a real number: ");

  scanf("%lf",&d);



  printf("You typed in %lf\n",d);

  return 0;
}
