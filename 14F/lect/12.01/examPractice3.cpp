#include "student.h"
#include <iostream>
using namespace std;
#include <string>
#include <sstream>
#include <iomanip>
// int studentsWithHighGPA(Student student[],  int size   );

string studentToString(Student *p);

void initStudent(Student *p, int perm, double gpa,
		 string first, string last);

int main() {

  Student s1;
  initStudent(&s1,1234567,3.20,"Phill","Conrad");

  Student s2;
  initStudent(&s2,2345678,3.95,"Diana","Franklin");

  Student s3; 
  initStudent(&s3,3456789,3.49,"Mike","Costanzo");

  cout << studentToString(&s1) << endl;
  cout << studentToString(&s2) << endl;
  cout << studentToString(&s3) << endl;

  return 0;
}


string studentToString(Student *p) {
  ostringstream oss;
  oss<< setprecision(3);
  oss<< "[" <<  p->fname <<  " " <<  p->lname <<  ", perm: " << p->perm << ",gpa: " << p->gpa << "]";
  return oss.str();
}

void initStudent(Student *p, int perm, double gpa,
		 string first, string last) {
  p->perm = perm;
  p->gpa = gpa;
  p->fname = first;
  p->lname = last;
}

