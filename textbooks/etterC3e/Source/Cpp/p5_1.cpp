// p5_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/*-------------------------------------------------------------*/
/*  Program chapter5_1                                         */
/*                                                             */
/*  This program reads 100 values from a data file and         */
/*  determines the number of values greater than the average.  */

#include <stdio.h>
#define N 100
#define FILENAME "lab1.txt"

int main(void)
{
   /*  Declare and initialize variables.  */
   int k, count=0;
   double y[N], y_ave, sum=0;
   FILE *lab;

   /*  Open file, read data into an array,  */
   /*  and compute a sum of the values.     */
   lab = fopen(FILENAME,"r");
   if (lab == NULL)
      printf("Error opening input file. \n");
   else
   {
      /*  Input and process data.  */
      for (k=0; k<=N-1; k++)
      {
         fscanf(lab,"%lf",&y[k]);
         sum += y[k];
      }
   
      /*  Compute average and count values that  */
      /*  are greater than the average.          */
      y_ave = sum/N;
      for (k=0; k<=N-1; k++)
         if (y[k] > y_ave)
            count++;

      /*  Print count and close file.  */
      printf("%d values greater than the average \n",count);
      fclose(lab);
   }

   /*  Exit program.  */
   return 0;
}
/*-------------------------------------------------------------*/
   
