// p3_1.c : Defines the entry point for the console application.
//

#include "stdafx.h"

/*------------------------------------------------------------*/
/*  Program chapter3_1                                        */
/*                                                            */
/*  This program prints a degree-to-radian table              */
/*  using a while loop structure.               .             */

#include <stdio.h>
#define PI 3.141593

int main(void)
{
   /*  Declare and initialize variables.  */
   int degrees=0;
   double radians;

   /*  Print radians and degrees in a loop.  */
   printf("Degrees to Radians \n");
   while (degrees <= 360)
   {
      radians = degrees*PI/180;
      printf("%6i %9.6f \n",degrees,radians);
      degrees += 10;
   }
   
   /*  Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/
