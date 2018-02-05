// types.c  Code for homework problem, 02/18/2009
// P. Conrad for CS16, 10W, Homework 13, UCSB

#include <stdio.h>

struct Point {
  double x;
  double y;
};

struct Time {
  int hrs;
  int min;
};

struct Circle {
  struct Point center;
  double radius;
};

int main(int argc, char *argv[])
{
  int x;
  int *num;
  double y;
  double *val;
  struct Circle c;
  struct Circle *cir;
  struct Point pt;
  struct Point *p;
  struct Time start;
  struct Time *end;

  // Program does no useful work
  // It is just the basis of a homework assignment about types

  // Pretend there is useful code here, and then 
  // answer questions about the types of various expressions
  // as if they appeared right here.

  return 0;

}
