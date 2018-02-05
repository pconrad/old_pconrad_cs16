// p3_6.c : Defines the entry point for the console application.
//

#include "stdafx.h"
/*------------------------------------------------------------*/
/*  Program chapter3_6                                        */
/*                                                            */
/*  This program generates a summary report form              */
/*  a data file that has s trailer record with                */
/*  negative values.                                          */

#include <stdio.h>
#define FILENAME "sensor2.txt"

int main(void)
{
   /*  Declare and initialize variables.  */
   int num_data_pts=0;
   double time, motion, sum=0, max, min;
   FILE *sensor;

   /*  Open file and read the first data point.  */
   sensor = fopen(FILENAME,"r");
   if (sensor == NULL)
      printf("Error opening input file.  \n");
   else
   {
      fscanf(sensor,"%lf %lf",&time,&motion);

      /*  Initialize variables using first data point.  */
      max = min = motion;

      /*  Update summary data until trailer record read.  */
      do
      {
         sum += motion;
         if (motion > max)
            max = motion;
         if (motion < min)
            min = motion;
         num_data_pts++;
         fscanf(sensor,"%lf %lf",&time,&motion);
      } while (time >= 0);

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
