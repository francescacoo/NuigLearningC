#include <stdio.h>

int main(void)
{
	int counter=1; // one grade
	int number;
	int number1=0;
	int number2=0;
	int number3=0;
	int number4=0;
	int number5=0;

	printf("Enter a number between 1 and 30.\n");

	 while (counter<6){
	 	printf("Number %d: ",counter);

	 	scanf("%d", &number);

	 	if(number>0 && number < 31){

			switch (counter) {

				case 1:
				number1=number;
				break;

				case 2:
			 	number2=number;
				break;

				case 3:
			 	number3=number;
				break;

				case 4:
			 	number4=number;
				break;

				case 5:
			 	number5=number;
				break;

				default:
				break;

			}
			counter++;
		}
			else{
				printf ("the number is not between 1 and 30\n");
			}
		}


		printf("The numbers entered are: %d %d %d %d %d\n", number1, number2, number3, number4, number5);

		for(int i=0; i< number1; i++){
			printf("%s","*");
		}

		printf("\n");

		for(int i=0; i< number2; i++){
			printf("%s","*");
		}
		printf("\n");
		for(int i=0; i< number3; i++){
			printf("%s","*");
		}
		printf("\n");
		for(int i=0; i< number4; i++){
			printf("%s","*");
		}
		printf("\n");
		for(int i=0; i< number5; i++){
			printf("%s","*");
		}

	


	printf("\n");
	return 0;
}
