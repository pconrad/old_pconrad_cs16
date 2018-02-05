// p7.c  for CS16, Fall 2009

// (7) Write a program that is exactly the same as p6, but the output	     	   
// comes out in the reverse order, and the error message says p7		    
// instead of p6.								    
// 									    
// That is:								    
// 									    	   
// If there isn't exactly one command line argument, give the error message:   	   
// "Usage: p7 height" and return 1.					    
// 									    
// If height is zero, there is no output---no error message, and not even	    	   
// a blank line.								    
// 									    
// Otherwise, you will have a figure with height stars on the first line,	    
// height-1 stars on the second line, height-2 on the third line, and so forth,
// unti the last line has only 1 star.					    
// (See examples.)   Return 0 to indicate success.                             

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
  int i, height;

  if (argc!=2)
    {
      printf("Usage: p7 height\n");
      return 1;
    }

  height=atoi(argv[1]);
  
  // print top of box
  for (i=height; i>=1; i--)
    {
      printNChars(i,'*');
      printf("\n");
    }
  
  return 0;
}
