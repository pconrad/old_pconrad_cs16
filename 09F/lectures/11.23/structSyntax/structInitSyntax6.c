// structInitSyntax.c

#include "tdd.h"

struct Point {
  double x;
  double y;
};

// This doesn't work

void initPoint(struct Point *p, double x, double y) {
  (*p) =  {.y=y , .x=x}; // BAD CODE
  return;
}

int main()
{
  struct Point pt;

  initPoint(&pt, 3.0, 4.0);
  assertTrue("check pt.x==3.0",pt.x==3.0);
  assertTrue("check pt.y==4.0",pt.y==4.0);

}
