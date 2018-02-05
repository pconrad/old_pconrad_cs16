// p2_3.c : Defines the entry point for the console application.
//

#include "stdafx.h"


/*------------------------------------------------------------*/
/*  Program chapter2_3                                        */
/*                                                            */
/*  This program estimates new velocity and                   */
/*  acceleration values for a specified time.                 */

#include <stdio.h>
#include <math.h>

int main(void)
{
   /*  Declare variables.  */
   double time, velocity, acceleration;

   /*  Get time value from the keyboard.  */
   printf("Enter new time value in seconds: \n");
   scanf("%lf",&time);

   /*  Compute velocity and acceleration.  */
   velocity = 0.00001*pow(time,3) - 0.00488*pow(time,2)
              + 0.75795*time + 181.3566;
   acceleration = 3 - 0.000062*velocity*velocity;

   /*  Print velocity and acceleration.  */
   printf("Velocity = %8.3f m/s \n",velocity);
   printf("Acceleration = %8.3f m/s^2 \n",acceleration);
   
   /*   Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/

