// p5_2.c : Defines the entry point for the console application.
//

#include "stdafx.h"


/*-------------------------------------------------------------*/
/*  Program chapter5_2                                         */
/*                                                             */
/*  This program reads values from a data file and             */
/*  determines the maximum value with a function.              */

#include <stdio.h>
#define N 10
#define FILENAME "lab2.txt"

int main(void)
{
   /*  Declare variables and function prototype.  */
   int k=0, npts;
   double y[N];
   FILE *lab;
   double max(double x[],int n);

   /*  Open file, read data into an array.  */
   lab = fopen(FILENAME,"r");
   if (lab == NULL)
      printf("Error opening input file. \n");
   else
   {
      while ((fscanf(lab,"%lf",&y[k])) == 1)
         k++;
      npts = k;
   
      /*  Find and print the maximum value.  */
      printf("Maximum value: %f \n",max(y,npts));

      /*  Close file and exit program.  */
      fclose(lab);
   }

   /*  Exit program.  */
   return 0;
}
/*-------------------------------------------------------------*/
/*  This function returns the maximum value in an array x      */
/*  with n elements.                                           */

double max(double x[],int n)
{
   /*  Declare variables.  */
   int k;
   double max_x;

   /*  Determine maximum value in the array.  */
   max_x = x[0];
   for (k=1; k<=n-1; k++)
      if (x[k] > max_x)
         max_x = x[k];

   /*  Return maximum value.  */
   return max_x;
}
/*-------------------------------------------------------------*/
