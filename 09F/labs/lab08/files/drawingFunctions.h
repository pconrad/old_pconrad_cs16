// drawingFunctions.h   Functions for black-and-white drawings
// P. Conrad and others--see bottom of file--for CS16, Fall 2009, UCSB 

#ifndef DRAWINGFUNCTIONS_H
#define DRAWINGFUNCTIONS_H

#include <stdio.h> // for printf, etc.
#include <math.h> // for math functions atan(), sqrt(), sin(), cos(), etc.
#include <stdlib.h> // for abort()

#include "drawing.h"
#include "shapes.h"


int isLegalColor(struct Drawing *d, int color);
void setPixel(struct Drawing *d, int x, int y, int color);
int getPixel(struct Drawing *d, int x, int y);
void initDrawing(struct Drawing *d, enum DrawingType type, int w, int h, int bgColor);
int roundInt(double x);
void drawLine(struct Drawing *d, struct Point p1, struct Point p2, int color);
void drawLineXY(struct Drawing *d, double x1, double y1, double x2, double y2, int color);
int leftMostNonBlackPixelInRow(struct Drawing *fh,int y);
int rightMostNonBlackPixelInRow(struct Drawing *fh,int y);
void fillPolygon(struct Drawing *d, struct Polygon poly, int color);
void fillHelperPolygon(struct Drawing *fillHelper);
void    copyHelperPolygon(struct Drawing *d, 
			  struct Drawing *fillHelper, 
			  int color);
void writeFile(struct Drawing *d, char * filename);
void writeP1File(struct Drawing *d, char * filename);
void writeP3File(struct Drawing *d, char * filename);
void drawPolygon(struct Drawing *d, struct Polygon poly, int color);

void drawBox(struct Drawing *d, struct Box b, int color);
void fillBox(struct Drawing *d, struct Box b, int color);
void drawCircle(struct Drawing *d, struct Circle c, int color);
void fillCircle(struct Drawing *d, struct Circle c, int color);


#endif // DRAWINGFUNCTIONS_H

// Netbpmtools project -- A project to create a set of tools in C
//  to explore graphics using the netpbm file format.
// Contributors to this project include:
//   Phill Conrad, Tobias Hollerer, Eric Goodman, Alex Wickes,
//   Mark Hamlin, Nick Vaughan

