// initPointWithTests.c   working with structs, test-driven development, 
// original tests and stubs by P. Conrad for CS16, Fall 2009, UCSB CS Dept.

// This program illustrates how to work with a pointer to a struct
// If we want a function to _change_ the value of a struct as a side-effect,
//  we have to pass in the address of that struct in the function call.
// In the function definition, this address is treated as a pointer to the struct.
// We have to dereference the pointer to work with the struct.

struct Point {
  double x;
  double y;
}; // Now we can declare data items of type "struct Point".

// Don't forget the closing semicolon on your struct definitions.

#include <stdio.h>
#include <math.h>  // needed for fabs (floating point absolute value) and sqrt

// Compute distance between two points

double distanceBetween(struct Point p, struct Point q)
{
  return -42.3; // @@@ STUB
  // return  sqrt( pow((q.y - p.y ),2.0) + pow((q.x - p.x ),2.0) ); // distance formula
}

// Determine whether two points are approximately equal

int pointsApproxEqual(struct Point p, struct Point q, double tol)
{
  // Two points are approximately equal if the distance between them
  // is less or equal to our tolerance.  (If we want to test for 
  // exact equality, we can pass in a value of zero.)

  return 0; // for a true/false function, no stub can "always" fail.

  // return (distanceBetween(p,q) <= tol) ; // this will be true (1) or false (0)
}

// The function initPoint below illustrates passing a struct by pointer.
// Inside this function:
//  p   is the address of the struct Point
// (*p) refers to the struct Point itself (we dereference the pointer)
// (*p).x refers to the x member of the point
// (*p).y refers to the y member of the point
// p->x is a shortcut for (*p).x ( -> means deference AND THEN go inside the struct)
// p->y is a shortcut for (*p).y ( -> means deference AND THEN go inside the struct)


void initPoint(struct Point *p, double xVal, double yVal)
{
  return; //@@@ for a void function, the stub is just a bare return that does nothing
    
  //@@@  replace the stub with this line:
  // (*p).x = xVal;  (*p).y = yVal;

  //@@@ OR equivalently with this line:
  // p->x = xVal;  p->y = yVal;
}


// We see that when testing functions that return a double,
// we may need use use a "tolerance" value---some small degree of
// inaccuracy that we are willing to tolerate.   This is because
// floating point values are subject to round off errors.

int checkExpectDouble(char * label, // the label for this test, e.g. "1: ftoC(32.0)"
		      double check, // the function call we are checking
		      double expect, // what we expect to get
		      double tolerance) // how much error we can tolerate
{
  // With double values, we may have a round off error,
  // fabs conputes the absolute value o
  if (fabs(check-expect) > tolerance)
    {
      printf("Test %s failed: got %lf expected %lf (tolerance=%lf): \n",
      		      label, check, expect, tolerance);
      return 1;
    }
  else
    {
      printf("Test %s passed\n",label);
      return 0;
    }
}


// This program illustrates a new style of testing function.
// Instead of a "check" and "expect" value, where the test
//  passes if those are equal, we have an "assertion".
// We simply check whether the assertion is true.
// This is the style of testing used in the Java "JUnit" framework
//  that you may learn about in a future course (CS56).
// The advantage is that we don't need a separate "checkExpect" for each
//  new data type (int, double, char, char *, etc.)


int assertTrue(char * label, // the label for this test, e.g. "1: initPoint(&p,1.0,2.0)"
	       int  assertion) // a true/false statement we expect to be true (in C those return int)
{
  if ( assertion ) // assertion is either false (0) or true (1, or any other non-zero value)
    {
      printf("Test %s passed\n",label);
      return 0;
    }
  else
    {
      printf("Test %s failed\n",label);
      return 1;
    }
}

// testDistanceBetween() returns the number of failed tests
// it can be called in our main()

int testDistanceBetween()
{
  int failures = 0; // this counts the number of failures
  const double tol = 0.001;  // our "expected" answer is an approximation

  struct Point p1,p2,p3,p4,p5;

  p1.x = 6.0;  p1.y = 3.0;
  p2.x = 7.0;  p2.y = 11.0;
  p3.x = 0.0;  p3.y = 0.0;
  p4.x = 3.0;  p4.y = 0.0;
  p5.x = 3.0;  p5.y = 4.0;
		 
  failures += checkExpectDouble("distanceBetween(p1,p2)",
				distanceBetween(p1,p2), 8.0623, tol);

  failures += checkExpectDouble("distanceBetween(p2,p1)",
				distanceBetween(p2,p1), 8.0623, tol);

  // These three points should form a 3,4,5 triangle

  failures += checkExpectDouble("distanceBetween(p3,p4)",
				distanceBetween(p3,p4), 3.0, tol);

  failures += checkExpectDouble("distanceBetween(p4,p5)",
				distanceBetween(p4,p5), 4.0, tol);

  failures += checkExpectDouble("distanceBetween(p5,p3)",
				distanceBetween(p5,p3), 5.0, tol);

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}

int testPointsApproxEqual()
{
  int failures = 0; // this counts the number of failures
  const double tol = 0.001;  // our "expected" answer is an approximation

  struct Point p1,p2;

  p1.x = 6.0;  p1.y = 3.0;
  p2.x = 7.0;  p2.y = 11.0;

  // p1 should be equal to itself
  failures += assertTrue("pointsApproxEqual(p1,p1,tol)",
			 pointsApproxEqual(p1,p1,tol));

  // p1 and p2 should not be equal: note the ! meaning "not"
  failures += assertTrue("!pointsApproxEqual(p1,p2,tol)",
			 !pointsApproxEqual(p1,p2,tol));

  failures += assertTrue("!pointsApproxEqual(p2,p1,tol)",
			 !pointsApproxEqual(p2,p1,tol));

  return failures;
}

// testInitPoint() returns the number of failed tests
// it can be called in our main()

int testInitPoint()
{
  int failures = 0; // this counts the number of failures
  const double tol = 0.0000001; // we expect a very accurate result

  struct Point p1,p2,p3,p4;
  struct Point p1Expected,p2Expected,p3Expected,p4Expected;

  initPoint(&p1,3.0,4.0);   p1Expected.x = 3.0;    p1Expected.y = 4.0; 
  failures += assertTrue("p1", pointsApproxEqual(p1,p1Expected,tol));

  initPoint(&p2,-1.2,-3.4); p2Expected.x = -1.2;   p2Expected.y = -3.4; 
  failures += assertTrue("p2", pointsApproxEqual(p2,p2Expected,tol));

  initPoint(&p3,0.0,0.0);   p3Expected.x = 0.0;    p3Expected.y = 0.0; 
  failures += assertTrue("p3", pointsApproxEqual(p3,p3Expected,tol));

  initPoint(&p4,0.5,-0.6);  p4Expected.x = 0.5;    p4Expected.y = -0.6; 
  failures += assertTrue("p4", pointsApproxEqual(p4,p4Expected,tol));

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}


// Next we have our main program that runs the tests
int main()
{
  int failures = 0;

  // First, test our basic functions: distanceBetween and pointsApproxEqual
  
  failures += testDistanceBetween();
  failures += testPointsApproxEqual();

  // Then check our initPoint routine and initBox routines:

  failures += testInitPoint();
 
  // print a summary of what happened

  if (failures==0)
    printf("All tests passed!\n");
  else
    printf("%d tests failed\n",failures);

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}

