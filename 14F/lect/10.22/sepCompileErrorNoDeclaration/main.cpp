#include <iostream>
#include <cstdlib> // for atoi , exit
using namespace std;

// int triple(int x);  // function declaration (aka prototype)

int main(int argc, char *argv[]) {
  
  if (argc!=2) {
    cerr << "Usage: " << argv[0] << " someInteger" << endl;
    exit(1);
  } 

  int x=atoi(argv[1]);
  cout << triple(x) << endl;
  
  return 0;
}
