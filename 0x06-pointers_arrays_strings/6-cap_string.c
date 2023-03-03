#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to capitalize
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
	int i;

	/* Capitalize first character */
	if (str[0] >= 'a' && str[0] <= 'z')
	str[0] -= 32;

	/* Capitalize after separator characters */
	for (i = 1; str[i]; i++)
	{
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == ',' || str[i] == ';' || str[i] == '.' ||
	str[i] == '!' || str[i] == '?' || str[i] == '"' ||
	str[i] == '(' || str[i] == ')' || str[i] == '{' ||
	str[i] == '}')
	{
	if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
	str[i + 1] -= 32;
	}
	}

	return (str);
}
