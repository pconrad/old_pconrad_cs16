# Makefile for CS16 lab assignment, 3/5/2010
# P. Conrad, UCSB CS Dept.

# This file tells the "make" program what files need to be combined
# together to make each of the main programs in this directory
# Every line that starts with a # is a comment

# The next line sets the variable BINARIES equal to a list of 
# test programs.   When \ is the last character on a line, it means the line
# continues on the next line.

BINARIES = testIndexOfMax testIsOdd  testMaxValue \
	testMinValue 

# The following line is a "rule" that says that if you want to "make all",
# then you need to make each of the programs that is part of the list
# called BINARIES

all:  ${BINARIES}


# This rule says that textIndexOfMax depends on several .c files,
# and the next line (which must begin with a tab, no spaces) gives the
# command to compile the code.   In later courses (CS32), you'll learn about
# ways to do this more efficiently (using .o files as an intermediate step)

testIndexOfMax: indexOfMax.c tdd.c testIndexOfMaxMain.c
	cc indexOfMax.c tdd.c testIndexOfMaxMain.c -o testIndexOfMax

# Each of the following rules is similar

testMaxValue: maxValue.c tdd.c testMaxValueMain.c
	cc maxValue.c tdd.c testMaxValueMain.c -o testMaxValue

testMinValue: minValue.c tdd.c testMinValueMain.c
	cc minValue.c tdd.c testMinValueMain.c -o testMinValue

testIsOdd: isOdd.c tdd.c testIsOddMain.c
	cc isOdd.c tdd.c testIsOddMain.c -o testIsOdd




# this rule says that if you type "make test", you should first
# do a "make all" to ensure that all of the programs are compiled,
# then, run each of them in turn.  The - in front of each command
# means keep going, even if one of these returns an error status 
# (i.e. a non-zero status indicating some tests failed)

test: all
	-./testIndexOfMax
	-./testIsOdd
	-./testMaxValue
	-./testMinValue


# This rule says that when you type "make clean", it doesn't 
# depend on anything else---and it will run the command /bin/rm
# on all the files in the list BINARIES, deleting each of them.
# Using /bin/rm (instead of just rm) ensures we have the 
# correct version of the rm utility, and -f suppresses the error message
# in case we run "make clean" when the files don't exist (because we didn't
# make them yet, or because we ran "make clean" twice in a row.)

clean:
	/bin/rm -f ${BINARIES}
