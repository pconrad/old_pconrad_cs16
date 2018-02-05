#include <iostream>
using namespace std;
#include <cmath>   // #include <math.h> is what we would write in a C program
#include <cstdlib> // for atof

int main(int argc, char *argv[]) {

  cout << "argc=" << argc << endl;

  for (int i=0; i<argc; i++) {
    cout << "argv[" << i << "]=" << argv[i] << endl;
  }

  return 0;
}
