#include "student.h"
#include <iostream>
using namespace std;

// int studentsWithHighGPA(Student student[],  int size   );

void namesOfStudentsWithHighGPAs(Student *student,int numStudents,
				string *names, int &howMany);


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

  string names[10];
  int count;  // not initialized but that is NOT a problem.

  namesOfStudentsWithHighGPAs(students,4,names,count);

  cout << "count=" << count << endl;

  for (int i=0; i<count; i++) {
    cout << names[i] << endl;
  }

  return 0;
}



void namesOfStudentsWithHighGPAs(Student *student,int numStudents,
			       string *names, int &howMany) {
  howMany = 0;
  for(int i = 0; i < numStudents; i++){
    if(student[i].gpa >= 3.5){
      names[howMany]=student[i].fname + " " + student[i].lname;
      howMany++;
    }
  }
  
}
