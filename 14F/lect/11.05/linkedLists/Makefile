#CXX = g++
CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES=arrayToStringTest arrayToLinkedListTest 

all: ${BINARIES}

arrayToStringTest: arrayToStringTest.o arrayToString.o tddFuncs.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

arrayToLinkedListTest: arrayToLinkedListTest.o arrayToLinkedList.o  \
	linkedListToString.o tddFuncs.o arrayToString.o freeLinkedList.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
