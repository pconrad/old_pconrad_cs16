// isOdd.c   P.Conrad for CS16, 10W
//Edwin Damavandi and Matt Gannon
#include <stdio.h>

// return 1 (true) when x is odd,
// return 0 (false) when x is not odd  
int isOdd(int x)
{
  return x%2;
}


int main()
{
  int a;

  // Get value of a from the keyboard using scanf
  printf("what's the value? ");
  scanf("%i", &a);

  // print the result

  printf("isOdd(a)=%i\n",isOdd(a));

  return 0;

}
