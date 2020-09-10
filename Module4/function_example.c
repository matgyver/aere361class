/*
AerE 361 Demos for Module 4
Matthew E. Nelson
*/
#include <stdio.h>

//Function to calculate the average of two numbers
float average(float r1, float r2)
{
	float avg = 0.0;
	avg = (r1+r2)/2;
	return avg;
}

//Function to calculate the area of a circle
float circle_area(float radius)
{
	float area = 0.0;
	return area = radius * radius * 3.14;
}

//Main Function
int main(void)
{
	float radius1 = 10.5;
	float radius2 = 12.2;
	float circle_avg = 0.0;
	float avg_area = 0.0;
	circle_avg = average(radius1,radius2);
	avg_area = circle_area(circle_avg);
	printf("The radius of Circle 1 is %.2f and the radius of Circle 2 is %.2f.\n",radius1,radius2);
	printf("The average of the two radii is %.2f and the area with this radius is %.2f.\n",circle_avg,avg_area);
}
