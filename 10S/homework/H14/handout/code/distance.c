// distance.c  Check syntax of examples from H14

#include <math.h>

struct Point
{
  double x;
  double y;
};

double distanceFromOrigin(struct Point p)
{
  return sqrt(p.x * p.x + p.y * p.y);
}



double distanceBetween(struct Point p1, struct Point p2)
{
  return sqrt( pow(p2.x - p1.x, 2.0) + pow(p2.y - p1.y, 2.0) );
}

int main()
{
  return 0;
}
