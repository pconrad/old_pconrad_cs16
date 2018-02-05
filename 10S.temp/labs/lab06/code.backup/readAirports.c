// readAirports.c   P. Conrad  for CS16, Fall 2009
// Example program to read airports into array of structs

#include <stdio.h> // for printf()
#include <stdlib.h> // for exit(), perror()
#include <string.h> // for strncpy(), and strcmp()
#include <math.h> // for fabs()


#include "airport.h" // defines struct Airport
#include "tdd.h" // prototypes for Test Driven Development

#define MAX_NUM_AIRPORTS 2000


void initAirportFromString(struct Airport *a, char *s)
{

  //@@@ A stub for a void function can simply be to
  //@@@ return without doing anything.

  return; // @@@ TODO REMOVE THIS STUB

  // The strtok function can be called repeatedly to 
  // divide up a string and store its parts into a struct
  // After the first call, you pass in NULL to mean 
  //  "continue using the same string"
  // We'll go over the details in lecture,
  //  including how strtok and strncpy work...

  strncpy(a->code, strtok(s,","), 4); // code  
  a->lat = atof( strtok(NULL,",") ); // latitude
  a->lon = atof( strtok(NULL,",") ); // longitude
  strncpy(a->city, strtok(NULL,","), AIRPORT_CITY_LEN ); // city
  strncpy(a->state, strtok(NULL,","), 3 ); // state

}

int approxEqual(double x, double y, double tol)
{
  return fabs(x-y)<tol;
}

// This is where we can put some tests to see if our
// initAirportFromString function is working

int runTests()
{

  int failures = 0;
  double tol = 0.00001;

  char testString1[] = "ABC,123.45,67.89,TestCity,CA";
  char testString2[] = "XYZ,98.765,43.21,AnotherTestCity,NV";

  struct Airport airport1,airport2;

  initAirportFromString(&airport1, testString1);

  failures += ASSERT_TRUE(strcmp("ABC",airport1.code)==0 );
  failures += ASSERT_TRUE(approxEqual(123.45,airport1.lat, tol) );
  failures += ASSERT_TRUE(approxEqual(67.89,airport1.lon,tol) );
  failures += ASSERT_TRUE(strcmp("TestCity",airport1.city)==0 );
  failures += ASSERT_TRUE(strcmp("CA",airport1.state)==0 );

  initAirportFromString(&airport2, testString2);

  //@@@ TODO: ADD TESTS FOR airport 2
  //@@@ You need five calls to ASSERT_TRUE, similar to the ones above.
  //@@@ Each of those should add its return value into the variable "failures"
  //@@@ and it should check one of the members of the airport2 struct to
  //@@@ see if it was initialized properly.

  // @@@ Add your five calls here and then remove this comment.


  // print a summary of what happened

  if (failures==0)
    printf("All tests passed!\n");
  else
    printf("%d tests failed\n",failures);

  // returns 0 if all test passed (i.e. success)
  // otherwise returns the number of failures

  return failures;
}

// Return the index of the airport from the array "airports" that has
// the smallest longitude.    The variabl airportCount indicates how many 
// elements there are in the array.

int indexOfAirportWithSmallestLongitude(struct Airport *airports, 
					int airportCount)
{
  int smallestSoFar = 0;
  int i;

  for (i=1; i<airportCount; i++)
    {
      if (airports[i].lon < airports[smallestSoFar].lon)
	smallestSoFar = i;
    }

  return smallestSoFar;
}


int main(int argc, char *argv[])
{
  FILE *inputFile; // a pointer to the file we are reading from
  const int MAXLINE = 1024; // maximum length we think a line might be
  char thisLine[MAXLINE]; // we'll read each line from the file into thisLine
  
  struct Airport airports[MAX_NUM_AIRPORTS];
  
  int airportCount = 0;
  
  // check to see if there is a command line argument
  // with the name of the airport file we are going to read

  if (argc!=2)
    {
      printf("Usage: %s airportDataFileName\n",argv[0]);
      exit(1); // defined in stdlib.h
    }

  if (strcmp(argv[1],"test")==0) // if argv[1] is equal to "test"
    {
      // in this case, don't read from a file called "test"
      // Instead, run our tests and return the number of failures
      // as the result of the program

      return runTests();
    }

  // try to open the input file

  inputFile = fopen(argv[1], "r");
  
  if (!inputFile)
    {
      perror("Could not open input file");
      exit(2); 
    }
  
  // Try to read past the header line.
  fgets(thisLine,MAXLINE,inputFile);

  // Test if we hit the end of the file, or experienced an error:

  if ( feof(inputFile) || ferror(inputFile))
    {
      printf("Unable to read first line in input file");
      exit(3);
    }

  // Now read the rest of the lines

  // start by trying to read the first line
  fgets(thisLine,MAXLINE,inputFile);
  while (!feof(inputFile) && !ferror(inputFile))
    {
      // If we get here, it means the most recent attempt to read succeeded!
      // So do something with thisLine

      
      initAirportFromString(&(airports[airportCount]), thisLine);
      airportCount++;
    
      // try to read another line
      fgets(thisLine,MAXLINE,inputFile);
    }

  // Now we've read all the airports into an array of structs!
  // Woo hoo!

  // So now, let's see if we can do some useful things.
  // Each of the sets of { } below gives us the chance to declare
  //  a local variable 

  {
    int indexOfEasternMost = 
      indexOfAirportWithSmallestLongitude(airports, airportCount);
    struct Airport a = airports[indexOfEasternMost];
    printf("The eastern most airport is: %s in %s,%s at longitude: %lf\n",
	   a.code, a.city, a.state, a.lon);
  }

  // @@@ TODO:  Add code that also prints out the name and longitude of the
  //    western most airport, and the northernmost and southernmost airport.


  {
    int indexOfWesternMost;
    // @@@ TODO.. fill this in...

  }

  {
    int indexOfNorthernMost;
    // @@@ TODO.. fill this in...

  }

  {
    int indexOfSouthernMost;
    // @@@ TODO.. fill this in...

  }

  return 0;

}
