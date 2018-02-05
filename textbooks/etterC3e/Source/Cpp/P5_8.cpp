// P5_8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/*-------------------------------------------------------------*/
/*  Program chapter5_8                                         */
/*                                                             */
/*  This program uses Gauss elimination to determine the       */
/*  mesh currents for a circuit.                               */

#include <stdio.h>
#define N 3  /*  number of unknown currents  */

int main(void)
{
   /*  Declare variables and function prototypes.  */
   int index;
   double r1, r2, r3, r4, r5, v1, v2, a[N][N+1], soln[N];
   void eliminate(double a[N][N+1], int n, int index);
   void back_substitute(double a[N][N+1], int n,
                        double soln[N]);                  

   /*  Get user input.  */
   printf("Enter resistor values in ohms: \n");
   printf("(R1, R2, R3, R4, R5) \n");
   scanf("%lf %lf %lf %lf %lf",&r1,&r2,&r3,&r4,&r5);
   printf("Enter voltage values in volts: \n");
   printf("(V1, V2) \n");
   scanf("%lf %lf",&v1,&v2);

   /*  Specify equation coefficients.  */
   a[0][0] = r1 + r2;
   a[0][1] = a[1][0] = -r2;
   a[0][2] = a[2][0] = a[1][3] = 0;
   a[1][1] = r2 + r3 + r4;
   a[1][2] = a[2][1] = -r4;
   a[2][2] = r4 + r5;
   a[0][3] = v1;
   a[2][3] = -v2;

   /*  Perform elimination step.  */
   for (index=0; index<=N-2; index++)
      eliminate(a,N,index);

   /*  Perform back substitution step.  */
   back_substitute(a,N,soln);

   /*  Print solution.  */
   printf("\n");
   printf("Solution: \n");
   for (index=0; index<=N-1; index++)
      printf("Mesh Current %d: %f \n",index+1,soln[index]);

   /*  Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/
/*  This function performs the elimination step.              */

void eliminate(double a[N][N+1], int n, int index)
{
   /*  Declare variables.  */
   int row, col;
   double scale_factor;

   /*  Eliminate variable from equations.  */
   for (row=index+1; row<=n-1; row++)
   {
      scale_factor = -a[row][index]/a[index][index];
      a[row][index] = 0;
      for (col=index+1; col<=n; col++)
         a[row][col] += a[index][col]*scale_factor;
   }

   /*  Void return.  */
   return;
}
/*-------------------------------------------------------------*/
/*  This function performs the back substitution.              */

void back_substitute(double a[N][N+1], int n, 
                       double soln[N])
{
   /*  Declare variables. */
   int row, col;

   /*  Perform back substitution in each equation.  */
   soln[n-1] = a[n-1][n]/a[n-1][n-1];
   for (row=n-2; row>=0; row--)
   {
      for (col=n-1; col>=row+1; col--)
         a[row][n] -= soln[col]*a[row][col];
      soln[row] = a[row][n]/a[row][row];
   }

   /*  Void return.  */
   return;
}
/*-------------------------------------------------------------*/
