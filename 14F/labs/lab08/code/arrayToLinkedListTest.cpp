#include "linkedListFuncs.h"
#include "tddFuncs.h"

int main() {

  int fiveNums[5]={42,57,61,3,-8};


  LinkedList *list = arrayToLinkedList(fiveNums,5);
  assertEquals( "[42]->[57]->[61]->[3]->[-8]->null", 
		linkedListToString(list),
		"linkedListToString(list)");
  
  freeLinkedList(list);
  
  int empty[0]={};
  LinkedList *emptyList = arrayToLinkedList(empty,0);
  assertEquals( "null", 
		linkedListToString(emptyList),
		"linkedListToString(emptyList)");
   
  freeLinkedList(emptyList);

  int singleton[]={12};
  LinkedList *singletonList = arrayToLinkedList(singleton,1);
  assertEquals( "[12]->null", 
		linkedListToString(singletonList),
		"linkedListToString(singletonList)");

  freeLinkedList(singletonList);
  
  return 0;
}
