// p4.c  for CS16, Fall 2009

// (4) Write a C program that takes two command line arguments,
// both integers. We'll call them width and height.
// 
// If you don't have two command line args, 
// print the message: "Usage: p2 width height" and return 1 indicating an error
// 
// Make a filled in box of stars with the given height and width.
// If either height or width is zero, print nothing at all,
// not even a blank line.   No error message in that case either.
// 

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

  if (argc!=3)
    {
      printf("Usage: p4 width height\n");
      return 1;
    }

  width=atoi(argv[1]);
  height=atoi(argv[2]);
  
  if (width > 0)
    for (i=0; i<height; i++)
      {
	printNChars(width,'*');
	printf("\n");
      }
  
  return 0;
}
