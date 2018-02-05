// starprog.c  P. Conrad for CS16, 10/12/2009

#include <stdio.h>

// function prototype
void printNStars(int n);

int main()
{
  int numStars; // how many stars the user wants

  // prompt user for input

  printf("How many stars? ");
  scanf("%i", &numStars);

  printf("Thanks! I will now print %i stars:\n", numStars);

  printNStars(numStars); // function call
  printf("\n");

  printf("There you go... %i stars, just like you said!\n", numStars);
  return 0;
}

// function definition is everything from the next line...
void printNStars(int n)
{
  for (n; n>0; n--)
    {
      printf("*");
    }

} // to this line
