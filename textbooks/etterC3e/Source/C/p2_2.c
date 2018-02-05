// p2_2.c : Defines the entry point for the console application.
//

#include "stdafx.h"


/*------------------------------------------------------------*/
/*  Program chapter 2_2                                       */
/*                                                            */
/*  This program uses linear interpolation to                 */
/*  compute the freezing temperature of seawater.             */

#include <stdio.h>
#include <math.h>

int main(void)
{
   /*  Declare variables.  */
   double a, f_a, b, f_b, c, f_c;

   /*  Get user input from the keyboard.  */
   printf("Use ppt for salinity values. \n");
   printf("Use degrees F for temperatures. \n");
   printf("Enter first salinity and freezing temperature: \n");
   scanf("%lf %lf",&a,&f_a);
   printf("Enter second salinity and freezing temperature: \n");
   scanf("%lf %lf",&c,&f_c);
   printf("Enter new salinity: \n");
   scanf("%lf",&b);

   /*  Use linear interpolation to compute  */
   /*  new freezing temperature.            */
   f_b = f_a + (b-a)/(c-a)*(f_c - f_a);

   /*  Print new freezing temperature.   */
   printf("New freezing temperature in degrees F: %4.1f \n",f_b);
   
   /*  Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/


