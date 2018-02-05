#include <iostream>
using namespace std;
#include <cmath>   // #include <math.h> is what we would write in a C program
#include <cstdlib> // for atof

int main(int argc, char *argv[]) {

  double x = atof(argv[1]);

  cout << "x=" << x << endl;

  cout << "sqrt(x)=" << sqrt(x) << endl;

  return 0;
}
