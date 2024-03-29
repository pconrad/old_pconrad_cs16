// ourDrawing.c  lab08, CS16, Fall 2009, UCSB
// Drawing a couple of sample houses
// Me myself and I, P. Conrad
// 02.25
// Outline: P. Conrad and others--see bottom of file

#include "drawing.h"
#include "shapes.h"

#include <stdio.h>

#define FILENAME "ourDrawing.pbm"

// draw a house---with center top as starting point

void drawHouse1(struct Drawing *d, 
		struct Point ct, // center top of roof of house
		double height,
		double width)
{
  drawLine(d,
	   makePoint(ct.x,ct.y),
	   makePoint(ct.x+width/2.0,ct.y+height/3.0),
	   BW_BLACK );
  drawLine(d,
	   makePoint(ct.x+width/2.0,ct.y+height/3.0),
	   makePoint(ct.x+width/2.0,ct.y+height),
	   BW_BLACK );

  drawLine(d,
	   makePoint(ct.x+width/2.0,ct.y+height),
	   makePoint(ct.x-width/2.0,ct.y+height),	   
	   BW_BLACK );

  drawLine(d,
	   makePoint(ct.x-width/2.0,ct.y+height),	   
	   makePoint(ct.x-width/2.0,ct.y+height/3.0),	   
	   BW_BLACK );

  drawLine(d,
	   makePoint(ct.x-width/2.0,ct.y+height/3.0),	   
	   makePoint(ct.x,ct.y),	   
	   BW_BLACK );
}

// @@@ RENAME THIS from drawShape2 to whatever you want to draw
// @@@ be that a skateboard, iPod, basketball court or whatever.
// @@@ Create as many copies of this as you have shapes

void drawShape2(struct Drawing *d, 
		struct Point ul, // upper left, or center bottom, or whatever
		double height,
		double width)
{
  // @@@ Insert some code that determines the points, boxes,
  // @@@ circles, etc. you need
  // @@@ based on the values you passed in

  // @@@ Then call functions like initBox, initCircle, or whatever
  // @@@ to create the points, polygons, circles, boxes, etc

  // @@@ Then call functions like fillBox, fillCircle, or whatever
  // @@@ to make a drawing.  Pass d as your first parameter.

  
}


int main()
{
  struct Drawing d;
 
  // @@@ modify the values 400 and 150 to be the width/height
  // @@@ that you want
  initDrawing(&d, DRAWINGTYPE_BW, 400, 150, BW_WHITE);

  // @@@ call the drawing Routines.  The values 100,100, 50, 20
  // @@@ below are just example values

  // @@@ Draw each shape in at least two places in at least two
  // @@@ different sizes

  drawHouse1(&d,makePoint(100,100),50,20);  
  drawHouse1(&d,makePoint(150,100),70,25);

  writeFile(&d, FILENAME);

  return 0;

}



// Netbpmtools project -- A project to create a set of tools in C
//  to explore graphics using the netpbm file format.
// Contributors to this project include:
//   Phill Conrad, Tobias Hollerer, Eric Goodman, Alex Wickes,
//   Mark Hamlin, Nick Vaughan











