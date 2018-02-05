/* makeT.c P. Conrad for CS16, Fall 2009
   Create a bitmap file for the letter t
   of a certain size */

#include <stdio.h>



int main()
{

  FILE *outfile;   // FILE * then a variable name

  // open an output file called "T.pbm" on the disk

  outfile = fopen("T.pbm","w"); // w means output file 

  printf("How many rows? ");
  // ask the user how many rows

  printf("How many columns" );
  // ask the user how many columns

  // Instead of printing this is a test
  //  use some for loop to print out the 1s and 0s
  //  for a letter T...

  fprintf(outfile,"This is a test\n");

  fclose(outfile);

  return 0;
}
