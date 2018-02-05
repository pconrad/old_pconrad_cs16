// p6_6.c : Defines the entry point for the console application.
//

#include "stdafx.h"


/*-------------------------------------------------------------*/
/*  Program chapter6_6                                         */
/*                                                             */
/*  This program illustrates the use of string functions.      */

#include <stdio.h>
#include <string.h>

int main(void)
{
   /*  Declare and initialize variables.  */
   char strg1[]="Engineering Problem Solving: ";
   char strg2[]="Fundamental Concepts", strg3[50];

   /*  print the length of strings.  */;
   printf("String lengths: %d %d \n",
          strlen(strg1),strlen(strg2));

   /*  Combine two strings into one.  */
   strcpy(strg3,strg1);
   strcat(strg3,strg2);
   printf("strg3: %s \n",strg3);
   printf("strg3 length: %d \n",strlen(strg3));

   /*  Exit program.  */
   return 0;
}
/*-------------------------------------------------------------*/

