// cmdlinedemo.c   P. Conrad for CS16, lab03a, 04/03/2010
// demo of cmd line arguments

// Previously, we saw how to use cmd line arguments for
// int and double values (using atoi and atof).
// This program demonstrates accessing argv elements as strings

#include <stdio.h>

int main(int argc, char *argv[])
{
  int i;

  // echo back argc and argv

  printf("argc=%d\n",argc);

  for (i=0; i<argc; i++)
    printf("argv[%d]=%s\n",i,argv[i]);

  return 0;

}
