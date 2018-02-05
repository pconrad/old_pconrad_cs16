// p6_8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/*-------------------------------------------------------------*/
/*  Program chapter6_8                                         */
/*                                                             */
/*  This program determines the maximum contiguous             */
/*  memory allocation that can be reserved during a            */
/*  specific program execution.                                */

#include <stdio.h>
#include <stdlib.h>
#define UNIT 1000000

int main(void)
{
   /*  Declare and initialize variables.  */
   int k=1, *ptr;

   /*  Find maximum amount of contiguous memory      */
   /*  available in units of millions of integers.  */
   ptr = (int *)malloc(UNIT*sizeof(int));
   while (ptr != NULL)
   {
      free(ptr);
      k++;
      ptr = (int *)malloc(k*UNIT*sizeof(int));
      printf("%d ",k);
   }

   /*  Print maximum amount of memory available.  */
   printf("Maximum contiguous memory available: \n");
   printf("%k integers \n",(k-1)*UNIT);
   
   /*  Exit program.  */
   return 0;
}
/*-------------------------------------------------------------*/
