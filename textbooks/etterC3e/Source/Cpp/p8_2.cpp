// p8_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


//--------------------------------------------------------------
//  Program chapter8_2                                        
//                                                            
//  This program estimates new velocity and acceleration                  
//  values for a specified time.                 

#include <iostream.h>
#include <math.h>

int main(void)
{
   //  Declare variables.  
   double time, velocity, acceleration;

   //  Get time value from the keyboard.  
   cout << "Enter new time value in seconds:" << endl;
   cin >> time;

   //  Compute velocity and acceleration.  
   velocity = 0.00001*pow(time,3) - 0.00488*pow(time,2)
              + 0.75795*time + 181.3566;
   acceleration = 3 - 0.000062*velocity*velocity;

   //  Print velocity and acceleration. 
   cout.setf(ios::fixed);
   cout.precision(3); 
   cout << "Velocity = " << velocity << " m/s" << endl;
   cout << "Acceleration = "<< acceleration << " m/s^2" << endl;
   
   //  Exit program.  
   return 0;
}
//---------------------------------------------------------------

