/* Write a program that reads in the radius of a circle and prints the circle's diameter, circumference and area. 
Use the constant value 3.14159 for . 
Perform each of these calculations inside the printf statement(s) and use the conversion specifier %f.
*/

#include <stdio.h>
#define PI 3.14159

int main( void)
{
	float radius;
	float diameter;
	float circumference;
	float area;


	printf("Enter the radius\n");
	scanf("%f", &radius);

printf("\nDiameter is %f \nCircumference is %f \nArea is %f \n", radius*2, (2*PI*radius), PI*radius*radius);

		return 0;
}