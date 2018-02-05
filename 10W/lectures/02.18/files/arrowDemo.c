// arrowDemo.c   Demo of -> notation in C
// P. Conrad     Winter 2010 CS16

#include <stdio.h>

// The notation p->x , when p is a pointer to a struct type,
// is equivalent to (*p).x

struct Point {
  double x;
  double y;
};


int main()
{
  struct Point pt;
  struct Point *p;

  pt.x = 3.0;  pt.y = 4.0;
  p = &pt;
  //  ... 
  printf("p=%p\n",p);

  printf("pt = (%lf, %lf) \n", pt.x, pt.y);
  
  (*p).x = 5.0;   p->y = 6.0;

  printf("(*p) = (%lf, %lf) \n", (*p).x, (*p).y);
  printf("(*p) = (%lf, %lf) \n", p->x, p->y);
  printf("pt = (%lf, %lf) \n", pt.x, pt.y);

  return 0;

}
