// assignment1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"Header.h"

int main()
{	
	string change;
	int choice;
	Book b[2];
	while (true){
		cout << "\n0. exit";
		cout << "\n1. Display all book informatiom ";
		cout << "\n2. Display specific informatiom  of book ";
		cout << "\n3. To edit informatiom  of book ";
		cout << "\n select choice : ";
		cin >> choice;
		getchar();

		switch (choice){
		case 0:
			exit(0);
		case 1:
			for (int i = 0; i < 2; i++)
				b[i].display_info();
			break;
		case 2:
			cout << "enter book name : ";
			getline(cin, change);

			for (int i = 0; i < 2; i++){
				if (change == b[i].book_title) b[i].display_specific_info();
			}
			break;
		case 3:
			cout << "enter book name : ";
			getline(cin, change);

			for (int i = 0; i < 2; i++){
				if (change == b[i].book_title) b[i].edit_info();
			}
			break;

		default :
			cout << "\nwrong choice";
		}
	}
}

