#include <iostream>
#include <string>
using namespace std;

struct Date {
  int year;
  int month;
  int day;
};

int main() {

  Date d={2014,11,19};


  string s="";

  s+=d.year;  
  s+="/";
  s+=d.month;
  s+="/";
  s+=d.day;

  cout << "s=" << s << endl;

  Date ABC={65,66,67}; // yes I know that's not a date.  Trust me

  s="";
  s+=ABC.year;  
  s+="/";
  s+=ABC.month;
  s+="/";
  s+=ABC.day;

  cout << "s=" << s << endl;
}
