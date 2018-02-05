// q5 from practice midterm E02
// P.Conrad for CS16, Fall 2009
#include <stdio.h>

void doIt1()
{
  int a[] = {10,20,30,40};
  printf("%d\n",a[3]);
}




void doIt2()
{
  int a[5] = {0};
  printf("%d\n",a[5]);
}




void doIt3()
{
  int a[5] = {1};
  printf("%d\n",a[4]);
}





void doIt4()
{
  int a[5];
  int i;
  for (i=0; i<5; i++)
    a[i] = 5-i;
  printf("%d\n",a[2]);
}

int main()
{
  doIt1();
  doIt2();
  doIt3();
  doIt4();

}
