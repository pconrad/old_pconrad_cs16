// p5_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/*-------------------------------------------------------------*/
/*  Program chapter5_7                                         */
/*                                                             */
/*  This program determines the locations of peaks in an       */
/*  grid of elevation data.                                    */

#include <stdio.h>
#define N 25
#define FILENAME "grid1.txt."

int main(void)
{
   /*  Declare variables.  */
   int nrows, ncols, i, j;
   double elevation[N][N];
   FILE *grid;

   /*  Read information from a data file.  */
   grid = fopen(FILENAME,"r");
   if (grid == NULL)
      printf("Error opening input file\n");
   else
   {
      fscanf(grid,"%d %d",&nrows,&ncols);   
      for (i=0; i<=nrows-1; i++)
         for (j=0; j<=ncols-1; j++)
            fscanf(grid,"%lf",&elevation[i][j]);
   
      /*  Determine and print peak locations.  */
      printf("Top left point defined as row 0, column 0 \n");
      for (i=1; i<=nrows-2; i++)
         for (j=1; j<=ncols-2; j++)
            if ((elevation[i-1][j]<elevation[i][j]) &&
                (elevation[i+1][j]<elevation[i][j]) &&
                (elevation[i][j-1]<elevation[i][j]) &&
                (elevation[i][j+1]<elevation[i][j]))
               printf("Peak at row: %d column: %d \n",i,j);

      /*  Close file.  */
      fclose(grid);
   }
  
   /*  Exit program.  */
   return 0;
}
/*--------------------------------------------------*/

