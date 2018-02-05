// countOddInFile.c   Count how many integers in a file are odd
// P. Conrad for CS16, Winter 2010

// This program combines the readFileIntoArray.c program
// and the countOddWithTests.c program into one.

// If we pass in TEST for our filename, the program runs the tests
// Otherwise, it reads data from a file into an array and 
// counts the odd numbers

#include <assert.h> // for assert function
#include <stdio.h>
#include <stdlib.h> // for atoi

// function prototypes
int isOdd(int x);
int countOdd(int a[], int n);
int checkExpectInt(char * label, // the label e.g. "1: isE('f')"
		   int check, // the funciton call we are checking
		   int expect); // what we expect to get
int runTests(); 

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
      printf("   or: %s TEST\n",argv[0]);
      return 1;
    }

  // if user wants tests, do those instead of counting odds in the file
  if (strcmp(argv[1],"TEST")==0)
    {
      return runTests(); // whatever runTests returns, return that.
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

  // Finally, print how many odd numbers there are:

  printf("%d\n",countOdd(nums, count));
  
  return 0; // success!

}


// return 1 if x is odd, otherwise return 0
int isOdd(int x)
{
  return -42; // stub @@@ FIX THIS 
}

// count how many numbers in the int array a (of size n) are odd

int countOdd(int *a, int n)
{
  return -42; // stub @@@ FIX THIS 
}


int checkExpectInt(char * label, // the label e.g. "1: isE('f')"
		   int check, // the funciton call we are checking
		   int expect) // what we expect to get
  
{

  if (check != expect)
    {
      printf("Test %s failed: got %d expected %d\n", label, check, expect);
      return 1;
    }
  else
    {
      printf("Test %s passed\n",label);
      return 0;
    }
}


// this is an exact copy of the main() from countOddWithTests

int runTests()
{
  int failures = 0; // this counts the number of failures
  int a[] = {1,2,3};
  int b[] = {1,2,3,4,5};
  int c[] = {2,4,6};

  // We use += to add the number of failures each time...

  failures += checkExpectInt("1: isOdd(1)",isOdd(1),1);
  failures += checkExpectInt("2: isOdd(2)",isOdd(2),0);
  failures += checkExpectInt("3: isOdd(33)",isOdd(33),1);
  failures += checkExpectInt("4: isOdd(44)",isOdd(44),0);
  failures += checkExpectInt("5: isOdd(-7)",isOdd(-7),1);
  failures += checkExpectInt("6: isOdd(-8)",isOdd(-8),0);


  failures += checkExpectInt("7: countOdd(a,3)",countOdd(a,3), 2);
  failures += checkExpectInt("8: countOdd(b,5)",countOdd(b,5), 3);
  failures += checkExpectInt("9: countOdd(c,3)",countOdd(c,3), 0);


  // print a summary of what happened

  if (failures==0)
    {
      printf("All tests passed!\n");
    }
  else
    printf("%d tests failed\n",failures);

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}
