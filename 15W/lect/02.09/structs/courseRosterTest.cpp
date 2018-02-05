#include "student.h"
#include "courseRoster.h"
#include "tddFuncs.h"


// Next we have our main program that runs the tests
int main()
{
  CourseRoster cr;
  initCourseRoster(&cr,"CMPSC8");

  Student s;
  initStudent(&s,1234567,"Chris","Gaucho");

  ASSERT_TRUE(s.perm==1234567);
  ASSERT_TRUE(s.firstName=="Chris");
  ASSERT_TRUE(s.lastName=="Gaucho");
  
  addStudentPermNumberOrder(&cr,s);

  ASSERT_TRUE(cr.courseName=="CMPSC8");
  ASSERT_TRUE(cr.students[0].perm==1234567);
  ASSERT_TRUE(cr.students[0].firstName=="Chris");
  ASSERT_TRUE(cr.students[0].lastName=="Gaucho");
  ASSERT_TRUE(cr.numStudents==1);

  Student t;
  initStudent(&t,2345678,"Tony","Goleta");

  addStudentPermNumberOrder(&cr,t);

  ASSERT_TRUE(cr.students[0].perm==1234567);
  ASSERT_TRUE(cr.students[0].firstName=="Chris");
  ASSERT_TRUE(cr.students[0].lastName=="Gaucho");

  ASSERT_TRUE(cr.students[1].perm==2345678);
  ASSERT_TRUE(cr.students[1].firstName=="Tony");
  ASSERT_TRUE(cr.students[1].lastName=="Goleta");

  ASSERT_TRUE(cr.numStudents==2);

  Student u;
  initStudent(&u,1111111,"Pat","Uno");

  addStudentPermNumberOrder(&cr,u);

  ASSERT_TRUE(cr.students[0].perm==1111111);
  ASSERT_TRUE(cr.students[0].firstName=="Pat");
  ASSERT_TRUE(cr.students[0].lastName=="Uno");

  ASSERT_TRUE(cr.students[1].perm==1234567);
  ASSERT_TRUE(cr.students[1].firstName=="Chris");
  ASSERT_TRUE(cr.students[1].lastName=="Gaucho");

  ASSERT_TRUE(cr.students[2].perm==2345678);
  ASSERT_TRUE(cr.students[2].firstName=="Tony");
  ASSERT_TRUE(cr.students[2].lastName=="Goleta");

  ASSERT_TRUE(cr.numStudents==3);

  Student v;
  initStudent(&v,2222222,"Jamie","Duo");

  addStudentPermNumberOrder(&cr,v);

  ASSERT_TRUE(cr.numStudents==4);

  ASSERT_TRUE(cr.students[0].perm==1111111);
  ASSERT_TRUE(cr.students[0].firstName=="Pat");
  ASSERT_TRUE(cr.students[0].lastName=="Uno");

  ASSERT_TRUE(cr.students[1].perm==1234567);
  ASSERT_TRUE(cr.students[1].firstName=="Chris");
  ASSERT_TRUE(cr.students[1].lastName=="Gaucho");

  ASSERT_TRUE(cr.students[2].perm==2222222);
  ASSERT_TRUE(cr.students[2].firstName=="Jamie");
  ASSERT_TRUE(cr.students[2].lastName=="Duo");

  ASSERT_TRUE(cr.students[3].perm==2345678);
  ASSERT_TRUE(cr.students[3].firstName=="Tony");
  ASSERT_TRUE(cr.students[3].lastName=="Goleta");


  return 0;
}

