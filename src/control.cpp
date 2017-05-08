/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#include "../libs/headers.hpp"
#include "../libs/control.hpp"
#include "../libs/book.hpp"
#include "../libs/student.hpp"

//--------------------------------------------------------------------------------------------------------------------------
//	Constructor & Destructor
//--------------------------------------------------------------------------------------------------------------------------
	
	Control::Control () {

	}

	Control::~Control () {

	}

//--------------------------------------------------------------------------------------------------------------------------
//	End of Constructor & Destructor
//--------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------------------
//	Functions
//--------------------------------------------------------------------------------------------------------------------------

	void Control::searchBook () {

		Book book;

		std::fstream myFile;
	    myFile.open ("../txt/books.txt", std::fstream::in | std::fstream::out);

		std::string bookTitle = "";
		std::string Title;
		std::string str;

		std::cout << "What book are you looking at?" << std::endl;
		std::getline ( std::cin, Title );

		if( myFile.is_open() ) {

			while( std::getline ( myFile, bookTitle ) ) {
				if( bookTitle == Title ) {
					std::cout << "Book founded\n\n";
					book.setTitle ( bookTitle );

						std::getline ( myFile, str );					

						std::getline ( myFile, str );
					book.setAuthor( str );

						std::getline ( myFile, str );
					book.setEditor( str );
					
						std::getline ( myFile, str );
					book.setYear( str );
					break;
				}
			}	

			if ( myFile.eof() == true ) {
					std::cout << "Book not founded\n";
				}
			else {

				std::cout << book.getTitle() << std::endl;
				std::cout << book.getAuthor() << std::endl;
				std::cout << book.getEditor() << std::endl;
				std::cout << book.getYear() << std::endl;
			}
		}
		else {
			std::cout << "\nFile is not open\n";
		}

	}

//--------------------------------------------------------------------------------------------------------------------------
//	End functions
//--------------------------------------------------------------------------------------------------------------------------
