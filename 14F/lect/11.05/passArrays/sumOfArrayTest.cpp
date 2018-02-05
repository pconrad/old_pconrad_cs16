#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {

  int fiveThrees[5]={3,3,3,3,3};
  assertEquals(15,
	       sumOfArray(fiveThrees,5),
	       "sumOfArray(fiveThrees,5)");
  
  int zeros[3]={0,0,0}; // initializes all elements to 0
  assertEquals(0,
	       sumOfArray(zeros,3), 
	       "sumOfArray(zeros,3)" );  

  
  int sixInts[6]={1,2,3,4,5,6}; 
  assertEquals(21,
	       sumOfArray(sixInts,6), 
	       "sumOfArray(sixInts,6)" ); 

  assertEquals(3,
	       sumOfArray(sixInts,2), 
	       "sumOfArray(sixInts,2)" ); 

  int sixMoreInts[6]={1,-2,3,-4,5,-6}; 
  assertEquals(-3,
	       sumOfArray(sixMoreInts,6), 
	       "sumOfArray(sixMoreInts,6)" ); 

  int meaning[] = {42};
  assertEquals(42,
	       sumOfArray(meaning,1), 
	       "sumOfArray(meaning,1)" ); 

  return 0;
}
