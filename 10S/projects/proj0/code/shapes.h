// shapes.h   
// Structs for shapes for proj0, CS16, Winter 2010, UCSB CS Dept.
// P. Conrad and others--see bottom of file

#ifndef SHAPES_H
#define SHAPES_H

// Our shapes keep track of everything using double
// When we go to draw, the doubles are approximated using
// integer pixel values

struct Point {
  double x;
  double y;
};


// A box is different from a "rectangle"
//  because we define a box to have sides
//  that are parallel to the x and y axes

struct Box {
  struct Point ul; // upper left corner
  double width;
  double height;
}; 

// In this version, we use a fixed size array
// of points for a polygon.  This is not ideal
// for at least two reasons: wasted space,
// limit on the number of sides.  In a future
// version, we'll replace this with a variable
// size array using malloc/free

#define POLYGON_MAX_PTS 360

struct Polygon {
  int numPoints;
  struct Point pts[POLYGON_MAX_PTS];
}; 

struct Circle {
  struct Point center;
  double radius;
};

#include "shapeFunctions.h"

#endif // SHAPES_H


// Netbpmtools project -- A project to create a set of tools in C
//  to explore graphics using the netpbm file format.
// Contributors to this project include:
//   Phill Conrad, Tobias Hollerer, Eric Goodman, Alex Wickes,
//   Mark Hamlin, Nick Vaughan

