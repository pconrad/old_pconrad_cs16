// starBox1.c   Answer to an exam question
// P. Conrad, for CS16   02/02/2010


#include <stdio.h>
void starBox(int width, int height);

int main()
{

  int width,height; 
 
  printf("Please enter width: ");
  scanf("%d",&width);

  printf("Please enter height: ");
  scanf("%d",&height);

  starBox(width,height);

  return 0;

}

void nStars(int n)
{
   int i;
   for (i=0; i<n; i++)
      printf("*");

}

void starBox(int width, int height) 
{
   int i;
   for (i=0; i<height; i++)
   {
       nStars(width); printf("\n");
   }

}

