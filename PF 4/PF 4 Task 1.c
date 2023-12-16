/* 
	Programming Fundamentals Lab 4
	Areej Mazhar (20231-34638)
	Task 1: Write a C program that takes two integer inputs from the user 
			and perform arithmetic operations.
*/

#include <stdio.h>

int main()
{
	int x,y,result;
	
	printf("Enter two numbers.\n");
	printf("Number 1: ");
	scanf("%d", &x);
	printf("Number 2: ");
	scanf("%d", &y);
	
	printf("\nArithmetic Operations:\n");
	// Addition
	result = x + y;
	printf("%d + %d = %d\n", x, y, result);
	
	// Subtraction
	result = x - y;
	printf("%d - %d = %d\n", x, y, result);
	
	// Multiplication
	result = x * y;
	printf("%d * %d = %d\n", x, y, result);
	
	// Division
	result = x / y;
	printf("%d / %d = %d\n", x, y, result);
	
	// Modulus
	result = x % y;
	printf("%d %% %d = %d\n", x, y, result);
	
    return 0;
}

