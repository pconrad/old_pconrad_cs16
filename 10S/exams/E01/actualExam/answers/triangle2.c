// triangle1.cc  A triangle of stars (lower-left corner)
// P. Conrad for CS16, Winter 2010

#include <stdio.h>
#include <stdlib.h>

// function prototypes
void printNChars(int n, char c);
void printKSpacesNStars(int k, int n);
void triangle2(int width);

int main(int argc, char *argv[])
{
  int i, width;

  // check the number of arguments
  if (argc!=2)
    {
      printf("Usage: %s width\n", argv[0]);
      return 1;
    }

  // get the command line parameter
  width=atoi(argv[1]);
  triangle2(width); // draw the triangle
 
  return 0;
}

void triangle2(int width)
{
  int i;
  int height = width; // width is equal to height

  // so this for loop iterates over the rows
  for (i=height;i>=1;i--)
    {
    // print width-i spaces then i stars and a newline
      printKSpacesNStars(width-i,i); printf("\n");    
    }
}

void printNChars(int n, char c)
{
  int i;
  for (i=0; i<n; i++)
    printf("%c", c);
}

void printKSpacesNStars(int k, int n)
{
  printNChars(k,' ');  printNChars(n,'*');
}
