#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	/* Find the length of the string */
	i = 0;
	while (s[i] != '\0')
{
	i++;
}

	/* Reverse the string using two pointers */
	i--;	/* Skip null terminator */
	j = 0;
	while (j < i)
{
	temp = s[j];
	s[j] = s[i];
	s[i] = temp;
	j++;
	i--;
}
}
