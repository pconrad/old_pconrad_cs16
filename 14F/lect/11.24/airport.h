#ifndef AIRPORT_H
#define AIRPORT_H

#include <string>
using std::string;

struct Airport {
  string code;
  double lat;
  double lon;
  string city;
  string state;
};

#endif // AIRPORT_H
