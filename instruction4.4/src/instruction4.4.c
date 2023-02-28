/*
 ============================================================================
 Name        : 4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct value_t{
	int value_1;
	int value_2;
} value_t;

int function(value_t *value)
{

	printf("The value vefore the change is %d %d\n", value->value_1 ,value->value_2);
	value->value_1 = 7;
	value->value_2 = 8;
	printf("The value after the change is %d %d\n", value->value_1 ,value->value_2);
	return 0;
}

int main(void) {
	value_t v;
	v.value_1 = 5;
	v.value_2 = 6;

	function(&v);

	return EXIT_SUCCESS;
}
