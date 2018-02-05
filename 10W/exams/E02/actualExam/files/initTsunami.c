// tsunamiRpt.c   Exam problem for CS16 Midterm 2, Winter 2010
// P. Conrad, CS Dept, UC Santa Barbara

struct TsunamiRpt
{
  int hr;
  int min;
  double waveHt;
};

void initTsunamiRpt(struct TsunamiRpt *trPtr, 
		    int hour, int minute, double height)
{
  trPtr -> hr = hour;
  trPtr -> min = minute;
  trPtr -> waveHt = height;
}


