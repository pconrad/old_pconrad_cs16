#include <iostream>
#include <cstdlib>

int triple(int x) {
  return x * 3;
}

int main(int argc, char *argv[]) {

  // minimal framework to test out a function
   
  std::cout << triple(4) << std::endl;
  return 0;
}
