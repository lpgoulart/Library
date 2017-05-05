/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#include "headers.hpp"
#include "book.hpp"


//--------------------------------------------------------------------------------------------------------------------------
//	Getters & Setters
//--------------------------------------------------------------------------------------------------------------------------

	void setTitle () {
		std::getline( std::cin, this->Title );
	}

	std::string getTitle () {
		return this->Title;
	}

	void setAuthor () {
		std::getline( std::cin, this->Author );
	}

	std::string getAuthor () {
		return this->Author;
	}

	void setEditor () {
		std::getline( std::cin, this->Editor );
	}

	std::string getEditor () {
		return this->Editor;
	}

	void setYear () {
		std::cin >> this->Year;
	}

	int getYear () {
		return this->Year;
	}

//--------------------------------------------------------------------------------------------------------------------------
//	End Getters & Setters
//--------------------------------------------------------------------------------------------------------------------------
