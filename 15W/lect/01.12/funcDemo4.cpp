#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// print a message n times, once per line

string add_3_stars_beginning_and_end(string msg);

int main(int argc, char *argv[])  {
  
  if (argc != 2 ) {
    cerr << "Usage: " << argv[0] << " msg " << endl;
    cerr << "  Prints a message surrounded by 3 *'s each side" 
	 << endl;

  }


  string msg = argv[1];

  
  string result = add_3_stars_beginning_and_end(msg);
  cout << result << endl;
  return 0;
}


string add_3_stars_beginning_and_end(string msg) {
  return string("***") + msg + string(" ***");
}
