#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - generates valid passwords for the program 101-crackme.
  * 
  * Return: always 0.
  */
int main(void)
{
	char password[64];
	int index, target_sum, random_char, current_sum;
	time_t t;

	srand((unsigned) time(&t));
	current_sum = 0;
	target_sum = 0xad4;
	index = 0;

	while (index < 64)
	{
		if (target_sum - current_sum > 126)
			random_char = rand() % 83 + 44;
		else if (target_sum - current_sum < 126 && target_sum - current_sum > 44)
		{
			random_char = target_sum - current_sum;
			password[index] = random_char;
			password[index + 1] = '\0';
			break;
		}
		else
		{
			index = 0;
			current_sum = 0;
			continue;
		}
		current_sum = current_sum + random_char;
		password[index] = random_char;
		password[index + 1] = '\0';
		index++;
	}
	printf("%s", password);
	return (0);
}
