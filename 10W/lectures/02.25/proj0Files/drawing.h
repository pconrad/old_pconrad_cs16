// drawing.h   Structs for drawing for lab08, cs16 Fall 2009, UCSB CS Dept.
// P. Conrad and others--see bottom of file

#ifndef DRAWING_H
#define DRAWING_H

// In this version of drawing.h, the "pixels" array
// is a fixed size array.   This may waste space,
// but simplifies the coding.  In a later version, we'll
// use malloc/free to allocate an array of exactly the
// the right size.

#define DRAWING_MAX_WIDTH 512
#define DRAWING_MAX_HEIGHT 512

#define MAXPIXELS (DRAWING_MAX_WIDTH * DRAWING_MAX_HEIGHT)

enum DrawingType {
  DRAWINGTYPE_BW = 1,
  DRAWINGTYPE_COLOR = 3
};

struct Drawing {
  enum DrawingType type;
  int height;
  int width;
  int pixels[MAXPIXELS]; // row major order
};

#define BW_WHITE 0
#define BW_BLACK 1

// For color drawings, each integer in the rgb array uses the same format
// as hexadecimal web colors; i.e. in hex, the digits are RRGGBB
// See http://en.wikipedia.org/wiki/Web_colors

#define COLOR_WHITE   0xFFFFFF
#define COLOR_RED     0xFF0000
#define COLOR_GREEN   0x00FF00
#define COLOR_BLUE    0x0000FF
#define COLOR_YELLOW  0xFFFF00
#define COLOR_MAGENTA 0xFF00FF
#define COLOR_CYAN    0x00FFFF
#define COLOR_BLACK   0x000000

#define COLOR_ORANGE  0xFFA500
#define COLOR_PURPLE  0x800080
#define COLOR_BROWN   0xA52A2A
#define COLOR_GRAY    0x808080

#define GETRED(x) (((x) >> 16) & 0xff)
#define GETGREEN(x) (((x) >> 8) & 0xff)
#define GETBLUE(x) (((x) >> 0) & 0xff)

#include "drawingFunctions.h"

#endif // DRAWING_H


// Netbpmtools project -- A project to create a set of tools in C
//  to explore graphics using the netpbm file format.
// Contributors to this project include:
//   Phill Conrad, Tobias Hollerer, Eric Goodman, Alex Wickes,
//   Mark Hamlin, Nick Vaughan











