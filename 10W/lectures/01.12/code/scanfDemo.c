// scanfDemo.c   P.Conrad for CS16, 10W
// illustrate settig the value of an int via scanf

#include <stdio.h>

int tripleTheValue(int x)
{
  return x * 3;
}

int main()
{
  int a;

  // get value of a from the user

  printf("Please enter an integer value: "); // prompt the user
  scanf("%i",&a); // & means address of a

  // print out the result

  printf("Triple the value is: %i\n", tripleTheValue(a));

  return 0;
}
