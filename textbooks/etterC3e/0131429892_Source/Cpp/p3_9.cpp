// p3_9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/*------------------------------------------------------------*/
/*  Program chapter3_9                                        */
/*                                                            */
/*  This program computes a linear model for a set            */
/*  of altitude and ozone mixing ratio values.                */

#include <stdio.h>
#define FILENAME "zone1.txt"

int main(void)
{
   /*  Declare and initialize variables.  */
   int count=0;
   double x, y, first, last, sumx=0, sumy=0, sumx2=0,
          sumxy=0, denominator, m, b;
   FILE *zone;

   /*  Open input file.  */
   zone = fopen(FILENAME,"r");
   if (zone == NULL)
      printf("Error opening input file.  \n");
   else
   {
      /*  While not at the end of the file,  */
      /*  read and accumulate information.   */
      while ((fscanf(zone,"%lf %lf",&x,&y)) == 2)
      {
         ++count;
         if (count == 1)
            first = x;
         sumx += x;
         sumy += y;
         sumx2 += x*x;
         sumxy += x*y;
      }
      last = x;  

      /*  Compute slope and y-intercept.  */
      denominator = sumx*sumx - count*sumx2;
      m = (sumx*sumy - count*sumxy)/denominator;
      b = (sumx*sumxy - sumx2*sumy)/denominator;

      /*  Print summary information.  */
      printf("Range of altitudes in km: \n");
      printf("%.2f to %.2f \n\n",first,last);
      printf("Linear model: \n");
      printf("ozone-mix-ratio = %.2f altitude + %.2f \n",
             m,b);

      /*  Close file.  */
      fclose(zone);
   }

   /*  Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/
