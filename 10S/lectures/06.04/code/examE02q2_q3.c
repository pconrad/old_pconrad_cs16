// examE02q2_q3.c    Exam Question answer
// P. Conrad   for CS16, Spring 2010

#include <stdio.h>
#include "tdd.h"

struct Date 
{
  int m;
  int d;
  int y;
};

struct Ob 
{
  struct Date date;
  double high;
  double low;
};

struct Date hottestDay(struct Ob *obs, int n)
{
  // struct Date stubVal = {-42,-42,-42};

  int indexHighTemp = 0;
  int i;
  for (i=0;i<n;i++)
    {
      if (obs[i].high >= obs[indexHighTemp].high)
	indexHighTemp = i;
    }

  return obs[indexHighTemp].date;
}

int main()
{
  int failures=0;

  struct Ob obs1[] =
    {
      {{6,4,2010},98.0 ,42.0 },
      {{8,5,2010},105.0 ,60.0 },
      {{12,31,2010},72.0 ,48.0 }
      
    };
  
  struct Date dExpected={8,5,2010};
  struct Date dActual = hottestDay(obs1,3);
  
  failures += ASSERT_TRUE(dExpected.d==dActual.d);
  failures += ASSERT_TRUE(dExpected.m==dActual.m);
  failures += ASSERT_TRUE(dExpected.y==dActual.y); 

  return (tddFinish(failures));
}
