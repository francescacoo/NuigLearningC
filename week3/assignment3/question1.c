/*
Write for statements that print the following sequences of values:
a. 1, 2, 3, 4, 5, 6, 7
b. 3, 8, 13, 18, 23
c. 20, 14, 8, 2, -4, -10
d. 19, 27, 35, 43, 51
*/
#include <stdio.h>
int main(void){
	int counter;
	printf("a. ");
// print numbers from 1 to 7
	for(counter=1; counter<8; counter++){
		printf("%d",counter);
		// print the comma unless it is the last number
		if(counter!=7){
			printf(", ");
		}
	}
	printf("\n\nb. ");
// starting from 3 print numbers adding 5
	for(counter=3; counter<24; counter+=5){
		printf("%d",counter);
// print the comma unless it is the last numberv
		if(counter!=23){
			printf(", ");
		}
	}
	printf("\n\nc. ");
// starting from 20 print numbers subtracting 6
	for(counter=20; counter>-11; counter-=6){
		printf("%d",counter);
// print the comma unless it is the last number

		if(counter!=-10){
			printf(", ");
		}
	}
	printf("\n\nd. ");
// starting from 19 print numbers adding 8
	for(counter=19; counter<52; counter+=8){
		printf("%d",counter);
// print the comma unless it is the last number
		if(counter!=51){
			printf(", ");
		}
	}
	printf("\n");
	return 0;
}
