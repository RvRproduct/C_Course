/*
 ============================================================================
 Name        : task3.c
 Author      : Roberto Reynoso
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// this function converts an array of characters to Hexadecimal
void hexaOutput(char* hex){

	for (int i=0; i < strlen(hex); i++)
	{
		printf("Hexadecimal: %X\n", hex[i]);
	}

}

// This function converts the number to binary
void display_binary(unsigned int num)
{
	unsigned original = num;
	unsigned findZeros = num;
	unsigned totalBits = sizeof(findZeros) * 8;
	unsigned int zeros = 0;

// finds how many leading zeros there are
	if (findZeros != 0){
		while ( !(findZeros & (1 << (totalBits - 1))))
		{
			findZeros = (findZeros << 1);
			zeros++;
		}
	} else {
		zeros = 32;
	}

	for (int i = 0; i < zeros; i++){
		printf("0");
	}



// converts number to binary
	unsigned int binaryNum[32];
	unsigned int i = 0;

	while (num > 0) {
		binaryNum[i++] = num % 2;
		num /= 2;
	}

	for (int j = i-1; j >= 0; j--)
	{
		printf("%d", binaryNum[j]);
	}

// outputs original number
	printf(" (%d)\n", original);

}

// From the two inputed numbers this function outputs with BitWise operators
void bitWise (unsigned int first, unsigned int second)
{
	printf("Result of %d & %d: \n", first, second);
	display_binary(first & second);
	printf("Result of %d ^ %d: \n", first, second);
	display_binary(first ^ second);
	printf("Result of %d | %d: \n", first, second);
	display_binary(first | second);
	printf("Result of ~%d: \n", first);
	display_binary(~first);
	printf("Result of ~%d: \n", second);
	display_binary(~second);
	printf("Result of %d << %d: \n", first, second);
	display_binary(first << second);
	printf("Result of %d >> %d: \n", first, second);
	display_binary(first >> second);

}

// Calls the different functions and asks for user input
int main(void) {
	unsigned int first;
	unsigned int second;
	char hex [64];
	unsigned int binary;

		printf("Enter a string: ");
		scanf("%s", hex);
		hexaOutput(hex);
		printf("Enter a number between 0 and 4294967295: ");
		scanf("%d", &binary);
		display_binary(binary);
		printf("First operand: ");
		scanf("%d", &first);
		printf("Second operand: ");
		scanf("%d", &second);
		bitWise(first, second);

		while(1) {}

	return EXIT_SUCCESS;
}
