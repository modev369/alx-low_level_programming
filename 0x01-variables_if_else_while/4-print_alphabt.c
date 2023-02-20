#include <stdio.h>
/**
 * main - prints alphabet
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	do
{
	if (c == 'e' || c == 'q')
{
	c++;
	putchar(c);	/*print the current character*/
	c++;	/*move to the next character*/
}
	else
{
	putchar(c);     /*print the current character*/
	c++;    /*move to the next character*/
}
} while (c <= 'z')
	putchar('\n');	/*print a newline character at the end*/

	return (0);
}
