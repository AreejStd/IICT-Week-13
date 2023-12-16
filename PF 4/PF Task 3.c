/* 
	Programming Fundamentals Lab 4
	Areej Mazhar (20231-34638)
	Task 3: Write a C program that takes a number as input from the user and 
	checks use logical operations
*/

#include <stdio.h>

int main()
{
	int num, result;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	//  Is the number greater than 10 and less than 100?
	result = (num > 10) && (num < 100);
	printf("Is the number greater than 10 and less than 100?: %d\n", result);
	
	// Is the number divisible by both 2 and 3?
	result = (num % 2 == 0) && (num % 3 == 0);
	printf("Is the number divisible by both 2 and 3?: %d\n", result);
	
	// Is the number divisible by either 5 or 7?
	result = (num % 5 == 0) || (num % 7 == 0);
	printf("Is the number divisible by either 5 or 7?: %d\n", result);
	
	//	Is the number not equal to 0?
	result = (num != 0);
	printf("Is the number not equal to 0?: %d\n", result);
	
	return 0;
}
