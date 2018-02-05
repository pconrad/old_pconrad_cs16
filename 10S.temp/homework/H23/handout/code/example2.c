// example2.c from H23, CS16, S10
#include <stdio.h>

int twiceTheValue(int x)
{
  return 2 * x;
}

void doStuff(int a)
{
  int b;
  b=twiceTheValue(a);
  printf("a=%i b=%i\n",a,b);
}

int main(int argc, char *argv[])
{
  if (argc!=2)
    {
      printf("Usage: %s integer\n",argv[0]);
      return 1;
    }
  doStuff(atoi(argv[1]));
  return 0;
}

