// structDemo.c  P. Conrad for CS16, Fall 2009
// A demonstration of using a struct

// A struct can be used to group related data items together
// Not all of the items have to be of the same type.
#include <math.h>
#include <stdio.h>

// a point in the cartesian plane
struct Point {
  double x;
  double y;
};

// A rectangle
struct Rectangle {
  struct Point ul; // upper left corner
  double width;
  double height;
};

struct Triangle {
  struct Point p1;
  struct Point p2;
  struct Point p3;
};

double distanceBetween(struct Point p, struct Point q);

int main()
{
  struct Point p,q;
  p.x = 6.0;  p.y = 3.0;
  q.x = 7.0;  q.y = 11.0;
  
  {
    // New set of braces allows me to declare more variables

    double distance;
    double expectedDistance = 8.0623;
    const double TOL = 0.001;

    distance=distanceBetween(p,q); // function call
    
    if (  fabs(distance - expectedDistance)  <  TOL  )
      {						
	printf("test passed\n");
      }
    else
      {
	printf("test failed\n");
      }

  }

  return 0;
}

double distanceBetween(struct Point p, struct Point q)
{
  //return -42.3;
  return  sqrt( pow((q.y - p.y ),2.0) + pow((q.x - p.x ),2.0)     );
}
