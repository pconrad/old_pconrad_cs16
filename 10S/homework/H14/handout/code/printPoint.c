// distance.c  Check syntax of examples from H14

#include <stdio.h>

struct Point {
 double x;
 double y;
};

void printPoint(struct Point p)
{ 
  printf("(%lf,%lf)",p.x, p.y);
}

int main()
{
  struct Point p1={3.0,4.2};
  struct Point p2={-1.0,1.0};
  
  // print points
  printf("p1="); printPoint(p1); printf("\n");
  printf("p2="); printPoint(p2); printf("\n");

  return 0;
}
