#include <iostream>
using namespace std;

int main() {
  
  char c=0;

  for (c=0; c>=0; c++) {
    cout << (int) c << " ";
  }

  cout << "After the loop, c=" << c << endl;

  char oneTwentySeven = 127;

  cout << "oneTwentySeven=" << oneTwentySeven << endl;
  cout << "Now we do oneTwentySeven++";
  oneTwentySeven++;
  cout << "oneTwentySeven=" << oneTwentySeven << endl;
  cout << " (int) oneTwentySeven=" << (int) oneTwentySeven << endl;

  return 0;
}
