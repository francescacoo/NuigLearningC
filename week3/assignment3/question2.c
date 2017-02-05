/*
One interesting application of computers is drawing graphs and bar charts(sometimes called ? histograms ? ).
Write a program that first reads and stores five numbers(each between 1 and 30).
Then, for each number read, your program should print a line containing that number of adjacent asterisks
(e.g. for the number seven, it should print *******), so that it displays five rows of asterisks.
*/
#include <stdio.h>
int main(void){
// declare the variables needed to hold the 5 numbers and the temp number
	int counter = 1;
	int number;
	int number1 = 0;
	int number2 = 0;
	int number3 = 0;
	int number4 = 0;
	int number5 = 0;
	float b; //used to check if the number entered is not a float
// first prompt with instructions
	printf("Enter a number between 1 and 30.\n");
// if counter less than 6, we have 5 numbers
	while (counter<6) {
		printf("Number %d: ", counter);
// collect the inserted number as float
		scanf("%f", &b);
// cast the input number to integer and assign the value to number
		number = (int)b;
// if the values are the same, the input is an integer
		if (number == b) {
// in case a char is entered, to empty the buffer and avoid infinite loop
			while (getchar() != '\n');
// the number will be stored only if it's between 1 and 30 
			if (number > 0 && number < 31) {
// switch statement to assign the number to the correct variable
				switch (counter) {
					case 1:
						number1 = number;											break;
					case 2:
						number2 = number;
						break;
					case 3:
						number3 = number;
						break;											case 4:
						number4 = number;
						break;
					case 5:
						number5 = number;
						break;											default:
						break;
					} // close the switch
// setting number at 0, so if at next iteration it won't get updated for errors, it will jump to the else statement
					number = 0;
					// increase the counter
					counter++;
				} // close the 2nd if

				else {
					printf("the number is not between 1 and 30\n");
// in this case the counter is not increased, the input for the current variable will be asked again
				}
			} // close the 1st if
			else {
				puts("The number inserted is not an integer..");
			}
		} // close the while

	  // print the inserted numbers
	printf("The numbers entered are: %d %d %d %d %d\n", number1, number2, number3, number4, number5);

	// for cycles to print the asterisks for each number
	for (int i = 0; i< number1; i++) {
		printf("%s", "*");
	}
	printf("\n");
	for (int i = 0; i< number2; i++) {
		printf("%s", "*");
	}
	printf("\n");

	for (int i = 0; i< number3; i++) {
		printf("%s", "*");
	}

	printf("\n");

	for (int i = 0; i< number4; i++) {
		printf("%s", "*");
	}

	printf("\n");

	for (int i = 0; i< number5; i++) {
		printf("%s", "*");
	}
	printf("\n");
	return 0;
}

