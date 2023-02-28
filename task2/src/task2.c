/*
 ============================================================================
 Name        : task2.c
 Author      : Roberto Reynoso
 Version     :
 Copyright   : Your copyright notice
 Description : bed time scheduler in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


// user selects an age and then that age is identified by some age_group
void age_group_fun(int age_group) {
	switch (age_group)
	{
	case 1:
		printf("Age Group: 0-5\n");
		break;
	case 2:
		printf("Age Group: 6-10\n");
		break;
	case 3:
		printf("Age Group: 11-17\n");
		break;
	default:
		printf("Age Group: not selected\n");
	}

}

// Let's the user know what day it is
void day_of_week(int day) {
	switch (day)
	{
	case 1:
		printf("Sunday, ");
		break;
	case 2:
		printf("Monday, ");
		break;
	case 3:
		printf("Tuesday, ");
		break;
	case 4:
		printf("Wednesday, ");
		break;
	case 5:
		printf("Thursday, ");
		break;
	case 6:
		printf("Friday, ");
		break;
	case 7:
		printf("Saturday, ");
		break;
	default:
		printf("day not selected, ");
		break;
	}
}

// converts military time to regular time
char* time_convert(int bed_time){
	typedef struct {
		char *bed_time_convert;
	} bed;

	bed t = {"N/A"};

	switch (bed_time) {
	case 0:
		t.bed_time_convert = "12am";
		break;
	case 1:
		t.bed_time_convert = "1am ";
		break;
	case 2:
		t.bed_time_convert = "2am ";
		break;
	case 3:
		t.bed_time_convert = "3am ";
		break;
	case 4:
		t.bed_time_convert = "4am ";
		break;
	case 5:
		t.bed_time_convert = "5am ";
		break;
	case 6:
		t.bed_time_convert = "6am ";
		break;
	case 7:
		t.bed_time_convert = "7am ";
		break;
	case 8:
		t.bed_time_convert = "8am ";
		break;
	case 9:
		t.bed_time_convert = "9am ";
		break;
	case 10:
		t.bed_time_convert = "10am";
		break;
	case 11:
		t.bed_time_convert = "11am";
		break;
	case 12:
		t.bed_time_convert = "12pm";
		break;
	case 13:
		t.bed_time_convert = "1pm ";
		break;
	case 14:
		t.bed_time_convert = "2pm ";
		break;
	case 15:
		t.bed_time_convert = "3pm ";
		break;
	case 16:
		t.bed_time_convert = "4pm ";
		break;
	case 17:
		t.bed_time_convert = "5pm ";
		break;
	case 18:
		t.bed_time_convert = "6pm ";
		break;
	case 19:
		t.bed_time_convert = "7pm ";
		break;
	case 20:
		t.bed_time_convert = "8pm ";
		break;
	case 21:
		t.bed_time_convert = "9pm ";
		break;
	case 22:
		t.bed_time_convert = "10pm";
		break;
	case 23:
		t.bed_time_convert = "11pm";
		break;
	default:
		t.bed_time_convert = "N/A ";
		break;
	}
	return t.bed_time_convert;
}

// time holder
struct setBedtime {
	char *bed_time;
};

int main(void) {

// ask the the user to input two numbers. Display which one is the minimum and
// which one is the maximum, or show if they are both the same value.
	int i;
	int j;

	printf("enter first number: ");
	scanf("%d", &i);
	printf("enter second number: ");
	scanf("%d", &j);


// checks max and min values between i and j
	if (i > j) {
		printf("Max: %d Min: %d\n", i, j);

	}
	else if (i < j) {
		printf("Max: %d Min: %d\n", j, i);
	}
	else {
		printf("First: %d and Second: %d are the same.\n", i, j);
	}

// Using printf, display a list of 5 items to the user that they might want to purchase in
// a store. Ask the user to input a number that represents one of the 5 choices. Using a
// switch statement in case the user selects a number outside of the offers. You may select
// which items offer in your store and how much they cost.

	i = 0;
	printf("\nItems to purchase:\n");
	printf("1. hot dog\n");
	printf("2. light bulb\n");
	printf("3. ketchup packet\n");
	printf("4. water bottle\n");
	printf("5. santa hat\n");
	printf("choose one item: ");
	scanf("%d", &i);

// using i it will print a different case
	switch (i)
	{
	case 1:
		printf("hot dog, price: $15.50\n");
		break;
	case 2:
		printf("light bulb, price: $12.25\n");
		break;
	case 3:
		printf("ketchup packet, price: $32.75\n");
		break;
	case 4:
		printf("water bottle, price: $7.25\n");
		break;
	case 5:
		printf("santa hat, price: $100.00\n");
		break;
	default:
		printf("pick an item from the list, try again\n");
		break;
	}

// write a program to help a user establish bedtimes for their children
// ask the user to input the day of the week using a menu (so that they enter a
// number representing the day of the week, with 1=sunday and 7=saturday), and
// the age of the child. Then display the correct bedtime or an appropriate
// error message if the input is outside the allowed range.

// bedtime holders
// group 1
	struct setBedtime age_group_1_sun = {"N/A "};
	struct setBedtime age_group_1_mon = {"N/A "};
	struct setBedtime age_group_1_tues = {"N/A "};
	struct setBedtime age_group_1_wed = {"N/A "};
	struct setBedtime age_group_1_thur = {"N/A "};
	struct setBedtime age_group_1_fri = {"N/A "};
	struct setBedtime age_group_1_sat = {"N/A "};
// group 2
	struct setBedtime age_group_2_sun = {"N/A "};
	struct setBedtime age_group_2_mon = {"N/A "};
	struct setBedtime age_group_2_tues = {"N/A "};
	struct setBedtime age_group_2_wed = {"N/A "};
	struct setBedtime age_group_2_thur = {"N/A "};
	struct setBedtime age_group_2_fri = {"N/A "};
	struct setBedtime age_group_2_sat = {"N/A "};
// group 3
	struct setBedtime age_group_3_sun = {"N/A "};
	struct setBedtime age_group_3_mon = {"N/A "};
	struct setBedtime age_group_3_tues = {"N/A "};
	struct setBedtime age_group_3_wed = {"N/A "};
	struct setBedtime age_group_3_thur = {"N/A "};
	struct setBedtime age_group_3_fri = {"N/A "};
	struct setBedtime age_group_3_sat = {"N/A "};



// variables for the logic
	j = 0;
	int day = 0;
	int age = 18;
	int age_group= 0;
	int bed_time = 24;
	int run_program = 1;

// bedtime menu
	while (run_program) {
	printf("\nbed time menu:\n");
	day_of_week(day);
	age_group_fun(age_group);
	printf("1. choose day of week.\n");
	printf("2. choose age.\n");
	printf("3. choose bed time.\n");
	printf("4. display chart.\n");
	printf("5. quit program.\n");
	printf("select: ");
	scanf("%d", &j);

// bedtime menu selection
	switch (j)
	{
	case 1:
// logic for picking a day
		printf("\n From numbers 1 - 7, with\n 1: being Sunday\n &\n 7: being Saturday\n");
		printf("select day: ");
		scanf("%d", &day);
		break;
	case 2:
// logic for picking an age
		printf("\n Choose an age from 0 - 17\n");
		printf("select age (0-17): ");
		scanf("%d", &age);
		while (age < 0 || age > 17) {
			printf("need to select age (0-17): ");
			scanf("%d", &age);
		}
		if (age <= 5 && age >= 0) {
			age_group = 1;
		} else if (age >= 6 && age <= 10) {
			age_group = 2;
		} else if (age >= 11 && age <= 17) {
			age_group = 3;
		}
		break;
	case 3:
// logic for picking a bedtime
		if ((day > 7 && day < 1) || (age < 0 && age > 17)) {
			printf("Age group and day of week not correctly selected!\n");
			break;
		}
		printf("\nUsing military time 0: 12:00am - 23: 11:00pm\n");
		printf("select (0-23) bed time: ");
		scanf("%d", &bed_time);
		while (bed_time > 23 || bed_time < 0) {
			printf("need to select (0-23) bed time: ");
			scanf("%d", &bed_time);
		}
// age group 1
		if ((age_group == 1 && day == 1)) {
			age_group_1_sun.bed_time = time_convert(bed_time);
		}
		else if ((age_group == 1 && day == 2)) {
			age_group_1_mon.bed_time = time_convert(bed_time);
		}
		else if ((age_group == 1 && day == 3)) {
			age_group_1_tues.bed_time = time_convert(bed_time);
		}
		else if ((age_group == 1 && day == 4)) {
			age_group_1_wed.bed_time = time_convert(bed_time);
		}
		else if ((age_group == 1 && day == 5)) {
			age_group_1_thur.bed_time = time_convert(bed_time);
		}
		else if ((age_group == 1 && day == 6)) {
			age_group_1_fri.bed_time = time_convert(bed_time);
		}
		else if ((age_group == 1 && day == 7)) {
			age_group_1_sat.bed_time = time_convert(bed_time);
		}
// age group 2
		else if ((age_group == 2 && day == 1)) {
			age_group_2_sun.bed_time = time_convert(bed_time);
		}
		else if ((age_group == 2 && day == 2)) {
			age_group_2_mon.bed_time = time_convert(bed_time);
		}
		else if ((age_group == 2 && day == 3)) {
			age_group_2_tues.bed_time = time_convert(bed_time);
		}
		else if ((age_group == 2 && day == 4)) {
			age_group_2_wed.bed_time = time_convert(bed_time);
		}
		else if ((age_group == 2 && day == 5)) {
			age_group_2_thur.bed_time = time_convert(bed_time);
		}
		else if ((age_group == 2 && day == 6)) {
			age_group_2_fri.bed_time = time_convert(bed_time);
		}
		else if ((age_group == 2 && day == 7)) {
			age_group_2_sat.bed_time = time_convert(bed_time);
		}
// age group 3
		else if ((age_group == 3 && day == 1)) {
			age_group_3_sun.bed_time = time_convert(bed_time);
		}
		else if ((age_group == 3 && day == 2)) {
			age_group_3_mon.bed_time = time_convert(bed_time);
		}
		else if ((age_group == 3 && day == 3)) {
			age_group_3_tues.bed_time = time_convert(bed_time);
		}
		else if ((age_group == 3 && day == 4)) {
			age_group_3_wed.bed_time = time_convert(bed_time);
		}
		else if ((age_group == 3 && day == 5)) {
			age_group_3_thur.bed_time = time_convert(bed_time);
		}
		else if ((age_group == 3 && day == 6)) {
			age_group_3_fri.bed_time = time_convert(bed_time);
		}
		else if ((age_group == 3 && day == 7)) {
			age_group_3_sat.bed_time = time_convert(bed_time);
		}
		break;
	case 4:
// shows the display for bedtimes
		printf("\n----------------------------------------------------------------------------------------------\n");
		printf(" |Age of Child | Sunday   | Monday   | Tuesday  | Wednesday| Thursday | Friday   | Saturday |\n");
		printf(" |   (0-5)     | %s     | %s     | %s     | %s     | %s     | %s     | %s     |\n", age_group_1_sun.bed_time, age_group_1_mon.bed_time, age_group_1_tues.bed_time, age_group_1_wed.bed_time, age_group_1_thur.bed_time, age_group_1_fri.bed_time, age_group_1_sat.bed_time);
		printf(" |   (6-11)    | %s     | %s     | %s     | %s     | %s     | %s     | %s     |\n", age_group_2_sun.bed_time, age_group_2_mon.bed_time, age_group_2_tues.bed_time, age_group_2_wed.bed_time, age_group_2_thur.bed_time, age_group_2_fri.bed_time, age_group_2_sat.bed_time);
		printf(" |   (11-17)   | %s     | %s     | %s     | %s     | %s     | %s     | %s     |\n", age_group_3_sun.bed_time, age_group_3_mon.bed_time, age_group_3_tues.bed_time, age_group_3_wed.bed_time, age_group_3_thur.bed_time, age_group_3_fri.bed_time, age_group_3_sat.bed_time);
		printf("----------------------------------------------------------------------------------------------\n");
		break;
	case 5:
// ends the program
		run_program = 0;
		break;
	default:
// bad selection of menu
		printf("\nSelect Correct Menu Option!\n");
	}
	}



	return EXIT_SUCCESS;
}
