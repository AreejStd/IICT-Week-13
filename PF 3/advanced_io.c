#include <stdio.h>
/*
	Programming Fundamentals Lab 3
	Task 5: Advanced Formatted Input/Output
*/
int main() {
	char name[20];
	int age;
	float GPA;
	
	printf("Enter the following details:\n");
	
	printf("Name: ");
	scanf("%s", &name);
	
	printf("Age: ");
	scanf("%d", &age);
	
	printf("GPA: ");
	scanf("%f", &GPA);
	
	// Displaying the information
	printf("\nStudent information\n");
	printf("Name: %s\n", name);
	printf("Age: %d\n", age);
	printf("GPA: %.2f\n", GPA);
	
	return 0;
}
