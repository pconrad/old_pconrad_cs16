CXX = g++
# CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES=arrayToStringTest arrayBoundsDemo countEvensTest \
	minOfArrayTest minOfArrayErrorTest sumOfArrayTest


all: ${BINARIES}

arrayToStringTest: arrayToStringTest.o arrayToString.o tddFuncs.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

minOfArrayTest: minOfArrayTest.o arrayToString.o tddFuncs.o minOfArray.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

sumOfArrayTest: sumOfArrayTest.o sumOfArray.o tddFuncs.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

minOfArrayErrorTest: minOfArrayErrorTest.o arrayToString.o tddFuncs.o minOfArray.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

arrayBoundsDemo: arrayBoundsDemo.o arrayToString.o 
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

countEvensTest: countEvensTest.o countEvens.o tddFuncs.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
