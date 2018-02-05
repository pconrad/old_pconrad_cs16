// p6_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/*-------------------------------------------------------------*/
/*  Program chapter6_3                                         */
/*                                                             */
/*  This program demonstrates the relationship between         */
/*  variables, addresses, and pointers.                        */

#include <stdio.h>

int main(void)
{
   /*  Declare and initialize variables.  */
   int a=1, b=2, *ptr=&a;;

   /*  Print the variable and pointer contents.  */
   printf("a = %d;  address of a = %u \n",a,&a);
   printf("b = %d;  address of b = %u \n",b,&b);
   printf("ptr = %u;  address of ptr = %u \n",ptr,&ptr);
   printf("ptr points to the value %d \n",*ptr);

   /*  Exit program.  */
   return 0;
}
/*-------------------------------------------------------------*/
 

