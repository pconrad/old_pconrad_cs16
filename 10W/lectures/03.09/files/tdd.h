// tdd.h   Functions for test-driven development
// P. Conrad and others--see bottom of file

#ifndef TDD_H
#define TDD_H

// These functions for test-driven development have been
// introduced thorughout the course---here they are collected
// together in one convenient file

int assertTrue(char * label, // the label for this test, e.g. "1: initPoint(&p,1.0,2.0)"
	       int  assertion); // a true/false statement we expect to be true (in C those return int)

int checkExpectInt(char * label, // the label e.g. "1: isE('f')"
		   int check, // the funciton call we are checking
		   int expect); // what we expect to get

int checkExpectDouble(char * label, // the label for this test, e.g. "1: ftoC(32.0)"
		      double check, // the function call we are checking
		      double expect, // what we expect to get
		      double tolerance); // how much error we can tolerate

int checkExpectIntArray(char * label, // the label e.g. "1: isE('f')"
			int * check, // the funciton call we are checking
			int * expect, // what we expect to get
			int n);  // how many elements to compare
  
// Netbpmtools project -- A project to create a set of tools in C
//  to explore graphics using the netpbm file format.
// Contributors to this project include:
//   Phill Conrad, Tobias Hollerer, Eric Goodman, Alex Wickes,
//   Mark Hamlin, Nick Vaughan



#endif // TDD_H


// Netbpmtools project -- A project to create a set of tools in C
//  to explore graphics using the netpbm file format.
// Contributors to this project include:
//   Phill Conrad, Tobias Hollerer, Eric Goodman, Alex Wickes,
//   Mark Hamlin, Nick Vaughan











