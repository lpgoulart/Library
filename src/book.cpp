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

	void Book::setTitle () {
		std::getline( std::cin, this->Title );
	}

	std::string Book::getTitle () {
		return this->Title;
	}

	void Book::setAuthor () {
		std::getline( std::cin, this->Author );
	}

	std::string Book::getAuthor () {
		return this->Author;
	}

	void Book::setEditor () {
		std::getline( std::cin, this->Editor );
	}

	std::string Book::getEditor () {
		return this->Editor;
	}

	void Book::setYear () {
		std::cin >> this->Year;
	}

	int Book::getYear () {
		return this->Year;
	}

//--------------------------------------------------------------------------------------------------------------------------
//	End Getters & Setters
//--------------------------------------------------------------------------------------------------------------------------
