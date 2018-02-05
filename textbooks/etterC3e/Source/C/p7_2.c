// p7_2.c : Defines the entry point for the console application.
//

#include "stdafx.h"


/*------------------------------------------------------------*/
/*  Program chapter7_2                                        */
/*                                                            */
/*  This program reads hurricane information from a data      */
/*  file and then prints the names of category 5 hurricanes.  */

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
      printf("Category 5 Hurricanes: \n");
      while (fscanf(storms,"%s %d %d",h1.name,&h1.year,
            &h1.category) == 3)
         if (h1.category == 5)
             printf("%s \n",h1.name);
      fclose(storms);
   }
   
   /*  Exit program.  */
   return 0;
}
/*-------------------------------------------------------------*/

