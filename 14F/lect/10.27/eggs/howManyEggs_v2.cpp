#include <iostream>
#include <cstdlib>
using namespace std;


int howManyDozensToBuy(int eggsNeeded) {

  if (eggsNeeded % 12 == 0) 
    return eggsNeeded / 12;
  else 
    return (eggsNeeded / 12) + 1;
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
