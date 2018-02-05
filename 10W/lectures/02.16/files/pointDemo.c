// pointDemo.c   P. Conrad for CS16, Winter 2010
// convert polar coordinates   to x,y

#include <math.h> // for sin and cos
#include <stdio.h>
#include <stdlib.h> // for atof

struct Point {
  double x;
  double y;
  
};

void printPoint(struct Point p );
struct Point polarToXY(double radius, double   theta);

int main(int argc, char *argv[])
{
  double radius, theta;
  struct Point p;
  
  if (argc != 3)
    {
      printf("Usage: %s radius theta\n", argv[0]);
      return 1;
    }
  
  radius =   atof( argv[1]);
  theta = atof(argv[2]) ;
  
  p = polarToXY(radius, theta);

  printPoint(p); // prints a point formatted as (x,y);
  
  printf("\n");
  return 0;

}

void printPoint(struct Point p )
{
  printf("(%lf,%lf)", p.x , p.y );
}

struct Point polarToXY(double radius, double   theta)
{
  struct Point p;

  p.x = radius * cos(theta);
  p.y = radius * sin(theta);

  return p;
}
