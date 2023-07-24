#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - generates valid passwords for the program 101-crackme.
  * 
  * Return: always 0.
  */

int main(void) {
	char password[64];
	int i, target_sum, random_char;

	srand((unsigned)time(0));
	target_sum = 0xad4;
	i = 0;

	while (i < 63) {
		if (target_sum > 170 && i == 62) {
			random_char = target_sum - 170;
			password[i] = random_char;
			password[i + 1] = '\0';
			break;
		}

		random_char = rand() % 83 + 44;
		password[i] = random_char;

		target_sum -= random_char;
		i++;
	}

	printf("%s\n", password);

	return 0;
}
