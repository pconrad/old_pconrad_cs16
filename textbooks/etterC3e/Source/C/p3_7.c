// p3_7.c : Defines the entry point for the console application.
//

#include "stdafx.h"
/*------------------------------------------------------------*/
/*  Program chapter3_7                                        */
/*                                                            */
/*  This program generates a summary report from              */
/*  a data file that does not have a header record            */
/*  or a trailer record.                                      */

#include <stdio.h>
#define FILENAME "sensor3.txt"

int main(void)
{
   /*  Declare and initialize variables.  */
   int num_data_pts=0;
   double time, motion, sum=0, max, min;
   FILE *sensor;

   /*  Open file.  */
   sensor = fopen(FILENAME,"r");
   if (sensor == NULL)
      printf("Error opening input file.  \n");
   else
   {
      /*  While not at the end of the file,  */
      /*  read and accumulate information.   */
      while ((fscanf(sensor,"%lf %lf",&time,&motion)) == 2)
      {
         num_data_pts++;

         /*  Initialize variables using first data point.  */
         if (num_data_pts == 1)
            max = min = motion;

         /*  Update summary data.  */
         sum += motion;
         if (motion > max)
            max = motion;
         if (motion < min)
            min = motion;
      }

      /*  Print summary information.  */
      printf("Number of sensor readings: %d \n",
             num_data_pts);
      printf("Average reading:           %.2f \n",
             sum/num_data_pts);
      printf("Maximum reading:           %.2f \n",max);
      printf("Minimum reading:           %.2f \n",min);

      /*  Close file.  */
      fclose(sensor);
   }

   /*  Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/


