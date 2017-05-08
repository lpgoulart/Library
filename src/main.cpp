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

	Student superUser ( "Super User", "College", 1234 );
	Control control;
	int pass; 
	int option;
	bool loop = true;

	std::cout << superUser.getName() << std::endl;
	std::cout << superUser.getAdress() << std::endl;

	while ( pass != superUser.getID() ) {

		std::cin >> pass;

		if( pass == superUser.getID() ) {
			std::cout << "\033[2J\033[1;1H"; 
			std::cout << "Access granted\n\n";
		} 
		else {
			std::cout << "Try again\n\n";
		} 
	}
	std::cin.get();	


	do {
		option = -1;
		

		std::cout << "\n( 1 ) Search for a book\n";
		std::cout << "( 0 ) End program\n\n";
		std::cout << "\nChoose wisely: ";

		while ( option < 0  || option >= 2 ) {
			std::cin >> option;
			if ( option < 0 || option > 1 ) {
				std::cout << "Select a valid option: ";
			}
		}
		std::cout << "\033[2J\033[1;1H";
		std::cin.get();	

		switch ( option ) {
			case 1:
				control.searchBook();
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