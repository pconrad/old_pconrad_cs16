#include <math.h>  
#include <chplot.h>  
#define NUM 36 

int main() 
{ 
  double x[NUM], y[NUM];
  class CPlot plot;
  int i;
  for(i=0; i<NUM;i++) 
    {
      x[i] = i*360/(NUM-1);
      // assign x with values from 0 to 360 linearly 
      y[i] = sin(x[i]*M_PI/180);
    } 

  plot.title("Ch plot");
  plot.label(PLOT_AXIS_X, "xlabel");
  plot.label(PLOT_AXIS_Y, "ylabel");
  plot.data2DCurve(x, y, NUM);
  plot.plotting();
} 
