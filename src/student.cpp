/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#include "headers.hpp"
#include "student.hpp"

//--------------------------------------------------------------------------------------------------------------------------
//	Getters & Setters
//--------------------------------------------------------------------------------------------------------------------------

	void setName () {
		std::getline( std::cin, this->Name );
	}

	std::string getName () {
		return this->name
	}

	void setAdress () {
		std::getline( std::cin, this->Adress );	
	}

	std::string getAdress () {
		return this->Adress;
	}

	void setID () {
		std::cin >> this->ID;
	}

	int getID () {
		return this->ID
	}

//--------------------------------------------------------------------------------------------------------------------------
//	End Getters & Setters
//--------------------------------------------------------------------------------------------------------------------------
