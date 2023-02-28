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

int function(int *value)
{

	printf("The value vefore the change is %d\n", *value);
	*value = 3;
	printf("The value after the change is %d\n", *value);
	return 0;
}

int main(void) {
	int a = 5;
	a = 6;

	int *p = &a;
	printf("The value of a is now %d\n", a);

	*p = 4;
	printf("The value of a is now %d\n", a);

	function(&a);

	return EXIT_SUCCESS;
}
