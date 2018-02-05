// structs01.cpp   Simple demo of structs in C++
// P. Conrad for CS16, F14, UCSB

#include <iostream>
using namespace std;


struct Student {
  int perm;
  string name;
};

void printStudent(Student s) {
  cout << "Perm: " << s.perm << " Name: "<< s.name << endl;
}

int main()
{

  Student s1 = {1234567,"Chris Gaucho"};
  Student s2 = {8765432,"Pat Rincon"};
  Student s3 = {4444444,"Karanbir Toor"};

  printStudent(s1);
  printStudent(s2);
  printStudent(s3);

  return 0;
}
