#include <iostream>
#include <string>
using namespace std;

struct Date {
  int year;
  int month;
  int day;
};

int main() {

  Date num123={0x30,0x31,0x32}; // yes I know that's not a date.  Trust me

  string s="";
  s+=num123.year;  
  s+="/";
  s+=num123.month;
  s+="/";
  s+=num123.day;

  cout << "s=" << s << endl;
}
