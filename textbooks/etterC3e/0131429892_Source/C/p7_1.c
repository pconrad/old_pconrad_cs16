// p7_1.c : Defines the entry point for the console application.
//

#include "stdafx.h"


/*------------------------------------------------------------*/
/*  Program chapter7_1                                        */
/*                                                            */
/*  This program reads the information for a hurricane        */
/*  from a data file and then prints it.                      */

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
   /*  Declare variables.  */
   struct hurricane h1;
   FILE *storms;

   /*  Read and print information from the file.  */
   storms = fopen(FILENAME,"r");
   if (storms == NULL)
      printf("Error opening data file. \n");
   else
   {
      while (fscanf(storms,"%s %d %d",h1.name,&h1.year,
             &h1.category) == 3)
      {
          printf("Hurricane: %s \n",h1.name);
          printf("Year: %d, Category: %d \n",h1.year,
                  h1.category);
      }
      fclose(storms);
   }
   
   /*  Exit program.  */
   return 0;
}
/*-------------------------------------------------------------*/
