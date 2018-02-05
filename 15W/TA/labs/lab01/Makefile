CXX = g++
# CXX = clang++

CXXFLAGS= -Wall -Wno-uninitialized

BINARIES=myProg01 myProg01

COMMON_OBJECTS=

all: ${BINARIES}

#tests: ${BINARIES}
#	./distanceBetweenTest
#	./initPointTest


myProg01: myProg01.o $(COMMON_OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

myProg02: myProg02.o $(COMMON_OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
