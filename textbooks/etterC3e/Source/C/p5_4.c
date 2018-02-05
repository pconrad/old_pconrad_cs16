// p5_4.c : Defines the entry point for the console application.
//

#include "stdafx.h"


/*------------------------------------------------------------*/
/*  Program chapter5_4                                        */
/*                                                            */
/*  This program computes the molecular weight of an amino    */
/*  acid from its chemical formula.                           */

#include <stdio.h>
#include <ctype.h>
#define NEWLINE '\n'

int main(void)
{
   /*  Declare variables and function prototypes.  */
   int k=0, formula[20], n, current=0, done=0, d1, d2;
   double error=0, weight, total=0;
   double atomic_wt(int atom);

   /*  Read chemical formula from keyboard.  */
   printf("Enter chemical formula for amino acid: \n");
   while ((formula[k]=getchar()) != NEWLINE)
      k++;
   n = k;

   /*  Identify individual elements and add weights.  */
   while (current<=(n-1) && done==0)
   {
      if (isalpha(formula[current]))
      {
         formula[current] = toupper(formula[current]);
         weight = atomic_wt(formula[current]);
         if (weight == 0)
            done = 1;
         else
         {
            if (current < n-1)
			            d1 = isdigit(formula[current+1]);
            else
               d1 = 0;
			         if (d1 && current<(n-2))
               d2 = isdigit(formula[current+2]);
			         else
			            d2 = 0;
			         if (d1 && d2)
			         {
               weight *= ((formula[current+1]-'0')*10 + 
                          (formula[current+2]-'0'));
               current += 3;
            }
            else
               if (d1) 
               {
                  weight *= (formula[current+1]-'0');
                  current += 2;
               }
               else
                  current++;
         }
         total += weight;
      }
      else
         done = 1;
   }
          
   /*  Print formula and weight.  */
   printf("Formula: \n");
   for (k=0; k<=n-1; k++)  
      putchar(formula[k]);
   printf("\n");
   if (done == 0)
      printf("Molecular Weight: %f \n",total);
   else
      printf("Error in formula. \n");
           
   /*  Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/
/*  This function returns the molecular weight of an element  */
/*  in an amino acid.                                         */

double atomic_wt(int atom)
{
   /*  Declare and initialize variables.  */
   int k=0, element[5]={'H','C','N','O','S'};
   double m_wt[5]={1.00794,12.011,14.00674,15.9994,32.066}, weight;

   /*  Search for element.  */
   while (k<=4 && element[k]!=atom)
      k++;

   /*  Return corresponding atomic weight.  */
   if (k <= 4)
      weight = m_wt[k];
   else
      weight = 0;
   return weight;
}
/*------------------------------------------------------------*/
