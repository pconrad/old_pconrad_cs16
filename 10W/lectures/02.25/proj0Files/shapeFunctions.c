// shapeFunctions.c   Functions for operating on shapes 
// for lab08, cs16 Fall 2009, UCSB CS Dept.
// P. Conrad and others--see bottom of file


#include "shapes.h"
#include "shapeFunctions.h"
#include <math.h>
#include <stdio.h>

double distanceBetween(struct Point p1, struct Point p2)
{
  return sqrt( pow(p1.x-p2.x,2.0) + pow(p1.y-p2.y,2.0) );
}

double approxEqual(double a, double b, double tol)
{
  return fabs(a-b) <= tol;
}

struct Polygon box2Polygon(struct Box b)
{
  struct Polygon poly;
  
  poly.numPoints = 4;

  initPoint(&poly.pts[0], b.ul.x,            b.ul.y);
  initPoint(&poly.pts[1], b.ul.x + b.width,  b.ul.y);
  initPoint(&poly.pts[2], b.ul.x + b.width,  b.ul.y + b.height);
  initPoint(&poly.pts[3], b.ul.x,            b.ul.y + b.height);

  return poly;
}

struct Polygon circle2Polygon(struct Circle c)
{
  const int numPoints = POLYGON_MAX_PTS;
  // a more accurate circle would be drawn if we set
  //  numPoints = 2 * M_PI * radius (one edge for every pixel on circumference)

  struct Polygon poly;

  initRegularPolygon(&poly, numPoints, c.center, c.radius);
  
  return poly;
}

void  initRegularPolygon(struct Polygon *poly,
			 int numPts,
			 struct Point center,
			 double radius)
{
  int i;

  if (numPts > POLYGON_MAX_PTS)
    {
      fprintf(stderr,"Warning: numPts=%d exceeds POLYGON_MAX_PTS=%d",numPts,POLYGON_MAX_PTS);
      numPts = POLYGON_MAX_PTS;
    }
  
  poly->numPoints = numPts;

  for (i=0;i<numPts;i++)
    {
      double theta;

      theta = (i * (2 * M_PI) / numPts);
      initPoint(&poly->pts[i], 
		center.x + radius * cos(theta),
		center.y + radius * sin(theta));
    }
}


void initPoint(struct Point *p, double xVal, double yVal)
{
   p->x = xVal;  p->y = yVal;
}

// makePoint is a different way of creating a point
// instead of declaring the variable, then initializing it,
// we create a new point, and return it

struct Point makePoint(double xVal, double yVal)
{
  struct Point p;
  p.x = xVal;  p.y = yVal;
  // p.x = -42.0; p.y = -99.0; // STUB !
  return p;
}

// Determine whether two points are approximately equal

int pointsApproxEqual(struct Point p, struct Point q, double tol)
{
  // Two points are approximately equal if the distance between them
  // is less or equal to our tolerance.  (If we want to test for 
  // exact equality, we can pass in a value of zero.)

  // return 0; // for a true/false function, no stub can "always" fail.

  return (distanceBetween(p,q) <= tol) ; // this will be true (1) or false (0)
}


// Determine whether two boxes are approximately equal

int boxesApproxEqual(struct Box b1, struct Box b2, double tol)
{
  // Two boxes are approximately equal if their upper left corners are
  //  approximately equal, and their corresponding widths and heights
  //  are equal.   You can return a boolean expresion such as:
  //    return (____) && (___) && (____)  where you just need to 
  //  fill in the blanks with the proper criteria.
  
  // Remember: to test whether double values a and b are approximately equal, you need:
  //   fabs(a - b) < tol
  // Don't use a==b since this doesn't take tolerance into account.
  // You'll need to use this technique for width and height
  
  return pointsApproxEqual(b1.ul,b2.ul, tol) && 
    approxEqual(b1.width, b2.width, tol) &&
    approxEqual(b1.height, b2.height, tol); 

}



void initCircle(struct Circle *c, struct Point ctr, double r)
{
  c->center = ctr;
  c->radius = r;
}

void initBox(struct Box *b, double ulx, double uly, double w, double h)
{
  initPoint(&b->ul,ulx,uly);
  b->width = w;
  b->height = h;
}


// Netbpmtools project -- A project to create a set of tools in C
//  to explore graphics using the netpbm file format.
// Contributors to this project include:
//   Phill Conrad, Tobias Hollerer, Eric Goodman, Alex Wickes,
//   Mark Hamlin, Nick Vaughan
