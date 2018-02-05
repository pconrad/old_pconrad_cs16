#include <iostream>
using namespace std;
#include <unistd.h>

// This was intended to demonstrate the difference between \n and endl
// but it did not work as intended.

// We might learn something from reading this in more detail
// http://stackoverflow.com/questions/9274057/c-cout-and-cin-buffers-and-buffers-in-general

int main() {
  
  for (int i=10; i>0; i--) {
    cout << i << endl;
    sleep(1);
  }
  cout << "Blastoff!" << endl;

  cout << "What if I don't flush the buffer?" << endl;
  std::cout << std::nounitbuf; // turn off auto flushing

  for (int i=10; i>0; i--) {
    cout << i << "\n";
    sleep(1);
  }
  cout << "Blastoff!" << endl;


  return 0;

}
