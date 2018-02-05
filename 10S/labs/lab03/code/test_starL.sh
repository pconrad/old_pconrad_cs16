#!/bin/bash

# test_starL.sh
# Shell script to check the output of ./starL against tests for starL

# define a variable with the directory where tests live

testdir="/cs/faculty/pconrad/public_html/cs16/10S/labs/lab03/tests"
execFile="starL"

# First, include the checkit function

. $testdir/checkit.sh

# Then make starL

make starL


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

checkit $testdir/starL_tests/usage.txt ./starL
checkit $testdir/starL_tests/3_4.txt ./starL 3 4
checkit $testdir/starL_tests/3_5.txt ./starL 3 5
checkit $testdir/starL_tests/5_3.txt ./starL 5 3
checkit $testdir/starL_tests/3_2.txt ./starL 3 2
checkit $testdir/starL_tests/5_2.txt ./starL 5 2
checkit $testdir/starL_tests/5_4.txt ./starL 5 4
checkit $testdir/starL_tests/blank.txt ./starL 5 1
checkit $testdir/starL_tests/blank.txt ./starL 1 5
checkit $testdir/starL_tests/6_5.txt ./starL 6 5
checkit $testdir/starL_tests/7_3.txt ./starL 7 3





