CC = g++
CPPFLAGS = -W -Wall -O0 -pedantic -std=c++11
CPPOBJCS = src/main.o src/student.o src/book.o src/control.o
PROG = bin/library

all: dir $(PROG) move

dir:
	mkdir -p bin build 

$(PROG): $(CPPOBJCS)
	$(CC) $(CPPOBJCS) -o $(PROG)

main.o: src/main.cpp
	$(CC) $(CPPFLAGS) -c src/main.cpp

student.o: src/student.cpp
	$(CC) $(CPPFLAGS) -c src/student.cpp

book.o: src/book.cpp
	$(CC) $(CPPFLAGS) -c src/book.cpp

control.o: src/control.cpp
	$(CC) $(CPPFLAGS) -c src/control.cpp

move:
	mv $(CPPOBJCS) build/

clean:
	-rm -rf build/*.o $(PROG) bin build