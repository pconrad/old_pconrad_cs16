// drawHouse.c  Draw a house using the netbpm format

#include "drawing.h"
#include "shapes.h"

#include <stdio.h>

#define FILENAME "snowman.pbm"

int main()
{
  struct Drawing d;
  struct Circle bottom;
  struct Circle middle;
  struct Circle top;
  
  initDrawing(&d, DRAWINGTYPE_BW, 200, 150, BW_BLACK);

  // draw a snowMan with height 90 pixels
  //   Bottom circle has radius 20, center at 100, 80
  //   Middle circle has radius 15, center at 100, 45
  //   Top circle has radius 10, center at 100, 20

  initCircle(&bottom, makePoint(100.0,80.0), 20.0);
  initCircle(&middle, makePoint(100.0,45.0), 15.0);
  initCircle(&top, makePoint(100.0,20.0), 10.0);
  
  fillCircle(&d,bottom,BW_WHITE);
  fillCircle(&d,middle,BW_WHITE);
  fillCircle(&d,top, BW_WHITE);

  writeFile(&d, FILENAME);

  return 0;

}



// Netbpmtools project -- A project to create a set of tools in C
//  to explore graphics using the netpbm file format.
// Contributors to this project include:
//   Phill Conrad, Tobias Hollerer, Eric Goodman, Alex Wickes,
//   Mark Hamlin, Nick Vaughan











