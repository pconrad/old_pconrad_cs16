#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randIntBetweenInclusive(int min, int max) {
  return rand() % (max-min+1) + min; 
}

// generate n random integers between min and max, inclusive

int main(int argc, char *argv[]) {
  srand (time(NULL)); // see random number generator
  if (argc!=4) {
    cout << "Usage: " << argv[0] << " n min max" << endl;
    exit(1);
  }
  
  int n=atoi(argv[1]);
  int min=atoi(argv[2]);
  int max=atoi(argv[3]);

  for (int i=0;i<n;i++) {
    cout << randIntBetweenInclusive(min,max) << endl;
  }

  return 0;
}
