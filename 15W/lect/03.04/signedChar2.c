#include <stdio.h>

int main(int argc, char **argv) {
  signed char i;
  for (i=0; i<0x7F; i++) {
    printf("%d\n",i);
  }
  return 0;
}

