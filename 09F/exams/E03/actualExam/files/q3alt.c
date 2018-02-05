// q3.c
#include<stdio.h>
#include<stdlib.h>

struct Complex
{

  double a;
  double b;
};

void initComplex(struct Complex *c, double aVal, double bVal)
{
   c->a = aVal;
   c->b = bVal;
}

struct Complex squareComplex(struct Complex c)
{
  struct Complex ans;

  initComplex(&ans, c.a * c.a = c.b*c.b, 2 * c.b);

  return ans;
}

int main(int argc, char *argv[])
{
   
   struct Complex c;
   struct Complex c2;
      
   if (argc != 3)
   {
      printf("Usage: ./squareC real imag\n");
      return 1;
   }

   // use atof to convert command line arguments 
   // from ascii to double, and initialize c1

   initComplex(&c, atof(argv[1]), atof(argv[2]));
   c2 = squareComplex(c);

   printf("Answer = %lf + %lf i\n",c2.a, c2.b);
    
   return 0;
}


