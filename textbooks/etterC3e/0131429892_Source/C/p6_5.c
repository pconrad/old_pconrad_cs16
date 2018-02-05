// p6_5.c : Defines the entry point for the console application.
//

#include "stdafx.h"


/*-------------------------------------------------------------*/
/*  Program chapter6_5                                         */
/*                                                             */
/*  This program reads a seismic data file and then            */
/*  determines the times of possible seismic events.           */

#include <stdio.h>
#define FILENAME "seismic1.txt"
#define MAX_SIZE 1000
#define THRESHOLD 1.5

int main(void)
{
   /*  Declare variables and function prototypes.  */
   int k, npts, short_window, long_window;
   double sensor[MAX_SIZE], time_incr, short_power,
          long_power, ratio;
   FILE *file_ptr;
   double power_w(double *ptr,int n);

   /*  Read sensor data file.  */
   file_ptr = fopen(FILENAME,"r");
   if (file_ptr == NULL)
      printf("Error opening input file. \n");
   else
   {
      fscanf(file_ptr,"%d %lf",&npts,&time_incr);
      if (npts > MAX_SIZE)
         printf("Data file too large for array. \n");
      else
      {
         /*  Read data into an array.  */
         for (k=0; k<=npts-1; k++)
            fscanf(file_ptr,"%lf",&sensor[k]);
    
         /*  Read window sizes from the keyboard.  */
         printf("Enter number of points for short window: \n");
         scanf("%d",&short_window);
         printf("Enter number of points for long window: \n");
         scanf("%d",&long_window);

         /*  Compute power ratios and search for events.  */
         for (k=long_window-1; k<=npts-1; k++)
         {
            short_power = power_w(&sensor[k],short_window);
            long_power = power_w(&sensor[k],long_window);
            ratio = short_power/long_power;
            if (ratio > THRESHOLD)
               printf("Possible event at %f seconds \n",
                      time_incr*k);
         }

         /*  Close file.  */
         fclose(file_ptr);
      }  
   }

   /*  Exit program.  */
   return 0;
}
/*-------------------------------------------------------------*/
/*  This function computes the average power in a specified    */
/*  window of a double array.                                  */

double power_w(double *ptr, int n)
{
   /*  Declare and initialize variables.  */
   int k;
   double xsquare=0;
 
   /*  Compute sum of values squared in the array x. */
   for (k=0; k<=n-1; k++)
      xsquare += *(ptr-k)*(*(ptr-k));

   /*  Return the average squared value.  */
   return xsquare/n;
}
/*-------------------------------------------------------------*/
