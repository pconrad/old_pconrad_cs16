// myFirstArray.c 
// P. Conrad for CS16, Winter 2010

#include <stdio.h>

int main()
{
  int a[]={45, 23, 12, 81};

  printf("a[0]=%d\n",a[0]);

  printf("a[3]=%d\n",a[3]);

  // the following values are unpredictable
  printf("something strange... a[4]=%d\n",a[4]);
  printf("something strange... a[-2]=%d\n",a[-2]);

  return 0;
}
