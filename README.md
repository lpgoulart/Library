# Library

This code simulate a simple library system toten that make loans, devolutions, book searches and check availability, writen in C++ on Programmig Language 1 grade at the IT Bachelor degree - UFRN

## Information

* More information [available, soon, on lpgoulart.wordpress.com](https://lpgoulart.wordpress.com)
* Source code [available on GitHub](https://github.com/lpgoulart/Library)

## Getting Help

* Report bugs on the [issue tracker](https://github.com/lpgoulart/Library/issues).

## Installation

* Download the full repository from my github [click here](https://github.com/lpgoulart/Library), or follow the steps below:

* On terminal:

```
	$ git clone https://github.com/lpgoulart/Library.git
	$ cd Library
	$ make

```

* To run, just go bin directory by typing:

```
	$ cd bin
	./Library

```

* The SuperUser access password is "1234"

## Report
	
*	Search

	src/control.cpp: In member function ‘void Control::searchBook()' 

	src/control.cpp:36: Search for book by tittle

*	Loan

	src/control.cpp: In member function: 'std::string Control::searchBook ( std::string bookT, std::string ID )'

	src/control.cpp:108: Make a loan

	src/control.cpp: In member function: 'void Control::Loans ()'
	
	src/control.cpp:217: Make a loan

*	Late loan

	src/control.cpp: In member function: 'void Control::check( Book* book )'
	
	src/control.cpp:411: Check if is there any late loan in the system

	src/control.cpp: In member function: 'void Control::lateBook()'
	
	src/control.cpp:452: Check if is there any late loan in the system

*	Usage of Memory allocation

	Getters && Setters from:

	src/book.cpp

	src/student.cpp

*	Usage of operator overload "<"

	src/control.cpp: In member function: 'void Control::check( Book* book )'
	
	src/control.cpp:446: Check if is there any late loan in the system


*	Insertion of Students
	
	Directly in the files *.txt, follow the instructions below:


```
	> 1 		    ( ID ) 
	> Leonardo Goulart  ( Student's name )
	> Manaus, Amazonas  ( Student's adress )
	> 		    ( Book borrowed by the student )
	...

```

*	Insertion of Books

	Directly in the file *.txt, follow the instructions below:


```
	> O nome do vento	( Book tittle )
	> 			( ID of student who borrow the book )
	> Available 		( Availability )
	> Patrick Ruthfuss	( Author's name )
	> The archer		( Editor's name )
	> 2011			( Year of publication )
	> 			( Loan date )
	... 

```

