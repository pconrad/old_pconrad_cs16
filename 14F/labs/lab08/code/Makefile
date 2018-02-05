#CXX = g++
CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES=arrayToStringTest arrayToLinkedListTest \
	addIntToEndOfListTest \
	addIntToStartOfListTest \

all: ${BINARIES}

tests: ${BINARIES}
	./arrayToStringTest
	./arrayToLinkedListTest
	./addIntToEndOfListTest
	./addIntToStartOfListTest

arrayToStringTest: arrayToStringTest.o linkedListFuncs.o tddFuncs.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

arrayToLinkedListTest: arrayToLinkedListTest.o linkedListFuncs.o tddFuncs.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

addIntToEndOfListTest: addIntToEndOfListTest.o linkedListFuncs.o tddFuncs.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

addIntToStartOfListTest: addIntToStartOfListTest.o linkedListFuncs.o tddFuncs.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
