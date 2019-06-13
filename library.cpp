#include "stdafx.h"
#include "Header.h"



student::student(){
	//cout << "\ndefault constructor is called \n";
}

void student::getdata(void){
	cout << "enter name : ";
	getline(cin, name);

	//	getchar();

	cout << "enter USN number : ";
	getline(cin, USN);

	for (int i = 0; i < 3; i++){
		cout << "enter subject " << i + 1 << " marks : ";
		cin >> marks[i];
	}
	getchar();
}

void student::compute(void){
	for (int i = 0; i < 3; i++)
		total += marks[i];
	percent = (total * 100) / 300;
}

void student::display(void){

	cout << "-------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "student name : " << name << endl;
	cout << "USN number : " << USN << endl;
	for (int i = 0; i < 3; i++)
		cout << "subject " << i + 1 << " number : " << marks[i] << endl;
	cout << "Total number : " << total << endl;
	cout << "percentage : " << percent << endl;

	cout << "**************************************************************************************************************************" << endl;
}

student :: ~student(){
	//cout << "\ndestructor is called \n";
}

