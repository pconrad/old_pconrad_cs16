// whatHappensIfWeUseTheWrongPercentThingy.c   P. Conrad for CS16, Fall 2009

#include <stdio.h>

int main()
{
  int x=3;
  double y=4.321;
  char z='A';
  char *name = "Phill";

  printf("Here is printing the right way:\n");
  printf("x=%d y=%lf z=%c name=%s\n\n",x,y,z,name);

  printf("Here is printing everything with %%d whether it's right or not:\n");
  printf("x=%d y=%d z=%d name=%d\n\n",x,y,z,name);

  printf("Here is printing the right way:\n");
  printf("x=%d y=%lf z=%c name=%s\n\n",x,y,z,name);

  printf("Here is printing everything with %%lf whether it's right or not:\n");
  printf("x=%lf y=%lf z=%lf name=%lf\n\n",x,y,z,name);

  printf("Here's what happens if we swap x and y so that y comes first:\n");
  printf("Note that y has a correct format specifier in both cases\n");
  printf("Here is printing everything with %%lf whether it's right or not:\n");
  printf("y=%lf x=%lf z=%lf name=%lf\n\n",y,x,z,name);

  printf("Here is printing the right way:\n");
  printf("x=%d y=%lf z=%c name=%s\n\n",x,y,z,name);

  printf("Here is printing everything with %%c whether it's right or not:\n");
  printf("x=%c y=%c z=%c name=%c\n\n",x,y,z,name);

  printf("Here is printing the right way:\n");
  printf("x=%d y=%lf z=%c name=%s\n\n",x,y,z,name);


  return 0;
}
