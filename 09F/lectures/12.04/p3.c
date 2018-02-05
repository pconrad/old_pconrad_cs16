// p3.c  for CS16, Fall 2009

// (3) Write a C program that takes two command line arguments,
// both integers. We'll call them width and height.
// 
// If you don't have two command line args, 
// print the message: "Usage: p2 width height" and return 1 indicating an error
// 
// If height is not >=2, print
// "Height must be >=2" and return 2, indicating an error
// 
// If width is not an odd integers >=3, print
// "Width must be odd, >=3" and return 3, indicating an error
// 
// Otherwise, print the letter T at that width and height, using stars.
// The vertical bar of the T should be centered.

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
      printf("Usage: p3 width height\n");
      return 1;
    }

  width=atoi(argv[1]);
  height=atoi(argv[2]);

  // if height is not >= 2, error

  if ( height < 2 )
    {
      printf("Height must be >=2\n");
      return 2;
    }
    
  // if width not odd integer >=3, error

  if ( width < 3 || (width%2)!=1)
    {
      printf("Width must be odd, >=3\n");
      return 3;
    }

  // Print top of T

  printNChars(width,'*');
  printf("\n");

  // print rest of T, centered

  for (i=0; i<height-1; i++)
    {
      printNChars(width/2,' ');
      printf("*\n");
    }
  
  return 0;
}
