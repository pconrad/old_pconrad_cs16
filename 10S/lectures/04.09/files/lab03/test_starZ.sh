#!/bin/bash

# testZ.sh
# Shell script to check the output of ./starT against tests for starT

# define a variable with the directory where tests live

testdir="/cs/faculty/pconrad/public_html/cs16/10S/labs/lab03/tests"
execFile="starZ"

# First, include the checkit function

. $testdir/checkit.sh

# Then make starZ

make starZ


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

checkit $testdir/starZ_tests/usage.txt ./starZ
checkit $testdir/starZ_tests/usage.txt ./starZ 3 4
checkit $testdir/starZ_tests/blank.txt ./starZ -2
checkit $testdir/starZ_tests/blank.txt ./starZ 3
checkit $testdir/starZ_tests/4.txt ./starZ 4
checkit $testdir/starZ_tests/5.txt ./starZ 5
checkit $testdir/starZ_tests/6.txt ./starZ 6






