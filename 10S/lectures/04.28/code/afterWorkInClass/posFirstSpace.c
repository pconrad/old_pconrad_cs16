// posFirstSpace.c   Find position of first space
// P. Conrad for CS16, Spring 2010

#include "tdd.h"

// Returns the position of the first space, or -1 if no spaces found
// Positions are numbered from 0
int posFirstSpace(char *s)
{
  int i = 0;
  while (s[i]!='\0')
    {
      if(s[i]==' ')
	return i;
      i++;
    }
  return -1;
}

// return number of failed tests
int testPosFirstSpace()
{
  int failures=0;
  
  failures += CHECK_EXPECT_INT(posFirstSpace("Santa"),-1);
  failures += CHECK_EXPECT_INT(posFirstSpace("Barbara"),-1);
  failures += CHECK_EXPECT_INT(posFirstSpace("El Centro"),2);
  failures += CHECK_EXPECT_INT(posFirstSpace("San Luis Obispo"),3);
  failures += CHECK_EXPECT_INT(posFirstSpace(""),-1);
  failures += CHECK_EXPECT_INT(posFirstSpace(" "),0);
  failures += CHECK_EXPECT_INT(posFirstSpace("  "),0);
  failures += CHECK_EXPECT_INT(posFirstSpace(" xx "),0);
  failures += CHECK_EXPECT_INT(posFirstSpace(" x x "),0);
  failures += CHECK_EXPECT_INT(posFirstSpace("x   x"),1);
  failures += CHECK_EXPECT_INT(posFirstSpace("01234 "),5);

  return failures;
}

