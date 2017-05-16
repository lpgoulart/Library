/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*	@see book.hpp
*/

#include "../libs/headers.hpp"

//--------------------------------------------------------------------------------------------------------------------------
//	Constructor & Destructor
//--------------------------------------------------------------------------------------------------------------------------
	
	Book::Book () {

	}

	Book::~Book () {

	}

//--------------------------------------------------------------------------------------------------------------------------
//	End of Constructor & Destructor
//--------------------------------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------------------------------
//	Getters & Setters
//--------------------------------------------------------------------------------------------------------------------------

	void Book::setTitle ( std::string title ) {
		this->Title = title;
	}

	std::string Book::getTitle () {
		return this->Title;
	}

	void Book::setAuthor ( std::string author ) {
		this->Author = author;
	}

	std::string Book::getAuthor () {
		return this->Author;
	}

	void Book::setEditor ( std::string editor ) {
		this->Editor = editor;
	}

	std::string Book::getEditor () {
		return this->Editor;
	}

	void Book::setYear ( std::string year ) {
		this->Year = year;
	}

	std::string Book::getYear () {
		return this->Year;
	}

	void Book::setStudent ( std::string student ) {
		this->Student = student;
	}

	std::string Book::getStudent () {
		return this->Student;
	}

	void Book::setDate ( std::string date ) {
		this->Date = date;
	}

	std::string Book::getDate () {
		return this->Date;
	}

	void Book::setAvailable ( std::string available ) {
		this->Available = available;
	}

	std::string Book::getAvailable () {
		return this->Available;
	}
	
//--------------------------------------------------------------------------------------------------------------------------
//	End Getters & Setters
//--------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------------------
//	List function
//--------------------------------------------------------------------------------------------------------------------------

	void Book::List () {

		Book book;

		std::ifstream filein ( "../txt/books.txt" );

		std::string strTemp;

		std::cout << "Collection\n\n";

		while ( std::getline ( filein, strTemp ) ) {

			std::cout << strTemp << std::endl; //prints the book's tittle
			std::getline ( filein, strTemp ); //avoid the student ID
			std::getline ( filein, strTemp ); //avoid the availability

			std::getline ( filein, strTemp );
			std::cout << strTemp << std::endl; //prints the author's name

			std::getline ( filein, strTemp );
			std::cout << strTemp << std::endl; //prints the author's name

			std::getline ( filein, strTemp );
			std::cout << strTemp << std::endl; //prints the editor's name

			std::getline ( filein, strTemp );
			std::cout << "" << std::endl; 

		}

		std::cout << "Press Enter to continue..."; 
		std::getline ( std::cin, strTemp );
		std::cout << "\033[2J\033[1;1H";

	}

//--------------------------------------------------------------------------------------------------------------------------
//	End of list function
//--------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------------------
//	Check function
//--------------------------------------------------------------------------------------------------------------------------

	std::string Book::Check ( std::string bookTittle ) {

		std::ifstream filein( "../txt/books.txt" );

		std::string strTemp;

		while ( std::getline ( filein, strTemp ) ) {
			if( strTemp == bookTittle ) {
				return "";
			}
		}

		return "Book not founded";
	}

//--------------------------------------------------------------------------------------------------------------------------
//	End of check function
//--------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------------------
//	Operator overload
//--------------------------------------------------------------------------------------------------------------------------

	bool Book::operator < ( std::string loan ) {
		if( this->Date < loan ) {
			return true;
		}
		else {
			return false;
		}
	}

//--------------------------------------------------------------------------------------------------------------------------
//	End of operator overload
//--------------------------------------------------------------------------------------------------------------------------

