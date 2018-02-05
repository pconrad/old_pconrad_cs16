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

#define NUM_STUDENTS 3

int main()
{  
  Student s[] = { {1234567,"Chris Gaucho"},
		  {8765432,"Pat Rincon"}, 
		  {4444444,"Karanbir Toor"} };

  for (int i=0; i<NUM_STUDENTS; i++) {
    printStudent(s[i]);
  }

  return 0;
}
