#include <stdio.h>
/*
	Programming Fundamentals Lab 3
	Task 3: Formatted Input with scanf() 
*/
int main() {
	int num1;
	float num2;
	char letter;
	
	printf("Enter a positive number: ");
	scanf("%d", &num1);
	printf("Enter a decimal number: ");
	scanf("%f", &num2);
	printf("Enter any letter: ");
	scanf("%c", &letter);
	
	printf("The number you entered is: %d\nThe decimal you entered: %f\nThe letter you entered: %c\n", num1, num2, letter);
	
	return 0;
}
