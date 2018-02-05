# Makefile for CS16 lab assignment, 3/5/2010
# P. Conrad, UCSB CS Dept.

# This file tells the "make" program what files need to be combined
# together to make each of the main programs in this directory
# Every line that starts with a # is a comment

# The next line sets the variable BINARIES equal to a list of 
# test programs.   When \ is the last character on a line, it means the line
# continues on the next line.

BINARIES =  testIsOdd testCopyOdds testSumArray  \
	 testMultiplyPairwise

# The following line is a "rule" that says that if you want to "make all",
# then you need to make each of the programs that is part of the list
# called BINARIES

all:  ${BINARIES}


# This rule says that textIsOdd depends on several .c files,
# and the next line (which must begin with a tab, no spaces) gives the
# command to compile the code.   In later courses (CS32), you'll learn about
# ways to do this more efficiently (using .o files as an intermediate step)

testIsOdd: isOdd.c tdd.c testIsOddMain.c
	cc isOdd.c tdd.c testIsOddMain.c -o testIsOdd
# Each of the following rules is similar

testSumArray: sumArray.c tdd.c testSumArrayMain.c
	cc sumArray.c tdd.c testSumArrayMain.c -o testSumArray

testMultiplyPairwise: multiplyPairwise.c tdd.c testMultiplyPairwiseMain.c
	cc multiplyPairwise.c tdd.c testMultiplyPairwiseMain.c \
		-o testMultiplyPairwise

# this program also includes isOdd.c 

testCopyOdds: isOdd.c copyOdds.c tdd.c testCopyOddsMain.c
	cc isOdd.c copyOdds.c tdd.c testCopyOddsMain.c -o testCopyOdds



# this rule says that if you type "make test", you should first
# do a "make all" to ensure that all of the programs are compiled,
# then, run each of them in turn.  The - in front of each command
# means keep going, even if one of these returns an error status 
# (i.e. a non-zero status indicating some tests failed)

test: all
	-./testIsOdd
	-./testSumArray
	-./testMultiplyPairwise
	-./testCopyOdds

# This rule says that when you type "make clean", it doesn't 
# depend on anything else---and it will run the command /bin/rm
# on all the files in the list BINARIES, deleting each of them.
# Using /bin/rm (instead of just rm) ensures we have the 
# correct version of the rm utility, and -f suppresses the error message
# in case we run "make clean" when the files don't exist (because we didn't
# make them yet, or because we ran "make clean" twice in a row.)

clean:
	/bin/rm -f ${BINARIES}
