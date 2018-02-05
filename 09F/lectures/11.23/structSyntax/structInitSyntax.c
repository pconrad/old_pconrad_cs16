// structInitSyntax.c

#include "tdd.h"

struct Point {
  double x;
  double y;
};


void initPoint(struct Point *p, double x, double y) {
  struct Point newPoint = {x , y};
  (*p) = newPoint;
}

int main()
{
  struct Point pt;

  initPoint(&pt, 3.0, 4.0);
  assertTrue("check pt.x==3.0",pt.x==3.0);
  assertTrue("check pt.y==3.0",pt.y==4.0);

}
