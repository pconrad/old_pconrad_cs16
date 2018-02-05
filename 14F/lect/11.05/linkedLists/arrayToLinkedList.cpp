#include "linkedListFuncs.h"
#include "node.h"

Node * arrayToLinkedList(int a[],
			 int size) {
  
  Node *head=NULL; 
  Node *tail=NULL;

  for (int i=0; i<size; i++) {
    // add array[i] to the list

    if ( head==NULL) {
      head = new Node;
      head->data = a[i]; // (*head).data = a[i];
      head->next = NULL;
      tail = head;
    } else {
      tail->next = new Node;
      tail = tail->next;
      tail->next = NULL;
      tail->data = a[i];
    }
  }

  return head; // return ptr to new list

}


