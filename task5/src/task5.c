/*
 ============================================================================
 Name        : task5.c
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
void make_account(struct account *place) {
	printf("Enter the account number: ");
	scanf("%d", &place->number);
	printf("Enter the name of the account: ");
	scanf("%s", place->name);
	printf("Enter the balance in the account: ");
	scanf("%f", &place->balance);

}

// display_account function using pointers
void display_account(struct account *display) {
	while(display != NULL) {

	printf("Account information: number %d name %s balance $%.2f\n",
			display->number, display->name, display->balance);
			display = display->next;

	}

}

// finding account by id using linked lists
void display_found_account(struct account *display, int id) {
	while(display != NULL) {
		if (display->number == id){
		printf("Found account: Account information: number %d name %s balance $%.2f\n",
			display->number, display->name, display->balance);
		return;
		}
		display = display->next;

		}
	printf("Account not found.\n");
}

// changing account by id using linked lists updating...
void change_account(struct account *change, int id) {
	while(change != NULL) {
		if (change->number == id){
			printf("Enter the name of the account: ");
				scanf("%s", change->name);
				printf("Enter the balance in the account: ");
				scanf("%f", &change->balance);
		}
		change = change->next;

		}
}


// holds both programs
int main(void) {
	// head
	struct account *head = NULL;

	// using malloc to allocate space for the structure
	int choice = -1;

	while (choice != 0) {
		printf("Main menu:\n1. Add account\n2. Display all accounts\n3. Find account\n4. Change account\n0. Quit program\nYour choice: ");
		scanf("%d", &choice);

		if (choice == 1){
			struct account *acc = malloc(sizeof(struct account));
			acc->next = NULL;
			make_account(acc);
			if (!head) {
			head = acc;
			}
			// tail to reach teh end of the linked list to add a new one
			 else {
			struct account *tail;
				tail = head;
				while (tail->next)
				{
					tail = tail->next;
				}
				tail->next = acc;

		}
	} else if (choice == 2) {
		// go through linked list
		display_account(head);

	} else if (choice == 3) {
		// finding by id linked list
		int num;
		printf("Enter the account number to find: ");
		scanf("%d", &num);
		display_found_account(head, num);

	} else if (choice == 4) {
		// finding by id linked list
		int num;
		printf("Enter the account number to find: ");
				scanf("%d", &num);
		printf("Enter the account number to find.\n");
		change_account(head , num);

	}

	}


	return EXIT_SUCCESS;
}
