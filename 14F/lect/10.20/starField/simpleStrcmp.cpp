#include <iostream>
#include <cstring>
#include <string> // C++ string
using namespace std;

int main(int argc, char *argv[]) {

  // WRONG
  if ( argc > 1  && argv[1]=="foo") {
    cout << "You want foo!" << endl;
  }

  // RIGHT
  if ( argc > 1  && strcmp(argv[1],"bar")==0 ) {
    cout << "You want bar!" << endl;
  }

  return 0;
}
