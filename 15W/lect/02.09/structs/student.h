#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using std::string;

struct Student {
  string lastName;
  string firstName;
  int perm;
};

void initStudent(Student *s, int perm, string firstName, string lastName);
void initStudentFromCSVString(Student *s, string line);

#endif
