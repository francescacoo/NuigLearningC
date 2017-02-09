/*Define a function called hypotenuse that calculates the length of the hypotenuse of 
a right triangle when the other two sides are given. 
Use this function in a program to determine the length of the hypotenuse for each of the following triangles. 
The function should take two arguments of type double and return the hypotenuse as a double. 
Test your program with the side values specified below:

Triangle	Side 1	Side 2
1	3.0	4.0
2	5.0	12.0
3	8.0	15
*/
#include <stdio.h>
#include <math.h>

double hypotenuse(double num1, double num2); //function prototype


int main(){

	// define all the variables for the 3 triangles
	double Triangle1_side1=3.0;
	double Triangle1_side2=4.0;

	double Triangle2_side1=5.0;
	double Triangle2_side2=12.0;

	double Triangle3_side1=8.0;
	double Triangle3_side2=15;

	//call the function hyptenuse for each triangle and store the returned values
 	double Triangle1_hyp=hypotenuse(Triangle1_side1,Triangle1_side2);
  	double Triangle2_hyp=hypotenuse(Triangle2_side1,Triangle2_side2);
 	double Triangle3_hyp=hypotenuse(Triangle3_side1,Triangle3_side2);

 	//print the triangles sides and result from the hypotenuse function
 	printf("Triangle1: side 1 is %.2f, side 2 is %.2f, the hypotenuse is %.2f",Triangle1_side1,Triangle1_side2,Triangle1_hyp);
 	printf("\nTriangle2: side 1 is %.2f, side 2 is %.2f, the hypotenuse is %.2f",Triangle2_side1,Triangle2_side2,Triangle2_hyp);
 	printf("\nTriangle3: side 1 is %.2f, side 2 is %.2f, the hypotenuse is %.2f\n",Triangle3_side1,Triangle3_side2,Triangle3_hyp);
  
 
  return 0;
}
 
double hypotenuse(double num1, double num2){
	// calculate the hypotenuse using pythagoras theorem and return the result as double
	return sqrt(pow(num1,2)+pow(num2,2));

}