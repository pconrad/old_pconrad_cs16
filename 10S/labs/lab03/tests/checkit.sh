#!/bin/bash
#  P. Conrad for CS16, Spring 2010
#  This shell script defines a shell function called "checkit"
#
#  The "checkit" function can be used to check whether the output of a
#  program matches the contents of a file.  Appropriate messages
#  are printed either way.
#
#  Usage: 
#
#    checkit fileWithExpectedOutput ./progname [arguments]
#
#  Example: 
#     . checkit.sh
#     checkit p1tests/blank.txt  ./p1
#     checkit p1tests/1.txt      ./p1 5
#     checkit p1tests/3.txt      ./p1 3

checkit()
{
  # Strip off the first command line argument
  # That's the file containing the expectedOutput

  fileWithExpectedOutput=$1; shift

  # Now $@ is the command line we want to run
  # Run that through the diff command to compare it with what we expect
  # -q means "don't produce much output"--we only care about the status
  # > /dev/null means we don't care about even the minimal output produced

  $@ | diff -q - $fileWithExpectedOutput > /dev/null
  if [ $? -eq 0 ]; then
      # $? is the status of the diff command--it its zero,
      # then the output matches the expected output--the test passes!
      echo "Test passed for $@"
  else
      # if $? is not equal to zero, there was a problem--so let user know

      echo "Test FAILED: for $@"
      echo    "=============expected output=========="
      cat $fileWithExpectedOutput
      echo    "==============actual output==========="
      $@
      echo "======================================"

      # Now check with white space off---if the files match then,
      # show the expected and actual output with $ marking ends of lines.

      $@ | diff -w -q - $fileWithExpectedOutput > /dev/null

      if [ $? -eq 0 ]; then
      # $? is the status of the diff command--it its zero,
      # then the output matches the expected output--the difference is in whitespace

      echo "NOTE: expected matches actual except for whitespace"
      echo "Here are the expected and actual with $ at the end of each line:"
      echo    "=============expected output with $ at end of line=========="
      cat -E $fileWithExpectedOutput
      echo    "==============actual output with $ at end of line==========="
      $@ | cat -E
      echo    "============================================================"


      fi

  fi
}
