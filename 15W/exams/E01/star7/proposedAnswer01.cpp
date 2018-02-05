#include <iostream>
#include <cstdlib>
using namespace std;

// Proposed answer.  May or may not be correct.

string star7(int width, int height) {
  string result = "";
  string space = "";

  if ((width < 2) || height < 2)
    return result;

  for (int row=1; row<=width; row++) {
    if (row == width)
      result += "*\n";
    else
      result += "*";
    space += " ";
  }
  for (int col=1; col<height; col++) {
    result += space;
    result += "*\n";
  }
  return result;
}


int main(int argc, char *argv[]) {

  if (argc!=3) {
    cerr << "Usage: " << argv[0] << " width height" << endl;
    exit(1);
  }

  cout << star7(atoi(argv[1]),atoi(argv[2])) << endl;
  
  return 0;
  
}
