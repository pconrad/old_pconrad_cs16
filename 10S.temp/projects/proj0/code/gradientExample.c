// gradientExample.c   P. Conrad for CS16, Winter 2010
// Demo of using the rgbToColorVal function to make a color gradient

#include "drawing.h"
#include "shapes.h"

#include <stdio.h>

#define FILENAME "gradientExample.pbm"

// A function requested by students to help support doing color gradients
// This function will turn three integers, each between 0 and 255 into 
// a color that can be used in the drawing routines (provided you 
// initialize your drawing with DRAWING_COLOR)

int rgbToColorVal(int r, int g, int b)
{
  return  ((r & 0xff) << 16) | ((g & 0xff) << 8) | (b & 0xff);
}




void drawShape1(struct Drawing *d, 
		struct Point ul, // upper left, or center bottom, or whatever
		double height,
		double width)
{

  int i;
  int greenVal;

  for (i=0; i<height; i++)
    {
      // greenVal will vary between 0 and 255
      // and is passed is as the "g" value to rgbToColorVal...

      greenVal = (i * 255) / height;
      drawLine(d, 
	       makePoint(ul.x,ul.y+i), 
	       makePoint(ul.x+width,ul.y+i),
	       rgbToColorVal(255, greenVal, 0));
    }
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

  // @@@ Call the drawing Routines.  
  // @@@ The numeric values below are just example values

  // @@@ Draw each shape in at least two places in at least two
  // @@@ different sizes

  drawShape1(&d,makePoint(10,10),50,20);
  drawShape1(&d,makePoint(110,10),70,25);

  // drawShape2(&d,makePoint(200,100),40,30);
  // drawShape2(&d,makePoint(250,50),30,40);

  writeFile(&d, FILENAME);

  return 0;

}



// Netbpmtools project -- A project to create a set of tools in C
//  to explore graphics using the netpbm file format.
// Contributors to this project include:
//   Phill Conrad, Tobias Hollerer, Eric Goodman, Alex Wickes,
//   Mark Hamlin, Nick Vaughan











