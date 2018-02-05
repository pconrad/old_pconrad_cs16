
# CXX=g++
CXX=clang++

CXXFLAGS=-Wall -Wno-uninitialized

BINARIES=ptrDemo

all:	$(BINARIES)


ptrDemo: ptrDemo.o demo1.o demo2.o demo3.o demo4.o
	$(CXX) $(CXXFLAGS) $^ -o $@

# We will get:
#  clang++ -Wall ptrDemo.o demo1.o demo2.o demo3.o demo4.o -o ptrDemo

clean:
	/bin/rm -f $(BINARIES) *.o
