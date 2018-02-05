// stringLength.c   our own implementation of strlen
// P. Conrad for CS16, Spring 2010

#include "tdd.h"
#include <stdio.h>

int stringLength(char *s)
{
  int i=0;
  while (s[i] != '\0' )
    {
      i++;
    }
  return i;

}

int testStringLength()
{
  int failures = 0 ;
  failures += ASSERT_TRUE(stringLength("Go")==2);
  failures += ASSERT_TRUE(stringLength("Gauchos")==7);
  failures += ASSERT_TRUE(stringLength("Conrad")==6);
  failures += ASSERT_TRUE(stringLength("Santa Barbara")==13);
  failures += ASSERT_TRUE(stringLength("")==0);
  
  return failures;
}
