// p4_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/*------------------------------------------------------------*/
/*  Program chapter4_3                                        */
/*                                                            */
/*  This program determines the distance between two points   */
/*  that are specified with latitude and longitude values     */
/*  that are in the Northern Hemisphere.                      */

#include <stdio.h>
#include <math.h>
#define PI 3.141593

int main(void)
{
   /*  Declare variables and function prototype.  */
   double lat1, long1, lat2, long2;
   double gc_distance(double lat1, double long1, 
                      double lat2, double long2);

   /*  Get locations of two points.  */
   printf("Enter latitude north and longitude west ");
   printf("for location 1: \n");
   scanf("%lf %lf",&lat1,&long1);
   printf("Enter latitude north and longitude west ");
   printf("for location 2: \n");
   scanf("%lf %lf",&lat2,&long2);

   /*  Print great circle distance.  */
   printf("Great Circle Distance: %.0f miles \n",
           gc_distance(lat1,long1,lat2,long2));
             
   /*  Exit program.  */
   return 0;
}
/*------------------------------------------------------------*/
/*  This function computes the distance between two           */     
/*  points using great circle distances.                      */                          

double gc_distance(double lat1, double long1, 
                   double lat2, double long2)
{
   /*  Declare variables.  */
   double rho, phi, theta, gamma, dot, dist1, dist2,
          x1, y1, z1, x2, y2, z2;

   /*  Convert latitude,longitude to rectangular coordinates.  */
   rho = 3960;
   phi = (90 - lat1)*(PI/180.0);
   theta = (360 - long1)*(PI/180.0);
   x1 = rho*sin(phi)*cos(theta);
   y1 = rho*sin(phi)*sin(theta);
   z1 = rho*cos(phi);
   phi = (90 - lat2)*(PI/180.0);
   theta = (360 - long2)*(PI/180.0);
   x2 = rho*sin(phi)*cos(theta);
   y2 = rho*sin(phi)*sin(theta);
   z2 = rho*cos(phi);

   /*  Compute angle between vectors.  */
   dot = x1*x2 + y1*y2 + z1*z2;
   dist1 = sqrt(x1*x1 + y1*y1 + z1*z1);
   dist2 = sqrt(x2*x2 + y2*y2 + z2*z2);
   gamma = acos(dot/(dist1*dist2));

   /*  Compute and return great circle distance.  */
   return gamma*rho;
}
/*------------------------------------------------------------*/

