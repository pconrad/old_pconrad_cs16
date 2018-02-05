// p7_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/*------------------------------------------------------------*/
/*  Program chapter7_4                                        */
/*                                                            */
/*  This program reads the information for a hurricane        */
/*  from a data file and then prints it, using a function.    */

#include <stdio.h>
#define FILENAME "storms2.txt"

/*  Define structure to represent a hurricane.  */		
struct hurricane
{
   char name[10];
   int year, category;
};

int main(void)
{
   /*  Declare variables and function prototype.  */
   int max_category=0, k=0, npts;
   struct hurricane h[100];
   FILE *storms;
   void print_hurricane(struct hurricane h);

   /*  Read and print information from the file.  */
   storms = fopen(FILENAME,"r");
   if (storms == NULL)
      printf("Error opening data file. \n");
   else
   {  
      printf("Hurricanes with Maxiumum Category \n");
      while (fscanf(storms,"%s %d %d",h[k].name,&h[k].year,
            &h[k].category) == 3)
      {   
         if (h[k].category > max_category)
            max_category = h[k].category;
         k++;
      }
      npts = k;

      for (k=0; k<=npts-1; k++)
         if (h[k].category == max_category)
            print_hurricane(h[k]);
     
      fclose(storms);
   }
   
   /*  Exit program.  */
   return 0;
}
/*-------------------------------------------------------------*/
/*  This function prints the hurricane information.            */

void print_hurricane(struct hurricane h)
{
   printf("Hurricane: %s \n",h.name);
   printf("Year: %d, category: %d \n",h.year, h.category);

   return;
}
/*-------------------------------------------------------------*/

