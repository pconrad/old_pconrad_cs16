// spaceCounter.c    Count spaces in an input string 
// P. Conrad for CS16, Spring 2010
// Motivates reuse of functions
// Can be interactive, or use cmd line

#include <stdio.h>
#include <stdlib.h> // for exit(1);

int howManySpaces(char *s); // function prototype

int main(int argc, char *argv[])
{
  // Check command line

  if (argc!=2)
    {
      // you can use -i for an interactive version, or 
      // use argv[1] as the string to check

      printf("Usage: %s -i    (interactive) OR\n", argv[0]);
      printf("Usage: %s -i stringToCheck\n", argv[0]);
      exit(1); // see comment at bottom of program
    }

  if (strcmp(argv[1],"-i")==0)
    {
      // interactive version: declare a buffer to read in a line
      const int INPUT_LINE_MAX=1024;
      char inputLine[INPUT_LINE_MAX+1]; // one extra for null

      // Ask user for an entire line (scanf with %s won't do what we want...)
      printf("Enter string to check for spaces:");
      fgets(inputLine, INPUT_LINE_MAX+1, stdin); // one extra for null
      
      // print answer
      printf("Found %d spaces in \"%s\"\n", howManySpaces(inputLine),inputLine);
    }
  else
    {
      // Command line version
      printf("Found %d spaces in \"%s\"\n", howManySpaces(argv[1]),argv[1]);
    }
  return 0; 
}



// EXPLANATION OF exit(1)
// 
//  This program introduces exit(1); 
//  This is a way to end a program with status code 1.
//  It works like return 1; but in can be used anywhere, 
//   not just in the main program.
//  Use echo $? at Unix command line to see status code.
