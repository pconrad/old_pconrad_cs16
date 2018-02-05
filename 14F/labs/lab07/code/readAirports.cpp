// readAirports.cpp   P. Conrad  for CS16, Fall 2014
// Example program to read airports into array of structs

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <string> // for strncpy(), and strcmp()
#include <cmath> // for fabs()
#include <fstream> // for ifstream

#include "utility.h"

#include "airport.h" // defines struct Airport
#include "airportFuncs.h" // function prototypes
#include "tddFuncs.h"

using namespace std;

#define MAX_NUM_AIRPORTS 2000


int main(int argc, char *argv[])
{
  ifstream ifs; // the stream we will use for the input file
  string thisLine; // a line of input from the file

  // plain old C arrays have a capacity (MAX_NUM_AIRPORTS) and an occupancy (airportCount)
  // capacity is how big the array is
  // occupancy is how many things we are currently storing
  // capacity is what the array COULD hold (in 0 through capacity-1)
  // occupancy is what the array currently DOES hold (in 0 through occupancy-1)

  struct Airport airports[MAX_NUM_AIRPORTS]; // where we will store the airports
  int airportCount = 0; // current occupancy of airports array

  // check to see if there is a command line argument
  // with the name of the airport file we are going to read

  if (argc!=2) {
    cerr << "Usage: "<< argv[0] << " airportDataFileName" << endl;
    exit(1); // defined in cstdlib
  }

  // try to open the input file

  ifs.open(argv[1]);
  
  if (ifs.fail()) {
    cerr << "Could not open input file" << endl;
    exit(2); 
  }
  
  // Try to read past the header line.
  getline(ifs,thisLine);

  // Test if we hit the end of the file, or experienced an error:

  if ( ifs.eof() || ifs.fail() ) {
    cerr << "Unable to read first line in input file" << endl;
    exit(3);
  }

  // Now read the rest of the lines

  // start by trying to read the first line
  
  getline(ifs,thisLine);
  while (  !ifs.eof() && !ifs.fail() ) {
      // If we get here, it means the most recent attempt to read succeeded!
      // So do something with thisLine
      
      initAirportFromString(&(airports[airportCount]), thisLine);
      airportCount++;
    
      // try to read another line
      getline(ifs,thisLine);
  }

  // Now we've read all the airports into an array of structs!
  // Woo hoo!

  // So now, let's see if we can do some useful things.
  // Each of the sets of { } below gives us the chance to declare
  //  a local variable 
  
  int indexOfEasternMost = indexOfAirportWithSmallestLongitude(airports, airportCount);
  cout << "The eastern most airport is: " << airportToString(airports[indexOfEasternMost]) << endl;
  
  // TODO: Fill in similar code for the southern most, western most, and northern most airport,
  // in that exact order.

  // Follow the same format.

  return 0;

}
