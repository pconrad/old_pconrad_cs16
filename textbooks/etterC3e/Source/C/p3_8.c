// p3_8.c : Defines the entry point for the console application.
//

#include "stdafx.h"

/*------------------------------------------------------------*/
/*  Program chapter3_8                                        */
/*                                                            */
/*  This program uses determines the maximum height           */
/*  of a wave that is the sum of two specified waves.         */

#include <stdio.h>
#include <math.h>
#define PI 3.141593
#define FILENAME "waves1.txt"

int main(void)
{
   /*  Declare variables.  */
   int k;
   double A1, A2, freq1, freq2, height1, height2, length1, length2;
   double T1, T2, w1, w2, sum, new_period, new_height, time_incr, t;
   double maxwave=0;
   FILE *waves;

   /*  Open output file.  */
   waves = fopen(FILENAME,"w");

   /*  Get user input from the keyboard.  */
   printf("Enter integer wave period (s) and wave height (ft) \n");
   printf("for wave 1: \n");
   scanf("%lf %lf",&T1,&height1);
   printf("Enter integer wave period (s) and wave height (ft) \n");
   printf("for wave 2: \n");
   scanf("%lf %lf",&T2,&height2);

   /*  Determine and print wavelengths.  */
   length1 = 5.13*T1*T1;
   length2 = 5.13*T2*T2;
   printf("Wavelengths (in ft) are: %.2f %.2f \n",length1,length2);

   /*  Determine period of combined waves.  */
   new_period = T1*T2;

   /*  Compute 200 points of the combined waves over the  */
   /*  period specified, and find the maximum height.     */
   time_incr = new_period/200;
   A1 = height1/2;
   A2 = height2/2;
   freq1 = 1/T1;
   freq2 = 1/T2;
   for (k=0; k<=199; k++)
   {
      t = k*time_incr;
      w1 = A1*sin(2*PI*freq1*t);
      w2 = A2*sin(2*PI*freq2*t);
      sum = w1 + w2;
	  fprintf(waves,"%.4f %.4f %.4f %.4f \n",t,w1,w2,sum);
      if (sum > maxwave)
         maxwave = sum;
   }
   new_height = maxwave*2;

   /*  Print new wave maximum.   */
   printf("Maximum combined wave height is %.2f ft \n",new_height);
   
   /*   Close file and exit program.  */
   fclose(waves);
   return 0;
}
/*------------------------------------------------------------*/
