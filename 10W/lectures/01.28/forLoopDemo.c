// forLoopDemo.c
// P.Conrad for CS16, Winter 2010

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int start;
  int limit;
  int step;
  int i;

  if (argc!=4)
    {
      printf("Usage: %s start limit step\n", argv[0]  );
      return 1;
    }
  start = atoi(argv[1]);  
  limit = atoi(argv[2]);  
  step = atoi(argv[3]);  
    
  for(i=start; i<limit; i+=step)
	printf("%d\n",i);

      return 0;
    
}
