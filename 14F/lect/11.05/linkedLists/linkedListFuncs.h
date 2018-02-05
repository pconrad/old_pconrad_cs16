#ifndef LINKEDLISTFUNCS_H 
#define  LINKEDLISTFUNCS_H

#include <string>
#include "node.h"

// the new list is new storage allocated on the heap
// it is the responsibility of the caller to eventually free that storage

Node * arrayToLinkedList(int array[], int size); 

// free up every node on this linked list
void freeLinkedList(Node *head);

// 
std::string linkedListToString(const Node * const head);

#endif //  LINKEDLISTFUNCS_H
