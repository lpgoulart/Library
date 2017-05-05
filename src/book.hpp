/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#ifndef _BOOK_HPP_
#define _BOOK_HPP_

#include "headers.hpp"

class Book {

private:
	
	/**
	*	@brief book title
	*/
	std::string Title;

	/**
	*	@brief author name
	*/
	std::string Author;

	/**
	*	@brief book editor
	*/
	std::string Editor;

	/**
	*	@brief release year of the book
	*/
	int year;

public:

	//--------------------------------------------------------------------------------------------------------------------------
	//	Constructor & Destructor
	//--------------------------------------------------------------------------------------------------------------------------

		/**
		*	@brief Constructor
		*/
		Book::Book ();

		/**
		*	@brief Destructor
		*/
		Book::~Book ();

	//--------------------------------------------------------------------------------------------------------------------------
	//	End of Constructor & Destructor
	//--------------------------------------------------------------------------------------------------------------------------

	//--------------------------------------------------------------------------------------------------------------------------
	//	Getters & Setters
	//--------------------------------------------------------------------------------------------------------------------------

	/**
	*	@brief Set the book title
	*/
	void setTitle ();

	/**
	*	@brief Get the book's title
	*/
	std::string getTitle ();

	/**
	*	@brief Set the author's name
	*/
	void setAuthor ();

	/**
	*	@brief Get the author's name
	*/
	std::string getAuthor ();

	/**
	*	@brief Set the editor's name
	*/
	void setEditor ();

	/**
	*	@brief Get the editor's name
	*/
	std::string getEditor ();

	/**
	*	@brief Set the year of the book
	*/
	void setYear ();

	/**
	*	@brief Get the year of release
	*/
	int getYear ();

	//--------------------------------------------------------------------------------------------------------------------------
	//	End of Getters & Setters
	//--------------------------------------------------------------------------------------------------------------------------


}

#endif