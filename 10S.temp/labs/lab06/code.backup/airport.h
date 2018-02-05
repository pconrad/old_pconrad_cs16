// airport.h    Header file for airport struct
// P. Conrad for lab07, CS16, 11/12/2009

#ifndef AIRPORT_H
#define AIRPORT_H

#define AIRPORT_CITY_LEN 31   // includes the \0

struct Airport {
  char code[4]; // 3 letter code + \0
  double lat;
  double lon;
  char city[AIRPORT_CITY_LEN];
  char state[3]; // 2 letter code + \0
};

#endif // AIRPORT_H
