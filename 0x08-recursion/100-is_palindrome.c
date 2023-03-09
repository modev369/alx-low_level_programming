#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int i, j, len = 0;

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
			return (0);
	}

	return (1);
}
