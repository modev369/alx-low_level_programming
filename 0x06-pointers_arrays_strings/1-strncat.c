#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	// Move ptr to the end of dest
	while (*ptr != '\0')
	{
	ptr++;
	}
	// Append at most n bytes from src
	int i = 0;
	while (src[i] != '\0' && i < n)
	{
	*ptr = src[i];
	ptr++;
	i++;
	}
	// Add terminating null byte
	*ptr = '\0';
	return (dest);
}
