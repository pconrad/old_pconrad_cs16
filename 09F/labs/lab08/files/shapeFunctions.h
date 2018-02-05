// shapeFunctions.h   Structs for shapes for lab08, cs16 Fall 2009, UCSB CS Dept.
// P. Conrad and others--see bottom of file

#ifndef SHAPEFUNCTIONS_H
#define SHAPEFUNCTIONS_H

#include "shapes.h"

double distanceBetween(struct Point p1, struct Point p2);
double approxEqual(double a, double b, double tol);
struct Polygon circle2Polygon(struct Circle c);
struct Polygon box2Polygon(struct Box b);
void  initRegularPolygon(struct Polygon *poly,
			 int numPts,
			 struct Point center,
			 double radius);
void initPoint(struct Point *p, double xVal, double yVal);
struct Point makePoint(double xVal, double yVal);
int pointsApproxEqual(struct Point p, struct Point q, double tol);
void initCircle(struct Circle *c, struct Point ctr, double r);
void initBox(struct Box *b, double ulx, double uly, double w, double h);
int boxesApproxEqual(struct Box b1, struct Box b2, double tol);

#endif // SHAPEFUNCTIONS_H


// Netbpmtools project -- A project to create a set of tools in C
//  to explore graphics using the netpbm file format.
// Contributors to this project include:
//   Phill Conrad, Tobias Hollerer, Eric Goodman, Alex Wickes,
//   Mark Hamlin, Nick Vaughan



