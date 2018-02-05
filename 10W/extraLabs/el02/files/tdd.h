// tdd.h   Functions for test-driven development
// P. Conrad, UCSB CS Dept. Fall 2009, Winter 2010

#ifndef TDD_H
#define TDD_H

// These functions for test-driven development have been
// introduced thorughout the course---here they are collected
// together in one convenient file

int assertTrue(char * label, // label for test, e.g. "1: initPoint(&p,1.0,2.0)"
	       int  assertion); // boolean expr (int in C) expected to be true


int checkExpectInt(char * label, // the label e.g. "1: isE('f')"
		   int check, // the function call we are checking
		   int expect); // what we expect to get

int checkExpectDouble(char * label, // label for test, e.g. "1: ftoC(32.0)"
		      double check, // the function call we are checking
		      double expect, // what we expect to get
		      double tolerance); // how much error we can tolerate

// checkExpectIntArray compares the first n elements of two arrays of ints
int checkExpectIntArray(char * label, // the label e.g. "1: allPos(a,n,b,n)"
			int * check, // the result array we are checking
			int * expect, // what we expect to get
			int n);  // how many elements to compare


void tddSummary(int failures);
  

#endif // TDD_H












