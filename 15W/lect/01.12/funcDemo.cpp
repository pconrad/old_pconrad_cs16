#include <iostream>
#include <cstdlib>
using namespace std;

int findSum(int num1, int num2);

int main(int argc, char *argv[])  {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  int sum = findSum(a,b);

  cout << "sum=" << sum << endl;
  
  return 0;
}

int findSum(int num1, int num2) {
  return num1 + num2;
}
