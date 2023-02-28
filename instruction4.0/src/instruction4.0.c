/*
 ============================================================================
 Name        : 0.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void add_five(int* a)
{
	*a += 5;
}

int main(void) {

	int a = 1;

	add_five(&a);

//	int* p = NULL;
//	p = &a;
//	*p = 3;
//	(*p)++;
//	(*p) += 9;

	while (1) {}

	return EXIT_SUCCESS;
}
