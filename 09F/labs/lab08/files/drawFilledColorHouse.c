// drawHouse.c  Draw a house using the netbpm format

#include "drawing.h"
#include "shapes.h"

#include <stdio.h>

int main(int argc, char *argv[])
{
  struct Drawing d;

  if (argc!=2)
    {
      fprintf(stderr,"Usage: %s filename.pbm\n", argv[0]);
      return 1;
    }

  initDrawing(&d, DRAWINGTYPE_COLOR, 200, 150, 0xCCCCFF);
  
  struct Polygon poly;

  poly.numPoints = 5;
  
  initPoint(&poly.pts[0], 50,  100);
  initPoint(&poly.pts[1], 100, 100);
  initPoint(&poly.pts[2], 100,  50);
  initPoint(&poly.pts[3],  75,  25);
  initPoint(&poly.pts[4],  50,  50);

  fillPolygon(&d,poly,COLOR_RED);

  writeP3File(&d, argv[1]);

  return 0;

}



// Netbpmtools project -- A project to create a set of tools in C
//  to explore graphics using the netpbm file format.
// Contributors to this project include:
//   Phill Conrad, Tobias Hollerer, Eric Goodman, Alex Wickes,
//   Mark Hamlin, Nick Vaughan











