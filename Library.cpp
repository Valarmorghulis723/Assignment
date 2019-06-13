#include "stdafx.h"
#include "Header.h"

Point::Point(){
	printf("\nEnter value of x1 : ");
	scanf_s("%d", &x1);

	printf("\nEnter value of y1 : ");
	scanf_s("%d", &y1);

	printf("\nEnter value of x2 : ");
	scanf_s("%d", &x2);

	printf("\nEnter value of y2 : ");
	scanf_s("%d", &y2);
}

int Point::distance_along_X_axis()	{return abs(x2 - x1);}

int Point::distance_along_Y_axis() { return abs(y2 -y1); }

void Point::set_the_values_to_the_point_x_and_y(){
	printf("\n\nCoordinate point of P1 is (%d,%d)\n", x1, y1);
	printf("\nCoordinate point of P2 is (%d,%d)\n", x2, y2);
}