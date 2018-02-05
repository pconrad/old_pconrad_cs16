#include <iostream>
using namespace std;

double areaOfTriangle(double base, double height);

int main(void) {
  double b,h;
  
  cout << "Enter base:";
  cin >> b;

  cout << "Enter height:";
  cin >> h;

  cout << "Area of triangle is: " << areaOfTriangle(b,h) << endl;

  return 0;

}

double areaOfTriangle(double base, double height) {
  return 0.5 * base * height;
}

