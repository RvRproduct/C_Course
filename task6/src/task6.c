/*
 ============================================================================
 Name        : task6.c Find the Treasure!
 Author      : Roberto Reynoso
 Version     :
 Copyright   : Your copyright notice
 Description : Finding the treasure in C, Ansi-style
 ============================================================================
 */

/*
 * I learned how to get more used to linked list through this project
 * I learned more on how I can apply enums for myself
 * I learned about how the random function works and if
 * you wand a random number from a range of numbers it
 * requires a random formula for C since it isn't built in
 * to C, I also don't find this formula as effective as a rand range
 * in other languages, but it gets the job done. When using the
 * appliction try different spots.
 */


#include <stdio.h>
#include <stdlib.h>



// trail for treasure struct
typedef struct trail {
	int spot;
	enum {false, true} chest;
	struct trail *next;

} trail;



// set the treasure
void set_treasure(struct trail *treasure, int len) {
	// setting a random spot
	// found that the same trail will give an equal answer
	// so try different trails you will get a different
	// spot each time.
	int the_spot;
	for (int i = 0; i < len; i++) {
	        int num = (rand() % (len - 1 + 1)) + 1;
	        the_spot = num;
	    }

	while(treasure != NULL) {
		if (the_spot == treasure->spot){
			treasure->chest = true;
		} else {
			treasure->chest = false;
		}
		treasure = treasure->next;
	}
}

// Look for the tresure through the linked list (trail)
void look_for_treasure(struct trail *treasure, int check) {
	while(treasure != NULL) {

		if (treasure->spot == check) {
			if (treasure->chest == true) {
				printf("YOU FOUND THE TREASURE!\n");
				return;
			} else {
				printf("ITS NOT HERE!!! SORRY\n");
			}
		}
		treasure = treasure->next;
}
}

// you cheater
void cheat(struct trail *treasure)  {
	while(treasure != NULL) {
		if (treasure->chest == true){
		printf("The hidden spot is %d\n", treasure->spot);
		return;
		}
		treasure = treasure->next;

		}
}

// setting up the spots
void length_trail(struct trail *treasure, int set) {
		treasure->spot = set;
}


int main(void) {
	// head
	struct trail *head = NULL;
	// check if in game
	enum {true, false} playing = false;
	// length
	int len;
	int choice = -1;
	while (choice != 0) {
		printf("\nMain menu:\n1. Set length of trail and treasure\n2. Find treasure\n3. Cheat\n0. Quit program\nYour choice: ");
		scanf("%d", &choice);
		if (choice == 1){
			if (playing == false) {
			printf("Set length of trail: ");
			scanf("%d", &len);
			for (int i = 1; i < len + 1; i++) {
			struct trail *chest = malloc(sizeof(struct trail));
			chest->next = NULL;
			length_trail(chest, i);
			if (!head) {
			head = chest;
			}
			 else {
			struct trail *tail;
				tail = head;
				while (tail->next)
				{
					tail = tail->next;
				}
				tail->next = chest;
			 }
			}
			// random is quite interesting in C each different value for trail is a
			// different spot.
			set_treasure(head, len);

			}

			if (playing == true) {
			printf("ALREADY PLACED THE TREASURE!!!\n");
			}
			playing = true;

	} else if (choice == 2) {
		// check a spot
		if (playing == true) {
		int check;
		printf("\nWhat spot would you like to check from 1 to %d: ", len);
		scanf("%d", &check);
		look_for_treasure(head, check);
		} else {
			printf("YOU NEED TO SET LENGTH AND TREASURE!\n");
		}

	} else if (choice == 3) {
		// cheat
		if (playing == true) {
		printf("Cheater: \n");
		cheat(head);
		} else {
			printf("YOU NEED TO SET LENGTH AND TREASURE!\n");
		}

	}



}
	return EXIT_SUCCESS;
}
