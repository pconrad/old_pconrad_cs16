#include <iostream>
#include <cstdlib> // for atoi()
using namespace std;

// argc is the argument count: how many things on cmd line
//   when we run the program
// argv is argument vector---an array of char *, each of which
//   is itself a pointer to a null terminated string, that
//   is one of the things on the command line

int main(int argc, char *argv[]){
  
  if (argc!=2) {
    cerr << "Usage: " << argv[0] << " integer" << endl;
    exit(1);
  }

  int myInteger = atoi(argv[1]); // ASCII to integer
  cout << "myInteger=" << myInteger << endl;
  
  return 0;
}
