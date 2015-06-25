CC = g++
CFLAGS =-c -Wall
CXXFLAGS = -g -std=c++11
#CXXFLAGS=-O3 -std=c++0x -pg -D_DEBUG -g -c -Wall
LDFLAGS=
SOURCES = main.cpp rng.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE = main

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

#CXX = icpc

clean:
	rm -rf *.o main

