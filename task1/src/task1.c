/*
 ============================================================================
 Name        : task1.c
 Author      : Roberto Reynoso
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
// my variables and array of characters
	char letter = 'a';
	short num_1 = 4;
	int num_2 = 5;
	long num_3 = 2;
	float num_4;
	char letters[124];

// printing char short int and long and printing the size of each type
	printf("for char(letter): %c: %zu\n", letter, sizeof(letter));
	printf("for short(num_1): %ld: %zu\n", num_1, sizeof(num_1));
	printf("for int(num_2): %ld: %zu\n", num_2, sizeof(num_2));
	printf("for long(num_3): %ld: %zu\n", num_3, sizeof(num_3));

// asking the user for a floating point num and then
// printing them in scientific, fixed point, and shortest representation
	printf("Input a floating point num: ");
	scanf("%f", &num_4);
	printf("scientific: %e fixed point: %f shortest: %g\n", num_4, num_4, num_4);

// using the array of characters called letters then prompting the user to enter said
// character string
	printf("Input a string of characters (124 limit): ");
	scanf("%s", letters);
	printf("The string you provided: %s\n", letters);

// defining a structure which contains 3 members of different types
	typedef struct element {
		char name[20];
		int age;
		float balance;
	} bankInfo;

	bankInfo item;

// assigning values to each of the elements within the structure
// after assigning through user input, it then prints the
// values of each element, size of each element, and total size of the structure
	printf("enter the name: ");
	scanf("%s", item.name);
	printf("enter the age: ");
	scanf("%d", &item.age);
	printf("enter the balance: ");
	scanf("%f", &item.balance);
	printf(" name: %s size: %zu\n age: %d size: %zu\n balance: %g size: %zu\n struct-size: %zu\n",
			item.name,
			sizeof(item.name),
			item.age,
			sizeof(item.age),
			item.balance,
		    sizeof(item.balance),
			sizeof(bankInfo));




	return EXIT_SUCCESS;
}
