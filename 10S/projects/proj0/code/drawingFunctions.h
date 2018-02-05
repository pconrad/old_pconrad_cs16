// drawingFunctions.h   Functions for black-and-white drawings
// P. Conrad and others--see bottom of file--for CS16, Spring 2010, UCSB 
// Updated by Eric Goodman, 05/20/2010 with additional comments
//    and reorganized to group "like" functions together.
// Original is still available as drawingFunctions.h.original.S10

#ifndef DRAWINGFUNCTIONS_H
#define DRAWINGFUNCTIONS_H

#include <stdio.h> // for printf, etc.
#include <math.h> // for math functions atan(), sqrt(), sin(), cos(), etc.
#include <stdlib.h> // for abort()

#include "drawing.h"
#include "shapes.h"


void drawPolygon(struct Drawing *d, struct Polygon poly, int color);
void drawBox(struct Drawing *d, struct Box b, int color);
void fillBox(struct Drawing *d, struct Box b, int color);
void drawCircle(struct Drawing *d, struct Circle c, int color);
void fillCircle(struct Drawing *d, struct Circle c, int color);

//above functions draw the respective shapes
//and either fill them in or not, based upon
//if the function has fill within its name.

int isLegalColor(struct Drawing *d, int color); 

//checks to make sure color is within limits
//can be used within custom functions to prevent
//a error when attempting to pass an illegal color.

void setPixel(struct Drawing *d, int x, int y, int color);

//This function takes its paramters and prints a
//single colored pixel onto (x,y). This function
//is called by all of the other functions that
//change the Drawing.

int getPixel(struct Drawing *d, int x, int y);

//Gets the color of an in-bounds pixel.

void initDrawing(struct Drawing *d, enum DrawingType type, int w, int h, int bgColor);

//Initializes a struct Drawing to hold the
//parameters of width, height and background color.
//fails if the max height or width are exceeded.

int roundInt(double x);

//rounds int to nearest integer, if within .5,
//this will round up.

void drawLine(struct Drawing *d, struct Point p1, struct Point p2, int color);

//Takes two points and draws a line inbetween them
//on your drawing.

void drawLineXY(struct Drawing *d, double x1, double y1, double x2, double y2, int color);

//alternate version of drawLine with different parameters

int leftMostNonBlackPixelInRow(struct Drawing *fh,int y);
int rightMostNonBlackPixelInRow(struct Drawing *fh,int y);

//used in fill Polygon.

void fillPolygon(struct Drawing *d, struct Polygon poly, int color);

//Used to take a pre-initialized polygon
//and draws it on your struct Drawing, filling
//it with the color of your choice.

void fillHelperPolygon(struct Drawing *fillHelper);
void    copyHelperPolygon(struct Drawing *d, 
			  struct Drawing *fillHelper, 
			  int color);
//Above functions are used in fillPolygon.
//see notes in drawingFunctions.h

void writeFile(struct Drawing *d, char * filename);

//Creates your drawing based upon drawingtype.

void writeP1File(struct Drawing *d, char * filename);
void writeP3File(struct Drawing *d, char * filename);
//Above functions are called in writeFile
//used to initialize BW drawing and COLOR
//drawing, respectively. 



#endif // DRAWINGFUNCTIONS_H

// Netbpmtools project -- A project to create a set of tools in C
//  to explore graphics using the netpbm file format.
// Contributors to this project include:
//   Phill Conrad, Tobias Hollerer, Eric Goodman, Alex Wickes,
//   Mark Hamlin, Nick Vaughan

