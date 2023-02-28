/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	unsigned int i = 15; // in binary, this is 00001111
	unsigned int j = 12; // in binary, this is 00001100
	unsigned int k = 5;   // in binary this is 00000101

	unsigned int a = j & k; // expected answer: 4
	printf("Value is %d\n", a);

	unsigned int b = j | k; // expected answer: 13
	printf("Value is %d\n", b);

	unsigned int c = ~i; // int -16 unsigned int big num
	printf("Value is %d\n", c);

	unsigned int d = i ^ j; // expected answer: 0011 = 3
	printf("Value is %d\n", d);



	while (1) {}

	return EXIT_SUCCESS;
}
