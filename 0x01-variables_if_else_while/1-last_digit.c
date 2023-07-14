#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: This program will assign a random number to the variable n
 * each time it is executed and gets the last digit of that number
 * It prints different sentences according to the last digit
 *
 * Return: (0) if successfull
 */

int main(void)
{
	int n;
	int last_d;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	last_d = n % 10;

	if (last_d > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_d);
	else if (last_d == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else
		printf("Last digit of %d is %d and is less than 6\n", n, last_d);

	printf("%d\n", n);

	return (0);
}
