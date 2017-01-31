#include <stdio.h>
#include <math.h>

// compound interest 

int main(void) {
	double amount;
	double principal=1000.00; // starting amount
	double rate=.05; // annual interest rate
	int year; // year counter

	// column head
	printf("%4s%21s\n","Year","Amount on deposit");


	for(year=1; year<=10; year++){
		amount=principal * pow(1.0 + rate,year);
		printf("%4d%21.2f\n",year,amount);
	}
return 0;
}