/*
The process of finding the largest number (i.e., the maximum of a group of numbers) is used frequently in computer applications. 
For example, a program that determines the winner of a sales contest would input the number of units sold by each salesperson. 
The salesperson who sold the most units wins the contest. 
Write a pseudocode program and then a program that inputs a series of 10 numbers and determines and prints the largest of the numbers.

Hint: Your program should use three variables as follows:
counter: A counter to count to 10 (i.e., to keep track of how many numbers have been input and to determine when all 10 numbers have been processed)
number: The current number input to the program
largest: The largest number found so far



PSEUDOCODE
Declare the variables
counter as integer initialise as 1
number as integer initialise as 0
largest as integer initialise as 0
Print "Enter the number of units sold"
while the counter is less or equal to ten
	print "salesperson " current counter value
	get the number inserted as integer
	if the number is higher than the variable largest
		set largest value as the value of the number inserted
	increase the counter's value
print "the largest number is" and the value of variable largest



*/



#include <stdio.h>


int main(void) {
	int counter = 1;
	int number=0;
	int largest=0;
	
	puts("Enter the number of units sold");

	//loop to insert and check 10 numbers
	while(counter <= 10){

		// print the current salesperson number and prompt for the number to be entered
		printf("Salesperson %d: ", counter);
		scanf("%d", &number);

		// if the number entered is greater than the current largest, assign its value to largest
		if(number > largest) {
			largest = number;
			}

		// increment the counter
		counter++;
	}

	// print the largest number found
	printf("\nThe largest number is: %d \n", largest);


	return 0;
}
