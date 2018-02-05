// p4_7.c : Defines the entry point for the console application.
//

#include "stdafx.h"

/*------------------------------------------------------------*/
/*  Program chapter4_7                                        */
/*                                                            */
/*  This program estimates the real roots of a                */
/*  polynomial function using incremental search.             */

#include <stdio.h>
#include <math.h>

int main(void)
{
   /*  Declare variables and function prototype.  */
   int n, k;
   double a0, a1, a2, a3, a, b, step, left, right;
   void check_roots(double left,double right,double a0,
                    double a1,double a2,double a3);

   /*  Get user input.  */
   printf("Enter coefficients a0, a1, a2, a3: \n");
   scanf("%lf %lf %lf %lf",&a0,&a1,&a2,&a3);
   printf("Enter interval limits a, b (a<b): \n");
   scanf("%lf %lf",&a,&b);
   printf("Enter step size: \n");
   scanf("%lf",&step);
    
   /*  Check subintervals for roots.  */
   n = ceil((b - a)/step);
   for (k=0; k<=n-1; k++)
   {
      left = a + k*step;
      if (k == n-1)
         right = b;
      else
         right = left + step;
      check_roots(left,right,a0,a1,a2,a3);
   }
             
   /*  Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/
/*  This function checks a subinterval for a root.            */
void check_roots(double left,double right,double a0,
                 double a1,double a2,double a3)
{
   /*  Declare variables and function prototype.  */
   double f_left, f_right;
   double poly(double x,double a0,double a1,
               double a2,double a3);

   /*  Evaluate subinterval endpoints and test for roots.  */
   f_left = poly(left,a0,a1,a2,a3);
   f_right = poly(right,a0,a1,a2,a3);
   if (fabs(f_left) < 0.1e-04)
      printf("Root detected at %.3f \n",left);
   else
      if (fabs(f_right) < 0.1e-04)
         ;
      else
         if (f_left*f_right < 0)
            printf("Root detected at %.3f \n",(left+right)/2);

   return;
}
/*------------------------------------------------------------*/
/*  This function evaluates a cubic polynomial.               */

double poly(double x,double a0,double a1,double a2,double a3)
{
   return a0*x*x*x + a1*x*x + a2*x + a3;
}
/*------------------------------------------------------------*/
