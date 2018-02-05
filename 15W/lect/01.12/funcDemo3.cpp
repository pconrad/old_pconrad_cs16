#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// print a message n times, once per line
void printMany(string msg, int n);

int main(int argc, char *argv[])  {
  
  if (argc != 3 ) {
    cerr << "Usage: " << argv[0] << " n msg " << endl;
    cerr << "  Prints a message n times" << endl;
    exit(1);
  }


  int n = atoi(argv[1]);
  string msg = argv[2];

  printMany(msg,n);

  return 0;
}


void printMany(string msg, int n) {
  for (int i=0; i<n; i++ ) {
    cout << msg << endl;
  }
}
