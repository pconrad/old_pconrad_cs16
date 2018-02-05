// drawingFunctions.c   Functions for black-and-white drawings
// P. Conrad and others--see bottom of file--for CS16, Winter 2010, UCSB 

#include <stdio.h> // for printf, etc.
#include <math.h> // for math functions atan(), sqrt(), sin(), cos(), etc.
#include <stdlib.h> // for abort() and abs()
#include <assert.h> // for assert()

#include "drawing.h"
#include "shapes.h"

#include "drawingFunctions.h"
#include "shapeFunctions.h"




int isLegalColor(struct Drawing *d, int color)
{
  // check color
  switch (d->type)
    {
    case DRAWINGTYPE_BW:
      if (color != BW_WHITE && color != BW_BLACK)
	return 0;
      break;
    case DRAWINGTYPE_COLOR:
      if (color < 0 || color > 0xFFFFFF)
	return 0;
      break;
    default:
      fprintf(stderr,"Error: unexpected drawing type: %d\n", d->type);
      abort();
    }
  return 1;
}

void setPixel(struct Drawing *d, int x, int y, int color)
{
  if (x < 0 || x >= d->width || y < 0 || y >= d->height)
    return; // pixel is out of bounds
  
  if (isLegalColor(d,color))
    d->pixels[(y * d->width) + x] = color;
  else
    fprintf(stderr,"Warning: illegal color %d for drawing type P%d\n",color,d->type);
}

int getPixel(struct Drawing *d, int x, int y)
{

  if (x < 0 || x >= d->width )
    {
      fprintf(stderr,"Warning: x=%d is out-of-bounds in getPixel\n",x);
      return -1; // pixel is out of bounds
    }

  if (y < 0 || y >= d->height )
    {
      fprintf(stderr,"Warning: y=%d is out-of-bounds in getPixel\n",y);
      return -1; // pixel is out of bounds
    }

  return d->pixels[(y * d->width) + x];

}

void initDrawing(struct Drawing *d, enum DrawingType type, int w, int h, int bgColor)
{
  int i,j;

  if (type != DRAWINGTYPE_BW &&
      type != DRAWINGTYPE_COLOR)
    {
      fprintf(stderr,"Warning: illegal drawing type P%d\n",type);
      abort();
    }

  if (w > DRAWING_MAX_WIDTH)
    {
      fprintf(stderr,"Warning: maximum width of %d exceeded\n",DRAWING_MAX_WIDTH);
      abort();
    }

  if (h > DRAWING_MAX_HEIGHT)
    {
      fprintf(stderr,"Warning: maximum height of %d exceeded\n",DRAWING_MAX_HEIGHT);
      abort();
    }

  d->type = type; 
  d->width = w;
  d->height= h;

  // Color will be checked by setPixel routine

  for (i=0; i < w; i++)
    for (j=0; j < h; j++)
      setPixel(d,i,j,bgColor);
  
}

// round a double to the nearest integer
int roundInt(double x)
{
  return ((int) (x + 0.5));
}

void drawLineXY(struct Drawing *d, double x1, double y1, double x2, double y2, int color)
{
  struct Point p1;
  struct Point p2;
  initPoint(&p1,x1,y1);
  initPoint(&p2,x2,y2);
  drawLine(d, p1, p2, color);

}

void swapInt(int *a, int *b)
{
  int temp = (*a);
  (*a) = (*b);
  (*b) = temp;
}

void drawLine(struct Drawing *d, struct Point p1, struct Point p2, int color)
{
  int x0 = roundInt(p1.x);
  int y0 = roundInt(p1.y);
  int x1 = roundInt(p2.x);
  int y1 = roundInt(p2.y);


  int steep = (abs(y1 - y0) > abs(x1 - x0));
  if (steep)
    {
      swapInt(&x0, &y0);
      swapInt(&x1, &y1);
    }
  if (x0 > x1)
    {
      swapInt(&x0, &x1);
      swapInt(&y0, &y1);
    }
  int deltax = x1 - x0;
  int deltay = abs(y1 - y0);
  int error = deltax / 2;
  int ystep = ((y0 < y1) ? 1 : -1);
  int x, y;
  y = y0;
  for (x = x0; x <= x1; x++)
    {
      if (steep)
	{
	  setPixel(d, y, x, color);
	}
      else
	{
	  setPixel(d,  x, y, color);
	}
      error -= deltay;
      if (error < 0)
	{
	  y += ystep;
	  error += deltax;
	}
    }
}



