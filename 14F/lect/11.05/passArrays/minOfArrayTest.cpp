#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {

  int fiveThrees[5]={3,3,3,3,3};
  assertEquals(3,
	       minOfArray(fiveThrees,5),
	       "minOfArray(fiveThrees,5)");
  
  int zeros[3]={0,0,0}; // initializes all elements to 0
  assertEquals(0,
	       minOfArray(zeros,3), 
	       "minOfArray(zeros,3)" );  

  
  int fiveInts[5]={1,2,3,4,5}; 
  assertEquals(1,
	       minOfArray(fiveInts,2), 
	       "minOfArray(fiveInts,2)" ); 

  int primes[] = {2,3,5,7,11,13,17,19,23,29};
  assertEquals(2,
	       minOfArray(primes,10), 
	       "minOfArray(primes,10)" ); 

  int meaning[] = {42};
  assertEquals(42,
	       minOfArray(meaning,1), 
	       "minOfArray(meaning,1)" ); 

  int mix[10]={-42,12,-9,56,123,-32767,48}; // last three will be zero
  assertEquals(-32767,
	       minOfArray(mix,10), 
	       "minOfArray(mix,10)" );

  return 0;
}
