/* 
	Programming Fundamentals Lab 4
	Areej Mazhar (20231-34638)
	Task 5: Write a C program that determines whether a given year is a leap year or not. 
			A leap year is divisible by 4, but not divisible by 100 unless it is also divisible by 400. 
			Use relational operators to check the conditions and 
			print whether the given year is a leap year or not.
*/

#include <stdio.h>

int main()
{
	int year;
	
	printf("Enter a year: ");
	scanf("%d", &year);
	
	// Checking if leap year
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		printf("%d is a leap year.\n", year);
	} else {
		printf("%d is not a leap year.\n", year);
	}
	
	return 0;
}
