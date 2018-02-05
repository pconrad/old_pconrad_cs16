#include "linkedListFuncs.h"


// free up every node on this linked list
void freeLinkedList(Node *head) {

  Node *trailp = NULL;

  for (Node *p=head; p!=NULL; p=p->next) {
    if (trailp != NULL)
      delete trailp;
    trailp = p;
  }
  if (trailp != NULL)
    delete trailp;
}
