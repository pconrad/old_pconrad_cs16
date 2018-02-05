// p5_5a.c : Defines the entry point for the console application.
//

#include "stdafx.h"



/*--------------------------------------------------*/
/*  Program chapter5_5a                              */
/*                                                  */
/*  This program tests functions.  */

#include <stdio.h>

int main(void)
{
   /*  Declare and initialize variables.  */
   int k, count=0, n=7;
   int y[6]={5,3,12,8,1,9};
   int x[7]={-7,2,14,38,52,77,105};
   void sort(int x[], int npts);
   int search1(int x[], int npts, int value);
   int search2(int x[], int npts, int value);
   int search3(int x[], int npts, int value);

   /*  Print y before and after sort  */
   for (k=0; k<=n-1; k++)
      printf("%d ",x[k]);
   printf("\n");
   sort(x,7);
   for (k=0; k<=n-1; k++)
      printf("%d ",x[k]);
   printf("\n");

   printf("%d \n",search1(x,7,14));
   printf("%d \n",search1(x,7,105));
   printf("\n");
   printf("%d \n",search2(x,7,52));
   printf("%d \n",search2(x,7,77));
   printf("\n");
   printf("%d \n",search3(x,7,52));
   printf("%d \n",search3(x,7,77));


   /*  Exit program.  */
   return 0;
}
/*-------------------------------------------------------------*/
/*  This function sorts an array x with npts values into       */
/*  ascending order.                                           */

void sort(int x[],int npts)
{
   /*  Declare variables.  */
   int k, j, m;
   double hold;

   /*  Implement selection sort algorithm.  */
   for (k=0; k<=npts-2; k++)
   {
      /*  Exchange minimum with next array value.  */
      m = k;
      for (j=k+1; j<=npts-1; j++)
         if (x[j] < x[m])
            m = j;
      hold = x[m];
      x[m] = x[k];
      x[k] = hold;
   }

   /*  Void return.  */
   return;
}
/*-------------------------------------------------------------*/
/*  This function searches for a value in an unordered list.   */
/*  If it finds the value, it returns the index of the item    */
/*  in the list (0 for first position, 1 for second position,  */           
/*  and so on).  If it does not find the value, the function   */
/*  returns the value -1.                                      */

int search1(int x[], int npts, int value)
{
   /*  Declare variables.  */
   int k=0, index=-1;

   /*  Search for value.  */
   while (k<=npts-1 && x[k]!=value)
      k++;
   if (k != npts)
      index = k;

   /*  Return index.  */
   return index;
}
/*-------------------------------------------------------------*/
/*  This function searches for a value in an ordered           */
/*  (ascending) list.  If it finds the value, it returns       */
/*  the index of the item in the list (0 for first position,   */
/*  1 for second position, and so on).  If it does not find    */
/*  the value, the function returns the value -1.              */

int search2(int x[], int npts, int value)
{
   /*  Declare variables.  */
   int k=0, index=-1;

   /*  Search for value.  */
   while (k<=npts-1 && x[k]<value)
      k++;  
   if (k <= npts-1)
      if (x[k] == value)
         index = k;

   /*  Return index value.  */
   return index;
}
/*-------------------------------------------------------------*
/*  This function searches for a value in an ordered           */
/*  (ascending) list using a binary search algorithm.  If it   */
/*  finds the value, the function returns the index of the     */
/*  item in the list (0 for first position, 1 for second       */
/*  position, and so on).  If it does not find the value,      */
/*  the function returns the value -1.                         */

int search3(int x[], int npts, int value)
{
   /*  Declare variables.  */
   int done=0, top=0, bottom, mid;
   int index=-1;

   /*  Search for value.  */
   bottom = npts-1;
   while (top<=bottom && done==0)
   {
      /*  Determine middle.  */
      mid = (top + bottom)/2;

      /*  Check value in middle.  */
      if (x[mid] == value)
         done = 1;
      else
         /*  Is value in top or bottom half?  */
         if (x[mid] > value)
            bottom = mid - 1;
         else
            top = mid + 1;
   }
         
   /*  Return index value.  */
   if (done == 1)
      index = mid;
   
   /*  Return index value.  */
   return index;
}
/*-------------------------------------------------------------*/


