CC = g++
CPPFLAGS = -W -Wall -O0 -pedantic -ansi -std=c++11
CPPOBJCS = src/main.o 
PROG = bin/library

all: dir $(PROG)

dir:
	mkdir -p bin

$(PROG): $(CPPOBJCS)
	$(CC) $(CPPOBJCS) -o $(PROG)

