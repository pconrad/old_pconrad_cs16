// p4_9.c : Defines the entry point for the console application.
//

#include "stdafx.h"
/*------------------------------------------------------------*/
/*  Program chapter4_9                                        */
/*                                                            */
/*  This program compares a recursive function and            */
/*  a nonrecursive function for computing factorials.         */

#include <stdio.h>

int main(void)
{
   /*  Declare variables and function prototypes.  */
   int n;
   long factorial(int k);
   long factorial_r(int k);

   /*  Get user input.  */
   printf("Enter positive integer: \n");
   scanf("%i",&n);
    
   /*  Compute and print factorials.  */
   printf("Nonrecursive: %i! = %li \n",n,factorial(n));
   printf("Recursive: %i! = %li \n",n,factorial_r(n));
             
   /*  Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/
/*  This function computes a factorial with a loop.           */

long factorial(int k)
{
   /*  Declare variables.  */
   int j;
   long term;
  
   /*  Compute factorial with multiplications.  */
   term = 1;
   for (j=2; j<=k; j++)
      term *=j;

   /*  Return factorial value.  */
   return term;
}
/*------------------------------------------------------------*/
/*  This function computes a factorial recursively.           */

long factorial_r(int k)
{
   /*  Use recursive reference until k=0.  */
   if (k == 0)
      return 1;
   else
      return k*factorial_r(k-1);
}
/*------------------------------------------------------------*/
