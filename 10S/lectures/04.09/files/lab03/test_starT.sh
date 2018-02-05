#!/bin/bash

# test_starT.sh  P. Conrad for CS16 lab03, Spring 2010
# Shell script to check the output of ./starT against tests for starT

# define a variable with the directory where tests live

testdir="/cs/faculty/pconrad/public_html/cs16/10S/labs/lab03/tests"
execFile="starT"

# First, include the checkit function

. $testdir/checkit.sh

# Then make starT

make $execFile

if [ $? -ne 0 ]; then
   echo "make $execFile failed.  Check .c source file"
   exit 1
fi

# if $execFile is not an executable file, then we can't continue

if  [ ! -x ./$execFile ]; then
  echo "The file being tested, $execFile, is not available--test aborted"
  exit 1
fi

# see if each of these produce the correct output

checkit $testdir/starT_tests/usage.txt ./starT
checkit $testdir/starT_tests/3_4.txt ./starT 3 4
checkit $testdir/starT_tests/3_5.txt ./starT 3 5
checkit $testdir/starT_tests/5_3.txt ./starT 5 3
checkit $testdir/starT_tests/3_2.txt ./starT 3 2
checkit $testdir/starT_tests/5_2.txt ./starT 5 2
checkit $testdir/starT_tests/5_4.txt ./starT 5 4
checkit $testdir/starT_tests/blank.txt ./starT 5 1
checkit $testdir/starT_tests/blank.txt ./starT 6 5
checkit $testdir/starT_tests/7_3.txt ./starT 7 3