void drawLineAlt(struct Drawing *d, struct Point p1, struct Point p2, int color)
{
    double dx = (p2.x-p1.x);
    double dy = (p2.y-p1.y);
    
    double theta = atan(dy/dx); // theta is the angle formed by the line
    
    // adjust angle if needed--if x is decreasing add pi

    if (dx < 0) 
      theta += M_PI;
         
    // every time we move 1 pixel unit down the line,
    // x increases by dx, and y by dy
    // since r = 1, x = r cos theta, and y = r sin theta
    // we have:

    dx = cos(theta); 
    dy = sin(theta);

    // x and y are where we are on the line--they start at p1
    // They represent the "exact" point on the line (calculated in double)

    double x= p1.x;   
    double y= p1.y; 

    double length = distanceBetween(p1,p2); // how much we need to draw
    double drawn = 0.0; // how much we've drawn so far
  
    while (drawn < length){
      // set the pixel closest to the exact point we want to draw
      setPixel(d,roundInt(x),roundInt(y),color);
      drawn += 1.0;
      x += dx;
      y += dy;
    }

    // Now draw the last pixel
    setPixel(d,roundInt(p2.x),roundInt(p2.y),color);
}
int leftMostNonBlackPixelInRow(struct Drawing *fh,int y)
{
  int x;
  for(x=0; x<fh->width; x++)
    {
      if(fh->pixels[ (y*fh->width) + x] != BW_BLACK)
	{
	  return x;
	}
    }
  return -1;
}
int rightMostNonBlackPixelInRow(struct Drawing *fh,int y)
{
  int x;
  for(x=fh->width - 1; x >= 0; x--)
    {
      if(fh->pixels[(y*fh->width) + x] != BW_BLACK)
	{
	  return x;
	}
    }
  return -1;
}

// fillPolygon works by doing four things:
//  (1) creating a BW helper drawing of the same size as
//    the original drawing, with a black background
//  (2) we draw the polygon edges in white
//  (3) fillHelperPolygon fills in the interior of
//      the polygon on the helperDrawing with white pixels
//  (4) Every place on the helperDrawing that is white
//      is a place we should color in on the main drawing
// The fillPolygon function assumes that the polygon passed in 
// is simple and convex.  If not, the result is not necessarily
// going to be what you want!

void fillPolygon(struct Drawing *d, struct Polygon poly, int color)
{
  struct Drawing fillHelper;
  
  // start by creating a helper drawing
  initDrawing(&fillHelper, DRAWINGTYPE_BW, d->width, d->height, BW_BLACK);

  // draw the outline in white on the helper drawing
  drawPolygon(&fillHelper,poly,BW_WHITE); 
  
  // fill in interior of helper drawing
  fillHelperPolygon(&fillHelper); 
  
  // fill in pixels on main drawing
  copyHelperPolygon(d,&fillHelper,color); 
}


// The function fillHelperPolygon takes a BW drawing, on
// which we have drawn a single simply convex polygon with
// white lines.    It then finds the interior of that polygon
// and fills it with white pixels.   We can then use that
// helper drawing to figure out which pixels need to be set
// in our main drawing to produce a filled polygon in any color.


void fillHelperPolygon(struct Drawing *fillHelper)
{
  // This goes through the entire drawing.
  // An improvement (for efficiency) would be to only
  // go through the rows that are inside the bounding box
  // of the polygon.

  int i,j;
  for (j=0;j<fillHelper->height;j++)
    {
      int left,right;
      
      left = leftMostNonBlackPixelInRow(fillHelper, j);
      right = rightMostNonBlackPixelInRow(fillHelper, j);
      if (left != -1 && right != -1)
	for (i = left; i<= right; i++)
	  setPixel(fillHelper, i, j, BW_WHITE);
    }  
}

