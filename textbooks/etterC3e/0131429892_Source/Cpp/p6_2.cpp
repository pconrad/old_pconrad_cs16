// p6_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/*-------------------------------------------------------- ----*/
/*  Program chapter6_2                                         */
/*                                                             */
/*  This program demonstrates the relationship between         */
/*  variables and addresses.                                   */

#include <stdio.h>

int main(void)
{
   /*  Declare and initialize variables.  */
   int a, b;

   /*  Print the contents and addresses of a and b.  */
   printf("a = %d;  address of a = %u \n",a,&a);
   printf("b = %d;  address of b = %u \n",b,&b);

   /*  Exit program.  */
   return 0;
}
/*-------------------------------------------------------------*/
