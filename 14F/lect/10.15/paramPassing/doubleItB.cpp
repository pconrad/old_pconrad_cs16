#include <iostream>
#include <cstdlib> // for atoi()
using namespace std;

int doubleTheValue(int x); // function prototype (or declaration)
void doubleIt(int &x); // function prototype (or declaration)

int main(int argc, char *argv[]){
  
  if (argc!=2) {
    cerr << "Usage: " << argv[0] << " integer" << endl;
    exit(1);
  }

  int myInteger = atoi(argv[1]); // ASCII to integer
  cout << "myInteger=" << myInteger << endl;
  cout << "doubleTheValue(myInteger)=" 
       << doubleTheValue(myInteger) << endl;
  cout << "after call to doubleTheValue(myInteger)\n" 
       << "\tbut before the call to doubleIt(myInteger)\n"
       << "\tmyInteger=" << myInteger << endl;
  
  doubleIt(myInteger);

  cout << "after call to doubleIt(myInteger)\n" 
       << "\tmyInteger=" << myInteger << endl;


  return 0;
}

int doubleTheValue(int x) {
  x = x * 2;
  return x;
}

void doubleIt(int &x) {
  x = x * 2;
}
