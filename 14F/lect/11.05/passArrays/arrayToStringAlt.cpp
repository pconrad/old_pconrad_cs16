#include <iostream>
#include <string>
#include <sstream> // for ostringstream

#include "arrayFuncs.h"

// intToString converts an int to a string

std::string intToString(int i) {
// creates a stream like cout, cerr that writes to a string
  std::ostringstream oss; 
  oss << i;
  return oss.str(); // return the string result
}

std::string arrayToString(int a[], int size) {

  const std::string LEFT_DELIM="{";
  const std::string RIGHT_DELIM="}";

  if (size==0)
    return LEFT_DELIM+RIGHT_DELIM;

  std::ostringstream oss;
  // fencepost problem; first element gets no comma in front
  oss << LEFT_DELIM + intToString(a[0]); 

  for (int i=1; i<size; i++) {
    oss << "," << intToString(a[i]);
  }
  oss << RIGHT_DELIM;
  return oss.str();
  
}
