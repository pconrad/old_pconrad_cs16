// p1_1.c : Defines the entry point for the console application.
//

#include "stdafx.h"
/*------------------------------------------------------------*/
/*  Program chapter1_1                                        */
/*                                                            */
/*  This program computes the                                 */
/*  distance between two points.                              */

#include <stdio.h>
#include <math.h>

int main(void)
{
   /*  Declare and initialize variables.  */
   double x1=1, y1=5, x2=4, y2=7,
          side_1, side_2, distance;

   /*  Compute sides of a right triangle.  */
   side_1 = x2 - x1;
   side_2 = y2 - y1;
   distance = sqrt(side_1*side_1 + side_2*side_2);

   /*  Print distance.  */
   printf("The distance between the two points is "
          "%5.2f \n",distance);
   
   /*   Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/




