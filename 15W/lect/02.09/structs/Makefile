CXX = g++ 
CXXFLAGS = -Wall -std=c++11
BINARIES=courseRosterTest readStudents

all:	${BINARIES}

courseRosterTest: courseRoster.o  courseRosterTest.o  tddFuncs.o
	${CXX} ${CXXFLAGS} $^ -o $@

readStudents: courseRoster.o  readStudents.o  tddFuncs.o
	${CXX} ${CXXFLAGS} $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
