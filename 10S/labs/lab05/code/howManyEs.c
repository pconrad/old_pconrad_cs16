// howManyEs.c   Count occurences of e in a string
// P. Conrad for CS16, Spring 2010

#include "tdd.h"

// Returns the number of e's in an input string
int howManyEs(char *s)
{
  return -42;
}

// return number of failed tests
int testHowManyEs()
{
  int failures=0;
  
  failures += CHECK_EXPECT_INT(howManyEs("Santa"),0);
  failures += CHECK_EXPECT_INT(howManyEs("Barbara"),0);
  failures += CHECK_EXPECT_INT(howManyEs("Goleta"),1);
  failures += CHECK_EXPECT_INT(howManyEs("Reseda"),2);
  failures += CHECK_EXPECT_INT(howManyEs("El Centro"),2);
  failures += CHECK_EXPECT_INT(howManyEs("Eureka"),2);
  failures += CHECK_EXPECT_INT(howManyEs("Emeryville"),3);

  return failures;
}

