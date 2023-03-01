#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line
 *
 * @s: Pointer to the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
{
	i++;
}

	for (j = i - 1; j >= 0; j--)
{
	_putchar(s[j]);
}

	_putchar('\n');
}
