// inToCmInteractive.c     Answer to a practice exam quesiton
// P. Conrad, for CS16   10/16/2009

#include <stdio.h>

// function prototype
double inToCm(int inches);

int main()
{
  int inches;

  printf("This prorgram converts inches to cm\n");
  printf("Please enter inches: ");
  scanf("%d",&inches);

  printf("The answer is: %lf \n",inToCm(inches));

  return 0;

}

double inToCm(int inches)
{
  return inches * 2.54;
}
