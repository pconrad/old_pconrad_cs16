// p4_5a.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/*------------------------------------------------------------*/
/*  Program chapter4_5a                                       */
/*                                                            */
/*  This program generates and prints ten random              */
/*  floating-point numbers between user-specified limits.     */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   /*  Declare variables and function prototype.  */
   unsigned int seed;
   int k;
   double a, b;
   double rand_float(double a,double b);

   /*  Get seed value and interval limits.  */
   printf("Enter a positive integer seed value: \n");
   scanf("%u",&seed);
   srand(seed);
   printf("Enter limits a and b (a<b): \n");
   scanf("%lf %lf",&a,&b);
   
   /*  Generate and print ten random numbers.  */
   printf("Random Numbers: \n");
   for (k=1; k<=10; k++)
      printf("%f ",rand_float(a,b));
   printf("\n");
   
   /*  Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/
/*  This function generates a random double                   */
/*  between specified limits a and b (a<b).                   */

double rand_float(double a,double b)
{
   return ((double)rand()/RAND_MAX)*(b-a) + a;
}
/*------------------------------------------------------------*/

