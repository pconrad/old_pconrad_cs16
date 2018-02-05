// tsunamiRpt.c   Exam problem for CS16 Midterm 2, Winter 2010
// P. Conrad, CS Dept, UC Santa Barbara

#include <stdio.h>
#include <stdlib.h> // for atof

struct TsunamiRpt
{
  int hr;
  int min;
  double waveHt;
};

// (a) Add function prototype for initTsunamiRpt here

void initTsunamiRpt(struct TsunamiRpt *trPtr, 
		    int hour, int minute, double height);

int main(int argc, char *argv[])
{
  // declare variables
  struct TsunamiRpt tr;
  int hour, min;
  double height;

  // check arguments
  if (argc!=4)
    {
      printf("Usage: ./tsunamiRpt hour min height\n"); return 1;
    }

  // convert cmd lind args
  hour=atoi(argv[1]); min=atoi(argv[2]); height=atof(argv[3]);

  // (b) call initTsunamiRpt to initialize the tr variable
  // passing in the values that were converted from the command line

  initTsunamiRpt(&tr, hour, min, height);

  // In a real program, additional code would go here to use the 
  // struct TsunamiRpt variable tr in some way---sending it over the internet, 
  // adding it to a database, or doing some calculation on it, for example...
  
  printf("The tsunami arrived at %02i:%02i with height %lf meters\n",
	 tr.hr, tr.min, tr.waveHt);

  return 0;
}

// The function definition from question 1 would go here,
// or it could be compiled in a separate file---you DON'T need to
// rewrite it here on this exam though!
