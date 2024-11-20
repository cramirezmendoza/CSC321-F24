// Camila Ramirez
// CSC 321 Lab 10

#include <stdio.h>
#include <stdlib.h>
// prototype

double areaTotal(double radius, double height);

int main(void) 
{
	double radius, height, results;

	printf("Enter the radius of your cylinder: ");
	scanf("%lf", &radius);

	printf("Enter the height of your cylinder: ");
	scanf("%lf", &height);

	// use prototype 
	results = areaTotal(radius, height);

	printf("Area of the cylinder is: %.2lf\n", results);

	return EXIT_SUCCESS;

}
// function 
double areaTotal(double radius, double height)
{
	const double PI = 3.14;
	double area;

	area  = PI * radius * radius * height;

	return area;
}

