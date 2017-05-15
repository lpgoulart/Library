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
	std::string ID;

public:

	//--------------------------------------------------------------------------------------------------------------------------
	//	Constructor & Destructor
	//--------------------------------------------------------------------------------------------------------------------------

		/**
		*	@brief Constructor
		*/
		Student ();

		/**
		*	@brief Construct overload
		*/
		Student ( std::string, std::string, std::string );

		/**
		*	@brief Destructor
		*/
		~Student ();

	//--------------------------------------------------------------------------------------------------------------------------
	//	End of Constructor & Destructor
	//--------------------------------------------------------------------------------------------------------------------------

	//--------------------------------------------------------------------------------------------------------------------------
	//	Getters & Setters
	//--------------------------------------------------------------------------------------------------------------------------

	/**
	*	@brief Set the student's name
	*	@param name of the student 
	*/
	void setName ( std::string );

	/**
	*	@brief Get the student's name
	*	@return name of the student
	*/
	std::string getName ();

	/**
	*	@brief Set the student's adress
	*	@param student adress
	*/
	void setAdress ( std::string );

	/**
	*	@brief Get the student's adress
	*	@return student adress
	*/
	std::string getAdress ();

	/**
	*	@brief Set the student's ID
	*	@param student ID
	*/
	void setID ( std::string );

	/**
	*	@brief Get the student's ID
	*	@return student ID
	*/
	std::string getID ();

	//--------------------------------------------------------------------------------------------------------------------------
	//	End of Gettters & Setters
	//--------------------------------------------------------------------------------------------------------------------------

	//--------------------------------------------------------------------------------------------------------------------------
	//	Search for students
	//--------------------------------------------------------------------------------------------------------------------------

	/**
	*	@brief Search for a specific student from ID
	*	@return Student's name
	*	@param ID
	*/
	std::string Search ( std::string );

	//--------------------------------------------------------------------------------------------------------------------------
	//	End search for students
	//--------------------------------------------------------------------------------------------------------------------------




};

#endif