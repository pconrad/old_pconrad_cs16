#include <iostream>
#include <cstdlib> // for atof
using namespace std;

double areaOfTriangle(double base, double height);

int main(int argc, char * argv[]) {
  double b,h;

  if (argc!=3) {
    cerr << "Usage: " << argv[0] << " base height" <<endl;
    return 1;
  }

  b = atof(argv[1]); // atoi is for int, atof is for double
  h = atof(argv[2]); // atoi is for int, atof is for double

  cout << "Area of triangle is: " << areaOfTriangle(b,h) << endl;

  return 0;

}

double areaOfTriangle(double base, double height) {
  return 0.5 * base * height;
}

