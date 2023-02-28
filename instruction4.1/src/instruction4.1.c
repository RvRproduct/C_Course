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


struct person
{
	char name[20];
	int age;
};

int main(void) {

	struct person harry = {"Harry", 11};

	struct person * george = NULL;
	george = &harry;
	(*george).age++;
	george->age++;

	while (1) {}
}
