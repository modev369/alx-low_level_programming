#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char leet[] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
	char normal[] = {'0', '1', '2', '3', '4', '5', '6', '7'};
	
	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; leet[j] != '?'; j++)
	{
		if (str[i] == leet[j] || str[i] == leet[j] + 32)
		{
		str[i] = normal[j];
		break;
		}
	}
	}
	
	return (str);
}
