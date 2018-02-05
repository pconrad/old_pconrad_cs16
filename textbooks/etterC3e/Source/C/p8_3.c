// p8_3.c : Defines the entry point for the console application.
//

#include "stdafx.h"


//---------------------------------------------------------------
//  Program chapter8_3                                       
//                                                            
//  This program prints a degree-to-radian table using a              
//  for loop structure.                              

#include <iostream.h>

int main(void)
{
   //  Declare constants and variables.  
   const double PI=3.141593;
   int degrees;
   double radians;

   //  Print radians and degrees in a loop.  
   cout.setf(ios::fixed);
   cout.precision(6);
   cout << "Degrees to Radians" << endl;
   for (degrees=0; degrees<=360; degrees+=10)
   {
      radians = degrees*PI/180;
      cout << degrees << " " << radians << endl;
   }
   
   //  Exit program.  
   return 0;
}
/*-------------------------------------------------------------*/
