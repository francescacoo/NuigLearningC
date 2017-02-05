#include<stdio.h>

int main(void){
	int counter;

	printf("a. ");
	for(counter=1; counter<8; counter++){

		printf("%d",counter);

		if(counter!=7){
			printf(", ");
		}
	}

	printf("\n\nb. ");
	for(counter=3; counter<24; counter+=5){

		printf("%d",counter);

		if(counter!=23){
			printf(", ");
		}
	}

	printf("\n\nc. ");
	for(counter=20; counter>-11; counter-=6){

		printf("%d",counter);

		if(counter!=-10){
			printf(", ");
		}
	}


		printf("\n\nd. ");
	for(counter=19; counter<52; counter+=8){

		printf("%d",counter);

		if(counter!=51){
			printf(", ");
		}
	}
	printf("\n");
	return 0;
}