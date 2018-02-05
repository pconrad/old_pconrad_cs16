#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string itos(int i) {
  ostringstream oss;
  oss << i;
  return oss.str();
}

int main() {

  string s="";
  s+=itos(2014);
  s+="/";
  s+=itos(11);
  s+="/";
  s+=itos(19);

  cout << "s=" << s << endl;

  return 0;
  
}
