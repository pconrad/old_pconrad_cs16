// retValDemo3.c Demostrate return value 
// P. Conrad for CS16, Winter 2010
// To see the return value at the bash shell
//   use: echo $?

#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc <= 1)
    return 0;
  else
    return atoi(argv[1]);
}
