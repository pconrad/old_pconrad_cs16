#include <iostream>
#include <cstdlib>
using namespace std;


int main(int argc, char *argv[]){
  int num1;
  int num2;

  num1 = atoi(argv[1]);
  num2 = atoi(argv[2]);
  cout << num1+num2 << endl;
  return 0;
}
