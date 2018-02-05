#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib> // for exit() and for atoi()
using namespace std;

void runTest(void); // function declaration (aka function prototype)
void usage(const char * const progName); 

string starField(int width, int height );

void usage(const char * const progName) {
      cout << "Usage: " << progName << " width height" << endl;
      cout << "       " << progName << " -h (or --help) for help" << endl;
      cout << "       " << progName << " -t (or --test) to run tests" << endl;
}

int main(int argc, char * argv[]) {
  
  // See if the user asked for help
  // i.e. if they type ./starField -h or ./starField --help 

  if (argc>=2) {    
    // in plain english: is argv[1] equal to "-h"
    // BUT because argv[1] is a char *, we can't just test argv[1]=="-h"

    if  ( strcmp("-h",argv[1])==0 || strcmp("--help",argv[1])==0 ) {   
      usage(argv[0]);
      exit(1);
    } 

    if  ( strcmp("-t",argv[1])==0 || strcmp("--test",argv[1])==0 ) {   
      runTest();
      exit(0);
    } 

  }
  if (argc!=3) {
    cout << "Error: need width and height" << endl;
    usage(argv[0]);
    exit(1);
  }

  cout << starField(atoi(argv[1]),atoi(argv[2])); 
  return 0;
}

string starField(int width, int height) {
  string result="stub";
  return result;
}

void assertEqual(string expected, string actual, string message="") {
  if (expected == actual) {
    cout << "PASSED: " << message << endl;
  } else {
    cout << "  FAILED! " << message << endl;
    cout << "   expected=[" << endl << expected << "]" << endl;
    cout << "   actual=[" << endl << actual << "]" << endl;
  }
}

void runTest(void) {
  
  assertEqual("****\n"
	      "****\n"
	      "****\n", starField(4,3), "starField(4,3)");

  // The previous assertion is equivalent to:

  assertEqual("****\n****\n****\n", starField(4,3), "starField(4,3)");

  // Reason: adjaent string literals get automatically concatenated by
  // the compiler in C and C++.   

  assertEqual("***\n"
	      "***\n"
	      "***\n"
	      "***\n",
	      starField(3,4),"starField(3,4)");

  assertEqual("", starField(0,4),   "starField(0,4)"   );
  assertEqual("", starField(-1,4),  "starField(-1,4)"  );
  assertEqual("", starField(5,0),   "starField(5,0)"   );
  assertEqual("", starField(5,-2),  "starField(5,-2)"  );
  assertEqual("*\n",starField(1,1), "starField(-1,-1)" );

  assertEqual("***\n",starField(3,1), "starField(3,1)" );

  assertEqual("*\n"
	      "*\n"
	      "*\n",starField(1,3),"starField(1,3)"    );
}
