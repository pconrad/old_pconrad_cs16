// stringDemo.c
// P. Conrad for CS16, 04/23

#include <stdio.h>

// legalStartingPoint returns true if hands is a legal starting point
int legalStartingPoint(char * hands);  



int main()
{

  char hands1[]="rygopgbyorb "; // legal starting point

  char hands2[]="rrooyyggbbp "; // object of the game (win!)
  char hands3[]="rrroygppb gw"; // illegal starting point


  char hands4[]="ryyrbwb "; // legal starting point

  // The \ is called an "escape character"
  // we escape from the normal meaning of " as end of string
  printf("hands1=\"%s\"\n",hands1);

  

  return 0;
}
