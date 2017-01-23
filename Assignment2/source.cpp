/*One large chemical company pays its salespeople on a commission basis.
The salespeople receive $200 per week plus 9% of their gross sales for that week.
For example, a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9% of $5000,
or a total of $650.
Develop a program that will input each salesperson?s gross sales for last week
and will calculate and display that salesperson's earnings.
Process one salesperson's figures at a time. Here is a sample input/output dialog:

Enter sales in dollars (-1 to end): 5000.00
Salary is: $650.00
Enter sales in dollars (-1 to end): 1234.56
Salary is: $311.11
Enter sales in dollars (-1 to end): 1088.89
Salary is: $298.00
Enter sales in dollars (-1 to end): -1

*/

// including the standard input output functions header
#include <stdio.h>
// including the value for PI in the preprocessor directive
#define FIXED_AMOUNT 200
// number of employees
#define TOT_EMPLOYEES 10

int main(void) {
	//declare and initialize the variable radius as float
	float tot_sales;
	// start the cycle if to print all the employees figures
	int i = 0;
	while(i <= TOT_EMPLOYEES){
	puts("Enter sales in dollars (1 to end): ");
	// retrieve the value as float
	scanf("%f", &tot_sales);
	float salary = FIXED_AMOUNT + (tot_sales / 100) * 9;
	// perform and print the result of the calculations
	printf("Salary is: $%.2f\n", salary);
	i++;
	}
	return 0;
}
