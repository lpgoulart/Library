/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#include "../libs/headers.hpp"
#include "../libs/book.hpp"

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
