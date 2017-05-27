CC=g++
CFLAGS=-std=c++11 `pkg-config --cflags gtk+-2.0`
LIBS=`pkg-config --libs gtk+-2.0`
LDFLAGS=-lgtk -lgdk -lglib -lm
DEBUG=-Wall -g
LDFLAGS=`pkg-config --libs gtk+-2.0`
SOURCES=$(wildcard *.cpp)
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=eecalc

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) -o eecalc $(LDFLAGS) $(OBJECTS) $(LIBS)

.cpp.o:
	$(CC) $(DEBUG) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
