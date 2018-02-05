// Linked List Demo using structs in C++

#include <iostream>
using namespace std;

#include "node.h"

int main() 
{
  
  Node *head=NULL, *tail=NULL;
  Node *p=NULL, *q=NULL;
  
  p=new Node;
  p->data = 3; p->next = NULL;
  
  head = tail = p;

  q=new Node;
  q->data = 5; q->next = NULL;
  
  tail->next = q;
  tail = q;

  q=new Node;
  q->data = 7; q->next = NULL;
  
  tail->next = q;
  tail = q;

  q=new Node;
  q->data = 11; q->next = NULL;
  
  q -> next = head;
  head = q;

  for (Node *p=head; p; p=p->next) 
    {
      cout << p->data << endl;    
    }
  
  return 0;
}
