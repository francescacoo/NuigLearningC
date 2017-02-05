#include <stdio.h>

int main(void)
{
	int number;
	int leap = 0;

	printf("Enter a year YYYY >>   ");
	scanf("%d", &number);
	if (number < 1900 || number > 2500) {
		printf("not in the range\n");
	}
	else {

			if (number % 400 == 0) {
				printf("It is a leap year\n");
			}
		else
			if ((number % 4 == 0) && (number % 100 != 0)) {
				printf("It is a leap year\n");
			}
			else {
				printf("It is not a leap year\n");
			}


		}
	return 0;
		}
	

