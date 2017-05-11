/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#ifndef _CONTROL_HPP_
#define _CONTROL_HPP_

#include "headers.hpp"
#include "book.hpp"

class Control {

public:

	//--------------------------------------------------------------------------------------------------------------------------
	//	Constructor & Destructor
	//--------------------------------------------------------------------------------------------------------------------------

		/**
		*	@brief Constructor
		*/
		Control();


		/**
		*	@brief Destructor
		*/
		~Control();


	//--------------------------------------------------------------------------------------------------------------------------
	//	End of Constructor & Destructor
	//--------------------------------------------------------------------------------------------------------------------------

	//--------------------------------------------------------------------------------------------------------------------------
	//	
	//--------------------------------------------------------------------------------------------------------------------------

		/**
		*	@brief Search for books in the system
		*/
		void searchBook ();

		/**
		*	@brief See the book borrowed by the student
		*	@param Name of the book
		*	@return Name of the book founded on system
		*/
		std::string searchBook ( std::string, std::string );

		/**
		*	@brief See the student loan  
		*/
		void Loans ();

		/**
		*	@brief See the student loan
		*	@param student name	
		*	@param book title
		*/
		void Loans ( std::string, std::string );

		/**
		*	@brief Set the book available again
		*/
		void Devolution ();

		/**
		*	@brief See wich book is late for devolution
		*/
		void lateBook();

		/**
		*	@brief Check if the loan date has passed
		*/
		void check ( Book* );



	//--------------------------------------------------------------------------------------------------------------------------
	//	
	//--------------------------------------------------------------------------------------------------------------------------

};

#endif