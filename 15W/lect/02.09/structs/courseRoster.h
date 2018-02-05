#ifndef COURSEROSTER_H
#define COURSEROSTER_H
#include <string>
using std::string;

#include "student.h"

#define ROSTER_MAX 100

struct CourseRoster {
  string courseName;
  int numStudents;
  Student students[ROSTER_MAX];
};

void initCourseRoster(CourseRoster *cr, string courseName);
void addStudentPermNumberOrder(CourseRoster *cr, Student s);
int indexWhereStudentGoesByPerm(CourseRoster *cr, Student s);
void   scootDownAllStudentsFromThisIndexToEnd(CourseRoster *cr, 
					      int whereToPutNewStudent);


#endif
