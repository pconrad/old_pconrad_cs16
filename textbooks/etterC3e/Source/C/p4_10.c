// p4_10.c : Defines the entry point for the console application.
//

#include "stdafx.h"
/*------------------------------------------------------------*/
/*  Program chapter4_10                                       */
/*                                                            */
/*  This program compares a recursive function and a          */
/*  nonrecursive function for computing Fibonacci numbers.    */

#include <stdio.h>

int main(void)
{
   /*  Declare variables and function prototypes.  */
   int n;
   int fibonacci(int k);
   int fibonacci_r(int k);

   /*  Get user input.  */
   printf("Enter positive integer: \n");
   scanf("%i",&n);
    
   /*  Compute and print factorials.  */
   printf("Nonrecursive: Fibonacci number = %li \n",
           fibonacci(n));
   printf("Recursive:    Fibonacci number = %li \n",
           fibonacci_r(n));   

   /*  Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/
/*  This function computes the kth Fibonacci                  */
/*  number using a nonrecursive algorithm.                    */ 

int fibonacci(int k)
{
   /*  Declare variables.  */
   int term, prev1, prev2, n;
  
   /*  Compute kth Fibonacci number with a loop.  */
   term = 1;
   if (k > 1)
   {
      prev1 = prev2 = 1;
      for (n=2; n<=k; n++)
      {
         term = prev1 + prev2;
         prev2 = prev1;
         prev1 = term;
      }
   }
   
   /*  Return kth Fibonacci number.  */
   return term;
}
/*------------------------------------------------------------*/
/*  This function computes the kth Fibonacci                  */
/*  number using a recursive algorithm.                       */ 

int fibonacci_r(int k)
{
   /*  Declare variables.  */
   int term;
  
   /*  Compute kth Fibonacci number recursively until k=1.  */
   term = 1;
   if (k > 1)
      term = fibonacci_r(k-1) + fibonacci_r(k-2);
   
   /*  Return kth Fibonacci number.  */
   return term;
}
/*------------------------------------------------------------*/

