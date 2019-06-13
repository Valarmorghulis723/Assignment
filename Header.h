
#include<iostream>
#include<string>

using namespace std;

class student{
	string USN;
	string name;
	int marks[3];
	float percent = 0;
	int total = 0;
public:

	student();

	void getdata(void);
	void compute(void);
	void display(void);

	~student();
};
