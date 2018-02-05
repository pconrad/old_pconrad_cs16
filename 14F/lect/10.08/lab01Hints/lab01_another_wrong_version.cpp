#include <iostream>
#include <cmath>
using namespace std;
 
// function stubs
 
bool isPrime(int n) {
  if (n%7 == 0)
    return true;
  else
    return false;
}
 
int countPrimesLessThan(int n) {
  return -1; // TODO: FIX ME!
}
int nthPrime(int n) {
  return -1; // TODO: FIX ME!
}
 
double sumPowers(int a, int b, int c, double p) {
  return -1.0; // TODO: FIX ME!
}
 
char flipCase(char c) {
  return '?'; // TODO: FIX ME!
}
 
int main()
{
  // Sample output from functions
  int limit = 100;
  cout << "Primes less than " << limit  << endl;
  for (int i=2; i<limit; i++) {
    if (isPrime(i)) 
      cout << i << " ";
  }
  cout << endl;
 
  cout << "countPrimesLessThan(" << limit << ") = " << countPrimesLessThan(limit) << endl;
  cout << "nthPrime(25) = " <<  nthPrime(25) << endl;
  cout << "sumPowers(1, 6, 2, 2.0) =" << sumPowers(1, 6, 2, 2.0) << endl;
 
  cout << "flipCase('a') = " << flipCase('a') << endl;
  cout << "flipCase('B') = " << flipCase('B') << endl;
  cout << "flipCase('T') = " << flipCase('T') << endl;
 
  return 0;
}
