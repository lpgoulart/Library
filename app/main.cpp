/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*	@see book.hpp
*	@see student.hpp
*	@see control.hpp
*/

#include "../libs/headers.hpp"

int main () {

	Student superUser ( "Super User", "College", "1234" );
	Book book;
	Control control;
	std::string pass;

	int option;
	bool loop = true;

	std::cout << superUser.getName() << std::endl;
	std::cout << superUser.getAdress() << std::endl;

	while ( pass != superUser.getID() ) {

		std::getline ( std::cin, pass );

		if( pass == superUser.getID() ) {
			std::cout << "\033[2J\033[1;1H"; 
			std::cout << "Access granted\n\n";
		} 
		else {
			std::cout << "Try again\n\n";
		} 
	}

	do {
		option = -1;

		
		std::cout << "( 1 ) List all books";
		std::cout << "\n( 2 ) Search for a book";
		std::cout << "\n( 3 ) Search for Student";
		std::cout << "\n( 4 ) Devolutions";
		std::cout << "\n( 5 ) Late loans";
		std::cout << "\n( 0 ) End program";
		std::cout << "\nChoose wisely: ";

			while ( option < 0  || option > 6 ) {
				std::cin >> option;
				if ( option < 0 || option > 6 ) {
					std::cout << "Select a valid option: ";
				}
			}

		std::cout << "\033[2J\033[1;1H";
		std::cin.get();	

			switch ( option ) {
				
				case 1:
					book.List ();
				break;
				//search for a single book
				case 2:
					control.searchBook ();
				break;
				//search for a specific student and see if he have some borrow book
				case 3:
					control.Loans();
				break;
				//devolutions
				case 4:
					control.Devolution();
				break;
				//check late loans
				case 5:
					control.lateBook();
				break;
				case 0:
					loop = false;
				break;

				default:
				break;
			}

	} while ( loop );


	return 0;
}