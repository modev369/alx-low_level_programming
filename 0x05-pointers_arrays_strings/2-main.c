#include "main.h"
#include <stdio.h>

int main(void)
{
	char *s = "Hello, Everything will be GOOD";
	int len;

	len = _strlen(s);
	printf("Length of string is: %d\n", len);

	return (0);
}
