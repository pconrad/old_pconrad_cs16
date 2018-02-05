// p3_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/*------------------------------------------------------------*/
/*  Program chapter3_2                                        */
/*                                                            */
/*  This program prints a degree-to-radian table              */
/*  using a do-while loop structure.               .          */

#include <stdio.h>
#define PI 3.141593

int main(void)
{
   /*  Declare and initialize variables.  */
   int degrees=0;
   double radians;

   /*  Print radians and degrees in a loop.  */
   printf("Degrees to Radians \n");
   do
   {
      radians = degrees*PI/180;
      printf("%6i %9.6f \n",degrees,radians);
      degrees += 10;
   } while (degrees <= 360);
   
   /*  Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/

