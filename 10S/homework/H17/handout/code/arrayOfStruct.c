// arrayOfStruct.c  Illustrate arrays of structs
// P. Conrad for CS16, Spring 2010
// We see here that we can declare an array of structs
#include <stdio.h>
struct Time
{
  int hours;
  int minutes;
};

void printTime(struct Time t)
{
  printf("%02d:%02d",t.hours, t.minutes);
}

int main()
{
  struct Time classTimesTR[6];

  // Initialize the array with assignment statements

  classTimesTR[0].hours = 8; classTimesTR[0].minutes=0;
  classTimesTR[1].hours = 9; classTimesTR[1].minutes=30;
  classTimesTR[2].hours = 11; classTimesTR[2].minutes=0;
  classTimesTR[3].hours = 12; classTimesTR[3].minutes=30;
  classTimesTR[4].hours = 14; classTimesTR[4].minutes=0;
  classTimesTR[5].hours = 15; classTimesTR[5].minutes=30;

  // print the array with a for loop

  int i;
  for (i=0; i<6; i++)
    {
      printf(" classTimesTR[%i]=",i); printTime(classTimesTR[i]); printf("\n");
    }

  return 0;

}

