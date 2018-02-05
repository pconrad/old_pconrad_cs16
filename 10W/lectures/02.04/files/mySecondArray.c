// myFirstArray.c 
// P. Conrad for CS16, Winter 2010

#include <stdio.h>

int main()
{
  int b[]={42, 26, 20, 17};
  int a[]={45, 23, 12, 81};
  int c[]={11, 71, 99, 25};

  printf("a[0]=%d\n",a[0]);

  printf("a[3]=%d\n",a[3]);

  // the following values are unpredictable
  printf("something strange... a[4]=%d\n",a[4]);
  printf("something strange... a[5]=%d\n",a[5]);
  printf("something strange... a[-2]=%d\n",a[-2]);
  printf("something strange... a[-3]=%d\n",a[-3]);

  printf("address of a = %p\n", a);
  printf("address of b = %p\n", b);
  printf("address of c = %p\n", c);


  return 0;
}
