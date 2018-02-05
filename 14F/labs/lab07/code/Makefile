#CXX = g++
CXX = clang++

CXXFLAGS= -Wall -Wno-uninitialized -std=c++11

BINARIES= initAirportFromStringTest readAirports

COMMON_OBJECT_FILES= tddFuncs.o airportFuncs.o utility.o

all: ${BINARIES}

tests: ${BINARIES}
	./initAirportFromStringTest
	./readAirports 5airports.csv
	./readAirports airports.csv
	./readAirports nevadaAirports.csv
	./readAirports californiaAirports.csv

initAirportFromStringTest: initAirportFromStringTest.o $(COMMON_OBJECT_FILES)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

readAirports: readAirports.o $(COMMON_OBJECT_FILES)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
