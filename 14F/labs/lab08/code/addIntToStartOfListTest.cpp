#include "linkedListFuncs.h"
#include "tddFuncs.h"

int main() {

  int fiveNums[3]={42,57,61};

  LinkedList *list = arrayToLinkedList(fiveNums,3);
  assertEquals( "[42]->[57]->[61]->null", 
		linkedListToString(list),
		"linkedListToString(list)");

  addIntToStartOfList(list,25);

  assertEquals( "[25]->[42]->[57]->[61]->null", 
		linkedListToString(list),
		"list after adding 25");

  addIntToStartOfList(list,31);

  assertEquals( "[31]->[25]->[42]->[57]->[61]->null", 
		linkedListToString(list),
		"list after adding 31");
  
  freeLinkedList(list);
  
  int empty[0]={};
  LinkedList *emptyList = arrayToLinkedList(empty,0);
  assertEquals( "null", 
		linkedListToString(emptyList),
		"linkedListToString(emptyList)");

  addIntToStartOfList(list,7);

  assertEquals( "[7]->null", 
		linkedListToString(list),
		"list after adding 7");

  addIntToStartOfList(list,-6);

  assertEquals( "[-6]->[7]->null", 
		linkedListToString(list),
		"list after adding -6");
   
  freeLinkedList(emptyList);
  
  return 0;
}
