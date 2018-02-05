// printNChars.c  P. Conrad 04/07/2010  
// demonstrate a void function to print a bunch of x characters

#include <stdio.h>

void printNChars(int n, char ch)
{
  int i;
  for (i=0; i<n; i++)
    printf("%c",ch);
}


void printNXs(int n)
{
  printNChars(n,'x');
}

void printNStars(int n);

void printNStars(int n)
{
  printNChars(n,'*');
}


int main()
{
  // here is a call to printNChars(6);
  
  printf("The next line should be 17 x chars\n");
  printNChars(17,'x');  
  printf("\n");

  printf("The next line should be 3 T chars\n");
  printNChars(3,'T'); 
  printf("\n");
  return 0;


}
