

BINARIES=cmdLineTriangle askTriangle

# "all" depends on the "BINARIES"
#  when you type "make all" it will try to make all the BINARIES

all: ${BINARIES}

cmdLineTriangle: cmdLineTriangle.o areaOfTriangle.o
	g++ cmdLineTriangle.o areaOfTriangle.o -o cmdLineTriangle

askTriangle: askTriangle.o areaOfTriangle.o
	g++ askTriangle.o areaOfTriangle.o -o askTriangle

# this rule allows me to type "make clean" and get rid of all .o files
# and all of the executable files (BINARIES)

clean:
	/bin/rm -f *.o ${BINARIES}

