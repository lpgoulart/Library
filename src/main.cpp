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

	control.Loan ();


	return 0;
}