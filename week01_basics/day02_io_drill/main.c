#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int age;
	float height;
	char grade;

	printf("Enter your age: ");
	if (scanf("%d", &age) != 1) {
		fprintf(stderr, "Invalid input for age\n");
	  	return 1;
	}

	printf("Enter your height: ");
	if (scanf("%f", &height) != 1) {
		fprintf(stderr, "Invalid input for height\n");
	  	return 1;
	}

	printf("Enter your grade (A - F): ");
	if (scanf(" %c", &grade) != 1) {
		fprintf(stderr, "Invalid input for grade\n");
	  	return 1;
	}

	printf("\n-----Summary----\n");
	printf("Age: %d years\n", age);
	printf("Height: %.2f meters\n", height);
	printf("Grade: %c\n", grade);

	return 0;
}
