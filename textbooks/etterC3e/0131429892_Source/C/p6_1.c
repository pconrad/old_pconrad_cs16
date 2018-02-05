// p6_1.c : Defines the entry point for the console application.
//

#include "stdafx.h"


/*-------------------------------------------------------------*/
/*  Program chapter6_1                                         */
/*                                                             */
/*  This program demonstrates the relationship between         */
/*  variables and addresses.                                   */

#include <stdio.h>

int main(void)
{
   /*  Declare and initialize variables.  */
   int a=1, b=2;

   /*  Print the contents and addresses of a and b.  */
   printf("a = %d;  address of a = %u \n",a,&a);
   printf("b = %d;  address of b = %u \n",b,&b);

   /*  Exit program.  */
   return 0;
}
/*-------------------------------------------------------------*/

