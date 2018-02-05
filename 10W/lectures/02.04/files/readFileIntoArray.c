// readFileIntoArray.c   Show how to read a file of ints into an array
// P. Conrad for CS16, Winter 2010

// This program shows how to read a file of integers into an array
// It differs from the example techniques shown in the Etter textbook---
// --it is a bit more robust to bad input.

// It uses fgets to read an entire line from the file and 
// then uses atoi to convert the entire line into an int.
// Blank lines are treated as zero, as are lines containing text.
// (Later we can build on this technique to be able to give good error
//  messages when bad input is encountered.)

#include <assert.h> // for assert function
#include <stdio.h>
#include <stdlib.h> // for atoi

// function prototype---could also have used int *a instead of int a[]
void printArray(int a[], int count);

int main(int argc, char *argv[])
{
  // declare variables
  
  FILE *infile; // input file of integers
  const int LINESIZE = 4096; // how big a line can be---make it nice and big
  const int MAXNUMS = 1024; // maximum size our file can be.
  char thisline[LINESIZE]; // holds each line in file, one at a time.
  int nums[MAXNUMS];
  int count = 0; // number of elements read from file into array so far

  // check command line arguments
  if (argc!=2)
    {
      printf("Usage: %s filename\n",argv[0]);
      return 1;
    }

  infile = fopen(argv[1],"r"); // use cmd line arg to open file
  
  if (infile==NULL)
    {
      perror("Could not open input file:");
      printf("Error was with file: %s\n", argv[1]);
      return 2;
    }
  
  fgets(thisline,LINESIZE,infile); // try to read a line
  while (!feof(infile) && !ferror(infile)) // not end of file, and no error
    {
      // we successfully read a line!  So convert to integer
      // we can declare thisnum here because it isn't used outside this block
      // and because we are at the top of the block.  (block scope!)

      int thisnum = atoi(thisline);

      // make sure there is room

      if (count==MAXNUMS)
	{
	  printf("Error: not enough room in the array\n");
	  printf("Increase MAXNUMS and recompile\n");
	  return 3;
	}
      
      // store this in the array
      nums[count] = thisnum;
      
      // THEN increment count (not the other way around)
      count++;

      // try to read another line
      fgets(thisline,LINESIZE,infile); 
    }

  // See if there is an error

  if (ferror(infile))
    {
      printf("An unknown error occurred with the input file %s \n",argv[1]);
      return 4;
    }

  assert(feof(infile));  // We should be at end of file.

  // Now the array nums contains all the numbers in the array.
  // Print them all to the screen

  printArray(nums, count);

  return 0; // success!

}


void printArray(int a[], int count)
{
  int i;
  printf("Here is your array: \n");
  
  for (i=0; i<count; i++)
    printf("a[%d]=%d\n", i, a[i]);

  printf("\n That is all.\n");
}

