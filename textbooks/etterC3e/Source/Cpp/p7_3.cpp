// p7_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/*------------------------------------------------------------*/
/*  Program chapter7_3                                        */
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
   struct hurricane h1;
   FILE *storms;
   void print_hurricane(struct hurricane h);

   /*  Read and print information from the file.  */
   storms = fopen(FILENAME,"r");
   if (storms == NULL)
      printf("Error opening data file. \n");
   else
   {  
      while (fscanf(storms,"%s %d %d",h1.name,&h1.year,
            &h1.category) == 3)
         print_hurricane(h1);
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

