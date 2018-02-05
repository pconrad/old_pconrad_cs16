// p5_5.c : Defines the entry point for the console application.
//

#include "stdafx.h"




/*-------------------------------------------------------------*/
/*  Program chapter5_5                                         */
/*                                                             */
/*  This program computes a set of statistical measurements    */
/*  from a speech signal.                                      */

#include <stdio.h>
#include <math.h>
#define MAXIMUM 2500
#define FILENAME "zero1.txt"

int main(void)
{
   /*  Declare variables and function prototypes.  */
   int k=0, npts;
   double speech[MAXIMUM];
   FILE *file_in;
   double ave_power(double x[],int npts);
   double ave_magn(double x[],int npts);
   int crossings(double x[],int npts);
   double max(double x[],int n);
   double min(double x[],int n);
   double mean(double x[],int n);
   double median(double x[],int n);
   double variance(double x[],int n);
   double std_dev(double x[],int n);


   /*  Read information from a data file.  */
   file_in = fopen(FILENAME,"r");
   if (file_in == NULL)
      printf("Error opening input file. \n");
   else
   {
      while ((fscanf(file_in,"%lf",&speech[k])) == 1)
         k++;
      npts = k;
   
      /*  Compute and print statistics.  */
      printf("Speech Statistics \n");
      printf("     mean: %f \n",mean(speech,npts));
      printf("     standard deviation: %f \n",
             std_dev(speech,npts));
      printf("     variance: %f \n",variance(speech,npts));
      printf("     average power: %f \n",
             ave_power(speech,npts));
      printf("     average magnitude: %f \n",
             ave_magn(speech,npts));
      printf("     zero crossings: %d \n",
             crossings(speech,npts));

      /*  Close file and exit program.  */
      fclose(file_in);
   
   }
   /*  Exit program.  */
   return 0;
}
/*-------------------------------------------------------------*/
/*  This function returns the average power of an array x      */
/*  with npts elements.                                        */

double ave_power(double x[],int npts)
{
   /*  Declare and initialize variables.  */
   int k;
   double sum=0;

   /*  Determine average power.  */
   for (k=0; k<=npts-1; k++)
      sum += x[k]*x[k];

   /*  Return average power.  */
   return sum/npts;
}
/*-------------------------------------------------------------*/
/*  This function returns the average magnitude of an array x  */
/*  with npts elements.                                        */

double ave_magn(double x[],int npts)
{
   /*  Declare and initialize variables.  */
   int k;
   double sum=0;

   /*  Determine average power.  */
   for (k=0; k<=npts-1; k++)
      sum += fabs(x[k]);

   /*  Return average magnitude.  */
   return sum/npts;
}
/*-------------------------------------------------------------*/
/*  This function returns a count of the number of zero        */
/*  crossings in an array x with npts values.                  */

int crossings(double x[],int npts)
{
   /*  Declare and initialize variables.  */
   int count=0, k;

   /*  Determine number of zero crossings.  */
   for (k=0; k<=npts-2; k++)
      if (x[k]*x[k+1] < 0)
         count++;

   /*  Return number of zero crossings.  */
   return count;
}
/*-------------------------------------------------------------*/
/*-------------------------------------------------------------*/
/*  This function returns the maximum value in an array x      */
/*  with npts elements.                                        */

double max(double x[],int npts)
{
   /*  Declare variables.  */
   int k;
   double max_x;

   /*  Determine maximum value in the array.  */
   max_x = x[0];
   for (k=1; k<=npts-1; k++)
      if (x[k] > max_x)
         max_x = x[k];

   /*  Return maximum value.  */
   return max_x;
}
/*-------------------------------------------------------------*/
/*  This function returns the minimum value in an array x      */
/*  with npts elements.                                        */

double min(double x[],int npts)
{
   /*  Declare variables.  */
   int k;
   double min_x;

   /*  Determine minimum value in the array.  */
   min_x = x[0];
   for (k=1; k<=npts-1; k++)
      if (x[k] < min_x)
         min_x = x[k];

   /*  Return minimum value.  */
   return min_x;
}
/*-------------------------------------------------------------*/
/*  This function returns the average or mean value of an      */
/*  array x with n elements.                                   */

double mean(double x[],int npts)
{
   /*  Declare and initialize variables.  */
   int k;
   double sum=0;

   /*  Determine mean value.  */
   for (k=0; k<=npts-1; k++)
      sum += x[k];

   /*  Return mean value.  */
   return sum/npts;
}
/*-------------------------------------------------------------*/
/*  This function returns the median value in the sorted       */
/*  array x with npts elements.                                */

double median(double x[],int npts)
{
   /*  Declare variables.  */
   int k;
   double median_x;

   /*  Determine median value.  */
   k = floor(npts/2);
   if (npts%2 != 0)
      median_x = x[k];
   else
      median_x = (x[k-1] + x[k])/2;

   /*  Return median value.  */
   return median_x;
}
/*-------------------------------------------------------------*/
/*  This function returns the variance of an array x           */
/*  with npts elements.                                        */

double variance(double x[],int npts)
{
   /*  Declare variables and function prototypes.  */
   int k;
   double sum=0, mu;
   double mean(double x[], int npts);

   /*  Determine variance.  */
   mu = mean(x,npts);
   for (k=0; k<=npts-1; k++)
      sum += (x[k] - mu)*(x[k] - mu);

   /*  Return variance.  */
   return sum/(npts-1);
}
/*-------------------------------------------------------------*/
/*  This function returns the standard deviation of an array x */
/*  with npts elements.                                        */

double std_dev(double x[],int npts)
{
   /*  Declare function prototypes.  */
   double variance(double x[], int npts);

   /*  Return standard deviation.  */
   return sqrt(variance(x,npts));
}
/*-------------------------------------------------------------*/




