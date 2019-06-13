// PointTestApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"Header.h"

int main()
{
	Point p;

	printf("\nDistance along X axis : %d ",p.distance_along_X_axis());
	printf("\nDistance along Y axis : %d ",p.distance_along_Y_axis());
	 p.set_the_values_to_the_point_x_and_y();

	 input i;

	 i.get(8);
	 i.diplay();

	return 0;
}

