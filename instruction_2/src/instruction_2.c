/*
 ============================================================================
 Name        : instruction_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

// conditions
	int i = 0;
	int j = 1;

	printf("The and operation: %d\n", i && j);
	printf("The or operation: %d\n", i || j);
	printf("The first not operation: %d\n", !i);
	printf("The second not operation: %d\n", !j);

	printf("The equality operator is %d\n", i == j);
	printf("The not equal operator is %d\n", i != j);

	printf("The less than operator is %d\n", i < j);
	printf("The less than or equal operator is %d\n", i <= j);
	printf("The greater than operator is %d\n", i > j);
	printf("The greater than or equal operator is %d\n", i >= j);

// if statements
	i = 4;
	j = 3;

	if (i < j) {
		// executed when i is less than j
		printf("%d is less than %d\n", i, j);
	}
	else if (j > 4){

		printf("%d greater than 4\n", j);

	}
	else if (i < 2){

			printf("%d greater than 2\n", i);

			if (j > 2){
				printf("%d greater than 2\n", j);
			}
			else {
				printf("%d not greater than 2\n", j);
			}

		}

// switch
	i = 0;

	printf("Menu options:\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Division\n");
	printf("4. Multiplication\n");
	printf("Enter your choice: ");
	scanf("%d", &i);

	switch (i)
	{
	case 1:
		printf("Addition is easy.\n");
		break;
	case 2:
		printf("Subtraction is sublime.\n");
		break;
	case 3:
		printf("Division is dicey.\n");
		break;
	case 4:
		printf("Multiplication is messy.\n");
		break;
	default:
		printf("Sorry, try again.\n");
		break;
	}


	while (1) {}
	return EXIT_SUCCESS;
}
