#include "linkedListFuncs.h"
#include <string>
#include "arrayFuncs.h"

std::string linkedListToString(const Node * const head) {

  std::string result="";
  for (const Node *  p=head; p!=NULL; p=p->next) {
    result += "[" + intToString(p->data) + "]->";
  }
  result += "null";
  return result;
}
