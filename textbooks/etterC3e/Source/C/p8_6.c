// p8_6.c : Defines the entry point for the console application.
//

#include "stdafx.h"



//--------------------------------------------------------------
//  Program chapter8_6
//
//  This program demonstrates the use of 
//  the xy_coordinate class and its functions.
//-----------------------------------------------------------
//  Class declaration (version 1)
//
//  These statements define a clas for xy-coordinates. 
//  Assume that this declaration is stored in xy_coordinate.h.

#include <iostream.h>
#include <math.h>

class xy_coordinate
{
   //  Declare function prototypes for public members.
   public:
      xy_coordinate();
      xy_coordinate(double a, double b);
      void input();
      void print();
      double radius();  
      double angle();   

   private:
   //  Declare private data members.
      double x, y;
};
//---------------------------------------------------------------
//  Class implementation (version 1)
//
//  These statements define implementation of an 
//  xy_coordinate class.

//  This function reads the xy coordinates from the keyboard.
void xy_coordinate::input()
{
   cin >> x >> y;
}

//  This function prints xy coordinates to the screen.
void xy_coordinate::print()
{
   cout << "(" << x << "," << y << ")" << endl;
}
//  This function computes the radius.
double xy_coordinate::radius()
{ 
   return sqrt(x*x + y*y);
}

//  This function computes the angle in radians.
double xy_coordinate::angle()
{
 //  Compute angle of polar form.
   double z, pi=3.141593;
   if (x >= 0)
      z = atan(y/x);
   if (x<0 && y>0)
      z = atan(y/x) + pi;
   if (x<0 && y<=0)
      z = atan(y/x) - pi;
   if (x==0 && y==0)
      z = 0;
   return z;
}

//This constructor function initializes x and y to zero.
xy_coordinate::xy_coordinate()
{
   x = 0;
   y = 0;
}

//  This constructor function initializes x and y to parameters.
xy_coordinate::xy_coordinate(double a, double b)
{
   x = a;
   y = b;
}
//---------------------------------------------------------------

int main(void)
{
   //  Declare and initialize variables.
   xy_coordinate pt1;

   //  Read input point.
   cout <<  "Enter x and y coordinates:"  << endl;
   pt1.input();

   //  Print coordinate in xy form and polar form.
   cout.setf(ios::fixed);
   cout.precision(2);
   cout << "Coordinate in xy form:" << endl;
   pt1.print();
   cout << "Coordinate in polar form:" << endl;
   cout << "magnitude: "<< pt1.radius() << endl;
   cout << "phase (in degrees): " << pt1.angle()*180/3.141593 << endl;

   //  Exit program.
   return 0;
}
//--------------------------------------------------------------

	

