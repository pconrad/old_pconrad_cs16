// fourthCProgram.c    example of test driven development
// P. Conrad for CS16, Spring 2010, UCSB CS Dept.

// This file illustrates some more ideas about test-driven development.
// Having already seen a simple example that works, we now explore why
// it is necessary to "test the test".

// First we indicate that we need the stdio.h library
//   for doing simple input/output (e.g. printf)

#include <stdio.h>

// @@@ Initially, we offer you a version of this function with a stub.
// @@@ After some experiements, you'll replace this with the correct answer
// @@@ But don't do that until you are instructed to.
// @@@ When you do reach that point, delete this entire comment block.

// return the larger of two integers a,b---or return a if they are both equal
int larger(int a, int b)
{
  return -1234567; // @@@ STUB---DON'T replace with the correct answer at first...
}


// @@@ A simple test function appears below.   It contains
// @@@ a deliberate mistake--the use of = where we want == instead.
// @@@ The mistake is marked with the comment 
// @@@    // @@@ FIX ME AT THE APPROPRIATE STEP, BUT NOT RIGHT AWAY
// @@@ You'll have the opportunity to fix that mistake
// @@@ as you work with this program file--but don't fix it right away
// @@@ After you've fixed it, delete this comment.

// A simple function to support test-driven development
// It has "void" as its return type because it doesn't return anything.
// Instead, it gives its result by printing a message on "standard output"

void checkExpect(char * label, // the label for this test, e.g. "Test case 1"
		 double check, // the function call we are checking
		 double expect) // what we expect to get

{
  // Test whether the function call we are checking gives the result we expect

  if ( check = expect) //@@@ FIX ME AT THE APPROPRIATE STEP, BUT NOT RIGHT AWAY
    {
      printf("Test passed for %s\n",label);
    }
  else
    {
      printf("Test failed for %s: expected %lf got %lf\n",
	     label, expect, check);
    }
}


// Next we have our main program that runs the tests:
int main()
{
  // run several test cases

  checkExpect("Test case 1",larger(7,3), 7);
  checkExpect("Test case 2",larger(3,7), 7);
  checkExpect("Test case 3",larger(3,3), 3);
  checkExpect("Test case 4",larger(7,7), 7);
  checkExpect("Test case 5",larger(0,-4), 0);
  checkExpect("Test case 6",larger(-4,0), 0);
  checkExpect("Test case 7",larger(-5,5), 5);
  checkExpect("Test case 8",larger(5,-5), 5);
  checkExpect("Test case 9",larger(-5,-3), -3);
  checkExpect("Test case 10",larger(-3,-5), -3);

  return 0; // successful program
}
