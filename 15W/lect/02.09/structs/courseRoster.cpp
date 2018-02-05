
#include "student.h"
#include "courseRoster.h"
#include <string>
#include <cassert>
#include <iostream>
#include <cstdlib>
#include <sstream>

using namespace std;

void initStudent(Student *s, int perm, string firstName, string lastName) {
  (*s).perm = perm;
  (*s).firstName = firstName;
  (*s).lastName = lastName;
}

void initStudentFromCSVString(Student *s, string line) {

  // This version of getline takes an input string (istream), a string, 
  // and a delimiter character (in this case, comma).
  // We read from the stream until the delimiter is encountered 

  istringstream iss(line); // use the line as an input stream
  string permAsString; // a string to read perm into before converting

  getline(iss, permAsString, ',');
  s->perm = stoi(permAsString);  // C++ string to int
  getline(iss, s->firstName, ',');
  getline(iss, s->lastName, '\n');
}


void initCourseRoster(CourseRoster *cr, string courseName) {
  (*cr).courseName = courseName;
  (*cr).numStudents = 0;
}

void addStudentPermNumberOrder(CourseRoster *cr, Student s) {
  if ( cr->numStudents >= ROSTER_MAX ) {
    cerr << "Can't add student; roster is full " << endl;
    exit(1);
    // Throwing an exception would be a better way to handle this,
    // but that's an advanced topic--wait for CS32. :-)
  }

  int whereToPutNewStudent = indexWhereStudentGoesByPerm(cr,s);
  scootDownAllStudentsFromThisIndexToEnd(cr,whereToPutNewStudent);
  (cr->numStudents)++;
  cr->students[whereToPutNewStudent] = s;
}

/**
   This function gives looks for first perm that is greater than
   the perm of the one we are adding--or if all perms in list are less than
   the one we are adding, we should return the index of the array
   element after the last perm.
 */

int indexWhereStudentGoesByPerm(CourseRoster *cr, Student s) {
  for (int i=0; i<cr->numStudents; i++) {
    if (cr->students[i].perm > s.perm ) {
      return i;  // This ends the function call
    }
  }

  // if we get ALL the way through the loop, we should return spot after
  // all the students in the list

  return cr->numStudents;

}

/**
   This function gives looks for first perm that is greater than
   the perm of the one we are adding--or if all perms in list are less than
   the one we are adding, we should return the index of the array
   element after the last perm.
 */

void   scootDownAllStudentsFromThisIndexToEnd(CourseRoster *cr, 
					      int whereToPutNewStudent) {
  // Two sanity checks.  These are NOT the same as test cases!
  assert(whereToPutNewStudent >= 0);
  assert(whereToPutNewStudent <= cr->numStudents);

  // Now: scoot every student down to make room in the array
  for (int i=cr->numStudents; i>whereToPutNewStudent; i--) {
    cr->students[i] = cr->students[i-1];
  }
}

