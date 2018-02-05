// drawHouse.c  Draw a house using the netbpm format

#include "drawing.h"
#include "shapes.h"
#include "drawingFunctions.h"

#include <stdio.h>

int main(int argc, char *argv[])
{
  struct Drawing d;

  if (argc!=2)
    {
      fprintf(stderr,"Usage: %s filename.pbm\n", argv[0]);
      return 1;
    }

  initDrawing(&d, DRAWINGTYPE_BW, 200, 150, BW_BLACK);

  drawLineXY(&d, 50,  100, 100, 100, BW_WHITE);
  drawLineXY(&d, 100, 100, 100,  50, BW_WHITE);
  drawLineXY(&d, 100,  50,  75,  25, BW_WHITE);
  drawLineXY(&d,  75,  25,  50,  50, BW_WHITE);
  drawLineXY(&d,  50,  50,  50, 100, BW_WHITE);

  writeP1File(&d, argv[1]);

  return 0;

}



// Netbpmtools project -- A project to create a set of tools in C
//  to explore graphics using the netpbm file format.
// Contributors to this project include:
//   Phill Conrad, Tobias Hollerer, Eric Goodman, Alex Wickes,
//   Mark Hamlin, Nick Vaughan











