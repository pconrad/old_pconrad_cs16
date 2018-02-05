// p3_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*------------------------------------------------------------*/
/*  Program chapter3_5                                        */
/*                                                            */
/*  This program generates a summary report form              */
/*  a data file that has the number of data points            */
/*  in the first record.                                      */

#include <stdio.h>
#define FILENAME "sensor1.txt"

int main(void)
{
   /*  Declare and initialize variables.  */
   int num_data_pts, k;
   double time, motion, sum=0, max, min;
   FILE *sensor;

   /*  Open file and read the number of data points.  */
   sensor = fopen(FILENAME,"r");
   if (sensor == NULL)
      printf("Error opening input file.  \n");
   else
   {
      fscanf(sensor,"%d",&num_data_pts); 

      /*  Read data and compute summary information.  */
      for (k=1; k<=num_data_pts; k++)
      {
         fscanf(sensor,"%lf %lf",&time,&motion);
         if (k == 1)
            max = min = motion;
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

      /*  Close file and exit program.  */
      fclose(sensor);
   }

   /*  Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/


