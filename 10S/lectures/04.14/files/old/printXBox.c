// printXBox.c  P. Conrad 04/07/2010  
// demonstrate a void function to print a bunch of x characters

#include <stdio.h>


void printNXs(int n)
{
  int i;
  for (i=0; i<n; i++)
    printf("x");
}

void printXBox(int width, int height)
{
  //  Someone can fill this in
  int i,j;
  for(i=0;i<height;i++)
    {
      for(j=0;j<width;j++)
	{printf("x");}
      printf("\n");
    }
}

int main()
{
  // here is a call to printXBox(6);
  
  printf("The next lines come from printXBox(3,4)\n");
  printXBox(3,4);  
  printf("\n");

  printf("The next lines come from printXBox(4,2)\n");
  printXBox(4,2);  
  printf("\n");
  return 0;


}
