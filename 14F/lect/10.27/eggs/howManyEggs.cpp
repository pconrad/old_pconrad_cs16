#include <iostream>
#include <cstdlib>
using namespace std;


int howManyDozensToBuy(int eggsNeeded) {
  int dozens = 0;
  
  if (eggsNeeded % 12 == 0) {
    dozens = eggsNeeded / 12;
  }
  else {
    dozens = (eggsNeeded / 12) + 1;
  }

  return dozens;
}

int main(int argc, char *argv[]) {

  if (argc!=2) {
    cerr << "Nope!" << endl;
    exit(1);
  }

  int eggsNeeded = atoi(argv[1]);

  int dozensToBuy = howManyDozensToBuy(eggsNeeded);

  cout << dozensToBuy << endl;

  return 0;
}
