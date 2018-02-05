// runTests.c  P.Conrad for CS16 Spring 2010
// run some tests on functions we've developed in this assignment

#include "tdd.h"

// function prototypes
int testHowManySpaces();

int main()
{
  int failures=0;
  failures += testHowManySpaces();
  return tddFinish(failures);
}
