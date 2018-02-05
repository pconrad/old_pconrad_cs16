// Linked List Demo using structs in C++

#include <stdio.h>
#include <stdlib.h>

#include "node.h"

struct Node *newNode() {
  return (struct Node *)(malloc(sizeof(struct Node)));
}

int main() 
{
  
  struct Node *head=NULL, *tail=NULL;
  struct Node *p=NULL, *q=NULL;
  
  p=newNode();
  p->data = 3; p->next = NULL;
  
  head = tail = p;

  q=newNode();
  q->data = 5; q->next = NULL;
  
  tail->next = q;
  tail = q;

  q=newNode();
  q->data = 7; q->next = NULL;
  
  tail->next = q;
  tail = q;

  q=newNode();
  q->data = 11; q->next = NULL;
  
  q -> next = head;
  head = q;

  for (p=head; p!=NULL; p=p->next) 
    {
      printf("%d\n", p->data);
    }
  
  return 0;
}
