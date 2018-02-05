// p8_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


//---------------------------------------------------------------
//  Program chapter8_4
//                                                             
//  This program reads values from a data file and determines            
//  the maximum value with a function.              

#include <iostream.h>
#include <fstream.h>
#define FILENAME "lab2.txt"

int main(void)
{
   //  Declare variables and function prototype.  
   const int N=100;
   int k=0, npts=N;
   double y[N];
   double max(double x[], int n);
   ifstream lab;
   lab.open(FILENAME);

   //  Open file, read data into an array.  
   if (lab.fail())
      cout << "Error opening input file." << endl;
   else
   {
      while (!lab.eof())
      {
         lab >> y[k];
         k++;
      }
      npts = k;
   
      //  Find and print the maximum value.  
      cout << "Maximum value: " << max(y,npts) << endl;

      //  Close file.
      lab.close();
   }

   //  Exit program.  
   return 0;
}
//---------------------------------------------------------------
//  This function returns the maximum value in an array x      
//  with n elements.                                           

double max(double x[],int n)
{
   //  Declare variables.  
   int k;
   double max_x;

   //  Determine maximum value in the array.  
   max_x = x[0];
   for (k=1; k<=n-1; k++)
      if (x[k] > max_x)
         max_x = x[k];

   //  Return maximum value.  
   return max_x;
}
//---------------------------------------------------------------

