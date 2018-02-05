// p6_9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*-------------------------------------------------------------*/
/*  Program chapter6_9                                         */
/*                                                             */
/*  This program tests the quicksort function.                 */

#include <stdio.h>

int main(void)
{
   /*  Declare and initialize variables.  */
   int x[8]={4,10,3,6,-1,0,2,5}, npts=8, k;
   void quicksort(int w[],int n);   
   int separate(int y[],int m);
   void switch2(int *a,int *b);

   /*  Sort and print the array.  */
   printf("Before: ");
   for (k=0; k<=7; k++)
      printf("%d ",x[k]);
   printf("\n");
   quicksort(x,npts);
   printf("After: ");
   for (k=0; k<=7; k++)
      printf("%d ",x[k]);
   printf("\n");

   /*  Exit program.  */
   return 0;
}
/*-------------------------------------------------------------*/
/*  This function implements a quicksort algorithm.            */

void quicksort(int w[],int n)
{
   /*  Declare variables and function prototypes.  */
   int break_pt;
   int separate(int y[],int m);
   void switch2(int *a,int *b);
   
   /*  If only two elements, order them correctly.  */
   if (n == 2)
   {
      if (w[0] > w[1])
         switch2(&w[0],&w[1]);
   }
   else
   /*  If more than two elements, separate into those  */
   /*  greater than and those less than a breakpoint.  */
      if (n > 2)
      {
         break_pt = separate(w,n);
         quicksort(w,break_pt);
         quicksort(&w[break_pt+1],n-break_pt-1);
      }
   
   /*  Void return.  */
   return;
}
/*-------------------------------------------------------------*/
/*  This function reorders the array such that y[0] is         */
/*  correctly positioned and the values less than it are       */
/*  to the right and the values greater are to the left.       */
   
int separate(int y[],int m)
{
   /*  Declare variables and function prototypes.  */
   int k1=1, k2=1, count=0, pivot;
   void switch2(int *a,int *b);

   /*  Separate values into two groups.  */
   pivot = y[0];
   while (k1<m && k2<m)
   {
      while ((k1<m) && (y[k1]>pivot))
         k1++;
      while ((k2<m) && (y[k2]<pivot))
         k2++;
      if ((k1<m) && (k2<m))
      {
         switch2(&y[k1],&y[k2]);
         count++;
      }
   }

   /*  Put pivot value in correct position.  */
   if (count > 0)
      switch2(&y[0],&y[count]);
   else
   {
      k1 = 0;
      while ((k1<m-1) && (y[k1]>y[k1+1]))
      {
         switch2(&y[k1],&y[k1+1]);
         k1++;
      }
      count = k1;
   }

   /*  Return count.  */
   return count;
}
/*-------------------------------------------------------------*/
/*  Correct function to switch values in two variables.        */

void switch2(int *a,int *b)
{
   /*  Declare variables.  */
   int hold;

   /*  Switch values in a and b.  */
   hold = *a;
   *a = *b;
   *b = hold;

   /*  Void return.  */
   return;
}
/*-------------------------------------------------------------*/

