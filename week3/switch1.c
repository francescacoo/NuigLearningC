#include <stdio.h>

int main(void)
{
	int grade; // one grade
	int aCount = 0; // number of As
	int bCount = 0;
	int cCount = 0;
	int dCount = 0;
	int eCount = 0;
	int fCount = 0;

	printf("Enter the letter grades.\n");
	printf("Enter the EOF character to end input. \n");

	while ((grade = getchar()) != EOF) {

		switch (grade) {

		case 'A':
		case 'a':
			++aCount;
			printf("Grade inserted is: %d \n\n", grade);
			break;

		case 'B':
		case 'b':
			++bCount;
			printf("Grade inserted is: %d \n\n", grade);
			break;

		case 'C':
		case 'c':
			++aCount;
			printf("Grade inserted is: %d \n\n", grade);
			break;

		case 'D':
		case 'd':
			++dCount;
			printf("Grade inserted is: %d \n\n", grade);
			break;

		case 'E':
		case 'e':
			++eCount;
			printf("Grade inserted is: %d \n\n", grade);
			break;

		case 'F':
		case 'f':
			++fCount;
			printf("Grade inserted is: %d \n\n", grade);
			break;

		case '\n':
		case '\t':
		case ' ':
			break;

		default:
			printf("Grade inserted default is: %d \n\n", grade);
			printf("Incorrect letter entered\n");
			printf("Enter a new grade. \n");
			break;


		}
	}


	printf("%d\n", aCount);

	return 0;
}
