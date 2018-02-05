#CXX = g++
CXX = clang++

CXXFLAGS = -Wall 

BINARIES=courseFuncsTest


all: ${BINARIES}

tests: ${BINARIES}
	./courseFuncsTest

courseFuncsTest: courseFuncsTest.o tddFuncs.o courseFuncs.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
