/*
Write a program that asks the user to enter two numbers, obtains them from the user and prints their sum, 
product, difference, quotient, and remainder.
*/

// including the standard input output functions header
#include <stdio.h>

int main(void){
	// declare and initialize the variables as integers
	int integer1;
	int integer2;
	int sum;
	int product;
	int difference;
	int quotient;
	int remainder;
	// used for the if statement to check the input is an integer
    float b;




	printf("Enter first integer\n");    // request to enter an integer
	scanf("%f", &b);				// retrieve the integer
	integer1=(int) b;
	if(integer1==b){
		b=0;
		printf("Enter second integer\n");	// request to enter the second integer
		scanf("%f", &b);				// retrieve the second integer
		integer2=(int) b;
		if(integer1==b){
			sum = integer1 + integer2;			// perfom the addition and print the result
			printf("Sum is %d\n", sum);			

			product = integer1 * integer2;		// perform multiplication and print result
			printf("Product is %d\n", product);

			difference = integer1 - integer2;	// perform the subtraction and print the result
			printf("Difference is %d\n", difference);
	
		// check if the second integer is different from 0 perform and print division and modulus
			if(integer2 != 0){					
				quotient = integer1 / integer2;
				printf("Quotient is %d\n", quotient);

				remainder = integer1%integer2;
				printf("Remainder is %d\n", remainder);
			}
		// if the second integer is 0, print an error message
			else {
				printf("I cannot perform the quotient and remainder on 0\n");
			}
		}
			// closing the if checking for the 2nd number
		else{
			printf("The number inserted is not an integer. Exiting.. \n");
		}	

	}
	// closing the if checking for the 1st number
	else{
		printf("The number inserted is not an integer. Exiting.. \n");
	}
	return 0;
}
