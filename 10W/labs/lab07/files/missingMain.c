// This is the main that was missing from initPointsWithTests.c
// during the 3pm lab on 02.18


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
