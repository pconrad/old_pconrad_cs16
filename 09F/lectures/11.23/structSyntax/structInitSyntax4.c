// structInitSyntax.c

#include "tdd.h"

struct Point {
  double x;
  double y;
};

// the syntax that does work for initializig a struct all at once

void initPoint(struct Point *p, double x, double y) {
  (*p) = (struct Point) {x , y}; // this works, but ouch, but oy!
  return;
}

int main()
{
  struct Point pt;

  initPoint(&pt, 3.0, 4.0);
  assertTrue("check pt.x==3.0",pt.x==3.0);
  assertTrue("check pt.y==4.0",pt.y==4.0);

}
