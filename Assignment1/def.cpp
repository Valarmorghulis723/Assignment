
#include "venera1.h"
Book :: Book(){

	cout << "default constructor is called" << endl;

	cout << "Book title : ";
	cin >> book_title;

	cout << "Author name : ";
	cin >> book_author;

	cout << "publisher name : ";
	cin>> book_publisher;

	cout << "ISBN no. : ";
	cin >> (isbn);

	cout << "publication year : ";
	cin >> pyear;
}

void Book :: display_info(void){

	cout << book_title << endl;
	cout << book_author << endl;
	cout << book_publisher << endl;
	cout << isbn << endl;
	cout << pyear;
}

void Book :: display_specific_info(void){

	cout << book_title << endl;
	cout << book_author << endl;
	cout << pyear;
}

void Book ::  edit_info(void){
}

Book :: ~ Book(){
	cout <<"default distructor is called \n";
}

