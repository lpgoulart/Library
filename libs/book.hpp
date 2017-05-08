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
	std::string Year;

public:

	//--------------------------------------------------------------------------------------------------------------------------
	//	Constructor & Destructor
	//--------------------------------------------------------------------------------------------------------------------------

		/**
		*	@brief Constructor
		*/
		Book ();

		/**
		*	@brief Destructor
		*/
		~Book ();

	//--------------------------------------------------------------------------------------------------------------------------
	//	End of Constructor & Destructor
	//--------------------------------------------------------------------------------------------------------------------------

	//--------------------------------------------------------------------------------------------------------------------------
	//	Getters & Setters
	//--------------------------------------------------------------------------------------------------------------------------

	/**
	*	@brief Set the book title
	*/
	void setTitle ( std::string );

	/**
	*	@brief Get the book's title
	*/
	std::string getTitle ();

	/**
	*	@brief Set the author's name
	*/
	void setAuthor ( std::string );

	/**
	*	@brief Get the author's name
	*/
	std::string getAuthor ();

	/**
	*	@brief Set the editor's name
	*/
	void setEditor ( std::string );

	/**
	*	@brief Get the editor's name
	*/
	std::string getEditor ();

	/**
	*	@brief Set the year of the book
	*/
	void setYear ( std::string );

	/**
	*	@brief Get the year of release
	*/
	std::string getYear ();

	//--------------------------------------------------------------------------------------------------------------------------
	//	End of Getters & Setters
	//--------------------------------------------------------------------------------------------------------------------------


};

#endif