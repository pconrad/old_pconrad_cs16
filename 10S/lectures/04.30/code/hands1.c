// hands1.c   Demo of some strings related to the
// routing and deadlock game 

#include <stdio.h>

const int numHands=8; // #define numHands 8


void moveSpaceOneLeft(char *s); // move space one to the left in s

int posFirstSpace(char *s);

// if the left most character is already a space, do nothing
// if there are no spaces at all, do nothing.
// otherwise, find the first space (leftmost), and move it
// one to the left.
void moveSpaceOneLeft(char *s)
{
  // void function--so stub is "do nothing"
  if (s[0]==' ')
    return;
  int firstSpaceLoc = posFirstSpace(s);
  if (firstSpaceLoc == -1)
    return;
  s[firstSpaceLoc] = s[firstSpaceLoc-1];
  s[firstSpaceLoc-1] = ' ';
  
}

// Returns the position of the first space, or -1 if no spaces found
// Positions are numbered from 0

int posFirstSpace(char *s)
{
  int i = 0;
  while (s[i]!='\0')
    {
      if(s[i]==' ')
	return i;
      i++;
    }
  return -1;
}

int main()
{
  char hands[] = "roygroy ";

  printf("Before calling moveSpaceOneLeft hands=\"%s\"\n",hands);
  moveSpaceOneLeft(hands);
  printf(" After calling moveSpaceOneLeft hands=\"%s\"\n",hands);

  return 0;
}
