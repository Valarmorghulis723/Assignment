// assignment2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Header.h"
int main(void){

	employee emp[3];

	for (int i = 0; i < 3; i++){
		emp[i].read_data();
		emp[i].calculate_net_salary();
		emp[i].show_details();
		cout << endl;
	}

	return 0;
}

