/*
 ============================================================================
 Name        : task4.c
 Author      : Roberto Reynoso
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// struct for account
typedef struct account {
	int number;
	char name[20];
	float balance;
	struct account *next;

} account;

// make account function using pointers
void make_account(account *place) {
	printf("Enter the account number: ");
	scanf("%d", &place->number);
	printf("Enter the name of the account: ");
	scanf("%s", place->name);
	printf("Enter the balance in the account: ");
	scanf("%f", &place->balance);

}

// display_account function using pointers
void display_account(account *display) {

	printf("Account information: number %d name %s balance $%.2f\n",
			display->number, display->name, display->balance);

}

// holds both programs
int main(void) {
	// using malloc to allocate space for the structure
	int choice = -1;
	struct account *acc = malloc(sizeof(struct account));
	while (choice != 0) {
		printf("Main menu:\n1. Add account\n2. Display all accounts\n0. Quit program\nYour choice: ");
		scanf("%d", &choice);

		if (choice == 1){
			make_account(&*acc);
			acc = acc->next;
			free(acc);
			}
		else if (choice == 2) {
			struct account *tail = acc;
				while (tail != NULL)
				{
					display_account(&*tail);
					tail = tail->next;
				}

		}
	}


	while (1) {}
}
