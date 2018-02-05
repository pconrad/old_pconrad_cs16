// p5_6.c : Defines the entry point for the console application.
//

#include "stdafx.h"


/*-------------------------------------------------------------*/
/*  Program chapter5_6                                         */
/*                                                             */
/*  This program computes power averages over ten weeks.       */

#include <stdio.h>
#define NROWS 8
#define NCOLS 7
#define FILENAME "power1.txt"

int main(void)
{
   /*  Declare variables.  */
   int i, j;
   int power[NROWS][NCOLS], col_sum;
   FILE *file_in;

   /*  Read information from a data file.  */
   file_in = fopen(FILENAME,"r");
   if (file_in == NULL)
      printf("Error opening input file. \n");
   else
   {
      for (i=0; i<=NROWS-1; i++)
         for (j=0; j<=NCOLS-1; j++)
            fscanf(file_in,"%d",&power[i][j]);
   
      /*  Compute and print daily averages.  */
      for (j=0; j<=NCOLS-1; j++)
      {
         col_sum = 0;
         for (i=0; i<=NROWS-1; i++)
            col_sum += power[i][j];
         printf("Day %d: Average = %.2f \n",
                j+1,(double)col_sum/NROWS);
      }

      /*  Close file.  */
      fclose(file_in);
   }

   /*  Exit program.  */
   return 0;
}
/*-------------------------------------------------------------*/
