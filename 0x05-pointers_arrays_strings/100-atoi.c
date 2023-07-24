/**
 * _atoi - converts a string to an integer
 * @str: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *str)
{
	int result = 0, negative = 0;

	while (*str)
	{
		if (*str == '-')
			negative = !negative;
		else if (*str >= '0' && *str <= '9')
		{
			result = result * 10 + (*str - '0') * (negative ? -1 : 1);
			if (str[1] < '0' || str[1] > '9')
				break;
		}
		str++;
	}
	return (result);
}
