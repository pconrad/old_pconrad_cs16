#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <string>  // for C++ strings
#include <sstream> // for istringstream and ostringstream
#include <cmath> // for fabs()

using namespace std;

#include "airport.h"
#include "airportFuncs.h"
#include "utility.h"
#include "tddFuncs.h"

void initAirportFromString(Airport *a, string s)
{
  // This code reads data into the airport struct from the information
  // in the string, which is assumed to be in the format:
  //   code,latitude,longitude,city,state\n
  // For example:
  // ADK,51.88,176.65,Adak,AK

  istringstream iss(s);
  string token;

  // This version of getline takes an input string (istream), a string, 
  // and a delimiter character (in this case, comma).
  // We read from the stream until the delimiter is encountered 

  getline(iss, a->code, ',');

  string latitudeAsString;
  getline(iss, latitudeAsString, ',');
  a->lat = stod(latitudeAsString); // stod converts a std::string to a double

  string longitudeAsString;
  getline(iss, longitudeAsString, ',');
  a->lon = stod(longitudeAsString); // stod converts a std::string to a double

  getline(iss, a->city, ',');
  getline(iss, a->state, '\n');
}

// This function outputs an Airport 
string airportToString(Airport a) {
  ostringstream oss;
  oss << "[" << a.code << "," 
      << a.city << " " << a.state << 
    ",(" << a.lat << "," << a.lon << ")]" ;
  return oss.str();
}

int approxEqual(double x, double y, double tol)
{
  return fabs(x-y)<tol;
}

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

int indexOfAirportWithLargestLongitude(struct Airport *airports, 
					int airportCount) {
  return -1; // STUB
}

int indexOfAirportWithSmallestLatitude(struct Airport *airports, 
					int airportCount) {
  return -1; // STUB
}

int indexOfAirportWithLargestLatitude(struct Airport *airports, 
					int airportCount) {
  return -1; // STUB
}
