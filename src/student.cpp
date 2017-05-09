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

	Student::Student ( std::string user, std::string college, std::string password ) {
		
		this->Name = user;
		this->Adress = college;
		this->ID = password;

	}

	Student::~Student () {

	}

//--------------------------------------------------------------------------------------------------------------------------
//	End of Constructor & Destructor
//--------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------------------
//	Getters & Setters
//--------------------------------------------------------------------------------------------------------------------------

	void Student::setName ( std::string name ) {
		this->Name = name;
	}

	std::string Student::getName () {
		return this->Name;
	}

	void Student::setAdress ( std::string adress ) {
		this->Adress = adress;	
	}

	std::string Student::getAdress () {
		return this->Adress;
	}

	void Student::setID ( std::string id ) {
		this->ID = id;
	}

	std::string Student::getID () {
		return this->ID;
	}

//--------------------------------------------------------------------------------------------------------------------------
//	End Getters & Setters
//--------------------------------------------------------------------------------------------------------------------------
