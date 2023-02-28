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

struct person
{
	char name[20];
	int age;
};

int main(void) {

	struct person *p = malloc(sizeof(struct person));
	printf("Enter the name: ");
	scanf("%s", p->name);
	printf("Enter the age: ");
	scanf("%d", &p->age);

	printf("Person is %s, age is %d", p->name, p->age);

	free(p);


	while (1) {}
}
