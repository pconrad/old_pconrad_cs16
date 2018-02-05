// pointerPlus1.c  P. Conrad for CS16, 09F, UCSB
// what happens when we add 1 to a pointer

#include <stdio.h>

int main()
{
  int nums[] = {12, 45, 32, 76, 17, 42};
  
  // Illustration of what moving over one place means:

  printf("the int * pointer nums  =%p\n",nums);
  printf("the int * pointer nums+1=%p\n\n",nums+1);

  // What happens when we do this with an array of char

  {
    // In honor of Brian Kernighan, co-inventor of C

    char name[]="Brian"; 
    
    printf("the char * pointer name  =%p\n",name);
    printf("the char * pointer name+1=%p\n\n",name+1);
    
  }

  // What happens when we do this with an array of double?

  {

    double reals[]={1.2, 2.3, 3.4, 4.5, 5.6};
    
    printf("the double * pointer reals  =%p\n",reals);
    printf("the double * pointer reals+1=%p\n\n",reals+1);
    
  }

  return 0;
}
