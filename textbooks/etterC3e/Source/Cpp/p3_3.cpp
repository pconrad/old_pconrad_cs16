// p3_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/*------------------------------------------------------------*/
/*  Program chapter3_3                                        */
/*                                                            */
/*  This program prints a degree-to-radian table              */
/*  using a for loop structure.                 .             */

#include <stdio.h>
#define PI 3.141593

int main(void)
{
   /*  Declare variables.  */
   int degrees;
   double radians;

   /*  Print radians and degrees in a loop.  */
   printf("Degrees to Radians \n");
   for (degrees=0; degrees<=360; degrees+=10)
   {
      radians = degrees*PI/180;
      printf("%6i %9.6f \n",degrees,radians);
   }
   
   /*  Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/

