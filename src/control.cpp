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
					book.setStudent( str );					

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

				if( book.getStudent() == "Not Available" ) {
					std::cout << "Book borrowed\n\n";
				}
				else {
					std::cout << "Available\n\n";
				}

			}
		}
		else {
			std::cout << "\nFile is not open\n";
		}

		myFile.close();
	}


	std::string Control::searchBook ( std::string bookT, std::string Name ) {

		time_t now = time(0);

   		tm *ltm = localtime(&now);

		std::string strReplace = "Available";
		std::string strNew = "Not Available";

		std::ifstream filein( "../txt/books.txt" ); 
    	std::ofstream fileout( "../txt/temp.txt" );

    	std::string strTemp;

	    while( std::getline ( filein, strTemp ) )
	    {

	        if( strTemp == bookT ){
	        	strTemp += "\n";
	        	fileout << strTemp;
	            std::getline ( filein, strTemp );
	            strTemp = strNew;
	            strTemp += "\n";
	        	fileout << strTemp;
	            //change NotAvailable
	            std::getline ( filein, strTemp );
	            strTemp += "\n";
	        	fileout << strTemp;

	        	std::getline ( filein, strTemp );
	            strTemp += "\n";
	        	fileout << strTemp;

	        	std::getline ( filein, strTemp );
	            strTemp += "\n";
	        	fileout << strTemp;

	        	std::getline ( filein, strTemp );

	        		int Dconf = ltm->tm_mday;
					int Mconf = ltm->tm_mon;

				  	if( Dconf < 10 ) {
				    	if( Mconf < 10 ) {
				        	strTemp = "0" + std::to_string( ltm->tm_mday + 5 ) + "/0" + std::to_string( 1 + ltm->tm_mon ) + "/" + std::to_string(  1900 + ltm->tm_year );
				      	}
				     	else {
				        	strTemp = "0" + std::to_string( ltm->tm_mday + 5 ) + "/" + std::to_string( 1 + ltm->tm_mon ) + "/" + std::to_string(  1900 + ltm->tm_year );
				      	}
				  	}
				  	else {
				    	if( Mconf < 10 ) {
				        	strTemp = std::to_string( ltm->tm_mday + 5 ) + "/0" + std::to_string( 1 + ltm->tm_mon ) + "/" + std::to_string(  1900 + ltm->tm_year );
				      	}
				      	else {
				        	strTemp = std::to_string( ltm->tm_mday + 5 ) + "/" + std::to_string( 1 + ltm->tm_mon ) + "/" + std::to_string(  1900 + ltm->tm_year );
				      	}
				  	}

	        	fileout << strTemp + "\n";
	        	std::getline ( filein, strTemp );

	        }
	        strTemp += "\n";
	        fileout << strTemp;
	    }
	    remove ( "../txt/books.txt" );
	    rename ( "../txt/temp.txt", "../txt/books.txt" );



	    strNew = bookT;
	    strReplace = "";

	    std::ifstream fileIn( "../txt/students.txt" ); 
    	std::ofstream fileOut( "../txt/temp.txt" );

    	strTemp = "";

	    while( std::getline ( fileIn, strTemp ) )
	    {

	        if( strTemp == Name ){
	        	
	        	strTemp += "\n";
	        	fileOut << strTemp;
	            std::getline ( fileIn, strTemp );

	            strTemp += "\n";
	        	fileOut << strTemp;
	            std::getline ( fileIn, strTemp );
	            
	            strTemp = strNew;
	        }
	        strTemp += "\n";
	        fileOut << strTemp;
	    }
	    remove ( "../txt/students.txt" );
	    rename ( "../txt/temp.txt", "../txt/students.txt" );

	    return bookT;
	}


	void Control::Loans () {

		Control control;
		Student student;
		Book book;

		std::fstream myFile;
	    myFile.open ("../txt/students.txt", std::fstream::in | std::fstream::out);

	    std::string studentID = "";
		std::string id;
		std::string str;
		std::string adress;

		std::cout << "Enter the student ID...: " << std::endl;
		std::getline ( std::cin, id );

		if( myFile.is_open() ) {

			while( std::getline ( myFile, studentID ) ) {
				if( studentID == id ) {
					std::cout << "Student founded\n\n";
					student.setID ( studentID );

						std::getline ( myFile, str );
					student.setName( str );

						std::getline ( myFile, str );
					student.setAdress( str );
					adress = str;
					
						std::getline ( myFile, str );
					book.setTitle( str );
				
					break;
				}
			}	

			if ( myFile.eof() == true ) {
					std::cout << "Student not founded\n";
			}
			else {

				std::cout << student.getName() << std::endl;
				std::cout << student.getAdress() << std::endl;
				std::cout << student.getID() << std::endl;
				
				if( book.getTitle() != "" ) {
					std::cout << "\nBook borrowed by the student: ";
					std::cout << book.getTitle() << std::endl;
				} 
				else {
					std::cout << "\nBorrow book: ";
					std::getline ( std::cin, str );
					control.searchBook ( str, student.getName() );
				}
			}
		} 
		else {
			std::cout << "\nFile is not open\n";
		}

		myFile.close();
	}


	void Control::Loans ( std::string name, std::string title ) {

		time_t now = time(0);

   		tm *ltm = localtime(&now);

		std::string strReplace = "Not Available";
		std::string strNew = "Available";

		std::ifstream filein( "../txt/books.txt" ); 
    	std::ofstream fileout( "../txt/temp.txt" );

    	std::string strTemp;

	    while( std::getline ( filein, strTemp ) )
	    {

	        if( strTemp == title ){
	        	strTemp += "\n";
	        	fileout << strTemp;
	            std::getline ( filein, strTemp );
	            strTemp = strNew;
	            strTemp += "\n";
	        	fileout << strTemp;
	            //change available
	            std::getline ( filein, strTemp );
	            strTemp += "\n";
	        	fileout << strTemp;

	        	std::getline ( filein, strTemp );
	            strTemp += "\n";
	        	fileout << strTemp;

	        	std::getline ( filein, strTemp );
	            strTemp += "\n";
	        	fileout << strTemp;

	        	std::getline ( filein, strTemp );

		        	int Dconf = ltm->tm_mday;
					int Mconf = ltm->tm_mon;

				  	if( Dconf < 10 ) {
				    	if( Mconf < 10 ) {
				        	strTemp = "0" + std::to_string( 1 ) + "/0" + std::to_string( 1  ) + "/" + std::to_string(  1905 + ltm->tm_year );
				      	}
				     	else {
				        	strTemp = "0" + std::to_string( 1 ) + "/" + std::to_string( 1 ) + "/" + std::to_string(  1905 + ltm->tm_year );
				      	}
				  	}
				  	else {
				    	if( Mconf < 10 ) {
				        	strTemp = "0" + std::to_string( 1 ) + "/0" + std::to_string( 1 ) + "/" + std::to_string(  1905 + ltm->tm_year );
				      	}
				      	else {
				        	strTemp = "0" + std::to_string( 1 ) + "/" + std::to_string( 1 ) + "/" + std::to_string(  1905 + ltm->tm_year );
				      	}
				  	}

	        	fileout << strTemp + "\n";
	        	std::getline ( filein, strTemp );
	        }
	        strTemp += "\n";
	        fileout << strTemp;
	    }
	    remove ( "../txt/books.txt" );
	    rename ( "../txt/temp.txt", "../txt/books.txt" );



	    strReplace = title;
	    strNew = "";

	    std::ifstream fileIn( "../txt/students.txt" ); 
    	std::ofstream fileOut( "../txt/temp.txt" );

    	strTemp = "";

	    while( std::getline ( fileIn, strTemp ) )
	    {

	        if( strTemp == name ){
	        	
	        	strTemp += "\n";
	        	fileOut << strTemp;
	            std::getline ( fileIn, strTemp );

	            strTemp += "\n";
	        	fileOut << strTemp;
	            std::getline ( fileIn, strTemp );
	            
	            strTemp = strNew;
	        }
	        strTemp += "\n";
	        fileOut << strTemp;
	    }
	    remove ( "../txt/students.txt" );
	    rename ( "../txt/temp.txt", "../txt/students.txt" );
	}


	void Control::Devolution () {
		
		Control control;

		std::string name;
		std::string title;

		std::cout << "Who are you?...\nEnter name: ";

		std::getline ( std::cin , name );

		std::cout << "Title of the book for devolution: ";

		std::getline ( std::cin , title );

		control.Loans ( name, title );
	}

	void Control::check( Book* book ) {

		std::ifstream filein( "../txt/books.txt" ); 

		std::string loan;

		time_t now = time(0);

		tm *ltm = localtime(&now);

		int Dconf = ltm->tm_mday;
		int Mconf = ltm->tm_mon;

		if( Dconf < 10 ) {
	    	if( Mconf < 10 ) {
	 	    	loan = "0" + std::to_string( ltm->tm_mday ) + "/0" + std::to_string( 1 + ltm->tm_mon ) + "/" + std::to_string(  1900 + ltm->tm_year );
	 	    }
	 	   	else {
	 	    	loan = "0" + std::to_string( ltm->tm_mday ) + "/" + std::to_string( 1 + ltm->tm_mon ) + "/" + std::to_string(  1900 + ltm->tm_year );
	 	    }
		}
		else {
	   		if( Mconf < 10 ) {
		    	loan = std::to_string( ltm->tm_mday ) + "/0" + std::to_string( 1 + ltm->tm_mon ) + "/" + std::to_string(  1900 + ltm->tm_year );
	 	    }
	 	   	else {
	 	    	loan = std::to_string( ltm->tm_mday ) + "/" + std::to_string( 1 + ltm->tm_mon ) + "/" + std::to_string(  1900 + ltm->tm_year );
	 	    }
	}

		loan = loan;

		if ( book->getDate() < loan ) {
			std::cout << book->getTitle();
			std::cout << "\nLATE\n\n";
		}
		delete ltm;
	}

	void Control::lateBook() {

		Book* book = new Book;
		std::string strTemp;
		std::string AorN;

		std::ifstream filein ( "../txt/books.txt" );

		while( std::getline ( filein, strTemp ) )
	    {
	    	book->setTitle ( strTemp ); //book title
	    	std::getline ( filein, strTemp ); //available or not
	    	AorN = strTemp;
	    	std::getline ( filein, strTemp ); //author's name
	    	book->setAuthor ( strTemp ); 
	    	std::getline ( filein, strTemp ); //publisher's name
	    	book->setEditor ( strTemp );
	    	std::getline ( filein, strTemp ); //release year
	    	book->setYear ( strTemp );
	    	std::getline ( filein, strTemp ); //loan date
	    	book->setDate( strTemp );

	    	if( ( AorN ==  "Not Available" )  ) {
	    		check ( book );
	    	}
	    }

	    delete book;
	}

//--------------------------------------------------------------------------------------------------------------------------
//	End functions
//--------------------------------------------------------------------------------------------------------------------------
