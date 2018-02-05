// areaBoxWithTests.c   working with structs, test-driven development, 
// original tests and stubs by P. Conrad for CS16, Fall 2009, UCSB CS Dept.

// A struct is a way of defining a new data type.
// In C, we have int, double, char etc.
// We can also define a new data type by grouping several items together
//  and giving each part of the struct a name.
// The parts of a struct are called "members" of that struct

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


double areaOfBox(struct Box b)
{
  return -42.0;  /* stub---make sure all tests fail initially */
  // you can use b.width to access width, and b.height to access height
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

// Next we have our main program that runs the tests
int main()
{
  int failures = 0; // this counts the number of failures
  double tol = 0.0000001; // we expect a very accurate result

  struct Box r,s,t,u;

  r.ul.x = 0.0; r.ul.y=10.0; r.width = 3.0;  r.height=4.0;
  s.ul.x = 0.0; s.ul.y=10.0; s.width = 4.0;  s.height=3.0;
  t.ul.x = 0.0; t.ul.y=10.0; t.width = 2.5;  t.height=4.0;
  u.ul.x = 0.0; u.ul.y=10.0; u.width = 4.0;  u.height=15.0;

  failures += checkExpectDouble("1: areaOfBox(r)",areaOfBox(r),12.0,tol);
  failures += checkExpectDouble("2: areaOfBox(s)",areaOfBox(s),12.0,tol);
  failures += checkExpectDouble("3: areaOfBox(t)",areaOfBox(t),10.0,tol);
  failures += checkExpectDouble("4: areaOfBox(u)",areaOfBox(u),60.0,tol);

  // print a summary of what happened

  if (failures==0)
    printf("All tests passed!\n");
  else
    printf("%d tests failed\n",failures);

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}

