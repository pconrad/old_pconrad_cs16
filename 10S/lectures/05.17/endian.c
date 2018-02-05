// endian.c   Show endian-ness of a machine
// P. Conrad for CS16, Spring 2010

#include <stdio.h>

int main()
{
  int x = 65; // this corresponds to 'A' in ASCII

  char *s;
  int *p;

  p = &x;
  s = (char *) &x;  // convert &x which is of type int * into char * 

  printf("x=%d  x in hex=%x  *p=%d *p in hex=%x\n",x,x,*p,*p);
  printf("as char s[0]=%c s[1]=%c s[2]=%c s[3]=%c\n",s[0],s[1],s[2],s[3]);
  printf("as dec s[0]=%d s[1]=%d s[2]=%d s[3]=%d\n",s[0],s[1],s[2],s[3]);
  printf("as hex s[0]=%x s[1]=%x s[2]=%x s[3]=%x\n",s[0],s[1],s[2],s[3]);
  
  x = 0xABCD1234;

  printf("x=%d  x in hex=%x  *p=%d *p in hex=%x\n",x,x,*p,*p);
  printf("as char s[0]=%c s[1]=%c s[2]=%c s[3]=%c\n",s[0],s[1],s[2],s[3]);
  printf("as dec s[0]=%d s[1]=%d s[2]=%d s[3]=%d\n",s[0],s[1],s[2],s[3]);
  printf("as hex s[0]=%x s[1]=%x s[2]=%x s[3]=%x\n",s[0],s[1],s[2],s[3]);
  
}
