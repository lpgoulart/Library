/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#include "../libs/headers.hpp"
#include "../libs/student.hpp"
#include "../libs/book.hpp"
#include "../libs/control.hpp"

int main () {

	Student superUser ( "Super User", "College", "1234" );
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
		
		std::cout << "\n( 1 ) Search for a book";
		std::cout << "\n( 2 ) Search for Student";
		std::cout << "\n( 0 ) End program";
		std::cout << "\nChoose wisely: ";

			while ( option < 0  || option >= 3 ) {
				std::cin >> option;
				if ( option < 0 || option > 3 ) {
					std::cout << "Select a valid option: ";
				}
			}

		std::cout << "\033[2J\033[1;1H";
		std::cin.get();	

			switch ( option ) {
				//search for a single book
				case 1:
					control.searchBook ();
				break;
				//search for a specific student and see if he have some borrow book
				case 2:
					control.Loans();
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