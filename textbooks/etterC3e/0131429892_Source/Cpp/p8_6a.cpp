// p8_6a.cpp : Defines the entry point for the console application.
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
//  These statements define a class for xy-coordinates. 
//  Assume that this declaration is stored in xy_coordinate.h.

#include <iostream.h>
#include <math.h>
#include "xy_coordinate.h"

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
   cout << endl;
   cout << "Coordinate in polar form:" << endl;
   cout << "radius: "<< pt1.radius() << endl;
   cout << "phase: (in degrees) " << pt1.angle()*180/3.141593 << endl;

   //  Exit program.
   return 0;
}
//--------------------------------------------------------------

	


