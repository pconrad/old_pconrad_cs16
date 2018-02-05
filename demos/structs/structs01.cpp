// structs01.cpp   Simple demo of structs in C++
// P. Conrad for CS16, F14, UCSB

#include <iostream>
using namespace std;


struct Student {
  int perm;
  string name;
};


int main()
{

  Student s1 = {1234567,"Chris Gaucho"};
  Student s2 = {8765432,"Pat Rincon"};
  Student s3 = {4444444,"Karanbir Toor"};

  cout << "Perm: " << s1.perm << " Name: "<< s1.name << endl;
  cout << "Perm: " << s2.perm << " Name: "<< s2.name << endl;
  cout << "Perm: " << s3.perm << " Name: "<< s3.name << endl;

  return 0;
}
