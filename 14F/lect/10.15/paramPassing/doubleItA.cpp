#include <iostream>
#include <cstdlib> // for atoi()
using namespace std;

int doubleTheValue(int x); // function prototype (or declaration)

int main(int argc, char *argv[]){
  
  if (argc!=2) {
    cerr << "Usage: " << argv[0] << " integer" << endl;
    exit(1);
  }

  int myInteger = atoi(argv[1]); // ASCII to integer
  cout << "myInteger=" << myInteger << endl;
  cout << "doubleTheValue(myInteger)=" 
       << doubleTheValue(myInteger) << endl;
  
  return 0;
}

int doubleTheValue(int x) {
  return x*2;
}

