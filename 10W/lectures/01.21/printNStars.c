// printNStars.c   a void function that
//   uses a for loop to print some stars

#include <stdio.h>

// print n stars, with no \n afterwards
void printNStars(int n)
{
  int i;
  for (i=0; i<n; i++)   // or for (i=1; i<=n; i++)
    printf("*");
  return; // returns "void", i.e. nothing at all
}

int main(int argc, char*argv[])
{
  if(argc != 2)
    {
      printf("Usage: ./printNStars numberOfStars\n");
	return 1;
    }
  int width =  atoi(argv[1]);
  printf("Here is a call to printNStars(%i): \n",width);
  printNStars(width);
  printf("\n");
  
  return 0;
}
