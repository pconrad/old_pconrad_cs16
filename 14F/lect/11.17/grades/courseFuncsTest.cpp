#include "courseFuncs.h"
#include "tddFuncs.h"

int main() {
  assertEquals(4.0,
	       letterGradeToNumericGrade("A"),
	       "letterGradeToNumericGrade(\"A\")");

  assertEquals(3.7,
	       letterGradeToNumericGrade("A-"),
	       "letterGradeToNumericGrade(\"A-\")");

  assertEquals(2.7,
	       letterGradeToNumericGrade("B-"),
	       "letterGradeToNumericGrade(\"B-\")");

  assertEquals(1.3,
	       letterGradeToNumericGrade("D+"),
	       "letterGradeToNumericGrade(\"D+\")");

  return 0;
}
