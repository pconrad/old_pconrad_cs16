// printLoops02.c   P. Conrad.. illustrate a loop that prints stuff

#include <stdio.h>

void printNTimes(int n, char c1, char c2)
{
  int i;
  for (i=0;i<n;i++)
    {
      if (i%3==2)
	printf("%c",c2);
      else
	printf("%c",c1);
    }
  
}

int main()
{
  printf("Here's the output of printNTimes(5,'x','o');\n");
  printNTimes(5,'x','o');

  printf("\nHere's the output of printNTimes(12,'x','o');\n");
  printNTimes(12,'x','o');

  printf("\nHere's the output of printNTimes(6,'x','o');\n");
  printNTimes(6,'x','o');

  printf("\nHere's the output of printNTimes(1,'x','o');\n");
  printNTimes(1,'x','o');

  printf("\nHere's the output of printNTimes(4,'x','o');\n");
  printNTimes(4,'x','o');
  printf("\n");
  return 0;
}
