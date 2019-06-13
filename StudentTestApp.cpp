// StudentTestApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Header.h"

int main(void){
	student s[3];

	for (int i = 0; i < 3; i++){
		s[i].getdata();
		s[i].compute();
		s[i].display();
	}
	return 0;
}

