// thirdCProgram.c    example of test driven development
// P. Conrad for CS16, Spring 2010, UCSB CS Dept.

// This file illustrates some basic ideas of test-driven development
// that we already covered in lecture.
// We show how to develop a function
// plus a simple test harness for that function in C.

// This may seem like overkill for such a simple function,
// but as our functions grow more complicated, knowing how to 
// build this infrastructre will be very valuable.   We'll also
// see ways---later in the course---to make this testing 
// less obtrusive--i.e. more efficient

// We offer this program to the student first, to illustrate
// the ideas of TDD---then we show a program that illustrates the use 
// of a stub to "test" the test.

// *******************************

// Include library for standard input/output (e.g. printf)

#include <stdio.h>

// @@@ The function "smaller" below is "deliberately broken" 
// @@@ in the version of the file you will copy from the website.  The
// @@@ first version has, as the body:
// @@@     return -1234567; // stub value!
// @@@ where it should have something like this:
// @@@    if (a <= b)
// @@@      return a;
// @@@    else
// @@@      return b;

// @@@ First, run the program with the stub in place, and see all the
// @@@ tests fail.  Then replace the stub with corrected code, and see
// @@@ all the tests pass.   Finally, remove this entire comment block.

// return the smaller of two integers a,b---or return a if they are both equal
int smaller(int a, int b)
{
  return -1234567; // stub value!  This tests the test.
}


// A simple function to support test-driven development
// It has "void" as its return type because it doesn't return anything.
// Instead, it gives its result by printing a message on "standard output"

void checkExpect(char * label, // the label for this test, e.g. "Test case 1"
		 double check, // the function call we are checking
		 double expect) // what we expect to get

{
  // Test whether the function call we are checking gives the result we expect

  if ( check == expect) 
    {
      printf("Test passed for %s\n",label);
    }
  else
    {
      printf("Test failed for %s: expected %lf got %lf: \n",
	     label, expect, check);
    }
}


// Next we have our main program that runs our tests:
int main()
{
  // run several test cases

  checkExpect("Test case 1",smaller(7,3), 3);
  checkExpect("Test case 2",smaller(3,7), 3);
  checkExpect("Test case 3",smaller(3,3), 3);
  checkExpect("Test case 4",smaller(7,7), 7);
  checkExpect("Test case 5",smaller(0,4), 0);
  checkExpect("Test case 6",smaller(4,0), 0);
  checkExpect("Test case 7",smaller(-5,5), -5);
  checkExpect("Test case 8",smaller(5,-5), -5);

  return 0; // successful program
}
