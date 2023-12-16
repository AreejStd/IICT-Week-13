/* 
	Programming Fundamentals Lab 4
	Areej Mazhar (20231-34638)
	Task 2: Write a C program that takes two integer inputs from the user 
			and compares them using relational operators. 
*/

#include <stdio.h>

int main()
{
	int a,b, x;
	
	printf("Enter two numbers.\n");
	printf("Number 1: ");
	scanf("%d", &a);
	printf("Number 2: ");
	scanf("%d", &b);
	
	printf("\nRelational Operations\n");
	// Is the first number equal to the second number?
	x = a == b;
	printf("%d == %d is %d\n",a,b,x);
	
	// Is the first number greater than the second number?
	x = a > b;
	printf("%d > %d is %d\n",a,b,x);
	
	// Is the first number less than the second number?
	x = a < b;
	printf("%d < %d is %d\n",a,b,x);
	
	// Is the first number not equal to the second number?
	x = a != b;
	printf("%d != %d is %d\n",a,b,x);
	
	// Is the first number greater than or equal to the second number?
	x = a >= b;
	printf("%d >= %d is %d\n",a,b,x);
	
	// Is the first number less than or equal to the second number?
	x = a <= b;
	printf("%d <= %d is %d\n",a,b,x);
	
	
    return 0;
}

