// initBoxWithTests.c   working with structs, test-driven development, 
// original tests and stubs by P. Conrad for CS16, Fall 2009, UCSB CS Dept.

// include the test-driven development functions
#include "tdd.h"

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

// In anticipation of doing some graphics programming,
// we are going to define a Box as a special case of a Rectangle.
// What is special about a Box is that its sides are parallel to 
// x and y axes.

struct Box {
  struct Point ul; // upper left corner
  double width;
  double height;
}; // Now we can declare data items of type "struct Box"

#include <stdio.h>
#include <math.h>  // needed for fabs (floating point absolute value)

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

// Determine whether two boxes are approximately equal

int boxesApproxEqual(struct Box b1, struct Box b2, double tol)
{
  // Two boxes are approximately equal if their upper left corners are
  //  approximately equal, and their corresponding widths and heights
  //  are equal.   You can return a boolean expresion such as:
  //    return (____) && (___) && (____)  where you just need to 
  //  fill in the blanks with the proper criteria.
  
  // Remember: to test whether double values a and b are approximately equal, you need:
  //   fabs(a - b) < tol
  // Don't use a==b since this doesn't take tolerance into account.
  // You'll need to use this technique for width and height
  
  return 0; // for a true/false function, no stub can "always" fail.

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
  //return; //@@@ for a void function, the stub is just a bare return that does nothing
}


// Now write a function to initialize a box.
// You'll need to initialize the upper left x and y,
// the width and the height.
// Note: there is a struct Point inside the struct Box.
// So here's a clue: For the x value, use (*b).ul.x or (b->ul).x 
//  The y value is similar.
// There is also a way to "reuse" initPoint, if you are feeling 
//  confident in your understanding of pointers and structs.

void initBox(struct Box *b, double ulx, double uly, double w, double h)
{
  return; // @@@ For a void function a "naked return" is a "do nothing" stub
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
		 
  failures += CHECK_EXPECT_DOUBLE(distanceBetween(p1,p2), 8.0623, tol);

  failures += CHECK_EXPECT_DOUBLE(distanceBetween(p2,p1), 8.0623, tol);

  // These three points should form a 3,4,5 triangle

  failures += CHECK_EXPECT_DOUBLE(distanceBetween(p3,p4), 3.0, tol);

  failures += CHECK_EXPECT_DOUBLE(distanceBetween(p4,p5), 4.0, tol);

  failures += CHECK_EXPECT_DOUBLE(distanceBetween(p5,p3), 5.0, tol);

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
  failures += ASSERT_TRUE(pointsApproxEqual(p1,p1,tol));

  // p1 and p2 should not be equal: note the ! meaning "not"
  failures += ASSERT_TRUE(!pointsApproxEqual(p1,p2,tol));

  failures += ASSERT_TRUE(!pointsApproxEqual(p2,p1,tol));

  return failures;
}


int testBoxesApproxEqual()
{
  int failures = 0; // this counts the number of failures
  const double tol = 0.001;  // our "expected" answer is an approximation

  // declare seven boxes
  struct Box b0,b1,b2,b3,b4,b5,b6;

  // b0 is our baseline box
  b0.ul.x = 9.8;  b0.ul.y = 7.6;
  b0.width = 5.4;  b0.height = 3.2;

  // b1, b2, b3, and b4 all differ in only one respect from b0

  b1.ul.x = 50.0;  b1.ul.y = 7.6;
  b1.width = 5.4;  b1.height = 3.2;

  b2.ul.x = 9.8;  b2.ul.y = 100.0;
  b2.width = 5.4;  b2.height = 3.2;

  b3.ul.x = 9.8;  b3.ul.y = 7.6;
  b3.width = 200.0;  b3.height = 3.2;

  b4.ul.x = 9.8;  b4.ul.y = 7.6;
  b4.width = 5.4;  b4.height = 400.0;

  // b5 and b6 are different boxes (i.e. different addresses in memory)
  // but their contents are the same.   We should return that they are approx. equal

  b5.ul.x = 1.2;  b5.ul.y = 3.4;
  b5.width = 5.6;  b5.height = 7.8;

  b6.ul.x = 1.2;  b6.ul.y = 3.4;
  b6.width = 5.6;  b6.height = 7.8;

  // Make sure that b0 is equal to itself

  failures += ASSERT_TRUE(boxesApproxEqual(b0,b0,tol));

  // Now, check that b1 is not equal to b0, both ways:

  failures += ASSERT_TRUE(!boxesApproxEqual(b1,b0,tol));
  failures += ASSERT_TRUE(!boxesApproxEqual(b1,b0,tol));
  
  // Check all the others (one way is probaby enough)

  failures += ASSERT_TRUE(!boxesApproxEqual(b2,b0,tol));
  failures += ASSERT_TRUE(!boxesApproxEqual(b3,b0,tol));
  failures += ASSERT_TRUE(!boxesApproxEqual(b4,b0,tol));
  
  // Now check that b5 and b6 are equal in both directions

  failures += ASSERT_TRUE(boxesApproxEqual(b5,b6,tol));
  failures += ASSERT_TRUE(boxesApproxEqual(b6,b5,tol));

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
  failures += ASSERT_TRUE(pointsApproxEqual(p1,p1Expected,tol));

  initPoint(&p2,-1.2,-3.4); p2Expected.x = -1.2;   p2Expected.y = -3.4; 
  failures += ASSERT_TRUE(pointsApproxEqual(p2,p2Expected,tol));

  initPoint(&p3,0.0,0.0);   p3Expected.x = 0.0;    p3Expected.y = 0.0; 
  failures += ASSERT_TRUE(pointsApproxEqual(p3,p3Expected,tol));

  initPoint(&p4,0.5,-0.6);  p4Expected.x = 0.5;    p4Expected.y = -0.6; 
  failures += ASSERT_TRUE(pointsApproxEqual(p4,p4Expected,tol));

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}

// testInitBox() returns the number of failed tests
// it can be called in our main()

int testInitBox()
{
  int failures = 0; // this counts the number of failures
  const double tol = 0.0000001; // we expect a very accurate result

  struct Box b1,b2;
  struct Box b1Expected,b2Expected;

  initBox(&b1,1.2,3.4,5.6,7.8); 
  b1Expected.ul.x = 1.2;  b1Expected.ul.y = 3.4;
  b1Expected.width = 5.6;  b1Expected.height = 7.8;
  failures += ASSERT_TRUE(boxesApproxEqual(b1,b1Expected,tol));

  initBox(&b2, 9.8, 7.6, 5.4, 3.2); 
  b2Expected.ul.x = 9.8;  b2Expected.ul.y = 7.6;
  b2Expected.width = 5.4;  b2Expected.height = 3.2;
  failures += ASSERT_TRUE(boxesApproxEqual(b2,b2Expected,tol));

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
  failures += testBoxesApproxEqual();

  // Then check our initPoint routine and initBox routines:

  failures += testInitPoint();
  failures += testInitBox();
 
  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return tddFinish(failures);
}

