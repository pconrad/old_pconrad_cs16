// p4_8.c : Defines the entry point for the console application.
//

#include "stdafx.h"

/*------------------------------------------------------------*/
/*  Program chapter4_8                                        */
/*                                                            */
/*  This program converts a temperature in                    */
/*  Fahrenheit to Centigrade.                                 */

#include <stdio.h>
#define degrees_C(x) (((x) - 32)*(5.0/9.0))

int main(void)
{
   /*  Declare variables.  */
   double temp;

   /*  Get temperature in Fahrenheit.  */
   printf("Enter temperature in degrees Fahrenheit: \n");
   scanf("%lf",&temp);
    
   /*  Convert and print temperature in Centigrade.  */
   printf("%f degrees Centigrade \n",degrees_C(temp));
             
   /*  Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/

