/* Write a program that reads in the radius of a circle and prints the circle's diameter, circumference and area. 
Use the constant value 3.14159 for . 
Perform each of these calculations inside the printf statement(s) and use the conversion specifier %f.
*/

// including the standard input output functions header
#include <stdio.h>
// including the value for PI in the preprocessor directive
#define PI 3.14159

int main( void){
	//declare and initialize the variable radius as float
	float radius;
	// request to enter the value of the radius
	printf("Enter the radius\n");
	// retrieve the value as float
	scanf("%f", &radius);

	// perform and print the result of the calculations
	printf("\nDiameter is %f \nCircumference is %f \nArea is %f \n", radius*2, (2*PI*radius), PI*radius*radius);

	return 0;
}