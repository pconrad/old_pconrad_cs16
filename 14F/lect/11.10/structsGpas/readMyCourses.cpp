#include <iosteream>
#include <fstream>
#include <string>
#include <cassert>

#include "course.h"

using namespace std;

const int MAXCOURSES=20;

void readDataFileIntoArray(Course courseArray[], int &numCourses);
// read from data file into the array, and set array content and numCourses

int main() {
  
  Course myCourses[MAXCOURSES];
  int numCourses=0; // need numCourses <= MAXCOURSES

  

}


void readDataFileIntoArray(Course courseArray[], int &numCourses) {
  assert(numCourses==0);

}
