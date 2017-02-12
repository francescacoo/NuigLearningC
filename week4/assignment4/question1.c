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
 	//call the function hypotenuse three times and the result
 	printf("Triangle 1: %.2f\n",hypotenuse(3.0,4.0));
    printf("Triangle 2: %.2f\n",hypotenuse(5.0,12.0));
    printf("Triangle 3: %.2f\n",hypotenuse(8.0,15));
  return 0;
}
 
double hypotenuse(double num1, double num2){
	// calculate the hypotenuse using pythagoras theorem and return the result as double
	return sqrt(pow(num1,2)+pow(num2,2));

}