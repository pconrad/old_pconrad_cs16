// p4_1.c : Defines the entry point for the console application.
//

#include "stdafx.h"

/*------------------------------------------------------------*/
/*  Program chapter4_1                                        */
/*                                                            */
/*  This program prints 21 values of the sinc                 */
/*  function in the interval [a,b] using                      */
/*  computations within the main function.                    */

#include <stdio.h>
#include <math.h>
#define PI 3.141593

int main(void)
{
   /*  Declare variables.  */
   int k;
   double a, b, x_incr, new_x, sinc_x;

   /*  Get interval endpoints from the user.  */
   printf("Enter endpoints a and b (a<b): \n");
   scanf("%lf %lf",&a,&b);
   x_incr = (b - a)/20;
   
   /*  Compute and print table of sinc(x) values.  */
   printf("x and sinc(x) \n");
   for (k=0; k<=20; k++)
   {
      new_x = a + k*x_incr;
      if (fabs(new_x) < 0.0001)
         sinc_x = 1.0;
      else
         sinc_x = sin(PI*new_x)/(PI*new_x);
      printf("%f %f \n",new_x,sinc_x);
   }
   
   /*  Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/
