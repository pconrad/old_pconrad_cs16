#include "student.h"
#include <iostream>
using namespace std;

// int studentsWithHighGPA(Student student[],  int size   );

int studentsWithHighGPA(Student *student,  int size  );


int main() {
  Student students[10];
  Student s1 = {1234567,3.20,"Phill","Conrad"};
  Student s2 = {2345678,3.95,"Diana","Franklin"};
  Student s3 = {3456789,3.49,"Mike","Costanzo"};
  Student s4 = {4567890,4.00,"Linda","Petzold"};

  students[0] = s1;
  students[1] = s2;
  students[2] = s3;
  students[3] = s4;

  int result = studentsWithHighGPA(students,4);

  cout << "result=" << result << endl;
  return 0;
}


int studentsWithHighGPA(Student *student,  int size  ) {

  int count=0;
  for (int i=0; i<size; i++) {
    if(student[i].gpa >= 3.5 ) 
      count++;
  }

  return count;
}
