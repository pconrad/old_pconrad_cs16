// ptrSyntax1.c    Checking precdence of * and .
// P. Conrad for Cs16, Fall 2009

// If we have the following struct:
struct Point {
  double x;
  double y;
};

// And we have struct Point p, do we need the parens
//   in (*p).x (*p).y, or is *p.x and *p.y ok?
void initPoint (struct Point *p, int theX, int theY)
{
  (*p).x = theX;
  *p.y = theY;
}

int main()
{
  struct Point pt;
  // a function call to test our function
  initPoint(&pt, 2.0, 3.0);
  return 0;
} 
