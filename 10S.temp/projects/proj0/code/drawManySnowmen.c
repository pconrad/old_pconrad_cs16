// drawHouse.c  Draw a house using the netbpm format

#include "drawing.h"
#include "shapes.h"

#include <stdio.h>

#define FILENAME "manySnowmen.pbm"


// Draw a snowman according to the plan indicated in the diagram at: 
// http://www.cs.ucsb.edu/~pconrad/cs16/images/snowmanGeneralPoints.png
void drawSnowman(struct Drawing *d, 
		 struct Point centerBottom,
		 double height)
{
  // one "unit" of height is total/height / 9.0
  // (see diagram)

  double unit = height/9.0;
  
  struct Circle bottom;
  struct Circle middle;
  struct Circle top;

  
  
  initCircle(&bottom, 
	     makePoint(centerBottom.x, centerBottom.y - 2.0 * unit),
	     2.0 * unit);

  initCircle(&middle, 
	     makePoint(centerBottom.x, centerBottom.y - 5.5 * unit),
	     1.5 * unit);

  initCircle(&top, 
	     makePoint(centerBottom.x, centerBottom.y - 8.0 * unit),
	     1.0 * unit);

  fillCircle(d,bottom,BW_WHITE);
  fillCircle(d,middle,BW_WHITE);
  fillCircle(d,top, BW_WHITE);

}


int main()
{
  struct Drawing d;
  struct Circle bottom;
  struct Circle middle;
  struct Circle top;
  
  initDrawing(&d, DRAWINGTYPE_BW, 400, 150, BW_BLACK);

  drawSnowman(&d, makePoint(100,100), 90);
  drawSnowman(&d, makePoint(150,100), 80);
  drawSnowman(&d, makePoint(200,100), 70);
  drawSnowman(&d, makePoint(250,100), 60);

  writeFile(&d, FILENAME);

  return 0;

}



// Netbpmtools project -- A project to create a set of tools in C
//  to explore graphics using the netpbm file format.
// Contributors to this project include:
//   Phill Conrad, Tobias Hollerer, Eric Goodman, Alex Wickes,
//   Mark Hamlin, Nick Vaughan











