// mallocNames.c    P. Conrad for CS16, Winter 2010 UCSB
// Demonstrate reading names from a file into an array of (char *) variables
// Each (char *) variable points to space allocated on heap via malloc

#include <assert.h> // for assert function
#include <stdio.h>
#include <stdlib.h> // for atoi
#include <string.h> // needed for strlen, strcpy

// function prototype---could also have used char **a instead of char *a[]
void printStringArray(char * a[], int count);

int main(int argc, char *argv[])
{
  // declare variables
  
  FILE *in; // input file of integers
  const int BUFSIZE  = 1024; // how big a line can be---make it nice and big
  char buffer[BUFSIZE]; // holds each name temporarily as we read it in
  const int NAMES_CAPACITY = 10; // how many names we can hold
  char * names[NAMES_CAPACITY]; // holds each name
  int count = 0; // number of names read from file into array so far
  int i; // for loop counter

  // open the file

  in = fopen("names.dat","r"); // use cmd line arg to open file
  
  if (in==NULL)
    {
      perror("Could not open names.dat");
      return 2;
    }

  // STEP 1: READ ALL NAMES FROM FILE INTO char * ARRAY 

  fgets(buffer,BUFSIZE,in); // try to read a line
  while (!feof(in) && !ferror(in)) // not end of file, and no error
    {
      // We successfully read a line! So store it in the array
      // First make sure there is room
      if (count==NAMES_CAPACITY)
	{
	  printf("Error: not enough room in the array\n");
	  printf("Increase NAMES_CAPACITY and recompile\n");
	  return 3;
	}
      
      buffer[strlen(buffer)-1] = '\0';       // (1) Remove the newline
      names[count] = (char *) malloc(strlen(buffer)+1); // (2) Allocate space
      strcpy(names[count], buffer); // (3) Copy the data
      
      // THEN increment count (not the other way around)
      count++;

      // try to read another line
      fgets(buffer,BUFSIZE,in); 
    }

  // See if there is an error

  if (ferror(in))
    {
      printf("An unknown error occurred with names.dat\n");
      return 4;
    }

  assert(feof(in));  // We should be at end of file.

  // STEP 2: PRINT OUT ALL THE NAMES

  printStringArray(names, count);

  // STEP 3: FREE ALL THE MEMORY ALLOCATED WITH malloc() BY CALLING free()

  for (i=0;i<count;i++)
    free(names[i]); // free each name that was allocated

  return 0; // success!

}

void printStringArray(char * a[], int count)
{
  int i;
  printf("Here are some strings: \n");
  
  // The notation \" inside a string means "actually print a double quote"

  for (i=0; i<count; i++)
    printf("a[%d]=\"%s\"\n", i, a[i]);

  printf("\nThat is all.\n");
}
