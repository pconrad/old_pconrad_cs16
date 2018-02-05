// drawFlags.c  Draw flags using the netpbm format
// P. Conrad and others--see bottom of file

#include "drawing.h"
#include "shapes.h"

#include <stdio.h>

#define FILENAME "flags.pbm"


void drawGermanFlag(struct Drawing *d, 
		    struct Point ul, // upper left
		    double height)
{

  // note: length determined automatically from height using 
  // standard ratio for German Flag of 3:5
  // (Source: http://flagspot.net/flags/xf-rati.html)
  
  double width = height * 5.0 / 3.0;

  struct Box top, middle, bottom;

  initBox(&top,ul.x,ul.y,width,height/3.0);
  initBox(&middle,ul.x,ul.y + height/3.0,width,height/3.0);
  initBox(&bottom,ul.x,ul.y + height * (2.0/3.0), width, height/3.0);
  
  fillBox(d,top, COLOR_BLACK);
  fillBox(d,middle,COLOR_RED);

  // According to comment at http://flagspot.net/flags/de_color.html
  // FFDD00 approximates Gold of German Flag (255, 221, 0)
  fillBox(d,bottom, 0xFFDD00); 
}


int main()
{
  struct Drawing d;
  
  initDrawing(&d, DRAWINGTYPE_COLOR, 400, 150, COLOR_WHITE);

  drawGermanFlag(&d,makePoint(100,100),50);

  writeFile(&d, FILENAME);

  return 0;

}



// Netbpmtools project -- A project to create a set of tools in C
//  to explore graphics using the netpbm file format.
// Contributors to this project include:
//   Phill Conrad, Tobias Hollerer, Eric Goodman, Alex Wickes,
//   Mark Hamlin, Nick Vaughan











