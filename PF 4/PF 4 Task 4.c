/* 
	Programming Fundamentals Lab 4
	Areej Mazhar (20231-34638)
	Task 4: Write a C program that calculates and prints the area and perimeter of a rectangle. 
			Ask the user to input the length and width of the rectangle. 
			Use arithmetic operators to perform the calculations.
*/

#include <stdio.h>

int main()
{
	int width, length, area, perimeter;
	
	printf("Enter length of rectangle: ");
	scanf("%d", &length);
	printf("Enter width of rectangle: ");
	scanf("%d", &width);
	
	// Calculating area and perimeter
	area = length * width;
	perimeter = 2*(length + width);
	
	printf("The perimeter of the rectangle is: %d\n", perimeter);
	printf("The area of the rectangle is: %d\n", area);
	
	return 0;
}