void    copyHelperPolygon(struct Drawing *d, 
			  struct Drawing *fillHelper, 
			  int color)
{
  int i,j;
  
  assert(d->height == fillHelper->height);
  assert(d->width == fillHelper->width);
  
  for(j=0;j<fillHelper->height;j++)
    {
      for(i=0;i<fillHelper->width;i++)
	{
	  if (getPixel(fillHelper,i,j) != BW_BLACK)
	    setPixel(d,i,j,color);
	}
    }
}

void writeFile(struct Drawing *d, char * filename)
{
  switch (d->type)
    {
    case DRAWINGTYPE_BW:
      writeP1File(d,filename);
      return;
    case DRAWINGTYPE_COLOR:
      writeP3File(d,filename);
      return;
    default:
      fprintf(stderr,"Warning: unknown drawing type %d in writeFile\n", d->type);
      abort();
    }

}

void writeP1File(struct Drawing *d, char * filename)
{
  FILE *file;
  int x,y;

  if (d->type != DRAWINGTYPE_BW)
    {
      fprintf(stderr,"Error: writeP1File can only be used on type P1 drawings\n");
      abort();
    }
  
  // open the file for writing
  file = fopen(filename,"w");	
 
  // write file header
  fprintf(file,"P1 \n");	
  fprintf(file,"%d %d\n",d->width, d->height);
  
  // write pixels to file
  for (y=0; y < d->height; y++)	
    {	
      for(x=0; x< d->width; x++)				
    	{
	  fprintf(file,"%d ", getPixel(d,x,y));
    	}
      fprintf(file,"\n");
    }
  
  fclose(file); // done!
	
}

void writeP3File(struct Drawing *d, char * filename)
{
  FILE *file;
  int x,y;

  if (d->type != DRAWINGTYPE_COLOR)
    {
      fprintf(stderr,"Error: writeP3File can only be used on type P3 drawings\n");
      abort();
    }
  
  // open the file for writing
  file = fopen(filename,"w");	
 
  // write file header
  fprintf(file,"P3 \n");	
  fprintf(file,"%d %d\n",d->width, d->height);

  // The 255 is hard coded, because we are using
  // hexadecimal web color codes.  These use 0-255 
  // i.e. two hex digits to represent R G and B

  fprintf(file,"255\n"); 
  
  // write pixels to file
  for (y=0; y < d->height; y++)	
    {	
      for(x=0; x< d->width; x++)				
    	{
	  fprintf(file,"%d %d %d\n", 
		  GETRED(getPixel(d,x,y)),
		  GETGREEN(getPixel(d,x,y)),
		  GETBLUE(getPixel(d,x,y)));
    	}
    }
  
  fclose(file); // done!
	
}

// draw outline of a polygon

void drawPolygon(struct Drawing *d, struct Polygon poly, int color)
{
  int i;
  for (i=0;i<poly.numPoints;i++)
    {
      drawLine(d,
	       poly.pts[i],
	       poly.pts[(i+1) % poly.numPoints],
	       color);
    }
}


void drawBox(struct Drawing *d, struct Box b, int color)
{
  drawPolygon(d, box2Polygon(b), color);
}


void fillBox(struct Drawing *d, struct Box b, int color)
{
  fillPolygon(d, box2Polygon(b), color);
}




// draw a circle--do so by converting the circle to a polygon
// and then drawing that

void drawCircle(struct Drawing *d, struct Circle c, int color)
{
  drawPolygon(d, circle2Polygon(c), color);
}

// fill a circle--do so by converting the circle to a polygon
// and then filling that

void fillCircle(struct Drawing *d, struct Circle c, int color)
{
  fillPolygon(d, circle2Polygon(c), color);
}




// Netbpmtools project -- A project to create a set of tools in C
//  to explore graphics using the netpbm file format.
// Contributors to this project include:
//   Phill Conrad, Tobias Hollerer, Eric Goodman, Alex Wickes,
//   Mark Hamlin, Nick Vaughan

