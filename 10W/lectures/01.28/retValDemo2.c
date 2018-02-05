// retValDemo2.c Demostrate return value 
// P. Conrad for CS16, Winter 2010
// To see the return value at the bash shell
//   use: echo $?

#include <stdio.h>

int main()
{
  int retVal;
  printf("What value do you want me to return? ");
  scanf("%d",&retVal);
  return retVal;
}
