/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#include "../libs/headers.hpp"
#include "../libs/student.hpp"

//--------------------------------------------------------------------------------------------------------------------------
//	Constructor & Destructor
//--------------------------------------------------------------------------------------------------------------------------
	
	Student::Student () {

	}

	Student::~Student () {

	}

//--------------------------------------------------------------------------------------------------------------------------
//	End of Constructor & Destructor
//--------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------------------
//	Getters & Setters
//--------------------------------------------------------------------------------------------------------------------------

	void Student::setName () {
		std::getline( std::cin, this->Name );
	}

	std::string Student::getName () {
		return this->Name;
	}

	void Student::setAdress () {
		std::getline( std::cin, this->Adress );	
	}

	std::string Student::getAdress () {
		return this->Adress;
	}

	void Student::setID () {
		std::cin >> this->ID;
	}

	int Student::getID () {
		return this->ID;
	}

//--------------------------------------------------------------------------------------------------------------------------
//	End Getters & Setters
//--------------------------------------------------------------------------------------------------------------------------
