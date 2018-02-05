// backslash.c     Program that prints a backslash of stars
// P. Conrad for CS16, Winter 2010

// This program is a solution to the backslash problem described
// in lab04, Winter 2010.   It makes a backslash out of stars,
// with a given width (height and width are equal)
// If width isn't at least two, there is no output.

#include <stdio.h>
#include <stdlib.h>

// function prototypes
void printNChars(int n, char c);
void printKSpacesNStars(int k, int n);
void backslash(int width);

int main(int argc, char *argv[])
{
  int i;
  int width;

  // check the number of arguments

  if (argc!=2)
    {
      printf("Usage: %s width\n", argv[0]);
      return 1;
    }

  // get the command line parameter

  width=atoi(argv[1]);
  
  backslash(width); //function call to draw the backslash
 
  // no \n afterwards since backslash already puts one at the end
  // of the last line
  return 0;
}

void backslash(int width)
{
  int i;
  int height = width; // width is equal to height

  // so this for loop iterates over the rows
  for (i=0;i<height;i++)
    {
      // print i spaces then a single star and a newline
      printKSpacesNStars(i,1); printf("\n");
    }

}

// from this line down to...
void printNChars(int n, char c)
{
  int i;
  // print a line of *
  for (i=0; i<n; i++)
    printf("%c", c);
}
// ... this line, we have a function definition

// from this line down to...
void printKSpacesNStars(int k, int n)
{
  printNChars(k,' ');
  printNChars(n,'*');
}
// ... this line, we have another function definition
