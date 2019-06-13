// CCustomString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"Header.h"

int main()
{
	CCustomString c;
	c.input();

	string a = c.output();
	printf("\nlength of string : %d ",c.length_string(a));

	c.print_string(a);
	string b = c.sub_string_object(a);
	string ch = c.concat (a,b);

	c.print_string(b);
	c.print_string(ch);

	printf("\n\nlength of string : %d ", c.length_string(b));
	printf("\n\nlength of string : %d ", c.length_string(ch));

	CCustomString obj;
	obj.input();

	if (obj == c) printf("\n\nSame\n");
	else printf("\nDifferent\n");

	char arr[256];
	printf("Enter String : ");
	gets_s(arr);

	if (compare(c, arr))
		printf("\nsame\n");
	else printf("\nDiffrent\n");
	
	return 0;
}

