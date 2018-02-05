#!/bin/bash

# testlab03.sh
# Shell script to check the output of ./starT against tests for starT

# define a variable with the directory where tests live

testdir=/cs/faculty/pconrad/public_html/cs16/10W/labs/lab03/tests

# First, include the checkit function

. $testdir/checkit.sh

# Then make starT

make starT

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





