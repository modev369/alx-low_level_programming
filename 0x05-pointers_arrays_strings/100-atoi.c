#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int non_sign_found = 0;

	while (*s != '\0')
{
        if (*s == '-')
		sign = -sign;
	else if (*s >= '0' && *s <= '9')
{
	result = result * 10 + (*s - '0');
	non_sign_found = 1;
}
	else if (non_sign_found)
		break;
		s++;
}

	return (sign * result);
}
