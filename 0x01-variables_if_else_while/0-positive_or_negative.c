#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: This program will assign a random number to the variable n
 * each time it is executed and print whether the number stored in the variable
 * n is positive or negative.
 *
 * Return: (0) if successfull
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("0 is zero\n");

	return (0);
}
