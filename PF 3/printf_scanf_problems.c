#include <stdio.h>
/*
	Programming Fundamentals Lab 3
	Task 4: printf() and scanf() problems
*/
int main() {
	// Problem 1: Using the wrong format specifier in printf()
	int num = 15;
	/* Wrong format specifier: %f 
	printf("(Problem 1) Value of number is: %f", num); 
	Correct one would be %d for integers
	*/
	printf("(Problem 1) Value of number is: %d\n", num); 
	
	// Problem 2: Forgeting '&' in scanf()
	int percent;
	printf("(Problem 2) Enter your grade in percentage: ");
	// scanf("%d", percent);
	scanf("%d", &percent);
	
	// Problem 3: Missing argument
	char c = 'B';
	// printf("Your grade is: %c");
	printf("(Problem 3) Your grade is: %c\n", c); 
	
	return 0;
}
