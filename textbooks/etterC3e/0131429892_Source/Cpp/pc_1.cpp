// pc_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/*-------------------------------------------------------------*/
/*  Program chapterc_1                                         */
/*                                                             */
/*  This program generates a data file of values from a        */
/*  damped sine function.                                      */

#include <stdio.h>
#include <math.h>
#define PI 3.141593
#define FILENAME "dsine.txt"

int main(void)
{
   /*  Declare variables.  */
   int k;
   double t, f;
   FILE *data_out;

   /*  Generate data file.  */
   data_out = fopen(FILENAME,"w");
   for (k=1; k<=100; k++)
   {
      t = 0.1*(k-1);
      f = exp(-t)*sin(2*PI*t);
      fprintf(data_out,"%.1f %.3f \n",t,f);
   }
   
   /*   Close data file and exit program.  */
   fclose(data_out);
   return 0;
}
/*-------------------------------------------------------------*/


