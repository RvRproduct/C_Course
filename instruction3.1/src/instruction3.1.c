/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char name[20];
	printf("Enter your name: ");
	scanf("%s", name);

	int len = strlen(name);
	printf("Length of %s is %d", name, len);

	while (1) {}
	return EXIT_SUCCESS;
}
