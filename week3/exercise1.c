#include <stdio.h>

int main(void) {

	float number=0;
	float counter=0;
	float total=0;
	float average=0;
	int numbersentinel=-1;
	int listsentinel=1;

	while(listsentinel!=0){

		printf("\nEnter a number, -1 to finish >> ");
	// retrieve the value as float
		scanf("%f", &number);
		while(number != numbersentinel){
		total=total+number;
		counter++;
			printf("\nEnter a number, -1 to finish >> ");	
			scanf("%f", &number);
		}
	
	average=total/counter;
	printf("\nThe average is %.2f",average);
	printf("\nAnother list? Enter 1 for yes, 0 for No >> ");
	scanf("%d", &listsentinel);

	counter=0;
	number=0;
	total=0;
	average=0;
	}
return 0;
}