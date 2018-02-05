// structInitSyntax.c

#include "tdd.h"

struct Point {
  double x;
  double y;
};

// Will this work?

void initPoint(struct Point *p, double x, double y) {
  (*p) = {x , y}; // BAD CODE (doesn't compile in regular gcc, or C99)
  return;
}

int main()
{
  struct Point pt;

  initPoint(&pt, 3.0, 4.0);
  assertTrue("check pt.x==3.0",pt.x==3.0);
  assertTrue("check pt.y==4.0",pt.y==4.0);

}
