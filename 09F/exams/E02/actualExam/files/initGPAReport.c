
// (20 pts) Write the definition of a C function initGPAreport
// according to the description in the comment below. Assume that the
// struct definition given is available to you.

struct GPAreport {  
  int perm; // perm number
  double gpa; // between 0.00 and 4.00
}; 

// FOR FULL CREDIT, FOLLOW THE INSTRUCTIONS EXACTLY, including
// using EXACTLY THESE VARIABLE NAMES for the parameters...

// The function initGPAreport should take these parameters:
//   gpaRpt: a pointer to a struct GPAreport called gpaRpt
//   thePerm:   a perm number (integer)
//   theGpa: a GPA (number between 0.00 and 4.00 called theGpa)
// It should initialize the struct pointed to with the values passed in.
// It doesn't return anything.

void initGPAreport(struct GPAreport * gpaRpt, int thePerm, double theGpa)
{
  (*gpaRpt).perm = thePerm;
  (*gpaRpt).gpa = theGpa;
}
