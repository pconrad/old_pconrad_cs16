// p5.c  for CS16, Fall 2009

// (5) Write a C program that takes two command line arguments,			   
// both integers. We'll call them width and height.				   
// 										   
// If you don't have two command line args, 					   
// print the message: "Usage: p2 width height" and return 1 indicating an error	   
// 										   
// Print the error message "Width and height must both be >=3" if that		   
// rule is violated by the value that are provided, and return 1		   
// Otherwise:									   
//  Print a hollow box of stars with the given height and width.                   


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
      printf("Usage: p5 width height\n");
      return 1;
    }

  width=atoi(argv[1]);
  height=atoi(argv[2]);
  
  if (width <3 || height < 3)
    {
      printf("Width and height must both be >=3\n");
      return 1;
    }

  // print top of box

  printNChars(width,'*');  printf("\n");

  // print middle of box--each line of the form
  // *    *  (i.e. stars either side, width-2 spaces in between)
 
  for (i=0; i<height-2; i++)
      {
	printf("*");
	printNChars(width-2,' ');
	printf("*\n");
      }

  
  // print bottom of box

  printNChars(width,'*');  printf("\n");
  
  return 0;
}
