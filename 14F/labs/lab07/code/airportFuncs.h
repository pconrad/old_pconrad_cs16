#ifndef AIRPORTFUNCS_H
#define AIRPORTFUNCS_H

#include "airport.h"
#include <string>

void  initAirportFromString(Airport *airport1, string s);

std::string airportToString(Airport a);

int indexOfAirportWithSmallestLongitude(Airport *airports, int airportCount);

// TODO: Add function prototypes here for additional functions 
//  for LargestLongitude, SmallestLatitude and LargestLatitude

#endif // AIRPORTFUNCS_H
