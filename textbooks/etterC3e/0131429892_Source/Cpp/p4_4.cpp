// p4_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*------------------------------------------------------------*/
/*  Program chapter4_4                                        */
/*                                                            */
/*  This program generates and prints ten                     */
/*  random integers between 1 and RAND_MAX.                   */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   /*  Declare variables.  */
   unsigned int seed;
   int k;

   /*  Get seed value from the user.  */
   printf("Enter a positive integer seed value: \n");
   scanf("%u",&seed);
   srand(seed);
   
   /*  Generate and print ten random numbers.  */
   printf("Random Numbers: \n");
   for (k=1; k<=10; k++)
      printf("%i ",rand());
   printf("\n");
   
   /*  Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/
