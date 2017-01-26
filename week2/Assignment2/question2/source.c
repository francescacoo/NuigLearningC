#include <stdio.h>


int main(void) {
	int counter = 0;
	int number=0;
	int largest=0;
	
	while(counter <= 10){
		printf("%s", "Enter the number of units sold: ");
		scanf("%d", &number);
		
		if(number > largest) {
			largest = number;
			}
			counter++;
		}

	printf("\nThe largest number is: %d \n", largest);
	return 0;
}
