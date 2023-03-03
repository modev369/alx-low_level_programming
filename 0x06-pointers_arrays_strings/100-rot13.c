#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: string to encode
 *
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
	char *p = s;

	int i, j;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; alphabet[j] != '\0'; j++)
	{
	if (s[i] == alphabet[j])
	{
	s[i] = rot13[j];
	break;
	}
	}
	}
	return (p);
}
