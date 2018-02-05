#include <iostream>
#include <string>

using namespace std;
#include "airport.h"
#include "airportFuncs.h"
#include "tddFuncs.h"

int main()
{
  string testString1 = "ABC,123.45,67.89,TestCity,CA";
  string testString2 = "XYZ,98.765,43.21,AnotherTestCity,NV";

  struct Airport airport1,airport2;

  initAirportFromString(&airport1, testString1);

  assertEquals("ABC",  airport1.code, "airport1.code is ABC");
  assertEquals(123.45, airport1.lat,  "airport1.lat is 123.45");
  assertEquals(67.89,  airport1.lon,  "airport1.lon is 67.89");

  assertEquals("TestCity",  airport1.city,  "airport1.city is TestCity");
  assertEquals("CA",        airport1.state, "airport1.state is CA");

  initAirportFromString(&airport2, testString2);

  //@@@ TODO: ADD TESTS FOR airport 2
  //@@@ You need five calls to various forums of assertEqual, similar to the ones above.
  //@@@ Add your five calls here and then remove this comment.

  return 0;
}
