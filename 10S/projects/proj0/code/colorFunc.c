// P. Conrad for CS16, Winter 2010
// colorFunc.c----see testColor.c for tests that go with this function

// A function requested by students to help support doing color gradients
// This function will turn three integers, each between 0 and 255 into 
// a color that can be used in the drawing routines (provided you 
// initialize your drawing with DRAWING_COLOR)

int rgbToColorVal(int r, int g, int b)
{
  return  ((r & 0xff) << 16) | ((g & 0xff) << 8) | (b & 0xff);
}

// This could be used inside a for loop that varies the value you
// pass in for r, g, or b, e.g.
//
// This could might make a box by drawing thin lines of varying
// colors, i.e. 0xFF0000, 0xFF0100, 0xFF0200, etc. up to 0xFFFF00,
// i.e. varying from pure red to pure yellow.   This box would be
// exactly 255 pixels high, and width pixels wide.   You could, however,
// by intepolating between 0 and 255, or any other two min/max values,
// make other kinds of color gradients.
// 
// See gradientExample.c for an example








