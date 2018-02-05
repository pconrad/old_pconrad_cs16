// myFirstArray.c 
// P. Conrad for CS16, Winter 2010

#include <stdio.h>

int main(int argc, char *argv[])
{
  int a[]={45, 23, 12, 81};
  int index;

  if (argc!=2)
    {
      printf("Usage: %s index\n", argv[0]);
      return 1;
    }

  index = atoi(argv[1]); // pick the index the user asks for
  printf("a[%d] =  %d\n", index, a[index]);
      
  return 0;

}
