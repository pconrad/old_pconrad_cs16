// p6_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/*-------------------------------------------------------------*/
/*  Program chapter6_7                                         */
/*                                                             */
/*  This program counts and prints the number of times one     */
/*  one string appears within another string.                  */

#include <stdio.h>
#include <string.h>

int main(void)
{
   /*  Declare and initialize variables.  */
   int count=0;
   char strg1[]="abbcfgwdbibbw", strg2[]="bb";
   char *ptr1=strg1, *ptr2=strg2;

   /*  Count the number of occurrences of strg2 in strg1.   */
   /*  While the function strstr does not return NULL,      */
   /*  increment count and move ptr1 to next section        */
   /*  of strg1.                                            */
   while ((ptr1=strstr(ptr1,ptr2)) != NULL)
   {
      count++;
      ptr1++;
   }

   /*  Print the number of occurrences.  */
   printf("Count: %d \n",count);

   /*  Exit program.  */
   return 0;
}
/*-------------------------------------------------------------*/

