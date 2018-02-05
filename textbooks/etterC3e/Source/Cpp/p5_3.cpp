// p5_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/*-------------------------------------------------------------*/
/*  Program chapter5_3                                         */
/*                                                             */
/*  This program reads storm values from a data file           */
/*  and prints a hurricane report.                             */

#include <stdio.h>
#define N 500
#define FILENAME "storms1.txt"

int main(void)
{
   /*  Declare and initialize variables.  */
   int k=0, npts, id[N];
   double mph[N], max=0;
   FILE *storms;
   int category(double speed);

   /*  Open file, read data into an array,  */
   /*  and determine maximum wind speed.    */
   storms = fopen(FILENAME,"r");
   if (storms == NULL)
      printf("Error opening input file. \n");
   else
   {
      /*  Read data and determine maximum mph.  */
      while ((fscanf(storms,"%d %lf",&id[k],&mph[k])) == 2)
      {
         if (mph[k] > max)
            max = mph[k];
         k++;
      }
      npts = k;

      /*  Print hurricane report.  */
      if (max >= 74)
      {
         printf("Storms that Qualify as Hurricanes \n");
         printf("Identification   Peak Wind (mph)   Category \n");
      }  
      else
         printf("No hurricanes in the file \n");             
      for (k=0; k<=npts-1; k++)
         if (mph[k] >= 74)
            if (mph[k] == max)
               printf("%d*             %.0f               %d \n",
                      id[k],mph[k],category(mph[k]));
            else
               printf("%d              %.0f                %d \n",
                      id[k],mph[k],category(mph[k]));
   
         
      /*  Close file.  */
      fclose(storms);
   }

   /*  Exit program.  */
   return 0;
}
/*-------------------------------------------------------------*/
/*  This function determines the hurricane intensity           */
/*  category.                                                  */

int category(double speed)
{
   /*  Declare variables.  */
   int intensity=1;

   /*  Determine category.  */
   if (speed >= 96)
      intensity = 2;
   if (speed >= 111)
      intensity = 3;
   if (speed >= 131)
      intensity = 4;
   if (speed >= 155)
      intensity = 5;

   /*  Return intensity.  */
   return intensity;
}
/*-------------------------------------------------------------*/
