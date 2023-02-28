/*
 ============================================================================
 Name        : 3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	unsigned int i = 1;
	printf("Value is %d\n", i);

	unsigned int j = i << 3; // 2^3 add three zeros at the end
	printf("Value is %d\n", j);

	unsigned int k = 324;
	printf("Value is %d\n", k);
	unsigned int m = k << 4; // 2^4
	printf("Value is %d\n", m);
	unsigned int n = m >> 6; // 2^6 chop off 6 numbers from the end
	printf("Value is %d\n", n);


	while (1) {}

	return EXIT_SUCCESS;
}
