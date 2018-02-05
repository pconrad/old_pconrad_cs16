#ifndef COURSE_H
#define COURSE_H

#include <string>
using std::string;

struct Course {
  string qtr; // e.g. F14
  string courseNum; // e.g. PSTAT120A
  double units; // e.g. 4.0
  string letterGrade; // e.g. A-
};


#endif // COURSE_H
