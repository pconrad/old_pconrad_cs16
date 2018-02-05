// p6.c  for CS16, Fall 2009

// (6) Write a program that takes one integer argument.  Call this height.	   
// 									   
// If there isn't exactly one command line argument, give the error message:  
// "Usage: p6 height" and return 1.					   
// 									   
// If height is zero, there is no output---no error message, and not even	   
// a blank line.								   
// 									   
// Otherwise, you will have a figure with 1 star on the first line,	   
// 2 stars on the second line, 3 on the third line, and so forth,		   
// with height lines in all.   (See examples.)   Return 0 to indicate success.

#include <stdio.h>

// print character c n times, no spaces, not return
void printNChars(int n, char c)
{
  int i;
  for (i=0; i<n; i++)
    printf("%c",c);
}

int main(int argc, char *argv[])
{
  int i, width, height;

  if (argc!=2)
    {
      printf("Usage: p6 height\n");
      return 1;
    }

  height=atoi(argv[1]);
  
  // print top of box
  for (i=1; i<=height; i++)
    {
      printNChars(i,'*');
      printf("\n");
    }
  
  return 0;
}
