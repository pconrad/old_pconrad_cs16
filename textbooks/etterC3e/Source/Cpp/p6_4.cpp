// p6_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/*-------------------------------------------------------------*/
/*  Program chapter6_4                                         */
/*                                                             */
/*  This program reads a data file of ENSO index values and    */
/*  determines the maximum El Nino condition in the file.      */

#include <stdio.h>
#define FILENAME "ENSO1.txt"
#define MAX_SIZE 1000

int main(void)
{
   /*  Declare variables and function prototypes.  */
   int k=0, year[MAX_SIZE], qtr[MAX_SIZE], max_k=0;
   double index[MAX_SIZE];
   FILE *enso;

   /*  Read sensor data file.  */
   enso = fopen(FILENAME,"r");
   if (enso == NULL)
      printf("Error opening input file. \n");
   else
   {
      while(fscanf(enso,"%d %d %lf",
                   year+k,qtr+k,index+k)==3)
      {
         if (*(index+k) > *(index+max_k))
            max_k = k;
         k++;
      }
    
      /*  Print data for maximum El Nino condition.  */
      printf("Maximum El Nino Conditions in Data File \n");
      printf("Year: %d, Quarter: %d \n",
             *(year+max_k),*(qtr+max_k));

      /*  Close file.  */
      fclose(enso);
   }
      
   /*  Exit program.  */
   return 0;
}
/*--------------------------------------------------------------*/

