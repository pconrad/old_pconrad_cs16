// p8_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


//---------------------------------------------------------------
//  Program chapter8_5                                         
//                                                             
//  This program reads wind direction information from a data         
//  file and then determines direction with the most points.  
//  The percentage of points with maximum direction is computed         
//  and printed.                         

#include <iostream.h>
#include <fstream.h>
#define FILENAME "winds1.txt"

int main(void)
{
   /*  Declare variables.  */
   int r, c, k, maxk=0;
   int grid[5][5], category[8]={0,0,0,0,0,0,0,0};
   double perc;
   char* direction[8]={"N  ","NE ","E  ","SE ","S  ","SW ","W  ","NW "};
   ifstream winds;

   /*  Read and print information from the file.  */
   winds.open(FILENAME);
   if (winds.fail())
      cout << "Error opening input file." << endl;
   else
   {
      for (r=0; r<=4; r++)
         winds >> grid[r][0] >> grid[r][1] >> grid[r][2]
               >> grid[r][3] >> grid[r][4];

      //  Determine sums for the direction categories.
      for (r=0; r<=4; r++)
         for (c=0; c<=4; c++)
         {
            k = grid[r][c];
            category[k]++;
         }

      //  Determine category with maximum sum.
      for (k=0; k<=7; k++)
         if (category[k] > category[maxk])
            maxk = k;
      
      //  Print report.
      cout.setf(ios::fixed);
      cout.precision(1);
      perc = (double)category[maxk]/25*100;
      cout << "The wind is blowing from the " << direction[maxk-1] 
           << perc << "% of the time." << endl;

      //  Close file.
      winds.close();

   }

   //  Exit program.
   return 0;
}
//---------------------------------------------------------------

