#include <stdio.h>
/**
 * main - prints alphabet
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
{
	putchar(c);	/*print the current character*/
	c++;	/*move to the next character*/
}
	putchar('\n');	/*print a newline character at the end*/

	return (0);
}
