#include "linkedListFuncs.h"


// free up every node on this linked list
// nice clean code thanks to @sashavolv2 (on Twitter) #woot

void freeLinkedList(Node *head) {
  Node *next;

  for (Node *p=head; p!=NULL; p=next) {
    next = p->next;
    delete p;
  }
}
