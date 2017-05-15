/**
*	@author Leonardo Goulart
*	@author UFRN - Federal University of Rio Grande do Norte
*	@author Project to Programmig Language 1
*	@see control.hpp
*/

#include "../libs/headers.hpp"


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



//--------------------------------------------------------------------------------------------------------------------------
//	Search book by tittle
//--------------------------------------------------------------------------------------------------------------------------

	void Control::searchBook () {

		Book book;
		Student student;

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
					book.setAvailable( str );		
 
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

				if( book.getAvailable() == "Not Available" ) {
					std::cout << "Book borrowed by: " << student.Search( book.getStudent() ) << "\n\n";
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


//--------------------------------------------------------------------------------------------------------------------------
//	End search book by tittle
//--------------------------------------------------------------------------------------------------------------------------


	std::string Control::searchBook ( std::string bookT, std::string ID ) {

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
	        		std::getline ( filein, strTemp );//student
	        	strTemp = ID + "\n";
	        	fileout << strTemp;
	            	std::getline ( filein, strTemp );//available or not
	            strTemp = strNew;
	            strTemp += "\n";
	        	fileout << strTemp;
	            	std::getline ( filein, strTemp );//author
	            strTemp += "\n";
	        	fileout << strTemp;

	        		std::getline ( filein, strTemp );//editor
	            strTemp += "\n";
	        	fileout << strTemp;

	        		std::getline ( filein, strTemp ); //year
	            strTemp += "\n";
	        	fileout << strTemp;

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

	        if( strTemp == ID ){
	        	
	        	strTemp += "\n";
	        	fileOut << strTemp;
	            std::getline ( fileIn, strTemp );

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

						if ( book.Check( str ) != "Book not founded" ) {

							control.searchBook ( str, student.getID() );
						
						}	
						else {

							std::cout << "Book does not exist\n";
							std::cout << "Press Enter to continue..."; 
							std::getline ( std::cin, id );
							std::cout << "\033[2J\033[1;1H";
						}
				} 
			}
		} 
		else {
			std::cout << "\nFile is not open\n";
		}

		myFile.close();
	}


	void Control::Loans ( std::string id, std::string title ) {

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
	        		std::getline ( filein, strTemp );//student
	        	strTemp = "\n";
	        	fileout << strTemp;
	            	std::getline ( filein, strTemp );//available or not
	            strTemp = strNew;
	            strTemp += "\n";
	        	fileout << strTemp;
	            	std::getline ( filein, strTemp );//author
	            strTemp += "\n";
	        	fileout << strTemp;
	        		std::getline ( filein, strTemp );//editor
	            strTemp += "\n";
	        	fileout << strTemp;
	        		std::getline ( filein, strTemp ); //year
	            strTemp += "\n";
	        	fileout << strTemp;

				strTemp = "";      	

	        	fileout << strTemp + "\n";
	        	std::getline ( filein, strTemp );
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

	        if( strTemp == id ){
	        	
	        	strTemp += "\n";
	        	fileOut << strTemp;
	            std::getline ( fileIn, strTemp );

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
		Student student;
		Book book;

		std::string id;
		std::string title;

		std::cout << "Enter ID: ";

		std::getline ( std::cin , id );

		if ( student.Search ( id ) != "Student not founded" ) {

			std::cout << "Title of the book for devolution: ";

			std::getline ( std::cin , title );

				if ( book.Check( title ) != "Book not founded" ) {
					control.Loans ( id, title );
				} 
				else {
					std::cout << "Book tittle does not exist \n\n";
				}
		} else {
			std::cout << "Student ID does not exist \n\n";
		}

		std::cout << "Press Enter to continue..."; 
		std::getline ( std::cin, id );
		std::cout << "\033[2J\033[1;1H";
	}

	void Control::check( Book* book ) {

		Student student;

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
			std::cout << "Student: " << student.Search( book->getStudent() ) << std::endl;
			std::cout << "Book: " << book->getTitle() << std::endl;
			std::cout << "\nLATE\n\n";
		}
	}

	void Control::lateBook() {

		Book* book = new Book;
		std::string strTemp;

		std::ifstream filein ( "../txt/books.txt" );

		while( std::getline ( filein, strTemp ) )
	    {
	    	book->setTitle ( strTemp ); //book title
	    		std::getline ( filein, strTemp ); //available or not
	    	book->setStudent( strTemp );
	    		std::getline ( filein, strTemp ); //available or not
	    	book->setAvailable( strTemp );
	    		std::getline ( filein, strTemp ); //author's name
	    	book->setAuthor ( strTemp ); 
	    		std::getline ( filein, strTemp ); //publisher's name
	    	book->setEditor ( strTemp );
	    		std::getline ( filein, strTemp ); //release year
	    	book->setYear ( strTemp );
	    		std::getline ( filein, strTemp ); //loan date
	    	book->setDate( strTemp );

	    	if( ( book->getAvailable() ==  "Not Available" )  ) {
	    		check ( book );
	    	}
	    }

	    //delete book;
	}

//--------------------------------------------------------------------------------------------------------------------------
//	End functions
//--------------------------------------------------------------------------------------------------------------------------
