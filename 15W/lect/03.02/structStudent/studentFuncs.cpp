#include "student.h"
#include "studentFuncs.h"

#include <sstream>
using namespace std;

string toString(Student s) {
  ostringstream oss;
  oss << "[name=" << s.name 
      << ",perm=" << s.perm 
      << ",gpa=" << s.gpa << "]";
  return oss.str();
}

void initStudentFromString(Student *s, string line) {
  // TODO: Fix this fake data
  // FAKE DATA!!!! What I SHOULD DO... is get it from line
  s->name = "some stub name";
  s->perm = 1234567;
  s->gpa = 4.01;
}
