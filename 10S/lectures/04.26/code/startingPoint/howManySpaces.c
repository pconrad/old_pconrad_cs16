// howManySpaces.c   Count occurences of space in a string
// P. Conrad for CS16, Spring 2010

#include "tdd.h"

// Returns the number of spaces in an input string
int howManySpaces(char *s)
{
  return -42;
}

// return number of failed tests
int testHowManySpaces()
{
  int failures=0;
  
  failures += CHECK_EXPECT_INT(howManySpaces("Santa"),0);
  failures += CHECK_EXPECT_INT(howManySpaces("Barbara"),0);
  failures += CHECK_EXPECT_INT(howManySpaces("El Centro"),1);
  failures += CHECK_EXPECT_INT(howManySpaces("San Luis Obispo"),2);
  failures += CHECK_EXPECT_INT(howManySpaces(""),0);
  failures += CHECK_EXPECT_INT(howManySpaces(" "),1);
  failures += CHECK_EXPECT_INT(howManySpaces("  "),2);
  failures += CHECK_EXPECT_INT(howManySpaces(" xx "),2);
  failures += CHECK_EXPECT_INT(howManySpaces(" x x "),3);
  failures += CHECK_EXPECT_INT(howManySpaces("x   x"),4);

  return failures;
}

