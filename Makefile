CC = g++
CPPFLAGS = -W -Wall -O0 -pedantic -ansi -std=c++11
CPPOBJCS = src/main.o src/student.o src/book.o src/control.o
PROG = bin/library

all: dir $(PROG)

dir:
	mkdir -p bin

$(PROG): $(CPPOBJCS)
	$(CC) $(CPPOBJCS) -o $(PROG)

main.o: 
	$(CC) $(CPPFLAGS) -c src/main.cpp

student.o: 
	$(CC) $(CPPFLAGS) -c src/student.cpp

book.o: 
	$(CC) $(CPPFLAGS) -c src/book.cpp

control.o: 
	$(CC) $(CPPFLAGS) -c src/control.cpp

clean:
	-rm -rf src/*.o $(PROG) bin