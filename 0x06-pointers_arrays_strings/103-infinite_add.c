#include "main.h"

/**
 * rev_string - Reverse an array of characters in place.
 * @str: The character array to be reversed.
 */
void rev_string(char *str)
{
	int length = 0;
	int start = 0;
	int end;
	char temp;

	while (*(str + length) != '\0')
	{
		length++;
	}

	end = length - 1;
	while (start < end)
	{
		temp = *(str + start);
		*(str + start) = *(str + end);
		*(str + end) = temp;
		start++;
		end--;
	}
}

/**
 * infinite_add - Add two numbers represented as strings.
 * @num1: Text representation of the first number to add.
 * @num2: Text representation of the second number to add.
 * @result: Pointer to the buffer where the result will be stored.
 * @result_size: Size of the buffer for the result.
 *
 * Return: Pointer to the result buffer or NULL if the result overflows.
 */
char *infinite_add(char *num1, char *num2, char *result, int result_size)
{
	int overflow = 0, i = 0, j = 0, digits = 0, val1 = 0, val2 = 0, temp_sum = 0;

	while (*(num1 + i))
		i++;
	while (*(num2 + j))
		j++;
	i--;
	j--;

	if (j >= result_size || i >= result_size)
		return (0);

	while (j >= 0 || i >= 0 || overflow == 1)
	{
		val1 = (i >= 0) ? *(num1 + i) - '0' : 0;
		val2 = (j >= 0) ? *(num2 + j) - '0' : 0;
		temp_sum = val1 + val2 + overflow;
		overflow = (temp_sum >= 10) ? 1 : 0;

		if (digits >= (result_size - 1))
			return (0);

		*(result + digits) = (temp_sum % 10) + '0';
		digits++;
		i--;
		j--;
	}

	if (digits == result_size)
		return (0);

	*(result + digits) = '\0';
	rev_string(result);

	return (result);
}
