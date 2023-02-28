#include <stdio.h>
#include <stdlib.h>



int fun(int i)
{
	i += 5;
	return i;
}

void display(int i)
{
	printf("The number is %d. \n", i);
	return;
}

int nully(void)
{
	return 15;
}

int main(void) {

	int i = 0;
	printf("Enter a number: ");
	scanf("%d", &i);

	int j = fun(i);
	display(i);
	display(j);
//	printf("The new number is %d\n", j );
	int k = nully();
	display(k);


	while (1) {}

	return EXIT_SUCCESS;
}
