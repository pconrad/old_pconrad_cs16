// ourDrawing.c  proj0, CS16, Winter 2010, UCSB
// @@@ REPLACE THIS LINE WITH A DESCRIPTION OF WHAT YOU ARE DRAWING
// @@@ INSERT YOUR NAME AND YOUR PAIR PARTNERS NAME HERE
// @@@ ALSO THE DATE
// Outline: P. Conrad and others--see bottom of file

#include "drawing.h"
#include "shapes.h"

#include <stdio.h>

#define FILENAME "ourDrawing.pbm"

// @@@ RENAME THIS from drawShape1 to whatever you want to draw
// @@@ be that a skateboard, iPod, basketball court or whatever.


void drawShape1(struct Drawing *d, 
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

  initDrawing(&d, DRAWINGTYPE_COLOR, 400, 150, COLOR_WHITE);

  // @@@ call the drawing Routines.  The values 100,100, 50, 20
  // @@@ below are just example values

  // @@@ Draw each shape in at least two places in at least two
  // @@@ different sizes

  drawShape1(&d,makePoint(100,100),50,20);
  drawShape1(&d,makePoint(150,100),70,25);

  drawShape2(&d,makePoint(200,100),40,30);
  drawShape2(&d,makePoint(250,50),30,40);

  writeFile(&d, FILENAME);

  return 0;

}



// Netbpmtools project -- A project to create a set of tools in C
//  to explore graphics using the netpbm file format.
// Contributors to this project include:
//   Phill Conrad, Tobias Hollerer, Eric Goodman, Alex Wickes,
//   Mark Hamlin, Nick Vaughan











