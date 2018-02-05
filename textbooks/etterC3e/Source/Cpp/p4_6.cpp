// p4_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/*------------------------------------------------------------*/
/*  Program chapter4_6                                        */
/*                                                            */
/*  This program estimates the reliability of a series and    */
/*  a parallel configuration using a computer simulation.     */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
   /*  Declare variables and function prototypes.  */
   unsigned int seed;
   int n, k;
   double component_reliability, a_series, a_parallel,
          series_success=0, parallel_success=0,
          num1, num2, num3;
   double rand_float(double a,double b);

   /*  Get information for the simulation.  */
   printf("Enter individual component reliability: \n");
   scanf("%lf",&component_reliability);
   printf("Enter number of trials: \n");
   scanf("%i",&n);
   printf("Enter unsigned integer seed: \n");
   scanf("%u",&seed);
   srand(seed);
   printf("\n");

   /*  Compute Analytical reliabilities.  */
   a_series = pow(component_reliability,3);
   a_parallel = 3*component_reliability
                - 3*pow(component_reliability,2)
                + pow(component_reliability,3);
    
   /*  Determine simulation reliability estimates.  */
   for (k=1; k<=n; k++)
   {
      num1 = rand_float(0,1);
      num2 = rand_float(0,1);
      num3 = rand_float(0,1);
      if (((num1<=component_reliability) &&
          (num2<=component_reliability)) &&
          (num3 <=component_reliability))
             series_success++;
      if (((num1<=component_reliability) ||
          (num2<=component_reliability)) ||
          (num3 <=component_reliability))
             parallel_success++;
   }

   /*  Print results.  */
   printf("Analytical Reliability \n");
   printf("Series: %.3f Parallel: %.3f \n",
           a_series,a_parallel);
   printf("Simulation Reliability, %i trials \n",n);
   printf("Series: %.3f Parallel: %.3f \n",
           (double)series_success/n,
           (double)parallel_success/n);
   
   /*  Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/
/*  This function generates a random                          */
/*  double value between a and b (a<b).                       */

double rand_float(double a,double b)
{
   return ((double)rand()/RAND_MAX)*(b-a) + a;
}
/*------------------------------------------------------------*/

