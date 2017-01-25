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

	puts("Enter first integer");    // request to enter an integer
	scanf("%f", &b);					// retrieve the number as a float
	integer1=(int) b;					// cast the input number to integer and assign the value to integer1

	if(integer1==b){					// if the values are the same, the input is an integer
		puts("Enter second integer");	// request to enter the second integer
		scanf("%f", &b);					// retrieve the number as a float
		integer2=(int) b;					// cast the input number to integer and assign the value to integer2

		if(integer2==b){					// if the values are the same, the input is an integer

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
				puts("I cannot perform the quotient and remainder on 0");
			}
		}
		// closing the if checking for the 2nd number
		else{
			puts("The number inserted is not an integer. Exiting..");
		}	

	}
	// closing the if checking for the 1st number
	else{
		puts("The number inserted is not an integer. Exiting..");
	}
	return 0;
}
