// types.c  Code for CS16 homework problem, Spring 2010, H20 
// P. Conrad, CS Dept., UCSB.

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
