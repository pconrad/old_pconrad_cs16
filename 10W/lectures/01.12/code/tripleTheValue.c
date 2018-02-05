// tripleTheValue.c   P.Conrad for CS16, 10W

#include <stdio.h>

int tripleTheValue(int x)
{
  return x * 3;
}


int main()
{
  int a=7;
  int b=tripleTheValue(a);

  printf("b=%i\n",b);

  return 0;

}
