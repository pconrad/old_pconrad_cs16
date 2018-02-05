// tdd.h   Functions for test-driven development
// P. Conrad for CS16, Spring 2010    For lab06

#ifndef TDD_H
#define TDD_H

// These functions for test-driven development have been
// introduced thorughout the course---here they are collected
// together in one convenient file


int checkExpectInt(char * label, // the label e.g. "isE('f')"
		   int check, // the funciton call we are checking
		   int expect); // what we expect to get

int checkExpectDouble(char * label, // label for test, e.g. "ftoC(32.0)"
		      double check, // the function call we are checking
		      double expect, // what we expect to get
		      double tolerance); // how much error we can tolerate

int checkExpectIntArray(char * label, // the label e.g. "1: isE('f')"
			int * check, // the funciton call we are checking
			int * expect, // what we expect to get
			int n);  // how many elements to compare
  

int assertTrue(char * label, // label for test, e.g. "smaller(3,4)==3"
	       int  assertion); // boolean (int) expression expected to be true

int assertTrueWithFileLine(char * file,
			   int line,
			   char * label, // label for test
			   int  assertion); // expect it evalutes to true

int checkExpectIntWithFileAndLine(char * file, int line, char * label,
				  int check, // value we are checking
				  int expect); // what we expect to get

int checkExpectDoubleWithFileAndLine(char * file, int line, char * label,
				     double check, // value we are checking
				     double expect,
				     double tol); // allowable error

// A function to call when finishing up a TDD program.
// You can call "return tddFinish(failures)" and it will
// both print a summary, as well as return the number of failures

int tddFinish(int failures);

// The following allows us to just write ASSERT_TRUE(x==5);
// and it will turn into assertTrueWithFileLine(__FILE__,__LINE__,"x==5",x==5);
//  # in front of a parameter to a macro turns it into a string
// __FILE__ is pre-defined to return the current file as a string
// __LINE__ is pre-defined to return the current line as an int

#define ASSERT_TRUE(assertion)  \
  assertTrueWithFileLine(__FILE__,__LINE__,#assertion,assertion)

#define CHECK_EXPECT_INT(check,expect) \
  checkExpectIntWithFileAndLine(__FILE__,__LINE__,#check,check,expect)

#define CHECK_EXPECT_INT_ARRAY(label,check,expect,n)			\
  checkExpectIntArrayWithFileAndLine(__FILE__,__LINE__,label,check,expect,n)

#define CHECK_EXPECT_DOUBLE(check,expect,tol)				\
  checkExpectDoubleWithFileAndLine(__FILE__,__LINE__,#check,check,expect,tol)

#endif // TDD_H





