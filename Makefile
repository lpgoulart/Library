CC = g++
CPPFLAGS = -W -Wall -O0 -pedantic -std=c++11
CPPOBJCS = app/main.o src/student.o src/book.o src/control.o
PROG = bin/library
TXT = txt/students.txt txt/books.txt

all: dir text $(PROG) move

dir:
	mkdir -p bin build 

text:
	touch $(TXT)

$(PROG): $(CPPOBJCS)
	$(CC) $(CPPOBJCS) -o $(PROG)

main.o: app/main.cpp
	$(CC) $(CPPFLAGS) -c app/main.cpp

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