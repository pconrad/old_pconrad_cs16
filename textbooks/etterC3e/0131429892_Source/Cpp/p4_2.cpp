// p4_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/*------------------------------------------------------------*/
/*  Program chapter4_2                                        */
/*                                                            */
/*  This program prints 21 values of the sinc                 */
/*  function in the interval [a,b] using                      */
/*  a programmer-defined function.                            */

#include <stdio.h>
#include <math.h>
#define PI 3.141593

int main(void)
{
   /*  Declare variables.  */
   int k;
   double a, b, x_incr, new_x;
   double sinc(double x);

   /*  Get interval endpoints from the user.  */
   printf("Enter endpoints a and b (a<b): \n");
   scanf("%lf %lf",&a,&b);
   x_incr = (b - a)/20;
   
   /*  Compute and print table of sinc(x) values.  */
   printf("x and sinc(x) \n");
   for (k=0; k<=20; k++)
   {
      new_x = a + k*x_incr;
      printf("%f %f \n",new_x,sinc(new_x));
   }
   
   /*  Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/
/*  This function evaluates the sinc function.                */

double sinc(double x)
{
   if (fabs(x) < 0.0001)
      return 1.0;
   else
      return sin(PI*x)/(PI*x);
}
/*------------------------------------------------------------*/
