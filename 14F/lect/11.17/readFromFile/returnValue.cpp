#include <cstdlib>

// Try this program with various command lines---and after each one,
// type echo $? at the bash prompt.
//
// echo $? gives you the return value from the main of the last program
// to complete its execution

// ./returnValue            Note: argc here is 1
// ./returnValue 42
// ./returnValue foo        Note: atoi(foo) yields 0
// ./returnValue -1         Note: internally, return value is 8bit unsigned
//                             Read about two's complement

int main(int argc, char *argv[]) {
  if (argc<2)
    return 0;
  else
    return atoi(argv[1]);
}
