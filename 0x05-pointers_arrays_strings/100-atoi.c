#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int sign = 1, i = 0, num = 0;

	while (s[i] != '\0')
	{
	if ((s[i] >= '0') && (s[i] <= '9'))
	{
		num = num * 10 + (s[i] - '0');
	}
	else if ((s[i] == '-') && (s[i + 1] != '\0') && ((s[i + 1] >= '0') && (s[i + 1] <= '9')))
	{
		sign = -1;
	}
	else if ((s[i] == '+') && (s[i + 1] != '\0') && ((s[i + 1] >= '0') && (s[i + 1] <= '9')))
	{
		sign = 1;
	}
        else if (num > 0)
	{
		break;
	}
	i++;
}

	return (num * sign);
}
