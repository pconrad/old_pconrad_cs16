CXX = g++
# CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES=arrayToStringTest arrayBoundsDemo countEvensTest \
	minOfArrayTest minOfArrayErrorTest countPrimesTest \
	maxOfArrayTest maxOfArrayErrorTest sumOddsTest


all: ${BINARIES}

arrayToStringTest: arrayToStringTest.o arrayToString.o tddFuncs.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

minOfArrayTest: minOfArrayTest.o arrayToString.o tddFuncs.o minOfArray.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

minOfArrayErrorTest: minOfArrayErrorTest.o arrayToString.o tddFuncs.o minOfArray.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

maxOfArrayTest: maxOfArrayTest.o arrayToString.o tddFuncs.o maxOfArray.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

maxOfArrayErrorTest: maxOfArrayErrorTest.o arrayToString.o tddFuncs.o maxOfArray.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

arrayBoundsDemo: arrayBoundsDemo.o arrayToString.o 
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

countEvensTest: countEvensTest.o countEvens.o tddFuncs.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

countPrimesTest: countEvensTest.o countEvens.o tddFuncs.o utility.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
