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

	/**
	*	@brief name of the student who take the book
	*/
	std::string Student;


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
	*	@param Book title
	*/
	void setTitle ( std::string );

	/**
	*	@brief Get the book's title
	*	@return Title
	*/
	std::string getTitle ();

	/**
	*	@brief Set the author's name
	*	@param Author's name
	*/
	void setAuthor ( std::string );

	/**
	*	@brief Get the author's name
	*	@return Author's name
	*/
	std::string getAuthor ();

	/**
	*	@brief Set the editor's name
	*	@param Publisher's name
	*/
	void setEditor ( std::string );

	/**
	*	@brief Get the editor's name
	*	@return The editor
	*/
	std::string getEditor ();

	/**
	*	@brief Set the year of the book
	*	@param Year of the book
	*/
	void setYear ( std::string );

	/**
	*	@brief Get the year of release
	*	@return the year
	*/
	std::string getYear ();

	/**
	*	@brief Set the student that take the book
	*	@param Student who take the book
	*/
	void setStudent ( std::string );

	/**
	*	@brief Get the student who take the book
	*	@return Student
	*/
	std::string getStudent ();


	//--------------------------------------------------------------------------------------------------------------------------
	//	End of Getters & Setters
	//--------------------------------------------------------------------------------------------------------------------------


};

#endif
