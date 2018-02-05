// structInitSyntax.c

#include "tdd.h"

struct Point {
  double x;
  double y;
};

// This will not work, because it declares 
// a local variable that shadows the parameter

void initPoint(struct Point *p, double x, double y) {
  struct Point p = {x , y}; // BAD CODE
  return;
}

int main()
{
  struct Point pt;

  initPoint(&pt, 3.0, 4.0);
  assertTrue("check pt.x==3.0",pt.x==3.0);
  assertTrue("check pt.y==4.0",pt.y==4.0);

}
