// testMain.c    A main for testing our shape and drawing routines
// P. Conrad for CS16, lab08, Fall 2009, UCSB


#include "shapes.h"
#include "drawing.h"
#include "tdd.h"


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
  failures += assertTrue("testInitPoint p1", pointsApproxEqual(p1,p1Expected,tol));

  initPoint(&p2,-1.2,-3.4); p2Expected.x = -1.2;   p2Expected.y = -3.4; 
  failures += assertTrue("testInitPoint p2", pointsApproxEqual(p2,p2Expected,tol));

  initPoint(&p3,0.0,0.0);   p3Expected.x = 0.0;    p3Expected.y = 0.0; 
  failures += assertTrue("testInitPoint p3", pointsApproxEqual(p3,p3Expected,tol));

  initPoint(&p4,0.5,-0.6);  p4Expected.x = 0.5;    p4Expected.y = -0.6; 
  failures += assertTrue("testInitPoint p4", pointsApproxEqual(p4,p4Expected,tol));

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}

// testMakePoint() returns the number of failed tests
// it can be called in our main()

int testMakePoint()
{
  int failures = 0; // this counts the number of failures
  const double tol = 0.0000001; // we expect a very accurate result

  struct Point p1,p2,p3;

  initPoint(&p1,3.0,4.0);   
  failures += assertTrue("testMakePoint p1", pointsApproxEqual(makePoint(3.0,4.0),p1,tol));

  initPoint(&p2,-1.2,-3.4);   
  failures += assertTrue("testMakePoint p2", pointsApproxEqual(makePoint(-1.2,-3.4),p2,tol));

  initPoint(&p3,0.0,0.0);   
  failures += assertTrue("testMakePoint p3", pointsApproxEqual(makePoint(0.0,0.0),p3,tol));

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

  struct Box b1,b2,b3,b4;
  struct Box b1Expected,b2Expected,b3Expected,b4Expected;

  initBox(&b1,1.2,3.4,5.6,7.8); 
  b1Expected.ul.x = 1.2;  b1Expected.ul.y = 3.4;
  b1Expected.width = 5.6;  b1Expected.height = 7.8;
  failures += assertTrue("testInitBox b1", boxesApproxEqual(b1,b1Expected,tol));

  initBox(&b2, 9.8, 7.6, 5.4, 3.2); 
  b2Expected.ul.x = 9.8;  b2Expected.ul.y = 7.6;
  b2Expected.width = 5.4;  b2Expected.height = 3.2;
  failures += assertTrue("testInitBox b2", boxesApproxEqual(b2,b2Expected,tol));

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

  // Then check our initPoint routine and makePoint routines

  failures += testInitPoint();
  failures += testMakePoint();
  failures += testInitBox();
 
  // print a summary of what happened

  if (failures==0)
    printf("All tests passed!\n");
  else
    printf("%d tests failed\n",failures);

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}



