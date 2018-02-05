// testHowManyEsDriver.c  P.Conrad for CS16 Spring 2010
// driver for testHowManyEs() function

#include "tdd.h"
int testHowManyEs();

int main()
{
  int failures=0;
  failures += testHowManyEs();
  return tddFinish(failures);
}
