#include <iostream>
using namespace std;

#include "areaOfTriangle.h"

int main(void) {
  double b,h;
  
  cout << "Enter base:";
  cin >> b;

  cout << "Enter height:";
  cin >> h;

  cout << "Area of triangle is: " << areaOfTriangle(b,h) << endl;

  return 0;

}



