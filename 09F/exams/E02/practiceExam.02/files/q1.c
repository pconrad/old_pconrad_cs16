// q1.c    Answer to question 1 E02 practice exam
// Function by J. Balkind, main by P. Conrad

int countMax (int *a, int size)
{
  int largest = a[0];
  int occurences = 1;
  int loop;

  for (loop = 1; loop < size; loop++)
    {
      if (a[loop] > largest)
	{
	  largest = a[loop];
	  occurences = 1;
	}
      else if (a[loop] == largest)
	occurences++;
    }
  return occurences;
}

//  ****** ANSWER IS EVERYTHING ABOVE THIS LINE
// ******* BELOW THIS LINE IS JUST TESTING CODE

#include <stdio.h>

int main()
{
  int a[]={30,40,50,20,50,20}; // 6
  int b[]={30,40,50,20,50,70,20}; //7
  int c[]={50,50,50}; // 3
  int d[]={10,10,20,20,20,30,30,30,30,40}; // 10
  int e[]={10,10,20,20,20,30,30,30,30}; // 9
  int f[]={10};

  printf("a: %d\n",countMax(a,6));
  printf("b: %d\n",countMax(b,7));
  printf("c: %d\n",countMax(c,3));
  printf("d: %d\n",countMax(d,10));
  printf("e: %d\n",countMax(e,9));
  printf("f: %d\n",countMax(f,1));

}

