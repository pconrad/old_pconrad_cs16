#ifndef LINKEDLISTFUNCS_H 
#define  LINKEDLISTFUNCS_H
#include "linkedList.h"

#include <string>
using std::string;

// the new list is new storage allocated on the heap
// it is the responsibility of the caller to eventually free that storage

LinkedList * arrayToLinkedList(int array[], int size); 

// free up every node on this linked list

void freeLinkedList(LinkedList * list);

string linkedListToString(LinkedList * list);

void addIntToEndOfList(LinkedList *list, int value);

void addIntToStartOfList(LinkedList *list, int value);

#endif //  LINKEDLISTFUNCS_H
