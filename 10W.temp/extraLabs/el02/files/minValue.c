// minValue.c    minimum value in an array of doubles
// P. Conrad and D. Cattan for CS16, Fall 2009, UCSB CS Dept.

// find the smaller of two numbers
double smaller(double num1, double num2){
  return 4242.42; // stub @@@ FIX THIS LINE 
}

// find the largest number in an array of numbers (double)
double minValue(double *numbers, int n){
  return 2424.24; // stub @@@ FIX THIS LINE
}

// Next we have our main program that tests the smaller and findMin functions:
int testSmaller()
{
  int failures = 0; // this counts the number of failures
  double tol = 0.0000001; // we expect a very accurate result

  failures += checkExpectDouble("1: smaller(0.1, 0.2)",
				smaller(0.1, 0.2),0.1, tol);
  failures += checkExpectDouble("2: smaller(1.0, 10.0)",
				smaller(1.0, 10.0),1.0, tol);
  failures += checkExpectDouble("3: smaller(3.14, 3.0)",
				smaller(3.14, 3.0),3.0, tol);
  failures += checkExpectDouble("4: smaller(-12.0, -11.5)",
				smaller(-12.0, -11.5),-12.0, tol);

  // return number of failures ( 0 failures indicates success!)
  return failures;
}

int testMinValue()
{
  int failures = 0;
  double tol = 0.0000001; // we expect a very accurate result

  // create the arrays to use for testing

  double a[] = {0.01};
  double b[] = {0.01, 1.01, 0.002};
  double c[] = {-12.3, -1.31, 0, 12.0};
  double d[] = {1.1, 1.01, 1.001, 1.0001};

  failures += checkExpectDouble("minValue(a, 1)", minValue(a, 1), 0.01, tol);
  failures += checkExpectDouble("minValue(b, 3)", minValue(b, 3), 0.002, tol);
  failures += checkExpectDouble("minValue(c, 4)", minValue(c, 4), -12.3, tol);
  failures += checkExpectDouble("minValue(d, 4)", minValue(d, 4), 1.0001,tol); 

  // return number of failures ( zero failures indicates success)
  return failures;
}

