// bracketDemo.c  P. Conrad for CS16 S10
// I can has brackets anywhere I want!

// Question from a student: "can I have an inner i and and an outer i"
// Answer from Conrad: yes, as illustrated below, but...
//     not good style... you probably shouldn't

#include <stdio.h>

int main()
{
  int a,b,c;
  
  int i=42;

  printf("I can has cheezburger?\n");
  printf("I can has cheezburger?\n");
  printf("I can has cheezburger?\n");

  printf("tro");
  {
    int i;
    
    for (i=0;i<5;i++)
      printf("lo");

    printf("\n");

    printf("inner i=%d\n",i); // this is the inner i
  }

  printf("outer i=%d\n",i); // this is the "outer" i

  printf("I can has cheezburger?\n");
  printf("I can has cheezburger?\n");



}
