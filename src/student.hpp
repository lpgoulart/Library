/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#ifndef _STUDENT_HPP_
#define _STUDENT_HPP_

#include "headers.hpp"

class Student {

private:
	
	/**
	*	@brief student name
	*/
	std::string Name;

	/**
	*	@brief student adress
	*/
	std::string Adress;

	/**
	*	@brief student ID
	*/
	int ID;

public:

	//--------------------------------------------------------------------------------------------------------------------------
	//	Getters & Setters
	//--------------------------------------------------------------------------------------------------------------------------

	/**
	*	@brief Set the student's name
	*/
	void setName ();

	/**
	*	@brief Get the student's name
	*/
	std::string getName ();

	/**
	*	@brief Set the student's adress
	*/
	void setAdress ();

	/**
	*	@brief Get the student's adress
	*/
	std::string getAdress ();

	/**
	*	@brief Set the student's ID
	*/
	void setID ();

	/**
	*	@brief Get the student's ID
	*/
	int getID ();

	//--------------------------------------------------------------------------------------------------------------------------
	//	
	//--------------------------------------------------------------------------------------------------------------------------


}

#endif