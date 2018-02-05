// pointDemo.c   P. Conrad for CS16, Winter 2010
// convert polar coordinates   to x,y

#include <math.h> // for sin and cos
#include <stdio.h>
#include <stdlib.h> // for atof

struct Point {
  double x;
  double y;
  
};

struct PolarPoint {
  double radius;
  double theta;
};

void printPoint(struct Point p );
void printPolarPoint(struct PolarPoint pp );
struct Point polarToXY(struct PolarPoint pp);
struct PolarPoint XYToPolar(struct Point p);

struct Point makePoint(double x, double y);
struct PolarPoint makePolarPoint(double radius, double theta);


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


  p = polarToXY( makePolarPoint(radius, theta));

  printPoint(p); // prints a point formatted as (x,y);
  
  printf("\n");
  return 0;

}

void printPoint(struct Point p )
{
  printf("(%lf,%lf)", p.x , p.y );
}

struct Point polarToXY(struct PolarPoint pp)
{
  struct Point p;

  p.x = pp.radius * cos(pp.theta);
  p.y = pp.radius * sin(pp.theta);

  return p;
}




struct Point makePoint(double x, double y)
{
  struct Point p;
  
  p.x = x;
  p.y = y;

  return p;
}

struct PolarPoint makePolarPoint(double radius, double theta)
{
  struct PolarPoint pp;
  pp.radius = radius;
  pp.theta = theta;
  return pp;
}
